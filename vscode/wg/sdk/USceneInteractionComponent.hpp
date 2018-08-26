#pragma once
#include "USceneComponent.hpp"
#include "FCastConfig.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USceneInteractionComponent // Size: 0x5A0
	: public USceneComponent // Size: 0x490
{
private:
	typedef USceneInteractionComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1946); // id32("Class TslGame.SceneInteractionComponent")
		return ptr;
	}
	uint8_t UnknownData490[0x10];
	float MaxInteractableDistance; /* Ofs: 0x4A0 Size: 0x4 - FloatProperty TslGame.SceneInteractionComponent.MaxInteractableDistance */
	uint8_t UnknownData4A4[0x4];
	FText InteractionVerb; /* Ofs: 0x4A8 Size: 0x18 - TextProperty TslGame.SceneInteractionComponent.InteractionVerb */
	FText InteractiveObjectName; /* Ofs: 0x4C0 Size: 0x18 - TextProperty TslGame.SceneInteractionComponent.InteractiveObjectName */
	uint8_t boolField4D8;
	uint8_t UnknownData4D9[0x7];
	FCastConfig CastConfig; /* Ofs: 0x4E0 Size: 0x38 - StructProperty TslGame.SceneInteractionComponent.CastConfig */
	uint8_t UnknownData518[0x8];
	FScriptMulticastDelegate OnInteractBy; /* Ofs: 0x520 Size: 0x10 - MulticastDelegateProperty TslGame.SceneInteractionComponent.OnInteractBy */
	FScriptMulticastDelegate ClientOnInteractBy; /* Ofs: 0x530 Size: 0x10 - MulticastDelegateProperty TslGame.SceneInteractionComponent.ClientOnInteractBy */
	uint8_t UnknownData540[0x60];


	inline bool SetMaxInteractableDistance(t_structHelper inst, float value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetInteractionVerb(t_structHelper inst, FText value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetInteractiveObjectName(t_structHelper inst, FText value) { inst.WriteOffset(0x4C0, value); }
	inline bool bUseTraceCheck()
	{
		return boolField4D8& 0x1;
	}
	inline bool SetbUseTraceCheck(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x4D8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCastConfig(t_structHelper inst, FCastConfig value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetOnInteractBy(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x520, value); }
	inline bool SetClientOnInteractBy(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x530, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSceneInteractionComponent = sizeof(USceneInteractionComponent); // 1440
    static_assert(sizeof(USceneInteractionComponent) == 0x5A0, "Size of USceneInteractionComponent is not correct.");
	auto constexpr USceneInteractionComponent_MaxInteractableDistance_Offset = offsetof(USceneInteractionComponent, MaxInteractableDistance);
	static_assert(USceneInteractionComponent_MaxInteractableDistance_Offset == 0x4a0, "USceneInteractionComponent::MaxInteractableDistance offset is not 4a0");
	auto constexpr USceneInteractionComponent_InteractionVerb_Offset = offsetof(USceneInteractionComponent, InteractionVerb);
	static_assert(USceneInteractionComponent_InteractionVerb_Offset == 0x4a8, "USceneInteractionComponent::InteractionVerb offset is not 4a8");
	auto constexpr USceneInteractionComponent_InteractiveObjectName_Offset = offsetof(USceneInteractionComponent, InteractiveObjectName);
	static_assert(USceneInteractionComponent_InteractiveObjectName_Offset == 0x4c0, "USceneInteractionComponent::InteractiveObjectName offset is not 4c0");
	auto constexpr USceneInteractionComponent_boolField4D8_Offset = offsetof(USceneInteractionComponent, boolField4D8);
	static_assert(USceneInteractionComponent_boolField4D8_Offset == 0x4d8, "USceneInteractionComponent::boolField4D8 offset is not 4d8");
	auto constexpr USceneInteractionComponent_CastConfig_Offset = offsetof(USceneInteractionComponent, CastConfig);
	static_assert(USceneInteractionComponent_CastConfig_Offset == 0x4e0, "USceneInteractionComponent::CastConfig offset is not 4e0");
	auto constexpr USceneInteractionComponent_OnInteractBy_Offset = offsetof(USceneInteractionComponent, OnInteractBy);
	static_assert(USceneInteractionComponent_OnInteractBy_Offset == 0x520, "USceneInteractionComponent::OnInteractBy offset is not 520");
	auto constexpr USceneInteractionComponent_ClientOnInteractBy_Offset = offsetof(USceneInteractionComponent, ClientOnInteractBy);
	static_assert(USceneInteractionComponent_ClientOnInteractBy_Offset == 0x530, "USceneInteractionComponent::ClientOnInteractBy offset is not 530");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
