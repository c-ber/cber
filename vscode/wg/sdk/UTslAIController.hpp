#pragma once
#include "UAIController.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslAIController // Size: 0x540
	: public UAIController // Size: 0x520
{
private:
	typedef UTslAIController t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1983); // id32("Class TslGame.TslAIController")
		return ptr;
	}
//	ExternalPtr<struct UBlackboardComponent> BlackboardComp; /* Ofs: 0x518 Size: 0x8 - ObjectProperty TslGame.TslAIController.BlackboardComp */
	ExternalPtr<struct UBehaviorTreeComponent> BehaviorComp; /* Ofs: 0x520 Size: 0x8 - ObjectProperty TslGame.TslAIController.BehaviorComp */
	uint8_t UnknownData528[0x18];


//	inline bool SetBlackboardComp(t_structHelper inst, ExternalPtr<struct UBlackboardComponent> value) { inst.WriteOffset(0x518, value); }
	inline bool SetBehaviorComp(t_structHelper inst, ExternalPtr<struct UBehaviorTreeComponent> value) { inst.WriteOffset(0x520, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslAIController = sizeof(UTslAIController); // 1344
    static_assert(sizeof(UTslAIController) == 0x540, "Size of UTslAIController is not correct.");
//	auto constexpr UTslAIController_BlackboardComp_Offset = offsetof(UTslAIController, BlackboardComp);
//	static_assert(UTslAIController_BlackboardComp_Offset == 0x518, "UTslAIController::BlackboardComp offset is not 518");
	auto constexpr UTslAIController_BehaviorComp_Offset = offsetof(UTslAIController, BehaviorComp);
	static_assert(UTslAIController_BehaviorComp_Offset == 0x520, "UTslAIController::BehaviorComp offset is not 520");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
