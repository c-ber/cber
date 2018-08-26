#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAIPerceptionComponent // Size: 0x2C0
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UAIPerceptionComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1676); // id32("Class AIModule.AIPerceptionComponent")
		return ptr;
	}
//	TArray<ExternalPtr<struct UAISenseConfig>> SensesConfig; /* Ofs: 0x1E8 Size: 0x10 - ArrayProperty AIModule.AIPerceptionComponent.SensesConfig */
	uint8_t UnknownData1F0[0x8];
	ExternalPtr<struct UClass> DominantSense; /* Ofs: 0x1F8 Size: 0x8 - ClassProperty AIModule.AIPerceptionComponent.DominantSense */
	uint8_t UnknownData200[0x10];
	ExternalPtr<struct UAIController> AIOwner; /* Ofs: 0x210 Size: 0x8 - ObjectProperty AIModule.AIPerceptionComponent.AIOwner */
	uint8_t UnknownData218[0x80];
	FScriptMulticastDelegate OnPerceptionUpdated; /* Ofs: 0x298 Size: 0x10 - MulticastDelegateProperty AIModule.AIPerceptionComponent.OnPerceptionUpdated */
	FScriptMulticastDelegate OnTargetPerceptionUpdated; /* Ofs: 0x2A8 Size: 0x10 - MulticastDelegateProperty AIModule.AIPerceptionComponent.OnTargetPerceptionUpdated */
	uint8_t UnknownData2B8[0x8];


//	inline bool SetSensesConfig(t_structHelper inst, TArray<ExternalPtr<struct UAISenseConfig>> value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetDominantSense(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x1F8, value); }
	inline bool SetAIOwner(t_structHelper inst, ExternalPtr<struct UAIController> value) { inst.WriteOffset(0x210, value); }
	inline bool SetOnPerceptionUpdated(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x298, value); }
	inline bool SetOnTargetPerceptionUpdated(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x2A8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAIPerceptionComponent = sizeof(UAIPerceptionComponent); // 704
    static_assert(sizeof(UAIPerceptionComponent) == 0x2C0, "Size of UAIPerceptionComponent is not correct.");
//	auto constexpr UAIPerceptionComponent_SensesConfig_Offset = offsetof(UAIPerceptionComponent, SensesConfig);
//	static_assert(UAIPerceptionComponent_SensesConfig_Offset == 0x1e8, "UAIPerceptionComponent::SensesConfig offset is not 1e8");
	auto constexpr UAIPerceptionComponent_DominantSense_Offset = offsetof(UAIPerceptionComponent, DominantSense);
	static_assert(UAIPerceptionComponent_DominantSense_Offset == 0x1f8, "UAIPerceptionComponent::DominantSense offset is not 1f8");
	auto constexpr UAIPerceptionComponent_AIOwner_Offset = offsetof(UAIPerceptionComponent, AIOwner);
	static_assert(UAIPerceptionComponent_AIOwner_Offset == 0x210, "UAIPerceptionComponent::AIOwner offset is not 210");
	auto constexpr UAIPerceptionComponent_OnPerceptionUpdated_Offset = offsetof(UAIPerceptionComponent, OnPerceptionUpdated);
	static_assert(UAIPerceptionComponent_OnPerceptionUpdated_Offset == 0x298, "UAIPerceptionComponent::OnPerceptionUpdated offset is not 298");
	auto constexpr UAIPerceptionComponent_OnTargetPerceptionUpdated_Offset = offsetof(UAIPerceptionComponent, OnTargetPerceptionUpdated);
	static_assert(UAIPerceptionComponent_OnTargetPerceptionUpdated_Offset == 0x2a8, "UAIPerceptionComponent::OnTargetPerceptionUpdated offset is not 2a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
