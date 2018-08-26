#pragma once
#include "UCurveBase.hpp"
#include "FRichCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCurveFloat // Size: 0xB0
	: public UCurveBase // Size: 0x38
{
private:
	typedef UCurveFloat t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1732); // id32("Class Engine.CurveFloat")
		return ptr;
	}
	FRichCurve FloatCurve; /* Ofs: 0x38 Size: 0x70 - StructProperty Engine.CurveFloat.FloatCurve */
	uint8_t boolFieldA8;
	uint8_t UnknownDataA9[0x7];


	inline bool SetFloatCurve(t_structHelper inst, FRichCurve value) { inst.WriteOffset(0x38, value); }
	inline bool bIsEventCurve()
	{
		return boolFieldA8& 0x1;
	}
	inline bool SetbIsEventCurve(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCurveFloat = sizeof(UCurveFloat); // 176
    static_assert(sizeof(UCurveFloat) == 0xB0, "Size of UCurveFloat is not correct.");
	auto constexpr UCurveFloat_FloatCurve_Offset = offsetof(UCurveFloat, FloatCurve);
	static_assert(UCurveFloat_FloatCurve_Offset == 0x38, "UCurveFloat::FloatCurve offset is not 38");
	auto constexpr UCurveFloat_boolFieldA8_Offset = offsetof(UCurveFloat, boolFieldA8);
	static_assert(UCurveFloat_boolFieldA8_Offset == 0xa8, "UCurveFloat::boolFieldA8 offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
