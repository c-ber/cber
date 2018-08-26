#pragma once
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FNiagaraCollisionEventPayload // Size: 0x2C
{
public:
    FVector CollisionPos; /* Ofs: 0x0 Size: 0xC StructProperty Niagara.NiagaraCollisionEventPayload.CollisionPos */
    FVector CollisionNormal; /* Ofs: 0xC Size: 0xC StructProperty Niagara.NiagaraCollisionEventPayload.CollisionNormal */
    int32_t PhysicalMaterialIndex; /* Ofs: 0x18 Size: 0x4 IntProperty Niagara.NiagaraCollisionEventPayload.PhysicalMaterialIndex */
    FVector CollisionVelocity; /* Ofs: 0x1C Size: 0xC StructProperty Niagara.NiagaraCollisionEventPayload.CollisionVelocity */
    int32_t ParticleIndex; /* Ofs: 0x28 Size: 0x4 IntProperty Niagara.NiagaraCollisionEventPayload.ParticleIndex */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFNiagaraCollisionEventPayload = sizeof(FNiagaraCollisionEventPayload); // 44
    static_assert(sizeof(FNiagaraCollisionEventPayload) == 0x2C, "Size of FNiagaraCollisionEventPayload is not correct.");
	auto constexpr FNiagaraCollisionEventPayload_CollisionPos_Offset = offsetof(FNiagaraCollisionEventPayload, CollisionPos);
	static_assert(FNiagaraCollisionEventPayload_CollisionPos_Offset == 0x0, "FNiagaraCollisionEventPayload::CollisionPos offset is not 0");
	auto constexpr FNiagaraCollisionEventPayload_CollisionNormal_Offset = offsetof(FNiagaraCollisionEventPayload, CollisionNormal);
	static_assert(FNiagaraCollisionEventPayload_CollisionNormal_Offset == 0xc, "FNiagaraCollisionEventPayload::CollisionNormal offset is not c");
	auto constexpr FNiagaraCollisionEventPayload_PhysicalMaterialIndex_Offset = offsetof(FNiagaraCollisionEventPayload, PhysicalMaterialIndex);
	static_assert(FNiagaraCollisionEventPayload_PhysicalMaterialIndex_Offset == 0x18, "FNiagaraCollisionEventPayload::PhysicalMaterialIndex offset is not 18");
	auto constexpr FNiagaraCollisionEventPayload_CollisionVelocity_Offset = offsetof(FNiagaraCollisionEventPayload, CollisionVelocity);
	static_assert(FNiagaraCollisionEventPayload_CollisionVelocity_Offset == 0x1c, "FNiagaraCollisionEventPayload::CollisionVelocity offset is not 1c");
	auto constexpr FNiagaraCollisionEventPayload_ParticleIndex_Offset = offsetof(FNiagaraCollisionEventPayload, ParticleIndex);
	static_assert(FNiagaraCollisionEventPayload_ParticleIndex_Offset == 0x28, "FNiagaraCollisionEventPayload::ParticleIndex offset is not 28");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
