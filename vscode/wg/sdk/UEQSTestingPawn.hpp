#pragma once
#include "UCharacter.hpp"
#include "EEnvQueryHightlightMode.hpp"
#include "EEnvQueryRunMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UEQSTestingPawn // Size: 0x8E0
	: public UCharacter // Size: 0x870
{
private:
	typedef UEQSTestingPawn t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(652); // id32("Class AIModule.EQSTestingPawn")
		return ptr;
	}
	uint8_t UnknownData870[0x8];
	ExternalPtr<struct UEnvQuery> QueryTemplate; /* Ofs: 0x878 Size: 0x8 - ObjectProperty AIModule.EQSTestingPawn.QueryTemplate */
	TArray<struct FEnvNamedValue> QueryParams; /* Ofs: 0x880 Size: 0x10 - ArrayProperty AIModule.EQSTestingPawn.QueryParams */
	TArray<struct FAIDynamicParam> QueryConfig; /* Ofs: 0x890 Size: 0x10 - ArrayProperty AIModule.EQSTestingPawn.QueryConfig */
	float TimeLimitPerStep; /* Ofs: 0x8A0 Size: 0x4 - FloatProperty AIModule.EQSTestingPawn.TimeLimitPerStep */
	int32_t StepToDebugDraw; /* Ofs: 0x8A4 Size: 0x4 - IntProperty AIModule.EQSTestingPawn.StepToDebugDraw */
	TEnumAsByte<enum EEnvQueryHightlightMode> HighlightMode; /* Ofs: 0x8A8 Size: 0x1 - EnumProperty AIModule.EQSTestingPawn.HighlightMode */
	uint8_t UnknownData8A9[0x3];
	uint8_t boolField8AC;
	uint8_t UnknownData8AD[0x3];
	TEnumAsByte<enum EEnvQueryRunMode> QueryingMode; /* Ofs: 0x8B0 Size: 0x1 - ByteProperty AIModule.EQSTestingPawn.QueryingMode */
	uint8_t UnknownData8B1[0x2F];


	inline bool SetQueryTemplate(t_structHelper inst, ExternalPtr<struct UEnvQuery> value) { inst.WriteOffset(0x878, value); }
	inline bool SetQueryParams(t_structHelper inst, TArray<struct FEnvNamedValue> value) { inst.WriteOffset(0x880, value); }
	inline bool SetQueryConfig(t_structHelper inst, TArray<struct FAIDynamicParam> value) { inst.WriteOffset(0x890, value); }
	inline bool SetTimeLimitPerStep(t_structHelper inst, float value) { inst.WriteOffset(0x8A0, value); }
	inline bool SetStepToDebugDraw(t_structHelper inst, int32_t value) { inst.WriteOffset(0x8A4, value); }
	inline bool SetHighlightMode(t_structHelper inst, TEnumAsByte<enum EEnvQueryHightlightMode> value) { inst.WriteOffset(0x8A8, value); }
	inline bool bDrawLabels()
	{
		return boolField8AC& 0x1;
	}
	inline bool SetbDrawLabels(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8AC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDrawFailedItems()
	{
		return boolField8AC& 0x2;
	}
	inline bool SetbDrawFailedItems(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8AC, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bReRunQueryOnlyOnFinishedMove()
	{
		return boolField8AC& 0x4;
	}
	inline bool SetbReRunQueryOnlyOnFinishedMove(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8AC, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bShouldBeVisibleInGame()
	{
		return boolField8AC& 0x8;
	}
	inline bool SetbShouldBeVisibleInGame(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8AC, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bTickDuringGame()
	{
		return boolField8AC& 0x10;
	}
	inline bool SetbTickDuringGame(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x8AC, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool SetQueryingMode(t_structHelper inst, TEnumAsByte<enum EEnvQueryRunMode> value) { inst.WriteOffset(0x8B0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUEQSTestingPawn = sizeof(UEQSTestingPawn); // 2272
    static_assert(sizeof(UEQSTestingPawn) == 0x8E0, "Size of UEQSTestingPawn is not correct.");
	auto constexpr UEQSTestingPawn_QueryTemplate_Offset = offsetof(UEQSTestingPawn, QueryTemplate);
	static_assert(UEQSTestingPawn_QueryTemplate_Offset == 0x878, "UEQSTestingPawn::QueryTemplate offset is not 878");
	auto constexpr UEQSTestingPawn_QueryParams_Offset = offsetof(UEQSTestingPawn, QueryParams);
	static_assert(UEQSTestingPawn_QueryParams_Offset == 0x880, "UEQSTestingPawn::QueryParams offset is not 880");
	auto constexpr UEQSTestingPawn_QueryConfig_Offset = offsetof(UEQSTestingPawn, QueryConfig);
	static_assert(UEQSTestingPawn_QueryConfig_Offset == 0x890, "UEQSTestingPawn::QueryConfig offset is not 890");
	auto constexpr UEQSTestingPawn_TimeLimitPerStep_Offset = offsetof(UEQSTestingPawn, TimeLimitPerStep);
	static_assert(UEQSTestingPawn_TimeLimitPerStep_Offset == 0x8a0, "UEQSTestingPawn::TimeLimitPerStep offset is not 8a0");
	auto constexpr UEQSTestingPawn_StepToDebugDraw_Offset = offsetof(UEQSTestingPawn, StepToDebugDraw);
	static_assert(UEQSTestingPawn_StepToDebugDraw_Offset == 0x8a4, "UEQSTestingPawn::StepToDebugDraw offset is not 8a4");
	auto constexpr UEQSTestingPawn_HighlightMode_Offset = offsetof(UEQSTestingPawn, HighlightMode);
	static_assert(UEQSTestingPawn_HighlightMode_Offset == 0x8a8, "UEQSTestingPawn::HighlightMode offset is not 8a8");
	auto constexpr UEQSTestingPawn_boolField8AC_Offset = offsetof(UEQSTestingPawn, boolField8AC);
	static_assert(UEQSTestingPawn_boolField8AC_Offset == 0x8ac, "UEQSTestingPawn::boolField8AC offset is not 8ac");
	auto constexpr UEQSTestingPawn_QueryingMode_Offset = offsetof(UEQSTestingPawn, QueryingMode);
	static_assert(UEQSTestingPawn_QueryingMode_Offset == 0x8b0, "UEQSTestingPawn::QueryingMode offset is not 8b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
