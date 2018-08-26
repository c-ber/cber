#pragma once
#include "UDamageType.hpp"
#include "EDamageTypeCategory.hpp"
#include "FCanvasIcon.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslDamageType // Size: 0xB0
	: public UDamageType // Size: 0x48
{
private:
	typedef UTslDamageType t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1318); // id32("Class TslGame.TslDamageType")
		return ptr;
	}
	TEnumAsByte<enum EDamageTypeCategory> DamageTypeCategory; /* Ofs: 0x48 Size: 0x1 - EnumProperty TslGame.TslDamageType.DamageTypeCategory */
	uint8_t UnknownData49[0x7];
	FCanvasIcon KillIcon; /* Ofs: 0x50 Size: 0x18 - StructProperty TslGame.TslDamageType.KillIcon */
	ExternalPtr<struct UForceFeedbackEffect> HitForceFeedback; /* Ofs: 0x68 Size: 0x8 - ObjectProperty TslGame.TslDamageType.HitForceFeedback */
	ExternalPtr<struct UForceFeedbackEffect> KilledForceFeedback; /* Ofs: 0x70 Size: 0x8 - ObjectProperty TslGame.TslDamageType.KilledForceFeedback */
	uint8_t boolField78;
	uint8_t UnknownData79[0x7];
	TArray<struct FDamageRatioInfo> DamageRatioInfos; /* Ofs: 0x80 Size: 0x10 - ArrayProperty TslGame.TslDamageType.DamageRatioInfos */
	TArray<struct FDamageRatioInfo> DamageRatioInfos_Console; /* Ofs: 0x90 Size: 0x10 - ArrayProperty TslGame.TslDamageType.DamageRatioInfos_Console */
	uint8_t boolFieldA0;
	uint8_t boolFieldA1;
	uint8_t boolFieldA2;
	uint8_t UnknownDataA3[0x5];
	ExternalPtr<struct UClass> DamageCameraShake; /* Ofs: 0xA8 Size: 0x8 - ClassProperty TslGame.TslDamageType.DamageCameraShake */


	inline bool SetDamageTypeCategory(t_structHelper inst, TEnumAsByte<enum EDamageTypeCategory> value) { inst.WriteOffset(0x48, value); }
	inline bool SetKillIcon(t_structHelper inst, FCanvasIcon value) { inst.WriteOffset(0x50, value); }
	inline bool SetHitForceFeedback(t_structHelper inst, ExternalPtr<struct UForceFeedbackEffect> value) { inst.WriteOffset(0x68, value); }
	inline bool SetKilledForceFeedback(t_structHelper inst, ExternalPtr<struct UForceFeedbackEffect> value) { inst.WriteOffset(0x70, value); }
	inline bool bFallDamage()
	{
		return boolField78& 0x1;
	}
	inline bool SetbFallDamage(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x78, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDamageRatioInfos(t_structHelper inst, TArray<struct FDamageRatioInfo> value) { inst.WriteOffset(0x80, value); }
	inline bool SetDamageRatioInfos_Console(t_structHelper inst, TArray<struct FDamageRatioInfo> value) { inst.WriteOffset(0x90, value); }
	inline bool bIgnoreCharacterImpulse()
	{
		return boolFieldA0& 0x1;
	}
	inline bool SetbIgnoreCharacterImpulse(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool HitReaction()
	{
		return boolFieldA1& 0x1;
	}
	inline bool SetHitReaction(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseDamageCameraShake()
	{
		return boolFieldA2& 0x1;
	}
	inline bool SetbUseDamageCameraShake(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA2, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetDamageCameraShake(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xA8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslDamageType = sizeof(UTslDamageType); // 176
    static_assert(sizeof(UTslDamageType) == 0xB0, "Size of UTslDamageType is not correct.");
	auto constexpr UTslDamageType_DamageTypeCategory_Offset = offsetof(UTslDamageType, DamageTypeCategory);
	static_assert(UTslDamageType_DamageTypeCategory_Offset == 0x48, "UTslDamageType::DamageTypeCategory offset is not 48");
	auto constexpr UTslDamageType_KillIcon_Offset = offsetof(UTslDamageType, KillIcon);
	static_assert(UTslDamageType_KillIcon_Offset == 0x50, "UTslDamageType::KillIcon offset is not 50");
	auto constexpr UTslDamageType_HitForceFeedback_Offset = offsetof(UTslDamageType, HitForceFeedback);
	static_assert(UTslDamageType_HitForceFeedback_Offset == 0x68, "UTslDamageType::HitForceFeedback offset is not 68");
	auto constexpr UTslDamageType_KilledForceFeedback_Offset = offsetof(UTslDamageType, KilledForceFeedback);
	static_assert(UTslDamageType_KilledForceFeedback_Offset == 0x70, "UTslDamageType::KilledForceFeedback offset is not 70");
	auto constexpr UTslDamageType_boolField78_Offset = offsetof(UTslDamageType, boolField78);
	static_assert(UTslDamageType_boolField78_Offset == 0x78, "UTslDamageType::boolField78 offset is not 78");
	auto constexpr UTslDamageType_DamageRatioInfos_Offset = offsetof(UTslDamageType, DamageRatioInfos);
	static_assert(UTslDamageType_DamageRatioInfos_Offset == 0x80, "UTslDamageType::DamageRatioInfos offset is not 80");
	auto constexpr UTslDamageType_DamageRatioInfos_Console_Offset = offsetof(UTslDamageType, DamageRatioInfos_Console);
	static_assert(UTslDamageType_DamageRatioInfos_Console_Offset == 0x90, "UTslDamageType::DamageRatioInfos_Console offset is not 90");
	auto constexpr UTslDamageType_boolFieldA0_Offset = offsetof(UTslDamageType, boolFieldA0);
	static_assert(UTslDamageType_boolFieldA0_Offset == 0xa0, "UTslDamageType::boolFieldA0 offset is not a0");
	auto constexpr UTslDamageType_boolFieldA1_Offset = offsetof(UTslDamageType, boolFieldA1);
	static_assert(UTslDamageType_boolFieldA1_Offset == 0xa1, "UTslDamageType::boolFieldA1 offset is not a1");
	auto constexpr UTslDamageType_boolFieldA2_Offset = offsetof(UTslDamageType, boolFieldA2);
	static_assert(UTslDamageType_boolFieldA2_Offset == 0xa2, "UTslDamageType::boolFieldA2 offset is not a2");
	auto constexpr UTslDamageType_DamageCameraShake_Offset = offsetof(UTslDamageType, DamageCameraShake);
	static_assert(UTslDamageType_DamageCameraShake_Offset == 0xa8, "UTslDamageType::DamageCameraShake offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
