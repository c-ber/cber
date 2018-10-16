#pragma once
#include "UInteractionComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDoublePhaseInteractionComponent // Size: 0x440
	: public UInteractionComponent // Size: 0x370
{
private:
	typedef UDoublePhaseInteractionComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1897); // id32("Class TslGame.DoublePhaseInteractionComponent")
		return ptr;
	}
	FText FirstInteractionVerb; /* Ofs: 0x370 Size: 0x18 - TextProperty TslGame.DoublePhaseInteractionComponent.FirstInteractionVerb */
	FText FirstInteractiveObjectName; /* Ofs: 0x388 Size: 0x18 - TextProperty TslGame.DoublePhaseInteractionComponent.FirstInteractiveObjectName */
	FText SecondInteractionVerb; /* Ofs: 0x3A0 Size: 0x18 - TextProperty TslGame.DoublePhaseInteractionComponent.SecondInteractionVerb */
	FText SecondInteractiveObjectName; /* Ofs: 0x3B8 Size: 0x18 - TextProperty TslGame.DoublePhaseInteractionComponent.SecondInteractiveObjectName */
	FScriptMulticastDelegate OnSecondInteractBy; /* Ofs: 0x3D0 Size: 0x10 - MulticastDelegateProperty TslGame.DoublePhaseInteractionComponent.OnSecondInteractBy */
	FScriptMulticastDelegate ClientOnSecondInteractBy; /* Ofs: 0x3E0 Size: 0x10 - MulticastDelegateProperty TslGame.DoublePhaseInteractionComponent.ClientOnSecondInteractBy */
	uint8_t UnknownData3F0[0x50];


	inline bool SetFirstInteractionVerb(t_structHelper inst, FText value) { inst.WriteOffset(0x370, value); }
	inline bool SetFirstInteractiveObjectName(t_structHelper inst, FText value) { inst.WriteOffset(0x388, value); }
	inline bool SetSecondInteractionVerb(t_structHelper inst, FText value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetSecondInteractiveObjectName(t_structHelper inst, FText value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetOnSecondInteractBy(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetClientOnSecondInteractBy(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x3E0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDoublePhaseInteractionComponent = sizeof(UDoublePhaseInteractionComponent); // 1088
    static_assert(sizeof(UDoublePhaseInteractionComponent) == 0x440, "Size of UDoublePhaseInteractionComponent is not correct.");
	auto constexpr UDoublePhaseInteractionComponent_FirstInteractionVerb_Offset = offsetof(UDoublePhaseInteractionComponent, FirstInteractionVerb);
	static_assert(UDoublePhaseInteractionComponent_FirstInteractionVerb_Offset == 0x370, "UDoublePhaseInteractionComponent::FirstInteractionVerb offset is not 370");
	auto constexpr UDoublePhaseInteractionComponent_FirstInteractiveObjectName_Offset = offsetof(UDoublePhaseInteractionComponent, FirstInteractiveObjectName);
	static_assert(UDoublePhaseInteractionComponent_FirstInteractiveObjectName_Offset == 0x388, "UDoublePhaseInteractionComponent::FirstInteractiveObjectName offset is not 388");
	auto constexpr UDoublePhaseInteractionComponent_SecondInteractionVerb_Offset = offsetof(UDoublePhaseInteractionComponent, SecondInteractionVerb);
	static_assert(UDoublePhaseInteractionComponent_SecondInteractionVerb_Offset == 0x3a0, "UDoublePhaseInteractionComponent::SecondInteractionVerb offset is not 3a0");
	auto constexpr UDoublePhaseInteractionComponent_SecondInteractiveObjectName_Offset = offsetof(UDoublePhaseInteractionComponent, SecondInteractiveObjectName);
	static_assert(UDoublePhaseInteractionComponent_SecondInteractiveObjectName_Offset == 0x3b8, "UDoublePhaseInteractionComponent::SecondInteractiveObjectName offset is not 3b8");
	auto constexpr UDoublePhaseInteractionComponent_OnSecondInteractBy_Offset = offsetof(UDoublePhaseInteractionComponent, OnSecondInteractBy);
	static_assert(UDoublePhaseInteractionComponent_OnSecondInteractBy_Offset == 0x3d0, "UDoublePhaseInteractionComponent::OnSecondInteractBy offset is not 3d0");
	auto constexpr UDoublePhaseInteractionComponent_ClientOnSecondInteractBy_Offset = offsetof(UDoublePhaseInteractionComponent, ClientOnSecondInteractBy);
	static_assert(UDoublePhaseInteractionComponent_ClientOnSecondInteractBy_Offset == 0x3e0, "UDoublePhaseInteractionComponent::ClientOnSecondInteractBy offset is not 3e0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
