#pragma once
#include "UBTTask_BlackboardBase.hpp"
#include "EEnvQueryRunMode.hpp"
#include "FBlackboardKeySelector.hpp"
#include "FEQSParametrizedQueryExecutionRequest.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTTask_RunEQSQuery // Size: 0x190
	: public UBTTask_BlackboardBase // Size: 0xA0
{
private:
	typedef UBTTask_RunEQSQuery t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(599); // id32("Class AIModule.BTTask_RunEQSQuery")
		return ptr;
	}
	ExternalPtr<struct UEnvQuery> QueryTemplate; /* Ofs: 0xA0 Size: 0x8 - ObjectProperty AIModule.BTTask_RunEQSQuery.QueryTemplate */
	TArray<struct FEnvNamedValue> QueryParams; /* Ofs: 0xA8 Size: 0x10 - ArrayProperty AIModule.BTTask_RunEQSQuery.QueryParams */
	TArray<struct FAIDynamicParam> QueryConfig; /* Ofs: 0xB8 Size: 0x10 - ArrayProperty AIModule.BTTask_RunEQSQuery.QueryConfig */
	TEnumAsByte<enum EEnvQueryRunMode> RunMode; /* Ofs: 0xC8 Size: 0x1 - ByteProperty AIModule.BTTask_RunEQSQuery.RunMode */
	uint8_t UnknownDataC9[0x7];
	FBlackboardKeySelector EQSQueryBlackboardKey; /* Ofs: 0xD0 Size: 0x28 - StructProperty AIModule.BTTask_RunEQSQuery.EQSQueryBlackboardKey */
	uint8_t boolFieldF8;
	uint8_t UnknownDataF9[0x7];
	FEQSParametrizedQueryExecutionRequest EQSRequest; /* Ofs: 0x100 Size: 0x48 - StructProperty AIModule.BTTask_RunEQSQuery.EQSRequest */
	uint8_t UnknownData148[0x48];


	inline bool SetQueryTemplate(t_structHelper inst, ExternalPtr<struct UEnvQuery> value) { inst.WriteOffset(0xA0, value); }
	inline bool SetQueryParams(t_structHelper inst, TArray<struct FEnvNamedValue> value) { inst.WriteOffset(0xA8, value); }
	inline bool SetQueryConfig(t_structHelper inst, TArray<struct FAIDynamicParam> value) { inst.WriteOffset(0xB8, value); }
	inline bool SetRunMode(t_structHelper inst, TEnumAsByte<enum EEnvQueryRunMode> value) { inst.WriteOffset(0xC8, value); }
	inline bool SetEQSQueryBlackboardKey(t_structHelper inst, FBlackboardKeySelector value) { inst.WriteOffset(0xD0, value); }
	inline bool bUseBBKey()
	{
		return boolFieldF8& 0x1;
	}
	inline bool SetbUseBBKey(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xF8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetEQSRequest(t_structHelper inst, FEQSParametrizedQueryExecutionRequest value) { inst.WriteOffset(0x100, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTTask_RunEQSQuery = sizeof(UBTTask_RunEQSQuery); // 400
    static_assert(sizeof(UBTTask_RunEQSQuery) == 0x190, "Size of UBTTask_RunEQSQuery is not correct.");
	auto constexpr UBTTask_RunEQSQuery_QueryTemplate_Offset = offsetof(UBTTask_RunEQSQuery, QueryTemplate);
	static_assert(UBTTask_RunEQSQuery_QueryTemplate_Offset == 0xa0, "UBTTask_RunEQSQuery::QueryTemplate offset is not a0");
	auto constexpr UBTTask_RunEQSQuery_QueryParams_Offset = offsetof(UBTTask_RunEQSQuery, QueryParams);
	static_assert(UBTTask_RunEQSQuery_QueryParams_Offset == 0xa8, "UBTTask_RunEQSQuery::QueryParams offset is not a8");
	auto constexpr UBTTask_RunEQSQuery_QueryConfig_Offset = offsetof(UBTTask_RunEQSQuery, QueryConfig);
	static_assert(UBTTask_RunEQSQuery_QueryConfig_Offset == 0xb8, "UBTTask_RunEQSQuery::QueryConfig offset is not b8");
	auto constexpr UBTTask_RunEQSQuery_RunMode_Offset = offsetof(UBTTask_RunEQSQuery, RunMode);
	static_assert(UBTTask_RunEQSQuery_RunMode_Offset == 0xc8, "UBTTask_RunEQSQuery::RunMode offset is not c8");
	auto constexpr UBTTask_RunEQSQuery_EQSQueryBlackboardKey_Offset = offsetof(UBTTask_RunEQSQuery, EQSQueryBlackboardKey);
	static_assert(UBTTask_RunEQSQuery_EQSQueryBlackboardKey_Offset == 0xd0, "UBTTask_RunEQSQuery::EQSQueryBlackboardKey offset is not d0");
	auto constexpr UBTTask_RunEQSQuery_boolFieldF8_Offset = offsetof(UBTTask_RunEQSQuery, boolFieldF8);
	static_assert(UBTTask_RunEQSQuery_boolFieldF8_Offset == 0xf8, "UBTTask_RunEQSQuery::boolFieldF8 offset is not f8");
	auto constexpr UBTTask_RunEQSQuery_EQSRequest_Offset = offsetof(UBTTask_RunEQSQuery, EQSRequest);
	static_assert(UBTTask_RunEQSQuery_EQSRequest_Offset == 0x100, "UBTTask_RunEQSQuery::EQSRequest offset is not 100");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
