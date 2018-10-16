#pragma once
#include "UGameplayTask.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAITask // Size: 0x78
	: public UGameplayTask // Size: 0x70
{
private:
	typedef UAITask t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(542); // id32("Class AIModule.AITask")
		return ptr;
	}
	ExternalPtr<struct UAIController> OwnerController; /* Ofs: 0x70 Size: 0x8 - ObjectProperty AIModule.AITask.OwnerController */


	inline bool SetOwnerController(t_structHelper inst, ExternalPtr<struct UAIController> value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAITask = sizeof(UAITask); // 120
    static_assert(sizeof(UAITask) == 0x78, "Size of UAITask is not correct.");
	auto constexpr UAITask_OwnerController_Offset = offsetof(UAITask, OwnerController);
	static_assert(UAITask_OwnerController_Offset == 0x70, "UAITask::OwnerController offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
