#pragma once
#include "UTslProjectile.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProjSmokeBomb_v2_C // Size: 0x5F8
	: public UTslProjectile // Size: 0x5B0
{
private:
	typedef UProjSmokeBomb_v2_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(125750); // id32("BlueprintGeneratedClass ProjSmokeBomb_v2.ProjSmokeBomb_v2_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x5B0 Size: 0x8 - StructProperty ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.UberGraphFrame */
	ExternalPtr<struct UTslWorldOffsetComponent> TslWorldOffset; /* Ofs: 0x5B8 Size: 0x8 - ObjectProperty ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.TslWorldOffset */
	ExternalPtr<struct UAkAudioEvent> StartSmokeSound; /* Ofs: 0x5C0 Size: 0x8 - ObjectProperty ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.StartSmokeSound */
	ExternalPtr<struct UAkAudioEvent> EndSmokeSound; /* Ofs: 0x5C8 Size: 0x8 - ObjectProperty ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.EndSmokeSound */
	float HitTimer; /* Ofs: 0x5D0 Size: 0x4 - FloatProperty ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.HitTimer */
	float HitImpactMin; /* Ofs: 0x5D4 Size: 0x4 - FloatProperty ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.HitImpactMin */
	float HitImpactMax; /* Ofs: 0x5D8 Size: 0x4 - FloatProperty ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.HitImpactMax */
	float HitMinVelocity; /* Ofs: 0x5DC Size: 0x4 - FloatProperty ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.HitMinVelocity */
	float HitTimeDelay; /* Ofs: 0x5E0 Size: 0x4 - FloatProperty ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.HitTimeDelay */
	uint8_t boolField5E4;
	uint8_t UnknownData5E5[0x3];
	float ReleaseBuffer; /* Ofs: 0x5E8 Size: 0x4 - FloatProperty ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.ReleaseBuffer */
	FVector ActorLocLastTick; /* Ofs: 0x5EC Size: 0xC - StructProperty ProjSmokeBomb_v2.ProjSmokeBomb_v2_C.ActorLocLastTick */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetTslWorldOffset(t_structHelper inst, ExternalPtr<struct UTslWorldOffsetComponent> value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetStartSmokeSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x5C0, value); }
	inline bool SetEndSmokeSound(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetHitTimer(t_structHelper inst, float value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetHitImpactMin(t_structHelper inst, float value) { inst.WriteOffset(0x5D4, value); }
	inline bool SetHitImpactMax(t_structHelper inst, float value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetHitMinVelocity(t_structHelper inst, float value) { inst.WriteOffset(0x5DC, value); }
	inline bool SetHitTimeDelay(t_structHelper inst, float value) { inst.WriteOffset(0x5E0, value); }
	inline bool bSmokeSpawned()
	{
		return boolField5E4& 0x1;
	}
	inline bool SetbSmokeSpawned(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x5E4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetReleaseBuffer(t_structHelper inst, float value) { inst.WriteOffset(0x5E8, value); }
	inline bool SetActorLocLastTick(t_structHelper inst, FVector value) { inst.WriteOffset(0x5EC, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProjSmokeBomb_v2_C = sizeof(UProjSmokeBomb_v2_C); // 1528
    static_assert(sizeof(UProjSmokeBomb_v2_C) == 0x5F8, "Size of UProjSmokeBomb_v2_C is not correct.");
	auto constexpr UProjSmokeBomb_v2_C_UberGraphFrame_Offset = offsetof(UProjSmokeBomb_v2_C, UberGraphFrame);
	static_assert(UProjSmokeBomb_v2_C_UberGraphFrame_Offset == 0x5b0, "UProjSmokeBomb_v2_C::UberGraphFrame offset is not 5b0");
	auto constexpr UProjSmokeBomb_v2_C_TslWorldOffset_Offset = offsetof(UProjSmokeBomb_v2_C, TslWorldOffset);
	static_assert(UProjSmokeBomb_v2_C_TslWorldOffset_Offset == 0x5b8, "UProjSmokeBomb_v2_C::TslWorldOffset offset is not 5b8");
	auto constexpr UProjSmokeBomb_v2_C_StartSmokeSound_Offset = offsetof(UProjSmokeBomb_v2_C, StartSmokeSound);
	static_assert(UProjSmokeBomb_v2_C_StartSmokeSound_Offset == 0x5c0, "UProjSmokeBomb_v2_C::StartSmokeSound offset is not 5c0");
	auto constexpr UProjSmokeBomb_v2_C_EndSmokeSound_Offset = offsetof(UProjSmokeBomb_v2_C, EndSmokeSound);
	static_assert(UProjSmokeBomb_v2_C_EndSmokeSound_Offset == 0x5c8, "UProjSmokeBomb_v2_C::EndSmokeSound offset is not 5c8");
	auto constexpr UProjSmokeBomb_v2_C_HitTimer_Offset = offsetof(UProjSmokeBomb_v2_C, HitTimer);
	static_assert(UProjSmokeBomb_v2_C_HitTimer_Offset == 0x5d0, "UProjSmokeBomb_v2_C::HitTimer offset is not 5d0");
	auto constexpr UProjSmokeBomb_v2_C_HitImpactMin_Offset = offsetof(UProjSmokeBomb_v2_C, HitImpactMin);
	static_assert(UProjSmokeBomb_v2_C_HitImpactMin_Offset == 0x5d4, "UProjSmokeBomb_v2_C::HitImpactMin offset is not 5d4");
	auto constexpr UProjSmokeBomb_v2_C_HitImpactMax_Offset = offsetof(UProjSmokeBomb_v2_C, HitImpactMax);
	static_assert(UProjSmokeBomb_v2_C_HitImpactMax_Offset == 0x5d8, "UProjSmokeBomb_v2_C::HitImpactMax offset is not 5d8");
	auto constexpr UProjSmokeBomb_v2_C_HitMinVelocity_Offset = offsetof(UProjSmokeBomb_v2_C, HitMinVelocity);
	static_assert(UProjSmokeBomb_v2_C_HitMinVelocity_Offset == 0x5dc, "UProjSmokeBomb_v2_C::HitMinVelocity offset is not 5dc");
	auto constexpr UProjSmokeBomb_v2_C_HitTimeDelay_Offset = offsetof(UProjSmokeBomb_v2_C, HitTimeDelay);
	static_assert(UProjSmokeBomb_v2_C_HitTimeDelay_Offset == 0x5e0, "UProjSmokeBomb_v2_C::HitTimeDelay offset is not 5e0");
	auto constexpr UProjSmokeBomb_v2_C_boolField5E4_Offset = offsetof(UProjSmokeBomb_v2_C, boolField5E4);
	static_assert(UProjSmokeBomb_v2_C_boolField5E4_Offset == 0x5e4, "UProjSmokeBomb_v2_C::boolField5E4 offset is not 5e4");
	auto constexpr UProjSmokeBomb_v2_C_ReleaseBuffer_Offset = offsetof(UProjSmokeBomb_v2_C, ReleaseBuffer);
	static_assert(UProjSmokeBomb_v2_C_ReleaseBuffer_Offset == 0x5e8, "UProjSmokeBomb_v2_C::ReleaseBuffer offset is not 5e8");
	auto constexpr UProjSmokeBomb_v2_C_ActorLocLastTick_Offset = offsetof(UProjSmokeBomb_v2_C, ActorLocLastTick);
	static_assert(UProjSmokeBomb_v2_C_ActorLocLastTick_Offset == 0x5ec, "UProjSmokeBomb_v2_C::ActorLocLastTick offset is not 5ec");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
