#pragma once
#include "UAIDataProvider.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAIDataProvider_QueryParams // Size: 0x48
	: public UAIDataProvider // Size: 0x30
{
private:
	typedef UAIDataProvider_QueryParams t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1671); // id32("Class AIModule.AIDataProvider_QueryParams")
		return ptr;
	}
	FName ParamName; /* Ofs: 0x30 Size: 0x8 - NameProperty AIModule.AIDataProvider_QueryParams.ParamName */
	float FloatValue; /* Ofs: 0x38 Size: 0x4 - FloatProperty AIModule.AIDataProvider_QueryParams.FloatValue */
	int32_t IntValue; /* Ofs: 0x3C Size: 0x4 - IntProperty AIModule.AIDataProvider_QueryParams.IntValue */
	uint8_t boolField40;
	uint8_t UnknownData41[0x7];


	inline bool SetParamName(t_structHelper inst, FName value) { inst.WriteOffset(0x30, value); }
	inline bool SetFloatValue(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
	inline bool SetIntValue(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3C, value); }
	inline bool BoolValue()
	{
		return boolField40& 0x1;
	}
	inline bool SetBoolValue(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x40, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAIDataProvider_QueryParams = sizeof(UAIDataProvider_QueryParams); // 72
    static_assert(sizeof(UAIDataProvider_QueryParams) == 0x48, "Size of UAIDataProvider_QueryParams is not correct.");
	auto constexpr UAIDataProvider_QueryParams_ParamName_Offset = offsetof(UAIDataProvider_QueryParams, ParamName);
	static_assert(UAIDataProvider_QueryParams_ParamName_Offset == 0x30, "UAIDataProvider_QueryParams::ParamName offset is not 30");
	auto constexpr UAIDataProvider_QueryParams_FloatValue_Offset = offsetof(UAIDataProvider_QueryParams, FloatValue);
	static_assert(UAIDataProvider_QueryParams_FloatValue_Offset == 0x38, "UAIDataProvider_QueryParams::FloatValue offset is not 38");
	auto constexpr UAIDataProvider_QueryParams_IntValue_Offset = offsetof(UAIDataProvider_QueryParams, IntValue);
	static_assert(UAIDataProvider_QueryParams_IntValue_Offset == 0x3c, "UAIDataProvider_QueryParams::IntValue offset is not 3c");
	auto constexpr UAIDataProvider_QueryParams_boolField40_Offset = offsetof(UAIDataProvider_QueryParams, boolField40);
	static_assert(UAIDataProvider_QueryParams_boolField40_Offset == 0x40, "UAIDataProvider_QueryParams::boolField40 offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
