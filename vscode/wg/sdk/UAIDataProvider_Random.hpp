#pragma once
#include "UAIDataProvider_QueryParams.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAIDataProvider_Random // Size: 0x58
	: public UAIDataProvider_QueryParams // Size: 0x48
{
private:
	typedef UAIDataProvider_Random t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1672); // id32("Class AIModule.AIDataProvider_Random")
		return ptr;
	}
	float Min; /* Ofs: 0x48 Size: 0x4 - FloatProperty AIModule.AIDataProvider_Random.Min */
	float Max; /* Ofs: 0x4C Size: 0x4 - FloatProperty AIModule.AIDataProvider_Random.Max */
	uint8_t boolField50;
	uint8_t UnknownData51[0x7];


	inline bool SetMin(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetMax(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
	inline bool bInteger()
	{
		return boolField50& 0x1;
	}
	inline bool SetbInteger(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x50, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAIDataProvider_Random = sizeof(UAIDataProvider_Random); // 88
    static_assert(sizeof(UAIDataProvider_Random) == 0x58, "Size of UAIDataProvider_Random is not correct.");
	auto constexpr UAIDataProvider_Random_Min_Offset = offsetof(UAIDataProvider_Random, Min);
	static_assert(UAIDataProvider_Random_Min_Offset == 0x48, "UAIDataProvider_Random::Min offset is not 48");
	auto constexpr UAIDataProvider_Random_Max_Offset = offsetof(UAIDataProvider_Random, Max);
	static_assert(UAIDataProvider_Random_Max_Offset == 0x4c, "UAIDataProvider_Random::Max offset is not 4c");
	auto constexpr UAIDataProvider_Random_boolField50_Offset = offsetof(UAIDataProvider_Random, boolField50);
	static_assert(UAIDataProvider_Random_boolField50_Offset == 0x50, "UAIDataProvider_Random::boolField50 offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
