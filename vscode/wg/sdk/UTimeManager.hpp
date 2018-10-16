#pragma once
#include "UActor.hpp"
#include "FTimeDate.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTimeManager // Size: 0x4D0
	: public UActor // Size: 0x410
{
private:
	typedef UTimeManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2061); // id32("Class OceanPlugin.TimeManager")
		return ptr;
	}
//	FTimeDate CurrentLocalTime; /* Ofs: 0x408 Size: 0x1C - StructProperty OceanPlugin.TimeManager.CurrentLocalTime */
	uint8_t UnknownData410[0x14];
	float Latitude; /* Ofs: 0x424 Size: 0x4 - FloatProperty OceanPlugin.TimeManager.Latitude */
	float Longitude; /* Ofs: 0x428 Size: 0x4 - FloatProperty OceanPlugin.TimeManager.Longitude */
	int32_t OffsetUTC; /* Ofs: 0x42C Size: 0x4 - IntProperty OceanPlugin.TimeManager.OffsetUTC */
	int32_t OffsetDST; /* Ofs: 0x430 Size: 0x4 - IntProperty OceanPlugin.TimeManager.OffsetDST */
	uint8_t boolField434;
	uint8_t boolField435;
	uint8_t UnknownData436[0x2];
	float TimeScaleMultiplier; /* Ofs: 0x438 Size: 0x4 - FloatProperty OceanPlugin.TimeManager.TimeScaleMultiplier */
	float SolarTime; /* Ofs: 0x43C Size: 0x4 - FloatProperty OceanPlugin.TimeManager.SolarTime */
	float LocalClockTime; /* Ofs: 0x440 Size: 0x4 - FloatProperty OceanPlugin.TimeManager.LocalClockTime */
	float TimeCorrection; /* Ofs: 0x444 Size: 0x4 - FloatProperty OceanPlugin.TimeManager.TimeCorrection */
	int32_t LSTM; /* Ofs: 0x448 Size: 0x4 - IntProperty OceanPlugin.TimeManager.LSTM */
	int32_t DayOfYear; /* Ofs: 0x44C Size: 0x4 - IntProperty OceanPlugin.TimeManager.DayOfYear */
	float EoT; /* Ofs: 0x450 Size: 0x4 - FloatProperty OceanPlugin.TimeManager.EoT */
	float SolarAltAngle; /* Ofs: 0x454 Size: 0x4 - FloatProperty OceanPlugin.TimeManager.SolarAltAngle */
	float SolarDeclination; /* Ofs: 0x458 Size: 0x4 - FloatProperty OceanPlugin.TimeManager.SolarDeclination */
	float SolarAzimuth; /* Ofs: 0x45C Size: 0x4 - FloatProperty OceanPlugin.TimeManager.SolarAzimuth */
	float SolarHRA; /* Ofs: 0x460 Size: 0x4 - FloatProperty OceanPlugin.TimeManager.SolarHRA */
	float SiderealTime; /* Ofs: 0x464 Size: 0x4 - FloatProperty OceanPlugin.TimeManager.SiderealTime */
	float LunarAltAngle; /* Ofs: 0x468 Size: 0x4 - FloatProperty OceanPlugin.TimeManager.LunarAltAngle */
	float LunarHRA; /* Ofs: 0x46C Size: 0x4 - FloatProperty OceanPlugin.TimeManager.LunarHRA */
	float LunarDeclination; /* Ofs: 0x470 Size: 0x4 - FloatProperty OceanPlugin.TimeManager.LunarDeclination */
	float LunarAzimuth; /* Ofs: 0x474 Size: 0x4 - FloatProperty OceanPlugin.TimeManager.LunarAzimuth */
	float LunarRightAsc; /* Ofs: 0x478 Size: 0x4 - FloatProperty OceanPlugin.TimeManager.LunarRightAsc */
	float LunarElapsedDays; /* Ofs: 0x47C Size: 0x4 - FloatProperty OceanPlugin.TimeManager.LunarElapsedDays */
	float EcLongitude; /* Ofs: 0x480 Size: 0x4 - FloatProperty OceanPlugin.TimeManager.EcLongitude */
	float EcLatitude; /* Ofs: 0x484 Size: 0x4 - FloatProperty OceanPlugin.TimeManager.EcLatitude */
	float EcDistance; /* Ofs: 0x488 Size: 0x4 - FloatProperty OceanPlugin.TimeManager.EcDistance */
	float PartL; /* Ofs: 0x48C Size: 0x4 - FloatProperty OceanPlugin.TimeManager.PartL */
	float PartM; /* Ofs: 0x490 Size: 0x4 - FloatProperty OceanPlugin.TimeManager.PartM */
	float PartF; /* Ofs: 0x494 Size: 0x4 - FloatProperty OceanPlugin.TimeManager.PartF */
	uint8_t UnknownData498[0x38];


