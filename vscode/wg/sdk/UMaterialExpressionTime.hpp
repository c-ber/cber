#pragma once
#include "UMaterialExpression.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionTime // Size: 0x70
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionTime t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1006); // id32("Class Engine.MaterialExpressionTime")
		return ptr;
	}
	uint8_t boolField68;
	uint8_t UnknownData69[0x3];
	float Period; /* Ofs: 0x6C Size: 0x4 - FloatProperty Engine.MaterialExpressionTime.Period */


	inline bool bIgnorePause()
	{
		return boolField68& 0x1;
	}
	inline bool SetbIgnorePause(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bOverride_Period()
	{
		return boolField68& 0x2;
	}
	inline bool SetbOverride_Period(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x68, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetPeriod(t_structHelper inst, float value) { inst.WriteOffset(0x6C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionTime = sizeof(UMaterialExpressionTime); // 112
    static_assert(sizeof(UMaterialExpressionTime) == 0x70, "Size of UMaterialExpressionTime is not correct.");
	auto constexpr UMaterialExpressionTime_boolField68_Offset = offsetof(UMaterialExpressionTime, boolField68);
	static_assert(UMaterialExpressionTime_boolField68_Offset == 0x68, "UMaterialExpressionTime::boolField68 offset is not 68");
	auto constexpr UMaterialExpressionTime_Period_Offset = offsetof(UMaterialExpressionTime, Period);
	static_assert(UMaterialExpressionTime_Period_Offset == 0x6c, "UMaterialExpressionTime::Period offset is not 6c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
