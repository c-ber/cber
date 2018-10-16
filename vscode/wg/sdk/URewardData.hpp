#pragma once
#include "UDataAsset.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URewardData // Size: 0x60
	: public UDataAsset // Size: 0x38
{
private:
	typedef URewardData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1945); // id32("Class TslGame.RewardData")
		return ptr;
	}
	float DefaultScoreMultiplierByDamage; /* Ofs: 0x38 Size: 0x4 - FloatProperty TslGame.RewardData.DefaultScoreMultiplierByDamage */
	float DefaultScoreMultiplierByKill; /* Ofs: 0x3C Size: 0x4 - FloatProperty TslGame.RewardData.DefaultScoreMultiplierByKill */
	TArray<float> ScoreByReverseRanking; /* Ofs: 0x40 Size: 0x10 - ArrayProperty TslGame.RewardData.ScoreByReverseRanking */
	TArray<float> ScoreMultiplierByRanking; /* Ofs: 0x50 Size: 0x10 - ArrayProperty TslGame.RewardData.ScoreMultiplierByRanking */


	inline bool SetDefaultScoreMultiplierByDamage(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
	inline bool SetDefaultScoreMultiplierByKill(t_structHelper inst, float value) { inst.WriteOffset(0x3C, value); }
	inline bool SetScoreByReverseRanking(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x40, value); }
	inline bool SetScoreMultiplierByRanking(t_structHelper inst, TArray<float> value) { inst.WriteOffset(0x50, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURewardData = sizeof(URewardData); // 96
    static_assert(sizeof(URewardData) == 0x60, "Size of URewardData is not correct.");
	auto constexpr URewardData_DefaultScoreMultiplierByDamage_Offset = offsetof(URewardData, DefaultScoreMultiplierByDamage);
	static_assert(URewardData_DefaultScoreMultiplierByDamage_Offset == 0x38, "URewardData::DefaultScoreMultiplierByDamage offset is not 38");
	auto constexpr URewardData_DefaultScoreMultiplierByKill_Offset = offsetof(URewardData, DefaultScoreMultiplierByKill);
	static_assert(URewardData_DefaultScoreMultiplierByKill_Offset == 0x3c, "URewardData::DefaultScoreMultiplierByKill offset is not 3c");
	auto constexpr URewardData_ScoreByReverseRanking_Offset = offsetof(URewardData, ScoreByReverseRanking);
	static_assert(URewardData_ScoreByReverseRanking_Offset == 0x40, "URewardData::ScoreByReverseRanking offset is not 40");
	auto constexpr URewardData_ScoreMultiplierByRanking_Offset = offsetof(URewardData, ScoreMultiplierByRanking);
	static_assert(URewardData_ScoreMultiplierByRanking_Offset == 0x50, "URewardData::ScoreMultiplierByRanking offset is not 50");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
