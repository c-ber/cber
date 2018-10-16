#pragma once
#include "UGameplayTask.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameplayTask_WaitDelay // Size: 0x88
	: public UGameplayTask // Size: 0x70
{
private:
	typedef UGameplayTask_WaitDelay t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2009); // id32("Class GameplayTasks.GameplayTask_WaitDelay")
		return ptr;
	}
	FScriptMulticastDelegate OnFinish; /* Ofs: 0x70 Size: 0x10 - MulticastDelegateProperty GameplayTasks.GameplayTask_WaitDelay.OnFinish */
	uint8_t UnknownData80[0x8];


	inline bool SetOnFinish(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameplayTask_WaitDelay = sizeof(UGameplayTask_WaitDelay); // 136
    static_assert(sizeof(UGameplayTask_WaitDelay) == 0x88, "Size of UGameplayTask_WaitDelay is not correct.");
	auto constexpr UGameplayTask_WaitDelay_OnFinish_Offset = offsetof(UGameplayTask_WaitDelay, OnFinish);
	static_assert(UGameplayTask_WaitDelay_OnFinish_Offset == 0x70, "UGameplayTask_WaitDelay::OnFinish offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
