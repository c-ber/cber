#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAnimSyncMarker // Size: 0x10
{
public:
    FName MarkerName; /* Ofs: 0x0 Size: 0x8 NameProperty Engine.AnimSyncMarker.MarkerName */
    float Time; /* Ofs: 0x8 Size: 0x4 FloatProperty Engine.AnimSyncMarker.Time */
    uint8_t UnknownDataC[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAnimSyncMarker = sizeof(FAnimSyncMarker); // 16
    static_assert(sizeof(FAnimSyncMarker) == 0x10, "Size of FAnimSyncMarker is not correct.");
	auto constexpr FAnimSyncMarker_MarkerName_Offset = offsetof(FAnimSyncMarker, MarkerName);
	static_assert(FAnimSyncMarker_MarkerName_Offset == 0x0, "FAnimSyncMarker::MarkerName offset is not 0");
	auto constexpr FAnimSyncMarker_Time_Offset = offsetof(FAnimSyncMarker, Time);
	static_assert(FAnimSyncMarker_Time_Offset == 0x8, "FAnimSyncMarker::Time offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
