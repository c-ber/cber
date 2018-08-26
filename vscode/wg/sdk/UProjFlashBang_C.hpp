#pragma once
#include "UTslProjectile.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UProjFlashBang_C // Size: 0x610
	: public UTslProjectile // Size: 0x5B0
{
private:
	typedef UProjFlashBang_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(126056); // id32("BlueprintGeneratedClass ProjFlashBang.ProjFlashBang_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x5B0 Size: 0x8 - StructProperty ProjFlashBang.ProjFlashBang_C.UberGraphFrame */
	ExternalPtr<struct UFlashbangComponent> FlashBang; /* Ofs: 0x5B8 Size: 0x8 - ObjectProperty ProjFlashBang.ProjFlashBang_C.FlashBang */
	ExternalPtr<struct UTslCharacter> LocalShooterCharacter; /* Ofs: 0x5C0 Size: 0x8 - ObjectProperty ProjFlashBang.ProjFlashBang_C.LocalShooterCharacter */
	FVector ExplodeLocation; /* Ofs: 0x5C8 Size: 0xC - StructProperty ProjFlashBang.ProjFlashBang_C.ExplodeLocation */
	uint8_t UnknownData5D4[0x4];
	ExternalPtr<struct UClass> FlashbangEffectClass; /* Ofs: 0x5D8 Size: 0x8 - ClassProperty ProjFlashBang.ProjFlashBang_C.FlashbangEffectClass */
	TArray<ExternalPtr<struct UAkAudioEvent>> TinnitusSoundAks; /* Ofs: 0x5E0 Size: 0x10 - ArrayProperty ProjFlashBang.ProjFlashBang_C.TinnitusSoundAks */
	float MinPower; /* Ofs: 0x5F0 Size: 0x4 - FloatProperty ProjFlashBang.ProjFlashBang_C.MinPower */
	uint8_t UnknownData5F4[0x4];
	ExternalPtr<struct UCurveFloat> AnglePower; /* Ofs: 0x5F8 Size: 0x8 - ObjectProperty ProjFlashBang.ProjFlashBang_C.AnglePower */
	ExternalPtr<struct UCurveFloat> DistancePower; /* Ofs: 0x600 Size: 0x8 - ObjectProperty ProjFlashBang.ProjFlashBang_C.DistancePower */
	ExternalPtr<struct UCanvasRenderTarget2D> NewVar_2; /* Ofs: 0x608 Size: 0x8 - ObjectProperty ProjFlashBang.ProjFlashBang_C.NewVar_2 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetFlashBang(t_structHelper inst, ExternalPtr<struct UFlashbangComponent> value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetLocalShooterCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x5C0, value); }
	inline bool SetExplodeLocation(t_structHelper inst, FVector value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetFlashbangEffectClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetTinnitusSoundAks(t_structHelper inst, TArray<ExternalPtr<struct UAkAudioEvent>> value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetMinPower(t_structHelper inst, float value) { inst.WriteOffset(0x5F0, value); }
	inline bool SetAnglePower(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x5F8, value); }
	inline bool SetDistancePower(t_structHelper inst, ExternalPtr<struct UCurveFloat> value) { inst.WriteOffset(0x600, value); }
	inline bool SetNewVar_2(t_structHelper inst, ExternalPtr<struct UCanvasRenderTarget2D> value) { inst.WriteOffset(0x608, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUProjFlashBang_C = sizeof(UProjFlashBang_C); // 1552
    static_assert(sizeof(UProjFlashBang_C) == 0x610, "Size of UProjFlashBang_C is not correct.");
	auto constexpr UProjFlashBang_C_UberGraphFrame_Offset = offsetof(UProjFlashBang_C, UberGraphFrame);
	static_assert(UProjFlashBang_C_UberGraphFrame_Offset == 0x5b0, "UProjFlashBang_C::UberGraphFrame offset is not 5b0");
	auto constexpr UProjFlashBang_C_FlashBang_Offset = offsetof(UProjFlashBang_C, FlashBang);
	static_assert(UProjFlashBang_C_FlashBang_Offset == 0x5b8, "UProjFlashBang_C::FlashBang offset is not 5b8");
	auto constexpr UProjFlashBang_C_LocalShooterCharacter_Offset = offsetof(UProjFlashBang_C, LocalShooterCharacter);
	static_assert(UProjFlashBang_C_LocalShooterCharacter_Offset == 0x5c0, "UProjFlashBang_C::LocalShooterCharacter offset is not 5c0");
	auto constexpr UProjFlashBang_C_ExplodeLocation_Offset = offsetof(UProjFlashBang_C, ExplodeLocation);
	static_assert(UProjFlashBang_C_ExplodeLocation_Offset == 0x5c8, "UProjFlashBang_C::ExplodeLocation offset is not 5c8");
	auto constexpr UProjFlashBang_C_FlashbangEffectClass_Offset = offsetof(UProjFlashBang_C, FlashbangEffectClass);
	static_assert(UProjFlashBang_C_FlashbangEffectClass_Offset == 0x5d8, "UProjFlashBang_C::FlashbangEffectClass offset is not 5d8");
	auto constexpr UProjFlashBang_C_TinnitusSoundAks_Offset = offsetof(UProjFlashBang_C, TinnitusSoundAks);
	static_assert(UProjFlashBang_C_TinnitusSoundAks_Offset == 0x5e0, "UProjFlashBang_C::TinnitusSoundAks offset is not 5e0");
	auto constexpr UProjFlashBang_C_MinPower_Offset = offsetof(UProjFlashBang_C, MinPower);
	static_assert(UProjFlashBang_C_MinPower_Offset == 0x5f0, "UProjFlashBang_C::MinPower offset is not 5f0");
	auto constexpr UProjFlashBang_C_AnglePower_Offset = offsetof(UProjFlashBang_C, AnglePower);
	static_assert(UProjFlashBang_C_AnglePower_Offset == 0x5f8, "UProjFlashBang_C::AnglePower offset is not 5f8");
	auto constexpr UProjFlashBang_C_DistancePower_Offset = offsetof(UProjFlashBang_C, DistancePower);
	static_assert(UProjFlashBang_C_DistancePower_Offset == 0x600, "UProjFlashBang_C::DistancePower offset is not 600");
	auto constexpr UProjFlashBang_C_NewVar_2_Offset = offsetof(UProjFlashBang_C, NewVar_2);
	static_assert(UProjFlashBang_C_NewVar_2_Offset == 0x608, "UProjFlashBang_C::NewVar_2 offset is not 608");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
