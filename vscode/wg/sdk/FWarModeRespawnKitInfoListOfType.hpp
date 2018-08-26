#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWarModeRespawnKitInfoListOfType // Size: 0x10
{
public:
    TArray<struct FWarModeRespawnKitInfo> RespawnKitInfos; /* Ofs: 0x0 Size: 0x10 ArrayProperty TslGame.WarModeRespawnKitInfoListOfType.RespawnKitInfos */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWarModeRespawnKitInfoListOfType = sizeof(FWarModeRespawnKitInfoListOfType); // 16
    static_assert(sizeof(FWarModeRespawnKitInfoListOfType) == 0x10, "Size of FWarModeRespawnKitInfoListOfType is not correct.");
	auto constexpr FWarModeRespawnKitInfoListOfType_RespawnKitInfos_Offset = offsetof(FWarModeRespawnKitInfoListOfType, RespawnKitInfos);
	static_assert(FWarModeRespawnKitInfoListOfType_RespawnKitInfos_Offset == 0x0, "FWarModeRespawnKitInfoListOfType::RespawnKitInfos offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
