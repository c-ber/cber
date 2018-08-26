#pragma once
#include "UActorComponent.hpp"
#include "FCastConfig.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInteractionComponent // Size: 0x370
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UInteractionComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1874); // id32("Class TslGame.InteractionComponent")
		return ptr;
	}
	uint8_t UnknownData1F0[0x8];
	float MaxInteractableDistance; /* Ofs: 0x1F8 Size: 0x4 - FloatProperty TslGame.InteractionComponent.MaxInteractableDistance */
	uint8_t UnknownData1FC[0x4];
	FText InteractionVerb; /* Ofs: 0x200 Size: 0x18 - TextProperty TslGame.InteractionComponent.InteractionVerb */
	FText InteractiveObjectName; /* Ofs: 0x218 Size: 0x18 - TextProperty TslGame.InteractionComponent.InteractiveObjectName */
	FCastConfig CastConfig; /* Ofs: 0x230 Size: 0x38 - StructProperty TslGame.InteractionComponent.CastConfig */
	uint8_t boolField268;
	uint8_t UnknownData269[0x7];
	FScriptMulticastDelegate OnInteractBy; /* Ofs: 0x270 Size: 0x10 - MulticastDelegateProperty TslGame.InteractionComponent.OnInteractBy */
	FScriptMulticastDelegate ClientOnInteractBy; /* Ofs: 0x280 Size: 0x10 - MulticastDelegateProperty TslGame.InteractionComponent.ClientOnInteractBy */
	uint8_t UnknownData290[0xE0];


	inline bool SetMaxInteractableDistance(t_structHelper inst, float value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetInteractionVerb(t_structHelper inst, FText value) { inst.WriteOffset(0x200, value); }
	inline bool SetInteractiveObjectName(t_structHelper inst, FText value) { inst.WriteOffset(0x218, value); }
	inline bool SetCastConfig(t_structHelper inst, FCastConfig value) { inst.WriteOffset(0x230, value); }
	inline bool bUseTraceCheck()
	{
		return boolField268& 0x1;
	}
	inline bool SetbUseTraceCheck(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x268, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOnInteractBy(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x270, value); }
	inline bool SetClientOnInteractBy(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x280, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInteractionComponent = sizeof(UInteractionComponent); // 880
    static_assert(sizeof(UInteractionComponent) == 0x370, "Size of UInteractionComponent is not correct.");
	auto constexpr UInteractionComponent_MaxInteractableDistance_Offset = offsetof(UInteractionComponent, MaxInteractableDistance);
	static_assert(UInteractionComponent_MaxInteractableDistance_Offset == 0x1f8, "UInteractionComponent::MaxInteractableDistance offset is not 1f8");
	auto constexpr UInteractionComponent_InteractionVerb_Offset = offsetof(UInteractionComponent, InteractionVerb);
	static_assert(UInteractionComponent_InteractionVerb_Offset == 0x200, "UInteractionComponent::InteractionVerb offset is not 200");
	auto constexpr UInteractionComponent_InteractiveObjectName_Offset = offsetof(UInteractionComponent, InteractiveObjectName);
	static_assert(UInteractionComponent_InteractiveObjectName_Offset == 0x218, "UInteractionComponent::InteractiveObjectName offset is not 218");
	auto constexpr UInteractionComponent_CastConfig_Offset = offsetof(UInteractionComponent, CastConfig);
	static_assert(UInteractionComponent_CastConfig_Offset == 0x230, "UInteractionComponent::CastConfig offset is not 230");
	auto constexpr UInteractionComponent_boolField268_Offset = offsetof(UInteractionComponent, boolField268);
	static_assert(UInteractionComponent_boolField268_Offset == 0x268, "UInteractionComponent::boolField268 offset is not 268");
	auto constexpr UInteractionComponent_OnInteractBy_Offset = offsetof(UInteractionComponent, OnInteractBy);
	static_assert(UInteractionComponent_OnInteractBy_Offset == 0x270, "UInteractionComponent::OnInteractBy offset is not 270");
	auto constexpr UInteractionComponent_ClientOnInteractBy_Offset = offsetof(UInteractionComponent, ClientOnInteractBy);
	static_assert(UInteractionComponent_ClientOnInteractBy_Offset == 0x280, "UInteractionComponent::ClientOnInteractBy offset is not 280");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
