#pragma once
#include "UInfo.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameNetworkManager // Size: 0x490
	: public UInfo // Size: 0x410
{
private:
	typedef UGameNetworkManager t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1743); // id32("Class Engine.GameNetworkManager")
		return ptr;
	}
//	int32_t AdjustedNetSpeed; /* Ofs: 0x408 Size: 0x4 - IntProperty Engine.GameNetworkManager.AdjustedNetSpeed */
//	float LastNetSpeedUpdateTime; /* Ofs: 0x40C Size: 0x4 - FloatProperty Engine.GameNetworkManager.LastNetSpeedUpdateTime */
	int32_t TotalNetBandwidth; /* Ofs: 0x410 Size: 0x4 - IntProperty Engine.GameNetworkManager.TotalNetBandwidth */
	int32_t MinDynamicBandwidth; /* Ofs: 0x414 Size: 0x4 - IntProperty Engine.GameNetworkManager.MinDynamicBandwidth */
	int32_t MaxDynamicBandwidth; /* Ofs: 0x418 Size: 0x4 - IntProperty Engine.GameNetworkManager.MaxDynamicBandwidth */
	uint8_t boolField41C;
	uint8_t UnknownData41D[0x3];
	float StandbyRxCheatTime; /* Ofs: 0x420 Size: 0x4 - FloatProperty Engine.GameNetworkManager.StandbyRxCheatTime */
	float StandbyTxCheatTime; /* Ofs: 0x424 Size: 0x4 - FloatProperty Engine.GameNetworkManager.StandbyTxCheatTime */
	int32_t BadPingThreshold; /* Ofs: 0x428 Size: 0x4 - IntProperty Engine.GameNetworkManager.BadPingThreshold */
	float PercentMissingForRxStandby; /* Ofs: 0x42C Size: 0x4 - FloatProperty Engine.GameNetworkManager.PercentMissingForRxStandby */
	float PercentMissingForTxStandby; /* Ofs: 0x430 Size: 0x4 - FloatProperty Engine.GameNetworkManager.PercentMissingForTxStandby */
	float PercentForBadPing; /* Ofs: 0x434 Size: 0x4 - FloatProperty Engine.GameNetworkManager.PercentForBadPing */
	float JoinInProgressStandbyWaitTime; /* Ofs: 0x438 Size: 0x4 - FloatProperty Engine.GameNetworkManager.JoinInProgressStandbyWaitTime */
	float MoveRepSize; /* Ofs: 0x43C Size: 0x4 - FloatProperty Engine.GameNetworkManager.MoveRepSize */
	float MAXPOSITIONERRORSQUARED; /* Ofs: 0x440 Size: 0x4 - FloatProperty Engine.GameNetworkManager.MAXPOSITIONERRORSQUARED */
	float MAXNEARZEROVELOCITYSQUARED; /* Ofs: 0x444 Size: 0x4 - FloatProperty Engine.GameNetworkManager.MAXNEARZEROVELOCITYSQUARED */
	float CLIENTADJUSTUPDATECOST; /* Ofs: 0x448 Size: 0x4 - FloatProperty Engine.GameNetworkManager.CLIENTADJUSTUPDATECOST */
	float MAXCLIENTUPDATEINTERVAL; /* Ofs: 0x44C Size: 0x4 - FloatProperty Engine.GameNetworkManager.MAXCLIENTUPDATEINTERVAL */
	float MaxMoveDeltaTime; /* Ofs: 0x450 Size: 0x4 - FloatProperty Engine.GameNetworkManager.MaxMoveDeltaTime */
	float ClientNetSendMoveDeltaTime; /* Ofs: 0x454 Size: 0x4 - FloatProperty Engine.GameNetworkManager.ClientNetSendMoveDeltaTime */
	float ClientNetSendMoveDeltaTimeThrottled; /* Ofs: 0x458 Size: 0x4 - FloatProperty Engine.GameNetworkManager.ClientNetSendMoveDeltaTimeThrottled */
	int32_t ClientNetSendMoveThrottleAtNetSpeed; /* Ofs: 0x45C Size: 0x4 - IntProperty Engine.GameNetworkManager.ClientNetSendMoveThrottleAtNetSpeed */
	int32_t ClientNetSendMoveThrottleOverPlayerCount; /* Ofs: 0x460 Size: 0x4 - IntProperty Engine.GameNetworkManager.ClientNetSendMoveThrottleOverPlayerCount */
	uint8_t boolField464;
	uint8_t UnknownData465[0x3];
	float ClientErrorUpdateRateLimit; /* Ofs: 0x468 Size: 0x4 - FloatProperty Engine.GameNetworkManager.ClientErrorUpdateRateLimit */
	uint8_t boolField46C;
	uint8_t boolField46D;
	uint8_t UnknownData46E[0x2];
	float MovementTimeDiscrepancyResolutionMinFPS; /* Ofs: 0x470 Size: 0x4 - FloatProperty Engine.GameNetworkManager.MovementTimeDiscrepancyResolutionMinFPS */
	float MovementTimeDiscrepancyMaxTimeMargin; /* Ofs: 0x474 Size: 0x4 - FloatProperty Engine.GameNetworkManager.MovementTimeDiscrepancyMaxTimeMargin */
	float MovementTimeDiscrepancyMinTimeMargin; /* Ofs: 0x478 Size: 0x4 - FloatProperty Engine.GameNetworkManager.MovementTimeDiscrepancyMinTimeMargin */
	float MovementTimeDiscrepancyResolutionRate; /* Ofs: 0x47C Size: 0x4 - FloatProperty Engine.GameNetworkManager.MovementTimeDiscrepancyResolutionRate */
	float MovementTimeDiscrepancyDriftAllowance; /* Ofs: 0x480 Size: 0x4 - FloatProperty Engine.GameNetworkManager.MovementTimeDiscrepancyDriftAllowance */
	uint8_t boolField484;
	uint8_t boolField485;
	uint8_t UnknownData486[0xA];


