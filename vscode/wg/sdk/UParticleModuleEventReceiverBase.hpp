#pragma once
#include "UParticleModuleEventBase.hpp"
#include "EParticleEventType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParticleModuleEventReceiverBase // Size: 0x48
	: public UParticleModuleEventBase // Size: 0x38
{
private:
	typedef UParticleModuleEventReceiverBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1082); // id32("Class Engine.ParticleModuleEventReceiverBase")
		return ptr;
	}
	TEnumAsByte<enum EParticleEventType> EventGeneratorType; /* Ofs: 0x38 Size: 0x1 - ByteProperty Engine.ParticleModuleEventReceiverBase.EventGeneratorType */
	uint8_t UnknownData39[0x7];
	FName EventName; /* Ofs: 0x40 Size: 0x8 - NameProperty Engine.ParticleModuleEventReceiverBase.EventName */


	inline bool SetEventGeneratorType(t_structHelper inst, TEnumAsByte<enum EParticleEventType> value) { inst.WriteOffset(0x38, value); }
	inline bool SetEventName(t_structHelper inst, FName value) { inst.WriteOffset(0x40, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParticleModuleEventReceiverBase = sizeof(UParticleModuleEventReceiverBase); // 72
    static_assert(sizeof(UParticleModuleEventReceiverBase) == 0x48, "Size of UParticleModuleEventReceiverBase is not correct.");
	auto constexpr UParticleModuleEventReceiverBase_EventGeneratorType_Offset = offsetof(UParticleModuleEventReceiverBase, EventGeneratorType);
	static_assert(UParticleModuleEventReceiverBase_EventGeneratorType_Offset == 0x38, "UParticleModuleEventReceiverBase::EventGeneratorType offset is not 38");
	auto constexpr UParticleModuleEventReceiverBase_EventName_Offset = offsetof(UParticleModuleEventReceiverBase, EventName);
	static_assert(UParticleModuleEventReceiverBase_EventName_Offset == 0x40, "UParticleModuleEventReceiverBase::EventName offset is not 40");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
