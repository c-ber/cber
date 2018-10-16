#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAIPerceptionStimuliSourceComponent // Size: 0x200
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UAIPerceptionStimuliSourceComponent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1677); // id32("Class AIModule.AIPerceptionStimuliSourceComponent")
		return ptr;
	}
//	uint8_t boolField1E8;
	TArray<ExternalPtr<struct UClass>> RegisterAsSourceForSenses; /* Ofs: 0x1F0 Size: 0x10 - ArrayProperty AIModule.AIPerceptionStimuliSourceComponent.RegisterAsSourceForSenses */


	inline bool SetRegisterAsSourceForSenses(t_structHelper inst, TArray<ExternalPtr<struct UClass>> value) { inst.WriteOffset(0x1F0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAIPerceptionStimuliSourceComponent = sizeof(UAIPerceptionStimuliSourceComponent); // 512
    static_assert(sizeof(UAIPerceptionStimuliSourceComponent) == 0x200, "Size of UAIPerceptionStimuliSourceComponent is not correct.");
//	auto constexpr UAIPerceptionStimuliSourceComponent_boolField1E8_Offset = offsetof(UAIPerceptionStimuliSourceComponent, boolField1E8);
//	static_assert(UAIPerceptionStimuliSourceComponent_boolField1E8_Offset == 0x1e8, "UAIPerceptionStimuliSourceComponent::boolField1E8 offset is not 1e8");
	auto constexpr UAIPerceptionStimuliSourceComponent_RegisterAsSourceForSenses_Offset = offsetof(UAIPerceptionStimuliSourceComponent, RegisterAsSourceForSenses);
	static_assert(UAIPerceptionStimuliSourceComponent_RegisterAsSourceForSenses_Offset == 0x1f0, "UAIPerceptionStimuliSourceComponent::RegisterAsSourceForSenses offset is not 1f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
