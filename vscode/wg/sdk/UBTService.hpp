#pragma once
#include "UBTAuxiliaryNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTService // Size: 0x78
	: public UBTAuxiliaryNode // Size: 0x68
{
private:
	typedef UBTService t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(588); // id32("Class AIModule.BTService")
		return ptr;
	}
	float Interval; /* Ofs: 0x68 Size: 0x4 - FloatProperty AIModule.BTService.Interval */
	float RandomDeviation; /* Ofs: 0x6C Size: 0x4 - FloatProperty AIModule.BTService.RandomDeviation */
	uint8_t boolField70;
	uint8_t UnknownData71[0x7];


	inline bool SetInterval(t_structHelper inst, float value) { inst.WriteOffset(0x68, value); }
	inline bool SetRandomDeviation(t_structHelper inst, float value) { inst.WriteOffset(0x6C, value); }
	inline bool bCallTickOnSearchStart()
	{
		return boolField70& 0x1;
	}
	inline bool SetbCallTickOnSearchStart(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bRestartTimerOnEachActivation()
	{
		return boolField70& 0x2;
	}
	inline bool SetbRestartTimerOnEachActivation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTService = sizeof(UBTService); // 120
    static_assert(sizeof(UBTService) == 0x78, "Size of UBTService is not correct.");
	auto constexpr UBTService_Interval_Offset = offsetof(UBTService, Interval);
	static_assert(UBTService_Interval_Offset == 0x68, "UBTService::Interval offset is not 68");
	auto constexpr UBTService_RandomDeviation_Offset = offsetof(UBTService, RandomDeviation);
	static_assert(UBTService_RandomDeviation_Offset == 0x6c, "UBTService::RandomDeviation offset is not 6c");
	auto constexpr UBTService_boolField70_Offset = offsetof(UBTService, boolField70);
	static_assert(UBTService_boolField70_Offset == 0x70, "UBTService::boolField70 offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
