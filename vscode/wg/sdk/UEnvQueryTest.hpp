#pragma once
#include "UEnvQueryNode.hpp"
#include "EEnvTestPurpose.hpp"
#include "EEnvTestFilterOperator.hpp"
#include "EEnvTestScoreOperator.hpp"
#include "EEnvTestFilterType.hpp"
#include "FAIDataProviderBoolValue.hpp"
#include "FAIDataProviderFloatValue.hpp"
#include "EEnvTestScoreEquation.hpp"
#include "EEnvQueryTestClamping.hpp"
#include "EEQSNormalizationType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEnvQueryTest // Size: 0x1C8
	: public UEnvQueryNode // Size: 0x38
{
private:
	typedef UEnvQueryTest t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(639); // id32("Class AIModule.EnvQueryTest")
		return ptr;
	}
	int32_t TestOrder; /* Ofs: 0x38 Size: 0x4 - IntProperty AIModule.EnvQueryTest.TestOrder */
	TEnumAsByte<enum EEnvTestPurpose> TestPurpose; /* Ofs: 0x3C Size: 0x1 - ByteProperty AIModule.EnvQueryTest.TestPurpose */
	uint8_t UnknownData3D[0x3];
	FString TestComment; /* Ofs: 0x40 Size: 0x10 - StrProperty AIModule.EnvQueryTest.TestComment */
	TEnumAsByte<enum EEnvTestFilterOperator> MultipleContextFilterOp; /* Ofs: 0x50 Size: 0x1 - ByteProperty AIModule.EnvQueryTest.MultipleContextFilterOp */
	TEnumAsByte<enum EEnvTestScoreOperator> MultipleContextScoreOp; /* Ofs: 0x51 Size: 0x1 - ByteProperty AIModule.EnvQueryTest.MultipleContextScoreOp */
	TEnumAsByte<enum EEnvTestFilterType> FilterType; /* Ofs: 0x52 Size: 0x1 - ByteProperty AIModule.EnvQueryTest.FilterType */
	uint8_t UnknownData53[0x5];
	FAIDataProviderBoolValue BoolValue; /* Ofs: 0x58 Size: 0x30 - StructProperty AIModule.EnvQueryTest.BoolValue */
	FAIDataProviderFloatValue FloatValueMin; /* Ofs: 0x88 Size: 0x30 - StructProperty AIModule.EnvQueryTest.FloatValueMin */
	FAIDataProviderFloatValue FloatValueMax; /* Ofs: 0xB8 Size: 0x30 - StructProperty AIModule.EnvQueryTest.FloatValueMax */
	uint8_t UnknownDataE8[0x1];
	TEnumAsByte<enum EEnvTestScoreEquation> ScoringEquation; /* Ofs: 0xE9 Size: 0x1 - ByteProperty AIModule.EnvQueryTest.ScoringEquation */
	TEnumAsByte<enum EEnvQueryTestClamping> ClampMinType; /* Ofs: 0xEA Size: 0x1 - ByteProperty AIModule.EnvQueryTest.ClampMinType */
	TEnumAsByte<enum EEnvQueryTestClamping> ClampMaxType; /* Ofs: 0xEB Size: 0x1 - ByteProperty AIModule.EnvQueryTest.ClampMaxType */
	TEnumAsByte<enum EEQSNormalizationType> NormalizationType; /* Ofs: 0xEC Size: 0x1 - EnumProperty AIModule.EnvQueryTest.NormalizationType */
	uint8_t UnknownDataED[0x3];
	FAIDataProviderFloatValue ScoreClampMin; /* Ofs: 0xF0 Size: 0x30 - StructProperty AIModule.EnvQueryTest.ScoreClampMin */
	FAIDataProviderFloatValue ScoreClampMax; /* Ofs: 0x120 Size: 0x30 - StructProperty AIModule.EnvQueryTest.ScoreClampMax */
	FAIDataProviderFloatValue ScoringFactor; /* Ofs: 0x150 Size: 0x30 - StructProperty AIModule.EnvQueryTest.ScoringFactor */
	FAIDataProviderFloatValue ReferenceValue; /* Ofs: 0x180 Size: 0x30 - StructProperty AIModule.EnvQueryTest.ReferenceValue */
	uint8_t boolField1B0;
	uint8_t UnknownData1B1[0xF];
	uint8_t boolField1C0;
	uint8_t UnknownData1C1[0x7];


	inline bool SetTestOrder(t_structHelper inst, int32_t value) { inst.WriteOffset(0x38, value); }
	inline bool SetTestPurpose(t_structHelper inst, TEnumAsByte<enum EEnvTestPurpose> value) { inst.WriteOffset(0x3C, value); }
	inline bool SetTestComment(t_structHelper inst, FString value) { inst.WriteOffset(0x40, value); }
	inline bool SetMultipleContextFilterOp(t_structHelper inst, TEnumAsByte<enum EEnvTestFilterOperator> value) { inst.WriteOffset(0x50, value); }
	inline bool SetMultipleContextScoreOp(t_structHelper inst, TEnumAsByte<enum EEnvTestScoreOperator> value) { inst.WriteOffset(0x51, value); }
	inline bool SetFilterType(t_structHelper inst, TEnumAsByte<enum EEnvTestFilterType> value) { inst.WriteOffset(0x52, value); }
	inline bool SetBoolValue(t_structHelper inst, FAIDataProviderBoolValue value) { inst.WriteOffset(0x58, value); }
	inline bool SetFloatValueMin(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0x88, value); }
	inline bool SetFloatValueMax(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0xB8, value); }
	inline bool SetScoringEquation(t_structHelper inst, TEnumAsByte<enum EEnvTestScoreEquation> value) { inst.WriteOffset(0xE9, value); }
	inline bool SetClampMinType(t_structHelper inst, TEnumAsByte<enum EEnvQueryTestClamping> value) { inst.WriteOffset(0xEA, value); }
	inline bool SetClampMaxType(t_structHelper inst, TEnumAsByte<enum EEnvQueryTestClamping> value) { inst.WriteOffset(0xEB, value); }
	inline bool SetNormalizationType(t_structHelper inst, TEnumAsByte<enum EEQSNormalizationType> value) { inst.WriteOffset(0xEC, value); }
	inline bool SetScoreClampMin(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0xF0, value); }
	inline bool SetScoreClampMax(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0x120, value); }
	inline bool SetScoringFactor(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0x150, value); }
	inline bool SetReferenceValue(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0x180, value); }
	inline bool bDefineReferenceValue()
	{
		return boolField1B0& 0x1;
	}
	inline bool SetbDefineReferenceValue(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1B0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bWorkOnFloatValues()
	{
		return boolField1C0& 0x1;
	}
	inline bool SetbWorkOnFloatValues(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1C0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEnvQueryTest = sizeof(UEnvQueryTest); // 456
    static_assert(sizeof(UEnvQueryTest) == 0x1C8, "Size of UEnvQueryTest is not correct.");
	auto constexpr UEnvQueryTest_TestOrder_Offset = offsetof(UEnvQueryTest, TestOrder);
	static_assert(UEnvQueryTest_TestOrder_Offset == 0x38, "UEnvQueryTest::TestOrder offset is not 38");
	auto constexpr UEnvQueryTest_TestPurpose_Offset = offsetof(UEnvQueryTest, TestPurpose);
	static_assert(UEnvQueryTest_TestPurpose_Offset == 0x3c, "UEnvQueryTest::TestPurpose offset is not 3c");
	auto constexpr UEnvQueryTest_TestComment_Offset = offsetof(UEnvQueryTest, TestComment);
	static_assert(UEnvQueryTest_TestComment_Offset == 0x40, "UEnvQueryTest::TestComment offset is not 40");
	auto constexpr UEnvQueryTest_MultipleContextFilterOp_Offset = offsetof(UEnvQueryTest, MultipleContextFilterOp);
	static_assert(UEnvQueryTest_MultipleContextFilterOp_Offset == 0x50, "UEnvQueryTest::MultipleContextFilterOp offset is not 50");
	auto constexpr UEnvQueryTest_MultipleContextScoreOp_Offset = offsetof(UEnvQueryTest, MultipleContextScoreOp);
	static_assert(UEnvQueryTest_MultipleContextScoreOp_Offset == 0x51, "UEnvQueryTest::MultipleContextScoreOp offset is not 51");
	auto constexpr UEnvQueryTest_FilterType_Offset = offsetof(UEnvQueryTest, FilterType);
	static_assert(UEnvQueryTest_FilterType_Offset == 0x52, "UEnvQueryTest::FilterType offset is not 52");
	auto constexpr UEnvQueryTest_BoolValue_Offset = offsetof(UEnvQueryTest, BoolValue);
	static_assert(UEnvQueryTest_BoolValue_Offset == 0x58, "UEnvQueryTest::BoolValue offset is not 58");
	auto constexpr UEnvQueryTest_FloatValueMin_Offset = offsetof(UEnvQueryTest, FloatValueMin);
	static_assert(UEnvQueryTest_FloatValueMin_Offset == 0x88, "UEnvQueryTest::FloatValueMin offset is not 88");
	auto constexpr UEnvQueryTest_FloatValueMax_Offset = offsetof(UEnvQueryTest, FloatValueMax);
	static_assert(UEnvQueryTest_FloatValueMax_Offset == 0xb8, "UEnvQueryTest::FloatValueMax offset is not b8");
	auto constexpr UEnvQueryTest_ScoringEquation_Offset = offsetof(UEnvQueryTest, ScoringEquation);
	static_assert(UEnvQueryTest_ScoringEquation_Offset == 0xe9, "UEnvQueryTest::ScoringEquation offset is not e9");
	auto constexpr UEnvQueryTest_ClampMinType_Offset = offsetof(UEnvQueryTest, ClampMinType);
	static_assert(UEnvQueryTest_ClampMinType_Offset == 0xea, "UEnvQueryTest::ClampMinType offset is not ea");
	auto constexpr UEnvQueryTest_ClampMaxType_Offset = offsetof(UEnvQueryTest, ClampMaxType);
	static_assert(UEnvQueryTest_ClampMaxType_Offset == 0xeb, "UEnvQueryTest::ClampMaxType offset is not eb");
	auto constexpr UEnvQueryTest_NormalizationType_Offset = offsetof(UEnvQueryTest, NormalizationType);
	static_assert(UEnvQueryTest_NormalizationType_Offset == 0xec, "UEnvQueryTest::NormalizationType offset is not ec");
	auto constexpr UEnvQueryTest_ScoreClampMin_Offset = offsetof(UEnvQueryTest, ScoreClampMin);
	static_assert(UEnvQueryTest_ScoreClampMin_Offset == 0xf0, "UEnvQueryTest::ScoreClampMin offset is not f0");
	auto constexpr UEnvQueryTest_ScoreClampMax_Offset = offsetof(UEnvQueryTest, ScoreClampMax);
	static_assert(UEnvQueryTest_ScoreClampMax_Offset == 0x120, "UEnvQueryTest::ScoreClampMax offset is not 120");
	auto constexpr UEnvQueryTest_ScoringFactor_Offset = offsetof(UEnvQueryTest, ScoringFactor);
	static_assert(UEnvQueryTest_ScoringFactor_Offset == 0x150, "UEnvQueryTest::ScoringFactor offset is not 150");
	auto constexpr UEnvQueryTest_ReferenceValue_Offset = offsetof(UEnvQueryTest, ReferenceValue);
	static_assert(UEnvQueryTest_ReferenceValue_Offset == 0x180, "UEnvQueryTest::ReferenceValue offset is not 180");
	auto constexpr UEnvQueryTest_boolField1B0_Offset = offsetof(UEnvQueryTest, boolField1B0);
	static_assert(UEnvQueryTest_boolField1B0_Offset == 0x1b0, "UEnvQueryTest::boolField1B0 offset is not 1b0");
	auto constexpr UEnvQueryTest_boolField1C0_Offset = offsetof(UEnvQueryTest, boolField1C0);
	static_assert(UEnvQueryTest_boolField1C0_Offset == 0x1c0, "UEnvQueryTest::boolField1C0 offset is not 1c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
