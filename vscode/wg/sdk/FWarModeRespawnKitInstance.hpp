#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FWarModeRespawnKitInstance // Size: 0x10
{
public:
    TArray<ExternalPtr<struct UItem>> Items; /* Ofs: 0x0 Size: 0x10 ArrayProperty TslGame.WarModeRespawnKitInstance.Items */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFWarModeRespawnKitInstance = sizeof(FWarModeRespawnKitInstance); // 16
    static_assert(sizeof(FWarModeRespawnKitInstance) == 0x10, "Size of FWarModeRespawnKitInstance is not correct.");
	auto constexpr FWarModeRespawnKitInstance_Items_Offset = offsetof(FWarModeRespawnKitInstance, Items);
	static_assert(FWarModeRespawnKitInstance_Items_Offset == 0x0, "FWarModeRespawnKitInstance::Items offset is not 0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