//	inline bool SetAdjustedNetSpeed(t_structHelper inst, int32_t value) { inst.WriteOffset(0x408, value); }
//	inline bool SetLastNetSpeedUpdateTime(t_structHelper inst, float value) { inst.WriteOffset(0x40C, value); }
	inline bool SetTotalNetBandwidth(t_structHelper inst, int32_t value) { inst.WriteOffset(0x410, value); }
	inline bool SetMinDynamicBandwidth(t_structHelper inst, int32_t value) { inst.WriteOffset(0x414, value); }
	inline bool SetMaxDynamicBandwidth(t_structHelper inst, int32_t value) { inst.WriteOffset(0x418, value); }
	inline bool bIsStandbyCheckingEnabled()
	{
		return boolField41C& 0x1;
	}
	inline bool SetbIsStandbyCheckingEnabled(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bHasStandbyCheatTriggered()
	{
		return boolField41C& 0x2;
	}
	inline bool SetbHasStandbyCheatTriggered(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x41C, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetStandbyRxCheatTime(t_structHelper inst, float value) { inst.WriteOffset(0x420, value); }
	inline bool SetStandbyTxCheatTime(t_structHelper inst, float value) { inst.WriteOffset(0x424, value); }
	inline bool SetBadPingThreshold(t_structHelper inst, int32_t value) { inst.WriteOffset(0x428, value); }
	inline bool SetPercentMissingForRxStandby(t_structHelper inst, float value) { inst.WriteOffset(0x42C, value); }
	inline bool SetPercentMissingForTxStandby(t_structHelper inst, float value) { inst.WriteOffset(0x430, value); }
	inline bool SetPercentForBadPing(t_structHelper inst, float value) { inst.WriteOffset(0x434, value); }
	inline bool SetJoinInProgressStandbyWaitTime(t_structHelper inst, float value) { inst.WriteOffset(0x438, value); }
	inline bool SetMoveRepSize(t_structHelper inst, float value) { inst.WriteOffset(0x43C, value); }
	inline bool SetMAXPOSITIONERRORSQUARED(t_structHelper inst, float value) { inst.WriteOffset(0x440, value); }
	inline bool SetMAXNEARZEROVELOCITYSQUARED(t_structHelper inst, float value) { inst.WriteOffset(0x444, value); }
	inline bool SetCLIENTADJUSTUPDATECOST(t_structHelper inst, float value) { inst.WriteOffset(0x448, value); }
	inline bool SetMAXCLIENTUPDATEINTERVAL(t_structHelper inst, float value) { inst.WriteOffset(0x44C, value); }
	inline bool SetMaxMoveDeltaTime(t_structHelper inst, float value) { inst.WriteOffset(0x450, value); }
	inline bool SetClientNetSendMoveDeltaTime(t_structHelper inst, float value) { inst.WriteOffset(0x454, value); }
	inline bool SetClientNetSendMoveDeltaTimeThrottled(t_structHelper inst, float value) { inst.WriteOffset(0x458, value); }
	inline bool SetClientNetSendMoveThrottleAtNetSpeed(t_structHelper inst, int32_t value) { inst.WriteOffset(0x45C, value); }
	inline bool SetClientNetSendMoveThrottleOverPlayerCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x460, value); }
	inline bool ClientAuthorativePosition()
	{
		return boolField464& 0x1;
	}
	inline bool SetClientAuthorativePosition(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x464, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetClientErrorUpdateRateLimit(t_structHelper inst, float value) { inst.WriteOffset(0x468, value); }
	inline bool bMovementTimeDiscrepancyDetection()
	{
		return boolField46C& 0x1;
	}
	inline bool SetbMovementTimeDiscrepancyDetection(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x46C, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bMovementTimeDiscrepancyResolution()
	{
		return boolField46D& 0x1;
	}
	inline bool SetbMovementTimeDiscrepancyResolution(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x46D, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMovementTimeDiscrepancyResolutionMinFPS(t_structHelper inst, float value) { inst.WriteOffset(0x470, value); }
	inline bool SetMovementTimeDiscrepancyMaxTimeMargin(t_structHelper inst, float value) { inst.WriteOffset(0x474, value); }
	inline bool SetMovementTimeDiscrepancyMinTimeMargin(t_structHelper inst, float value) { inst.WriteOffset(0x478, value); }
	inline bool SetMovementTimeDiscrepancyResolutionRate(t_structHelper inst, float value) { inst.WriteOffset(0x47C, value); }
	inline bool SetMovementTimeDiscrepancyDriftAllowance(t_structHelper inst, float value) { inst.WriteOffset(0x480, value); }
	inline bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution()
	{
		return boolField484& 0x1;
	}
	inline bool SetbMovementTimeDiscrepancyForceCorrectionsDuringResolution(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x484, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseDistanceBasedRelevancy()
	{
		return boolField485& 0x1;
	}
	inline bool SetbUseDistanceBasedRelevancy(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x485, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameNetworkManager = sizeof(UGameNetworkManager); // 1168
    static_assert(sizeof(UGameNetworkManager) == 0x490, "Size of UGameNetworkManager is not correct.");
//	auto constexpr UGameNetworkManager_AdjustedNetSpeed_Offset = offsetof(UGameNetworkManager, AdjustedNetSpeed);
//	static_assert(UGameNetworkManager_AdjustedNetSpeed_Offset == 0x408, "UGameNetworkManager::AdjustedNetSpeed offset is not 408");
//	auto constexpr UGameNetworkManager_LastNetSpeedUpdateTime_Offset = offsetof(UGameNetworkManager, LastNetSpeedUpdateTime);
//	static_assert(UGameNetworkManager_LastNetSpeedUpdateTime_Offset == 0x40c, "UGameNetworkManager::LastNetSpeedUpdateTime offset is not 40c");
	auto constexpr UGameNetworkManager_TotalNetBandwidth_Offset = offsetof(UGameNetworkManager, TotalNetBandwidth);
	static_assert(UGameNetworkManager_TotalNetBandwidth_Offset == 0x410, "UGameNetworkManager::TotalNetBandwidth offset is not 410");
	auto constexpr UGameNetworkManager_MinDynamicBandwidth_Offset = offsetof(UGameNetworkManager, MinDynamicBandwidth);
	static_assert(UGameNetworkManager_MinDynamicBandwidth_Offset == 0x414, "UGameNetworkManager::MinDynamicBandwidth offset is not 414");
	auto constexpr UGameNetworkManager_MaxDynamicBandwidth_Offset = offsetof(UGameNetworkManager, MaxDynamicBandwidth);
	static_assert(UGameNetworkManager_MaxDynamicBandwidth_Offset == 0x418, "UGameNetworkManager::MaxDynamicBandwidth offset is not 418");
	auto constexpr UGameNetworkManager_boolField41C_Offset = offsetof(UGameNetworkManager, boolField41C);
	static_assert(UGameNetworkManager_boolField41C_Offset == 0x41c, "UGameNetworkManager::boolField41C offset is not 41c");
	auto constexpr UGameNetworkManager_StandbyRxCheatTime_Offset = offsetof(UGameNetworkManager, StandbyRxCheatTime);
	static_assert(UGameNetworkManager_StandbyRxCheatTime_Offset == 0x420, "UGameNetworkManager::StandbyRxCheatTime offset is not 420");
	auto constexpr UGameNetworkManager_StandbyTxCheatTime_Offset = offsetof(UGameNetworkManager, StandbyTxCheatTime);
	static_assert(UGameNetworkManager_StandbyTxCheatTime_Offset == 0x424, "UGameNetworkManager::StandbyTxCheatTime offset is not 424");
	auto constexpr UGameNetworkManager_BadPingThreshold_Offset = offsetof(UGameNetworkManager, BadPingThreshold);
	static_assert(UGameNetworkManager_BadPingThreshold_Offset == 0x428, "UGameNetworkManager::BadPingThreshold offset is not 428");
	auto constexpr UGameNetworkManager_PercentMissingForRxStandby_Offset = offsetof(UGameNetworkManager, PercentMissingForRxStandby);
	static_assert(UGameNetworkManager_PercentMissingForRxStandby_Offset == 0x42c, "UGameNetworkManager::PercentMissingForRxStandby offset is not 42c");
	auto constexpr UGameNetworkManager_PercentMissingForTxStandby_Offset = offsetof(UGameNetworkManager, PercentMissingForTxStandby);
	static_assert(UGameNetworkManager_PercentMissingForTxStandby_Offset == 0x430, "UGameNetworkManager::PercentMissingForTxStandby offset is not 430");
	auto constexpr UGameNetworkManager_PercentForBadPing_Offset = offsetof(UGameNetworkManager, PercentForBadPing);
	static_assert(UGameNetworkManager_PercentForBadPing_Offset == 0x434, "UGameNetworkManager::PercentForBadPing offset is not 434");
	auto constexpr UGameNetworkManager_JoinInProgressStandbyWaitTime_Offset = offsetof(UGameNetworkManager, JoinInProgressStandbyWaitTime);
	static_assert(UGameNetworkManager_JoinInProgressStandbyWaitTime_Offset == 0x438, "UGameNetworkManager::JoinInProgressStandbyWaitTime offset is not 438");
	auto constexpr UGameNetworkManager_MoveRepSize_Offset = offsetof(UGameNetworkManager, MoveRepSize);
	static_assert(UGameNetworkManager_MoveRepSize_Offset == 0x43c, "UGameNetworkManager::MoveRepSize offset is not 43c");
	auto constexpr UGameNetworkManager_MAXPOSITIONERRORSQUARED_Offset = offsetof(UGameNetworkManager, MAXPOSITIONERRORSQUARED);
	static_assert(UGameNetworkManager_MAXPOSITIONERRORSQUARED_Offset == 0x440, "UGameNetworkManager::MAXPOSITIONERRORSQUARED offset is not 440");
	auto constexpr UGameNetworkManager_MAXNEARZEROVELOCITYSQUARED_Offset = offsetof(UGameNetworkManager, MAXNEARZEROVELOCITYSQUARED);
	static_assert(UGameNetworkManager_MAXNEARZEROVELOCITYSQUARED_Offset == 0x444, "UGameNetworkManager::MAXNEARZEROVELOCITYSQUARED offset is not 444");
	auto constexpr UGameNetworkManager_CLIENTADJUSTUPDATECOST_Offset = offsetof(UGameNetworkManager, CLIENTADJUSTUPDATECOST);
	static_assert(UGameNetworkManager_CLIENTADJUSTUPDATECOST_Offset == 0x448, "UGameNetworkManager::CLIENTADJUSTUPDATECOST offset is not 448");
	auto constexpr UGameNetworkManager_MAXCLIENTUPDATEINTERVAL_Offset = offsetof(UGameNetworkManager, MAXCLIENTUPDATEINTERVAL);
	static_assert(UGameNetworkManager_MAXCLIENTUPDATEINTERVAL_Offset == 0x44c, "UGameNetworkManager::MAXCLIENTUPDATEINTERVAL offset is not 44c");
	auto constexpr UGameNetworkManager_MaxMoveDeltaTime_Offset = offsetof(UGameNetworkManager, MaxMoveDeltaTime);
	static_assert(UGameNetworkManager_MaxMoveDeltaTime_Offset == 0x450, "UGameNetworkManager::MaxMoveDeltaTime offset is not 450");
	auto constexpr UGameNetworkManager_ClientNetSendMoveDeltaTime_Offset = offsetof(UGameNetworkManager, ClientNetSendMoveDeltaTime);
	static_assert(UGameNetworkManager_ClientNetSendMoveDeltaTime_Offset == 0x454, "UGameNetworkManager::ClientNetSendMoveDeltaTime offset is not 454");
	auto constexpr UGameNetworkManager_ClientNetSendMoveDeltaTimeThrottled_Offset = offsetof(UGameNetworkManager, ClientNetSendMoveDeltaTimeThrottled);
	static_assert(UGameNetworkManager_ClientNetSendMoveDeltaTimeThrottled_Offset == 0x458, "UGameNetworkManager::ClientNetSendMoveDeltaTimeThrottled offset is not 458");
	auto constexpr UGameNetworkManager_ClientNetSendMoveThrottleAtNetSpeed_Offset = offsetof(UGameNetworkManager, ClientNetSendMoveThrottleAtNetSpeed);
	static_assert(UGameNetworkManager_ClientNetSendMoveThrottleAtNetSpeed_Offset == 0x45c, "UGameNetworkManager::ClientNetSendMoveThrottleAtNetSpeed offset is not 45c");
	auto constexpr UGameNetworkManager_ClientNetSendMoveThrottleOverPlayerCount_Offset = offsetof(UGameNetworkManager, ClientNetSendMoveThrottleOverPlayerCount);
	static_assert(UGameNetworkManager_ClientNetSendMoveThrottleOverPlayerCount_Offset == 0x460, "UGameNetworkManager::ClientNetSendMoveThrottleOverPlayerCount offset is not 460");
	auto constexpr UGameNetworkManager_boolField464_Offset = offsetof(UGameNetworkManager, boolField464);
	static_assert(UGameNetworkManager_boolField464_Offset == 0x464, "UGameNetworkManager::boolField464 offset is not 464");
	auto constexpr UGameNetworkManager_ClientErrorUpdateRateLimit_Offset = offsetof(UGameNetworkManager, ClientErrorUpdateRateLimit);
	static_assert(UGameNetworkManager_ClientErrorUpdateRateLimit_Offset == 0x468, "UGameNetworkManager::ClientErrorUpdateRateLimit offset is not 468");
	auto constexpr UGameNetworkManager_boolField46C_Offset = offsetof(UGameNetworkManager, boolField46C);
	static_assert(UGameNetworkManager_boolField46C_Offset == 0x46c, "UGameNetworkManager::boolField46C offset is not 46c");
	auto constexpr UGameNetworkManager_boolField46D_Offset = offsetof(UGameNetworkManager, boolField46D);
	static_assert(UGameNetworkManager_boolField46D_Offset == 0x46d, "UGameNetworkManager::boolField46D offset is not 46d");
	auto constexpr UGameNetworkManager_MovementTimeDiscrepancyResolutionMinFPS_Offset = offsetof(UGameNetworkManager, MovementTimeDiscrepancyResolutionMinFPS);
	static_assert(UGameNetworkManager_MovementTimeDiscrepancyResolutionMinFPS_Offset == 0x470, "UGameNetworkManager::MovementTimeDiscrepancyResolutionMinFPS offset is not 470");
	auto constexpr UGameNetworkManager_MovementTimeDiscrepancyMaxTimeMargin_Offset = offsetof(UGameNetworkManager, MovementTimeDiscrepancyMaxTimeMargin);
	static_assert(UGameNetworkManager_MovementTimeDiscrepancyMaxTimeMargin_Offset == 0x474, "UGameNetworkManager::MovementTimeDiscrepancyMaxTimeMargin offset is not 474");
	auto constexpr UGameNetworkManager_MovementTimeDiscrepancyMinTimeMargin_Offset = offsetof(UGameNetworkManager, MovementTimeDiscrepancyMinTimeMargin);
	static_assert(UGameNetworkManager_MovementTimeDiscrepancyMinTimeMargin_Offset == 0x478, "UGameNetworkManager::MovementTimeDiscrepancyMinTimeMargin offset is not 478");
	auto constexpr UGameNetworkManager_MovementTimeDiscrepancyResolutionRate_Offset = offsetof(UGameNetworkManager, MovementTimeDiscrepancyResolutionRate);
	static_assert(UGameNetworkManager_MovementTimeDiscrepancyResolutionRate_Offset == 0x47c, "UGameNetworkManager::MovementTimeDiscrepancyResolutionRate offset is not 47c");
	auto constexpr UGameNetworkManager_MovementTimeDiscrepancyDriftAllowance_Offset = offsetof(UGameNetworkManager, MovementTimeDiscrepancyDriftAllowance);
	static_assert(UGameNetworkManager_MovementTimeDiscrepancyDriftAllowance_Offset == 0x480, "UGameNetworkManager::MovementTimeDiscrepancyDriftAllowance offset is not 480");
	auto constexpr UGameNetworkManager_boolField484_Offset = offsetof(UGameNetworkManager, boolField484);
	static_assert(UGameNetworkManager_boolField484_Offset == 0x484, "UGameNetworkManager::boolField484 offset is not 484");
	auto constexpr UGameNetworkManager_boolField485_Offset = offsetof(UGameNetworkManager, boolField485);
	static_assert(UGameNetworkManager_boolField485_Offset == 0x485, "UGameNetworkManager::boolField485 offset is not 485");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
