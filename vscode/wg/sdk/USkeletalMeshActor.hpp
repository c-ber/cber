#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USkeletalMeshActor // Size: 0x490
	: public UActor // Size: 0x410
{
private:
	typedef USkeletalMeshActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1787); // id32("Class Engine.SkeletalMeshActor")
		return ptr;
	}
	uint8_t boolField410;
	uint8_t UnknownData411[0x7];
	ExternalPtr<struct USkeletalMeshComponent> SkeletalMeshComponent; /* Ofs: 0x418 Size: 0x8 - ObjectProperty Engine.SkeletalMeshActor.SkeletalMeshComponent */
	ExternalPtr<struct USkeletalMesh> ReplicatedMesh; /* Ofs: 0x420 Size: 0x8 - ObjectProperty Engine.SkeletalMeshActor.ReplicatedMesh */
	ExternalPtr<struct UPhysicsAsset> ReplicatedPhysAsset; /* Ofs: 0x428 Size: 0x8 - ObjectProperty Engine.SkeletalMeshActor.ReplicatedPhysAsset */
	ExternalPtr<struct UMaterialInterface> ReplicatedMaterial0; /* Ofs: 0x430 Size: 0x8 - ObjectProperty Engine.SkeletalMeshActor.ReplicatedMaterial0 */
	ExternalPtr<struct UMaterialInterface> ReplicatedMaterial1; /* Ofs: 0x438 Size: 0x8 - ObjectProperty Engine.SkeletalMeshActor.ReplicatedMaterial1 */
	uint8_t UnknownData440[0x50];


	inline bool bShouldDoAnimNotifies()
	{
		return boolField410& 0x1;
	}
	inline bool SetbShouldDoAnimNotifies(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bWakeOnLevelStart()
	{
		return boolField410& 0x2;
	}
	inline bool SetbWakeOnLevelStart(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x410, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool SetSkeletalMeshComponent(t_structHelper inst, ExternalPtr<struct USkeletalMeshComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetReplicatedMesh(t_structHelper inst, ExternalPtr<struct USkeletalMesh> value) { inst.WriteOffset(0x420, value); }
	inline bool SetReplicatedPhysAsset(t_structHelper inst, ExternalPtr<struct UPhysicsAsset> value) { inst.WriteOffset(0x428, value); }
	inline bool SetReplicatedMaterial0(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x430, value); }
	inline bool SetReplicatedMaterial1(t_structHelper inst, ExternalPtr<struct UMaterialInterface> value) { inst.WriteOffset(0x438, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSkeletalMeshActor = sizeof(USkeletalMeshActor); // 1168
    static_assert(sizeof(USkeletalMeshActor) == 0x490, "Size of USkeletalMeshActor is not correct.");
	auto constexpr USkeletalMeshActor_boolField410_Offset = offsetof(USkeletalMeshActor, boolField410);
	static_assert(USkeletalMeshActor_boolField410_Offset == 0x410, "USkeletalMeshActor::boolField410 offset is not 410");
	auto constexpr USkeletalMeshActor_SkeletalMeshComponent_Offset = offsetof(USkeletalMeshActor, SkeletalMeshComponent);
	static_assert(USkeletalMeshActor_SkeletalMeshComponent_Offset == 0x418, "USkeletalMeshActor::SkeletalMeshComponent offset is not 418");
	auto constexpr USkeletalMeshActor_ReplicatedMesh_Offset = offsetof(USkeletalMeshActor, ReplicatedMesh);
	static_assert(USkeletalMeshActor_ReplicatedMesh_Offset == 0x420, "USkeletalMeshActor::ReplicatedMesh offset is not 420");
	auto constexpr USkeletalMeshActor_ReplicatedPhysAsset_Offset = offsetof(USkeletalMeshActor, ReplicatedPhysAsset);
	static_assert(USkeletalMeshActor_ReplicatedPhysAsset_Offset == 0x428, "USkeletalMeshActor::ReplicatedPhysAsset offset is not 428");
	auto constexpr USkeletalMeshActor_ReplicatedMaterial0_Offset = offsetof(USkeletalMeshActor, ReplicatedMaterial0);
	static_assert(USkeletalMeshActor_ReplicatedMaterial0_Offset == 0x430, "USkeletalMeshActor::ReplicatedMaterial0 offset is not 430");
	auto constexpr USkeletalMeshActor_ReplicatedMaterial1_Offset = offsetof(USkeletalMeshActor, ReplicatedMaterial1);
	static_assert(USkeletalMeshActor_ReplicatedMaterial1_Offset == 0x438, "USkeletalMeshActor::ReplicatedMaterial1 offset is not 438");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
