#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FEnvQueryRequest // Size: 0x70
{
public:
    ExternalPtr<struct UEnvQuery> QueryTemplate; /* Ofs: 0x0 Size: 0x8 ObjectProperty AIModule.EnvQueryRequest.QueryTemplate */
    ExternalPtr<struct UObject> Owner; /* Ofs: 0x8 Size: 0x8 ObjectProperty AIModule.EnvQueryRequest.Owner */
    EncryptedExternalPtr<struct UWorld> World; /* Ofs: 0x10 Size: 0x10 EncryptedObjectProperty AIModule.EnvQueryRequest.World */
    uint8_t UnknownData20[0x50];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFEnvQueryRequest = sizeof(FEnvQueryRequest); // 112
    static_assert(sizeof(FEnvQueryRequest) == 0x70, "Size of FEnvQueryRequest is not correct.");
	auto constexpr FEnvQueryRequest_QueryTemplate_Offset = offsetof(FEnvQueryRequest, QueryTemplate);
	static_assert(FEnvQueryRequest_QueryTemplate_Offset == 0x0, "FEnvQueryRequest::QueryTemplate offset is not 0");
	auto constexpr FEnvQueryRequest_Owner_Offset = offsetof(FEnvQueryRequest, Owner);
	static_assert(FEnvQueryRequest_Owner_Offset == 0x8, "FEnvQueryRequest::Owner offset is not 8");
	auto constexpr FEnvQueryRequest_World_Offset = offsetof(FEnvQueryRequest, World);
	static_assert(FEnvQueryRequest_World_Offset == 0x10, "FEnvQueryRequest::World offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
