#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAvoidanceManager // Size: 0xE8
	: public UObject // Size: 0x30
{
private:
	typedef UAvoidanceManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(284); // id32("Class Engine.AvoidanceManager")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
	float DefaultTimeToLive; /* Ofs: 0x38 Size: 0x4 - FloatProperty Engine.AvoidanceManager.DefaultTimeToLive */
	float LockTimeAfterAvoid; /* Ofs: 0x3C Size: 0x4 - FloatProperty Engine.AvoidanceManager.LockTimeAfterAvoid */
	float LockTimeAfterClean; /* Ofs: 0x40 Size: 0x4 - FloatProperty Engine.AvoidanceManager.LockTimeAfterClean */
	float DeltaTimeToPredict; /* Ofs: 0x44 Size: 0x4 - FloatProperty Engine.AvoidanceManager.DeltaTimeToPredict */
	float ArtificialRadiusExpansion; /* Ofs: 0x48 Size: 0x4 - FloatProperty Engine.AvoidanceManager.ArtificialRadiusExpansion */
	float TestHeightDifference; /* Ofs: 0x4C Size: 0x4 - FloatProperty Engine.AvoidanceManager.TestHeightDifference */
	float HeightCheckMargin; /* Ofs: 0x50 Size: 0x4 - FloatProperty Engine.AvoidanceManager.HeightCheckMargin */
	uint8_t UnknownData54[0x94];


	inline bool SetDefaultTimeToLive(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
	inline bool SetLockTimeAfterAvoid(t_structHelper inst, float value) { inst.WriteOffset(0x3C, value); }
	inline bool SetLockTimeAfterClean(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetDeltaTimeToPredict(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetArtificialRadiusExpansion(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetTestHeightDifference(t_structHelper inst, float value) { inst.WriteOffset(0x4C, value); }
	inline bool SetHeightCheckMargin(t_structHelper inst, float value) { inst.WriteOffset(0x50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAvoidanceManager = sizeof(UAvoidanceManager); // 232
    static_assert(sizeof(UAvoidanceManager) == 0xE8, "Size of UAvoidanceManager is not correct.");
	auto constexpr UAvoidanceManager_DefaultTimeToLive_Offset = offsetof(UAvoidanceManager, DefaultTimeToLive);
	static_assert(UAvoidanceManager_DefaultTimeToLive_Offset == 0x38, "UAvoidanceManager::DefaultTimeToLive offset is not 38");
	auto constexpr UAvoidanceManager_LockTimeAfterAvoid_Offset = offsetof(UAvoidanceManager, LockTimeAfterAvoid);
	static_assert(UAvoidanceManager_LockTimeAfterAvoid_Offset == 0x3c, "UAvoidanceManager::LockTimeAfterAvoid offset is not 3c");
	auto constexpr UAvoidanceManager_LockTimeAfterClean_Offset = offsetof(UAvoidanceManager, LockTimeAfterClean);
	static_assert(UAvoidanceManager_LockTimeAfterClean_Offset == 0x40, "UAvoidanceManager::LockTimeAfterClean offset is not 40");
	auto constexpr UAvoidanceManager_DeltaTimeToPredict_Offset = offsetof(UAvoidanceManager, DeltaTimeToPredict);
	static_assert(UAvoidanceManager_DeltaTimeToPredict_Offset == 0x44, "UAvoidanceManager::DeltaTimeToPredict offset is not 44");
	auto constexpr UAvoidanceManager_ArtificialRadiusExpansion_Offset = offsetof(UAvoidanceManager, ArtificialRadiusExpansion);
	static_assert(UAvoidanceManager_ArtificialRadiusExpansion_Offset == 0x48, "UAvoidanceManager::ArtificialRadiusExpansion offset is not 48");
	auto constexpr UAvoidanceManager_TestHeightDifference_Offset = offsetof(UAvoidanceManager, TestHeightDifference);
	static_assert(UAvoidanceManager_TestHeightDifference_Offset == 0x4c, "UAvoidanceManager::TestHeightDifference offset is not 4c");
	auto constexpr UAvoidanceManager_HeightCheckMargin_Offset = offsetof(UAvoidanceManager, HeightCheckMargin);
	static_assert(UAvoidanceManager_HeightCheckMargin_Offset == 0x50, "UAvoidanceManager::HeightCheckMargin offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
