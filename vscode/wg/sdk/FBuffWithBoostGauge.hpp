#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBuffWithBoostGauge // Size: 0x18
{
public:
    float BoostGauge; /* Ofs: 0x0 Size: 0x4 FloatProperty TslGame.BuffWithBoostGauge.BoostGauge */
    uint8_t UnknownData4[0x4];
    ExternalPtr<struct UClass> Buff; /* Ofs: 0x8 Size: 0x8 ClassProperty TslGame.BuffWithBoostGauge.Buff */
    FName OverlapId; /* Ofs: 0x10 Size: 0x8 NameProperty TslGame.BuffWithBoostGauge.OverlapId */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBuffWithBoostGauge = sizeof(FBuffWithBoostGauge); // 24
    static_assert(sizeof(FBuffWithBoostGauge) == 0x18, "Size of FBuffWithBoostGauge is not correct.");
	auto constexpr FBuffWithBoostGauge_BoostGauge_Offset = offsetof(FBuffWithBoostGauge, BoostGauge);
	static_assert(FBuffWithBoostGauge_BoostGauge_Offset == 0x0, "FBuffWithBoostGauge::BoostGauge offset is not 0");
	auto constexpr FBuffWithBoostGauge_Buff_Offset = offsetof(FBuffWithBoostGauge, Buff);
	static_assert(FBuffWithBoostGauge_Buff_Offset == 0x8, "FBuffWithBoostGauge::Buff offset is not 8");
	auto constexpr FBuffWithBoostGauge_OverlapId_Offset = offsetof(FBuffWithBoostGauge, OverlapId);
	static_assert(FBuffWithBoostGauge_OverlapId_Offset == 0x10, "FBuffWithBoostGauge::OverlapId offset is not 10");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
