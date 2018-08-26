#pragma once
#include "UTslParticle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslParticleEnvironment // Size: 0x490
	: public UTslParticle // Size: 0x470
{
private:
	typedef UTslParticleEnvironment t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1464); // id32("Class TslGame.TslParticleEnvironment")
		return ptr;
	}
	uint8_t UnknownData470[0x10];
	float AutoParticleActivateDistance; /* Ofs: 0x480 Size: 0x4 - FloatProperty TslGame.TslParticleEnvironment.AutoParticleActivateDistance */
	float AutoPlayDistance; /* Ofs: 0x484 Size: 0x4 - FloatProperty TslGame.TslParticleEnvironment.AutoPlayDistance */
	uint8_t UnknownData488[0x8];


	inline bool SetAutoParticleActivateDistance(t_structHelper inst, float value) { inst.WriteOffset(0x480, value); }
	inline bool SetAutoPlayDistance(t_structHelper inst, float value) { inst.WriteOffset(0x484, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslParticleEnvironment = sizeof(UTslParticleEnvironment); // 1168
    static_assert(sizeof(UTslParticleEnvironment) == 0x490, "Size of UTslParticleEnvironment is not correct.");
	auto constexpr UTslParticleEnvironment_AutoParticleActivateDistance_Offset = offsetof(UTslParticleEnvironment, AutoParticleActivateDistance);
	static_assert(UTslParticleEnvironment_AutoParticleActivateDistance_Offset == 0x480, "UTslParticleEnvironment::AutoParticleActivateDistance offset is not 480");
	auto constexpr UTslParticleEnvironment_AutoPlayDistance_Offset = offsetof(UTslParticleEnvironment, AutoPlayDistance);
	static_assert(UTslParticleEnvironment_AutoPlayDistance_Offset == 0x484, "UTslParticleEnvironment::AutoPlayDistance offset is not 484");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
