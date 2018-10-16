#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLayerActorStats // Size: 0x10
{
public:
    ExternalPtr<struct UClass> Type; /* Ofs: 0x0 Size: 0x8 ClassProperty Engine.LayerActorStats.Type */
    int32_t Total; /* Ofs: 0x8 Size: 0x4 IntProperty Engine.LayerActorStats.Total */
    uint8_t UnknownDataC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLayerActorStats = sizeof(FLayerActorStats); // 16
    static_assert(sizeof(FLayerActorStats) == 0x10, "Size of FLayerActorStats is not correct.");
	auto constexpr FLayerActorStats_Type_Offset = offsetof(FLayerActorStats, Type);
	static_assert(FLayerActorStats_Type_Offset == 0x0, "FLayerActorStats::Type offset is not 0");
	auto constexpr FLayerActorStats_Total_Offset = offsetof(FLayerActorStats, Total);
	static_assert(FLayerActorStats_Total_Offset == 0x8, "FLayerActorStats::Total offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
