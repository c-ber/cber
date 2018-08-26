#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWuGameOverrideParameterRequest // Size: 0x20
{
public:
    FString MatchId; /* Ofs: 0x0 Size: 0x10 StrProperty TslGame.WuGameOverrideParameterRequest.MatchId */
    TArray<struct FWuStringStringPair> StringParameters; /* Ofs: 0x10 Size: 0x10 ArrayProperty TslGame.WuGameOverrideParameterRequest.StringParameters */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWuGameOverrideParameterRequest = sizeof(FWuGameOverrideParameterRequest); // 32
    static_assert(sizeof(FWuGameOverrideParameterRequest) == 0x20, "Size of FWuGameOverrideParameterRequest is not correct.");
	auto constexpr FWuGameOverrideParameterRequest_MatchId_Offset = offsetof(FWuGameOverrideParameterRequest, MatchId);
	static_assert(FWuGameOverrideParameterRequest_MatchId_Offset == 0x0, "FWuGameOverrideParameterRequest::MatchId offset is not 0");
	auto constexpr FWuGameOverrideParameterRequest_StringParameters_Offset = offsetof(FWuGameOverrideParameterRequest, StringParameters);
	static_assert(FWuGameOverrideParameterRequest_StringParameters_Offset == 0x10, "FWuGameOverrideParameterRequest::StringParameters offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
