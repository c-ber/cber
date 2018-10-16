#pragma once
#include "UParticleModuleEventBase.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleEventGenerator // Size: 0x48
	: public UParticleModuleEventBase // Size: 0x38
{
private:
	typedef UParticleModuleEventGenerator t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1081); // id32("Class Engine.ParticleModuleEventGenerator")
		return ptr;
	}
	TArray<struct FParticleEvent_GenerateInfo> Events; /* Ofs: 0x38 Size: 0x10 - ArrayProperty Engine.ParticleModuleEventGenerator.Events */


	inline bool SetEvents(t_structHelper inst, TArray<struct FParticleEvent_GenerateInfo> value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleEventGenerator = sizeof(UParticleModuleEventGenerator); // 72
    static_assert(sizeof(UParticleModuleEventGenerator) == 0x48, "Size of UParticleModuleEventGenerator is not correct.");
	auto constexpr UParticleModuleEventGenerator_Events_Offset = offsetof(UParticleModuleEventGenerator, Events);
	static_assert(UParticleModuleEventGenerator_Events_Offset == 0x38, "UParticleModuleEventGenerator::Events offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
