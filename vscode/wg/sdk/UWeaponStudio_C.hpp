#pragma once
#include "UWeaponStudio.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "EWeaponAttachmentSlotID.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeaponStudio_C // Size: 0x570
	: public UWeaponStudio // Size: 0x4E0
{
private:
	typedef UWeaponStudio_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(61085); // id32("BlueprintGeneratedClass WeaponStudio.WeaponStudio_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x4E0 Size: 0x8 - StructProperty WeaponStudio.WeaponStudio_C.UberGraphFrame */
	ExternalPtr<struct USkeletalMeshComponent> WeaponMesh; /* Ofs: 0x4E8 Size: 0x8 - ObjectProperty WeaponStudio.WeaponStudio_C.WeaponMesh */
	ExternalPtr<struct USceneComponent> Scene; /* Ofs: 0x4F0 Size: 0x8 - ObjectProperty WeaponStudio.WeaponStudio_C.Scene */
	ExternalPtr<struct UAsyncStaticMeshComponent> Stock; /* Ofs: 0x4F8 Size: 0x8 - ObjectProperty WeaponStudio.WeaponStudio_C.Stock */
	ExternalPtr<struct UAsyncStaticMeshComponent> Magazine; /* Ofs: 0x500 Size: 0x8 - ObjectProperty WeaponStudio.WeaponStudio_C.Magazine */
	ExternalPtr<struct UAsyncStaticMeshComponent> UperRail; /* Ofs: 0x508 Size: 0x8 - ObjectProperty WeaponStudio.WeaponStudio_C.UperRail */
	ExternalPtr<struct UAsyncStaticMeshComponent> LowerRail; /* Ofs: 0x510 Size: 0x8 - ObjectProperty WeaponStudio.WeaponStudio_C.LowerRail */
	ExternalPtr<struct UAsyncStaticMeshComponent> Muzzle; /* Ofs: 0x518 Size: 0x8 - ObjectProperty WeaponStudio.WeaponStudio_C.Muzzle */
	TMap<EWeaponAttachmentSlotID, struct UAsyncStaticMeshComponent> AttachmentMaps; /* Ofs: 0x520 Size: 0x50 - MapProperty WeaponStudio.WeaponStudio_C.AttachmentMaps */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetWeaponMesh(t_structHelper inst, ExternalPtr<struct USkeletalMeshComponent> value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetScene(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetStock(t_structHelper inst, ExternalPtr<struct UAsyncStaticMeshComponent> value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetMagazine(t_structHelper inst, ExternalPtr<struct UAsyncStaticMeshComponent> value) { inst.WriteOffset(0x500, value); }
	inline bool SetUperRail(t_structHelper inst, ExternalPtr<struct UAsyncStaticMeshComponent> value) { inst.WriteOffset(0x508, value); }
	inline bool SetLowerRail(t_structHelper inst, ExternalPtr<struct UAsyncStaticMeshComponent> value) { inst.WriteOffset(0x510, value); }
	inline bool SetMuzzle(t_structHelper inst, ExternalPtr<struct UAsyncStaticMeshComponent> value) { inst.WriteOffset(0x518, value); }
	inline bool SetAttachmentMaps(t_structHelper inst, TMap<EWeaponAttachmentSlotID, struct UAsyncStaticMeshComponent> value) { inst.WriteOffset(0x520, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeaponStudio_C = sizeof(UWeaponStudio_C); // 1392
    static_assert(sizeof(UWeaponStudio_C) == 0x570, "Size of UWeaponStudio_C is not correct.");
	auto constexpr UWeaponStudio_C_UberGraphFrame_Offset = offsetof(UWeaponStudio_C, UberGraphFrame);
	static_assert(UWeaponStudio_C_UberGraphFrame_Offset == 0x4e0, "UWeaponStudio_C::UberGraphFrame offset is not 4e0");
	auto constexpr UWeaponStudio_C_WeaponMesh_Offset = offsetof(UWeaponStudio_C, WeaponMesh);
	static_assert(UWeaponStudio_C_WeaponMesh_Offset == 0x4e8, "UWeaponStudio_C::WeaponMesh offset is not 4e8");
	auto constexpr UWeaponStudio_C_Scene_Offset = offsetof(UWeaponStudio_C, Scene);
	static_assert(UWeaponStudio_C_Scene_Offset == 0x4f0, "UWeaponStudio_C::Scene offset is not 4f0");
	auto constexpr UWeaponStudio_C_Stock_Offset = offsetof(UWeaponStudio_C, Stock);
	static_assert(UWeaponStudio_C_Stock_Offset == 0x4f8, "UWeaponStudio_C::Stock offset is not 4f8");
	auto constexpr UWeaponStudio_C_Magazine_Offset = offsetof(UWeaponStudio_C, Magazine);
	static_assert(UWeaponStudio_C_Magazine_Offset == 0x500, "UWeaponStudio_C::Magazine offset is not 500");
	auto constexpr UWeaponStudio_C_UperRail_Offset = offsetof(UWeaponStudio_C, UperRail);
	static_assert(UWeaponStudio_C_UperRail_Offset == 0x508, "UWeaponStudio_C::UperRail offset is not 508");
	auto constexpr UWeaponStudio_C_LowerRail_Offset = offsetof(UWeaponStudio_C, LowerRail);
	static_assert(UWeaponStudio_C_LowerRail_Offset == 0x510, "UWeaponStudio_C::LowerRail offset is not 510");
	auto constexpr UWeaponStudio_C_Muzzle_Offset = offsetof(UWeaponStudio_C, Muzzle);
	static_assert(UWeaponStudio_C_Muzzle_Offset == 0x518, "UWeaponStudio_C::Muzzle offset is not 518");
	auto constexpr UWeaponStudio_C_AttachmentMaps_Offset = offsetof(UWeaponStudio_C, AttachmentMaps);
	static_assert(UWeaponStudio_C_AttachmentMaps_Offset == 0x520, "UWeaponStudio_C::AttachmentMaps offset is not 520");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
