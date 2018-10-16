#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleEventSendToGame // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UParticleModuleEventSendToGame t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1170); // id32("Class Engine.ParticleModuleEventSendToGame")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleEventSendToGame = sizeof(UParticleModuleEventSendToGame); // 48
    static_assert(sizeof(UParticleModuleEventSendToGame) == 0x30, "Size of UParticleModuleEventSendToGame is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
