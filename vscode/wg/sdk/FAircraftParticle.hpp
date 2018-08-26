#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FAircraftParticle // Size: 0x10
{
public:
    ExternalPtr<struct UClass> ParticleClass; /* Ofs: 0x0 Size: 0x8 ClassProperty TslGame.AircraftParticle.ParticleClass */
    FName AttachSocket; /* Ofs: 0x8 Size: 0x8 NameProperty TslGame.AircraftParticle.AttachSocket */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFAircraftParticle = sizeof(FAircraftParticle); // 16
    static_assert(sizeof(FAircraftParticle) == 0x10, "Size of FAircraftParticle is not correct.");
	auto constexpr FAircraftParticle_ParticleClass_Offset = offsetof(FAircraftParticle, ParticleClass);
	static_assert(FAircraftParticle_ParticleClass_Offset == 0x0, "FAircraftParticle::ParticleClass offset is not 0");
	auto constexpr FAircraftParticle_AttachSocket_Offset = offsetof(FAircraftParticle, AttachSocket);
	static_assert(FAircraftParticle_AttachSocket_Offset == 0x8, "FAircraftParticle::AttachSocket offset is not 8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
