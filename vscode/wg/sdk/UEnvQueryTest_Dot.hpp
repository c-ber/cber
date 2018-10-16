#pragma once
#include "UEnvQueryTest.hpp"
#include "FEnvDirection.hpp"
#include "EEnvTestDot.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryTest_Dot // Size: 0x210
	: public UEnvQueryTest // Size: 0x1C8
{
private:
	typedef UEnvQueryTest_Dot t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(641); // id32("Class AIModule.EnvQueryTest_Dot")
		return ptr;
	}
	FEnvDirection LineA; /* Ofs: 0x1C8 Size: 0x20 - StructProperty AIModule.EnvQueryTest_Dot.LineA */
	FEnvDirection LineB; /* Ofs: 0x1E8 Size: 0x20 - StructProperty AIModule.EnvQueryTest_Dot.LineB */
	TEnumAsByte<enum EEnvTestDot> TestMode; /* Ofs: 0x208 Size: 0x1 - EnumProperty AIModule.EnvQueryTest_Dot.TestMode */
	uint8_t boolField209;
	uint8_t UnknownData20A[0x6];


	inline bool SetLineA(t_structHelper inst, FEnvDirection value) { inst.WriteOffset(0x1C8, value); }
	inline bool SetLineB(t_structHelper inst, FEnvDirection value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetTestMode(t_structHelper inst, TEnumAsByte<enum EEnvTestDot> value) { inst.WriteOffset(0x208, value); }
	inline bool bAbsoluteValue()
	{
		return boolField209& 0x1;
	}
	inline bool SetbAbsoluteValue(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x209, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryTest_Dot = sizeof(UEnvQueryTest_Dot); // 528
    static_assert(sizeof(UEnvQueryTest_Dot) == 0x210, "Size of UEnvQueryTest_Dot is not correct.");
	auto constexpr UEnvQueryTest_Dot_LineA_Offset = offsetof(UEnvQueryTest_Dot, LineA);
	static_assert(UEnvQueryTest_Dot_LineA_Offset == 0x1c8, "UEnvQueryTest_Dot::LineA offset is not 1c8");
	auto constexpr UEnvQueryTest_Dot_LineB_Offset = offsetof(UEnvQueryTest_Dot, LineB);
	static_assert(UEnvQueryTest_Dot_LineB_Offset == 0x1e8, "UEnvQueryTest_Dot::LineB offset is not 1e8");
	auto constexpr UEnvQueryTest_Dot_TestMode_Offset = offsetof(UEnvQueryTest_Dot, TestMode);
	static_assert(UEnvQueryTest_Dot_TestMode_Offset == 0x208, "UEnvQueryTest_Dot::TestMode offset is not 208");
	auto constexpr UEnvQueryTest_Dot_boolField209_Offset = offsetof(UEnvQueryTest_Dot, boolField209);
	static_assert(UEnvQueryTest_Dot_boolField209_Offset == 0x209, "UEnvQueryTest_Dot::boolField209 offset is not 209");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
