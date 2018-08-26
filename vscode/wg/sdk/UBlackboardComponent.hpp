#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlackboardComponent // Size: 0x2E0
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UBlackboardComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(557); // id32("Class AIModule.BlackboardComponent")
		return ptr;
	}
//	ExternalPtr<struct UBrainComponent> BrainComp; /* Ofs: 0x1E8 Size: 0x8 - ObjectProperty AIModule.BlackboardComponent.BrainComp */
	ExternalPtr<struct UBlackboardData> BlackboardAsset; /* Ofs: 0x1F0 Size: 0x8 - ObjectProperty AIModule.BlackboardComponent.BlackboardAsset */
	uint8_t UnknownData1F8[0x20];
	TArray<ExternalPtr<struct UBlackboardKeyType>> KeyInstances; /* Ofs: 0x218 Size: 0x10 - ArrayProperty AIModule.BlackboardComponent.KeyInstances */
	uint8_t UnknownData228[0xB8];


//	inline bool SetBrainComp(t_structHelper inst, ExternalPtr<struct UBrainComponent> value) { inst.WriteOffset(0x1E8, value); }
	inline bool SetBlackboardAsset(t_structHelper inst, ExternalPtr<struct UBlackboardData> value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetKeyInstances(t_structHelper inst, TArray<ExternalPtr<struct UBlackboardKeyType>> value) { inst.WriteOffset(0x218, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlackboardComponent = sizeof(UBlackboardComponent); // 736
    static_assert(sizeof(UBlackboardComponent) == 0x2E0, "Size of UBlackboardComponent is not correct.");
//	auto constexpr UBlackboardComponent_BrainComp_Offset = offsetof(UBlackboardComponent, BrainComp);
//	static_assert(UBlackboardComponent_BrainComp_Offset == 0x1e8, "UBlackboardComponent::BrainComp offset is not 1e8");
	auto constexpr UBlackboardComponent_BlackboardAsset_Offset = offsetof(UBlackboardComponent, BlackboardAsset);
	static_assert(UBlackboardComponent_BlackboardAsset_Offset == 0x1f0, "UBlackboardComponent::BlackboardAsset offset is not 1f0");
	auto constexpr UBlackboardComponent_KeyInstances_Offset = offsetof(UBlackboardComponent, KeyInstances);
	static_assert(UBlackboardComponent_KeyInstances_Offset == 0x218, "UBlackboardComponent::KeyInstances offset is not 218");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
