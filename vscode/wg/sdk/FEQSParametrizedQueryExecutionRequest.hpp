#pragma once
#include "FBlackboardKeySelector.hpp"
#include "EEnvQueryRunMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEQSParametrizedQueryExecutionRequest // Size: 0x48
{
public:
    ExternalPtr<struct UEnvQuery> QueryTemplate; /* Ofs: 0x0 Size: 0x8 ObjectProperty AIModule.EQSParametrizedQueryExecutionRequest.QueryTemplate */
    TArray<struct FAIDynamicParam> QueryConfig; /* Ofs: 0x8 Size: 0x10 ArrayProperty AIModule.EQSParametrizedQueryExecutionRequest.QueryConfig */
    FBlackboardKeySelector EQSQueryBlackboardKey; /* Ofs: 0x18 Size: 0x28 StructProperty AIModule.EQSParametrizedQueryExecutionRequest.EQSQueryBlackboardKey */
    TEnumAsByte<enum EEnvQueryRunMode> RunMode; /* Ofs: 0x40 Size: 0x1 ByteProperty AIModule.EQSParametrizedQueryExecutionRequest.RunMode */
    uint8_t UnknownData41[0x3];
    bool bUseBBKeyForQueryTemplate; /* Ofs: 0x44 Size: 0x1 BitMask: 01 BoolProperty AIModule.EQSParametrizedQueryExecutionRequest.bUseBBKeyForQueryTemplate */
    uint8_t UnknownData45[0x3];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEQSParametrizedQueryExecutionRequest = sizeof(FEQSParametrizedQueryExecutionRequest); // 72
    static_assert(sizeof(FEQSParametrizedQueryExecutionRequest) == 0x48, "Size of FEQSParametrizedQueryExecutionRequest is not correct.");
	auto constexpr FEQSParametrizedQueryExecutionRequest_QueryTemplate_Offset = offsetof(FEQSParametrizedQueryExecutionRequest, QueryTemplate);
	static_assert(FEQSParametrizedQueryExecutionRequest_QueryTemplate_Offset == 0x0, "FEQSParametrizedQueryExecutionRequest::QueryTemplate offset is not 0");
	auto constexpr FEQSParametrizedQueryExecutionRequest_QueryConfig_Offset = offsetof(FEQSParametrizedQueryExecutionRequest, QueryConfig);
	static_assert(FEQSParametrizedQueryExecutionRequest_QueryConfig_Offset == 0x8, "FEQSParametrizedQueryExecutionRequest::QueryConfig offset is not 8");
	auto constexpr FEQSParametrizedQueryExecutionRequest_EQSQueryBlackboardKey_Offset = offsetof(FEQSParametrizedQueryExecutionRequest, EQSQueryBlackboardKey);
	static_assert(FEQSParametrizedQueryExecutionRequest_EQSQueryBlackboardKey_Offset == 0x18, "FEQSParametrizedQueryExecutionRequest::EQSQueryBlackboardKey offset is not 18");
	auto constexpr FEQSParametrizedQueryExecutionRequest_RunMode_Offset = offsetof(FEQSParametrizedQueryExecutionRequest, RunMode);
	static_assert(FEQSParametrizedQueryExecutionRequest_RunMode_Offset == 0x40, "FEQSParametrizedQueryExecutionRequest::RunMode offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
