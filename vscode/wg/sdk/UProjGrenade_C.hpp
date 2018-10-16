#pragma once
#include "UTslProjectile.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProjGrenade_C // Size: 0x5E0
	: public UTslProjectile // Size: 0x5B0
{
private:
	typedef UProjGrenade_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(127516); // id32("BlueprintGeneratedClass ProjGrenade.ProjGrenade_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x5B0 Size: 0x8 - StructProperty ProjGrenade.ProjGrenade_C.UberGraphFrame */
	FVector ExplodeLocation; /* Ofs: 0x5B8 Size: 0xC - StructProperty ProjGrenade.ProjGrenade_C.ExplodeLocation */
	uint8_t UnknownData5C4[0x4];
	ExternalPtr<struct UTslCharacter> LocalShooterCharacter; /* Ofs: 0x5C8 Size: 0x8 - ObjectProperty ProjGrenade.ProjGrenade_C.LocalShooterCharacter */
	ExternalPtr<struct UAkAudioEvent> Tinnitus_Proximity; /* Ofs: 0x5D0 Size: 0x8 - ObjectProperty ProjGrenade.ProjGrenade_C.Tinnitus_Proximity */
	ExternalPtr<struct UAkAudioEvent> Tinnitus_Direct; /* Ofs: 0x5D8 Size: 0x8 - ObjectProperty ProjGrenade.ProjGrenade_C.Tinnitus_Direct */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetExplodeLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetLocalShooterCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetTinnitus_Proximity(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetTinnitus_Direct(t_structHelper inst, ExternalPtr<struct UAkAudioEvent> value) { inst.WriteOffset(0x5D8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProjGrenade_C = sizeof(UProjGrenade_C); // 1504
    static_assert(sizeof(UProjGrenade_C) == 0x5E0, "Size of UProjGrenade_C is not correct.");
	auto constexpr UProjGrenade_C_UberGraphFrame_Offset = offsetof(UProjGrenade_C, UberGraphFrame);
	static_assert(UProjGrenade_C_UberGraphFrame_Offset == 0x5b0, "UProjGrenade_C::UberGraphFrame offset is not 5b0");
	auto constexpr UProjGrenade_C_ExplodeLocation_Offset = offsetof(UProjGrenade_C, ExplodeLocation);
	static_assert(UProjGrenade_C_ExplodeLocation_Offset == 0x5b8, "UProjGrenade_C::ExplodeLocation offset is not 5b8");
	auto constexpr UProjGrenade_C_LocalShooterCharacter_Offset = offsetof(UProjGrenade_C, LocalShooterCharacter);
	static_assert(UProjGrenade_C_LocalShooterCharacter_Offset == 0x5c8, "UProjGrenade_C::LocalShooterCharacter offset is not 5c8");
	auto constexpr UProjGrenade_C_Tinnitus_Proximity_Offset = offsetof(UProjGrenade_C, Tinnitus_Proximity);
	static_assert(UProjGrenade_C_Tinnitus_Proximity_Offset == 0x5d0, "UProjGrenade_C::Tinnitus_Proximity offset is not 5d0");
	auto constexpr UProjGrenade_C_Tinnitus_Direct_Offset = offsetof(UProjGrenade_C, Tinnitus_Direct);
	static_assert(UProjGrenade_C_Tinnitus_Direct_Offset == 0x5d8, "UProjGrenade_C::Tinnitus_Direct offset is not 5d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