//	inline bool SetCurrentLocalTime(t_structHelper inst, FTimeDate value) { inst.WriteOffset(0x408, value); }
	inline bool SetLatitude(t_structHelper inst, float value) { inst.WriteOffset(0x424, value); }
	inline bool SetLongitude(t_structHelper inst, float value) { inst.WriteOffset(0x428, value); }
	inline bool SetOffsetUTC(t_structHelper inst, int32_t value) { inst.WriteOffset(0x42C, value); }
	inline bool SetOffsetDST(t_structHelper inst, int32_t value) { inst.WriteOffset(0x430, value); }
	inline bool bAllowDaylightSavings()
	{
		return boolField434& 0x1;
	}
	inline bool SetbAllowDaylightSavings(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x434, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bDaylightSavingsActive()
	{
		return boolField435& 0x1;
	}
	inline bool SetbDaylightSavingsActive(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x435, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetTimeScaleMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x438, value); }
	inline bool SetSolarTime(t_structHelper inst, float value) { inst.WriteOffset(0x43C, value); }
	inline bool SetLocalClockTime(t_structHelper inst, float value) { inst.WriteOffset(0x440, value); }
	inline bool SetTimeCorrection(t_structHelper inst, float value) { inst.WriteOffset(0x444, value); }
	inline bool SetLSTM(t_structHelper inst, int32_t value) { inst.WriteOffset(0x448, value); }
	inline bool SetDayOfYear(t_structHelper inst, int32_t value) { inst.WriteOffset(0x44C, value); }
	inline bool SetEoT(t_structHelper inst, float value) { inst.WriteOffset(0x450, value); }
	inline bool SetSolarAltAngle(t_structHelper inst, float value) { inst.WriteOffset(0x454, value); }
	inline bool SetSolarDeclination(t_structHelper inst, float value) { inst.WriteOffset(0x458, value); }
	inline bool SetSolarAzimuth(t_structHelper inst, float value) { inst.WriteOffset(0x45C, value); }
	inline bool SetSolarHRA(t_structHelper inst, float value) { inst.WriteOffset(0x460, value); }
	inline bool SetSiderealTime(t_structHelper inst, float value) { inst.WriteOffset(0x464, value); }
	inline bool SetLunarAltAngle(t_structHelper inst, float value) { inst.WriteOffset(0x468, value); }
	inline bool SetLunarHRA(t_structHelper inst, float value) { inst.WriteOffset(0x46C, value); }
	inline bool SetLunarDeclination(t_structHelper inst, float value) { inst.WriteOffset(0x470, value); }
	inline bool SetLunarAzimuth(t_structHelper inst, float value) { inst.WriteOffset(0x474, value); }
	inline bool SetLunarRightAsc(t_structHelper inst, float value) { inst.WriteOffset(0x478, value); }
	inline bool SetLunarElapsedDays(t_structHelper inst, float value) { inst.WriteOffset(0x47C, value); }
	inline bool SetEcLongitude(t_structHelper inst, float value) { inst.WriteOffset(0x480, value); }
	inline bool SetEcLatitude(t_structHelper inst, float value) { inst.WriteOffset(0x484, value); }
	inline bool SetEcDistance(t_structHelper inst, float value) { inst.WriteOffset(0x488, value); }
	inline bool SetPartL(t_structHelper inst, float value) { inst.WriteOffset(0x48C, value); }
	inline bool SetPartM(t_structHelper inst, float value) { inst.WriteOffset(0x490, value); }
	inline bool SetPartF(t_structHelper inst, float value) { inst.WriteOffset(0x494, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTimeManager = sizeof(UTimeManager); // 1232
    static_assert(sizeof(UTimeManager) == 0x4D0, "Size of UTimeManager is not correct.");
//	auto constexpr UTimeManager_CurrentLocalTime_Offset = offsetof(UTimeManager, CurrentLocalTime);
//	static_assert(UTimeManager_CurrentLocalTime_Offset == 0x408, "UTimeManager::CurrentLocalTime offset is not 408");
	auto constexpr UTimeManager_Latitude_Offset = offsetof(UTimeManager, Latitude);
	static_assert(UTimeManager_Latitude_Offset == 0x424, "UTimeManager::Latitude offset is not 424");
	auto constexpr UTimeManager_Longitude_Offset = offsetof(UTimeManager, Longitude);
	static_assert(UTimeManager_Longitude_Offset == 0x428, "UTimeManager::Longitude offset is not 428");
	auto constexpr UTimeManager_OffsetUTC_Offset = offsetof(UTimeManager, OffsetUTC);
	static_assert(UTimeManager_OffsetUTC_Offset == 0x42c, "UTimeManager::OffsetUTC offset is not 42c");
	auto constexpr UTimeManager_OffsetDST_Offset = offsetof(UTimeManager, OffsetDST);
	static_assert(UTimeManager_OffsetDST_Offset == 0x430, "UTimeManager::OffsetDST offset is not 430");
	auto constexpr UTimeManager_boolField434_Offset = offsetof(UTimeManager, boolField434);
	static_assert(UTimeManager_boolField434_Offset == 0x434, "UTimeManager::boolField434 offset is not 434");
	auto constexpr UTimeManager_boolField435_Offset = offsetof(UTimeManager, boolField435);
	static_assert(UTimeManager_boolField435_Offset == 0x435, "UTimeManager::boolField435 offset is not 435");
	auto constexpr UTimeManager_TimeScaleMultiplier_Offset = offsetof(UTimeManager, TimeScaleMultiplier);
	static_assert(UTimeManager_TimeScaleMultiplier_Offset == 0x438, "UTimeManager::TimeScaleMultiplier offset is not 438");
	auto constexpr UTimeManager_SolarTime_Offset = offsetof(UTimeManager, SolarTime);
	static_assert(UTimeManager_SolarTime_Offset == 0x43c, "UTimeManager::SolarTime offset is not 43c");
	auto constexpr UTimeManager_LocalClockTime_Offset = offsetof(UTimeManager, LocalClockTime);
	static_assert(UTimeManager_LocalClockTime_Offset == 0x440, "UTimeManager::LocalClockTime offset is not 440");
	auto constexpr UTimeManager_TimeCorrection_Offset = offsetof(UTimeManager, TimeCorrection);
	static_assert(UTimeManager_TimeCorrection_Offset == 0x444, "UTimeManager::TimeCorrection offset is not 444");
	auto constexpr UTimeManager_LSTM_Offset = offsetof(UTimeManager, LSTM);
	static_assert(UTimeManager_LSTM_Offset == 0x448, "UTimeManager::LSTM offset is not 448");
	auto constexpr UTimeManager_DayOfYear_Offset = offsetof(UTimeManager, DayOfYear);
	static_assert(UTimeManager_DayOfYear_Offset == 0x44c, "UTimeManager::DayOfYear offset is not 44c");
	auto constexpr UTimeManager_EoT_Offset = offsetof(UTimeManager, EoT);
	static_assert(UTimeManager_EoT_Offset == 0x450, "UTimeManager::EoT offset is not 450");
	auto constexpr UTimeManager_SolarAltAngle_Offset = offsetof(UTimeManager, SolarAltAngle);
	static_assert(UTimeManager_SolarAltAngle_Offset == 0x454, "UTimeManager::SolarAltAngle offset is not 454");
	auto constexpr UTimeManager_SolarDeclination_Offset = offsetof(UTimeManager, SolarDeclination);
	static_assert(UTimeManager_SolarDeclination_Offset == 0x458, "UTimeManager::SolarDeclination offset is not 458");
	auto constexpr UTimeManager_SolarAzimuth_Offset = offsetof(UTimeManager, SolarAzimuth);
	static_assert(UTimeManager_SolarAzimuth_Offset == 0x45c, "UTimeManager::SolarAzimuth offset is not 45c");
	auto constexpr UTimeManager_SolarHRA_Offset = offsetof(UTimeManager, SolarHRA);
	static_assert(UTimeManager_SolarHRA_Offset == 0x460, "UTimeManager::SolarHRA offset is not 460");
	auto constexpr UTimeManager_SiderealTime_Offset = offsetof(UTimeManager, SiderealTime);
	static_assert(UTimeManager_SiderealTime_Offset == 0x464, "UTimeManager::SiderealTime offset is not 464");
	auto constexpr UTimeManager_LunarAltAngle_Offset = offsetof(UTimeManager, LunarAltAngle);
	static_assert(UTimeManager_LunarAltAngle_Offset == 0x468, "UTimeManager::LunarAltAngle offset is not 468");
	auto constexpr UTimeManager_LunarHRA_Offset = offsetof(UTimeManager, LunarHRA);
	static_assert(UTimeManager_LunarHRA_Offset == 0x46c, "UTimeManager::LunarHRA offset is not 46c");
	auto constexpr UTimeManager_LunarDeclination_Offset = offsetof(UTimeManager, LunarDeclination);
	static_assert(UTimeManager_LunarDeclination_Offset == 0x470, "UTimeManager::LunarDeclination offset is not 470");
	auto constexpr UTimeManager_LunarAzimuth_Offset = offsetof(UTimeManager, LunarAzimuth);
	static_assert(UTimeManager_LunarAzimuth_Offset == 0x474, "UTimeManager::LunarAzimuth offset is not 474");
	auto constexpr UTimeManager_LunarRightAsc_Offset = offsetof(UTimeManager, LunarRightAsc);
	static_assert(UTimeManager_LunarRightAsc_Offset == 0x478, "UTimeManager::LunarRightAsc offset is not 478");
	auto constexpr UTimeManager_LunarElapsedDays_Offset = offsetof(UTimeManager, LunarElapsedDays);
	static_assert(UTimeManager_LunarElapsedDays_Offset == 0x47c, "UTimeManager::LunarElapsedDays offset is not 47c");
	auto constexpr UTimeManager_EcLongitude_Offset = offsetof(UTimeManager, EcLongitude);
	static_assert(UTimeManager_EcLongitude_Offset == 0x480, "UTimeManager::EcLongitude offset is not 480");
	auto constexpr UTimeManager_EcLatitude_Offset = offsetof(UTimeManager, EcLatitude);
	static_assert(UTimeManager_EcLatitude_Offset == 0x484, "UTimeManager::EcLatitude offset is not 484");
	auto constexpr UTimeManager_EcDistance_Offset = offsetof(UTimeManager, EcDistance);
	static_assert(UTimeManager_EcDistance_Offset == 0x488, "UTimeManager::EcDistance offset is not 488");
	auto constexpr UTimeManager_PartL_Offset = offsetof(UTimeManager, PartL);
	static_assert(UTimeManager_PartL_Offset == 0x48c, "UTimeManager::PartL offset is not 48c");
	auto constexpr UTimeManager_PartM_Offset = offsetof(UTimeManager, PartM);
	static_assert(UTimeManager_PartM_Offset == 0x490, "UTimeManager::PartM offset is not 490");
	auto constexpr UTimeManager_PartF_Offset = offsetof(UTimeManager, PartF);
	static_assert(UTimeManager_PartF_Offset == 0x494, "UTimeManager::PartF offset is not 494");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
