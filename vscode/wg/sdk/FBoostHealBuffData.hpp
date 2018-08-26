#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FBoostHealBuffData // Size: 0x8
{
public:
    float Gauge_2_54D730AE4323C7CA35DC4BA4BE645621; /* Ofs: 0x0 Size: 0x4 FloatProperty BoostHealBuffData.BoostHealBuffData.Gauge_2_54D730AE4323C7CA35DC4BA4BE645621 */
    float HealPerTick_5_2058272F440530D6C74E36AF5976A24E; /* Ofs: 0x4 Size: 0x4 FloatProperty BoostHealBuffData.BoostHealBuffData.HealPerTick_5_2058272F440530D6C74E36AF5976A24E */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFBoostHealBuffData = sizeof(FBoostHealBuffData); // 8
    static_assert(sizeof(FBoostHealBuffData) == 0x8, "Size of FBoostHealBuffData is not correct.");
	auto constexpr FBoostHealBuffData_Gauge_2_54D730AE4323C7CA35DC4BA4BE645621_Offset = offsetof(FBoostHealBuffData, Gauge_2_54D730AE4323C7CA35DC4BA4BE645621);
	static_assert(FBoostHealBuffData_Gauge_2_54D730AE4323C7CA35DC4BA4BE645621_Offset == 0x0, "FBoostHealBuffData::Gauge_2_54D730AE4323C7CA35DC4BA4BE645621 offset is not 0");
	auto constexpr FBoostHealBuffData_HealPerTick_5_2058272F440530D6C74E36AF5976A24E_Offset = offsetof(FBoostHealBuffData, HealPerTick_5_2058272F440530D6C74E36AF5976A24E);
	static_assert(FBoostHealBuffData_HealPerTick_5_2058272F440530D6C74E36AF5976A24E_Offset == 0x4, "FBoostHealBuffData::HealPerTick_5_2058272F440530D6C74E36AF5976A24E offset is not 4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
