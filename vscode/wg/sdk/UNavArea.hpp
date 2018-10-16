#pragma once
#include "FColor.hpp"
#include "FNavAgentSelector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavArea // Size: 0x48
	: public UObject // Size: 0x30
{
private:
	typedef UNavArea t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1027); // id32("Class Engine.NavArea")
		return ptr;
	}
	float DefaultCost; /* Ofs: 0x30 Size: 0x4 - FloatProperty Engine.NavArea.DefaultCost */
	float FixedAreaEnteringCost; /* Ofs: 0x34 Size: 0x4 - FloatProperty Engine.NavArea.FixedAreaEnteringCost */
	FColor DrawColor; /* Ofs: 0x38 Size: 0x4 - StructProperty Engine.NavArea.DrawColor */
	FNavAgentSelector SupportedAgents; /* Ofs: 0x3C Size: 0x4 - StructProperty Engine.NavArea.SupportedAgents */
	uint8_t boolField40;
	uint8_t boolField41;
	uint8_t UnknownData42[0x6];


	inline bool SetDefaultCost(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
	inline bool SetFixedAreaEnteringCost(t_structHelper inst, float value) { inst.WriteOffset(0x34, value); }
	inline bool SetDrawColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x38, value); }
	inline bool SetSupportedAgents(t_structHelper inst, FNavAgentSelector value) { inst.WriteOffset(0x3C, value); }
	inline bool bSupportsAgent0()
	{
		return boolField40& 0x1;
	}
	inline bool SetbSupportsAgent0(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSupportsAgent1()
	{
		return boolField40& 0x2;
	}
	inline bool SetbSupportsAgent1(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bSupportsAgent2()
	{
		return boolField40& 0x4;
	}
	inline bool SetbSupportsAgent2(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bSupportsAgent3()
	{
		return boolField40& 0x8;
	}
	inline bool SetbSupportsAgent3(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bSupportsAgent4()
	{
		return boolField40& 0x10;
	}
	inline bool SetbSupportsAgent4(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bSupportsAgent5()
	{
		return boolField40& 0x20;
	}
	inline bool SetbSupportsAgent5(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bSupportsAgent6()
	{
		return boolField40& 0x40;
	}
	inline bool SetbSupportsAgent6(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bSupportsAgent7()
	{
		return boolField40& 0x80;
	}
	inline bool SetbSupportsAgent7(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bSupportsAgent8()
	{
		return boolField41& 0x1;
	}
	inline bool SetbSupportsAgent8(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSupportsAgent9()
	{
		return boolField41& 0x2;
	}
	inline bool SetbSupportsAgent9(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bSupportsAgent10()
	{
		return boolField41& 0x4;
	}
	inline bool SetbSupportsAgent10(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bSupportsAgent11()
	{
		return boolField41& 0x8;
	}
	inline bool SetbSupportsAgent11(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bSupportsAgent12()
	{
		return boolField41& 0x10;
	}
	inline bool SetbSupportsAgent12(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bSupportsAgent13()
	{
		return boolField41& 0x20;
	}
	inline bool SetbSupportsAgent13(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bSupportsAgent14()
	{
		return boolField41& 0x40;
	}
	inline bool SetbSupportsAgent14(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bSupportsAgent15()
	{
		return boolField41& 0x80;
	}
	inline bool SetbSupportsAgent15(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavArea = sizeof(UNavArea); // 72
    static_assert(sizeof(UNavArea) == 0x48, "Size of UNavArea is not correct.");
	auto constexpr UNavArea_DefaultCost_Offset = offsetof(UNavArea, DefaultCost);
	static_assert(UNavArea_DefaultCost_Offset == 0x30, "UNavArea::DefaultCost offset is not 30");
	auto constexpr UNavArea_FixedAreaEnteringCost_Offset = offsetof(UNavArea, FixedAreaEnteringCost);
	static_assert(UNavArea_FixedAreaEnteringCost_Offset == 0x34, "UNavArea::FixedAreaEnteringCost offset is not 34");
	auto constexpr UNavArea_DrawColor_Offset = offsetof(UNavArea, DrawColor);
	static_assert(UNavArea_DrawColor_Offset == 0x38, "UNavArea::DrawColor offset is not 38");
	auto constexpr UNavArea_SupportedAgents_Offset = offsetof(UNavArea, SupportedAgents);
	static_assert(UNavArea_SupportedAgents_Offset == 0x3c, "UNavArea::SupportedAgents offset is not 3c");
	auto constexpr UNavArea_boolField40_Offset = offsetof(UNavArea, boolField40);
	static_assert(UNavArea_boolField40_Offset == 0x40, "UNavArea::boolField40 offset is not 40");
	auto constexpr UNavArea_boolField41_Offset = offsetof(UNavArea, boolField41);
	static_assert(UNavArea_boolField41_Offset == 0x41, "UNavArea::boolField41 offset is not 41");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
