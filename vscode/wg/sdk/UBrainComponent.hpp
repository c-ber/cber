#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBrainComponent // Size: 0x250
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UBrainComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(550); // id32("Class AIModule.BrainComponent")
		return ptr;
	}
	ExternalPtr<struct UBlackboardComponent> BlackboardComp; /* Ofs: 0x1F0 Size: 0x8 - ObjectProperty AIModule.BrainComponent.BlackboardComp */
	ExternalPtr<struct UAIController> AIOwner; /* Ofs: 0x1F8 Size: 0x8 - ObjectProperty AIModule.BrainComponent.AIOwner */
	uint8_t UnknownData200[0x50];


	inline bool SetBlackboardComp(t_structHelper inst, ExternalPtr<struct UBlackboardComponent> value) { inst.WriteOffset(0x1F0, value); }
	inline bool SetAIOwner(t_structHelper inst, ExternalPtr<struct UAIController> value) { inst.WriteOffset(0x1F8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBrainComponent = sizeof(UBrainComponent); // 592
    static_assert(sizeof(UBrainComponent) == 0x250, "Size of UBrainComponent is not correct.");
	auto constexpr UBrainComponent_BlackboardComp_Offset = offsetof(UBrainComponent, BlackboardComp);
	static_assert(UBrainComponent_BlackboardComp_Offset == 0x1f0, "UBrainComponent::BlackboardComp offset is not 1f0");
	auto constexpr UBrainComponent_AIOwner_Offset = offsetof(UBrainComponent, AIOwner);
	static_assert(UBrainComponent_AIOwner_Offset == 0x1f8, "UBrainComponent::AIOwner offset is not 1f8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
