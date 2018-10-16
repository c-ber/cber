#pragma once
#include "USceneComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UChildActorComponent // Size: 0x4C0
	: public USceneComponent // Size: 0x490
{
private:
	typedef UChildActorComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1703); // id32("Class Engine.ChildActorComponent")
		return ptr;
	}
	ExternalPtr<struct UClass> ChildActorClass; /* Ofs: 0x490 Size: 0x8 - ClassProperty Engine.ChildActorComponent.ChildActorClass */
	ExternalPtr<struct UActor> ChildActor; /* Ofs: 0x498 Size: 0x8 - ObjectProperty Engine.ChildActorComponent.ChildActor */
	ExternalPtr<struct UActor> ChildActorTemplate; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty Engine.ChildActorComponent.ChildActorTemplate */
	uint8_t UnknownData4A8[0x18];


	inline bool SetChildActorClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x490, value); }
	inline bool SetChildActor(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x498, value); }
	inline bool SetChildActorTemplate(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x4A0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUChildActorComponent = sizeof(UChildActorComponent); // 1216
    static_assert(sizeof(UChildActorComponent) == 0x4C0, "Size of UChildActorComponent is not correct.");
	auto constexpr UChildActorComponent_ChildActorClass_Offset = offsetof(UChildActorComponent, ChildActorClass);
	static_assert(UChildActorComponent_ChildActorClass_Offset == 0x490, "UChildActorComponent::ChildActorClass offset is not 490");
	auto constexpr UChildActorComponent_ChildActor_Offset = offsetof(UChildActorComponent, ChildActor);
	static_assert(UChildActorComponent_ChildActor_Offset == 0x498, "UChildActorComponent::ChildActor offset is not 498");
	auto constexpr UChildActorComponent_ChildActorTemplate_Offset = offsetof(UChildActorComponent, ChildActorTemplate);
	static_assert(UChildActorComponent_ChildActorTemplate_Offset == 0x4a0, "UChildActorComponent::ChildActorTemplate offset is not 4a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
