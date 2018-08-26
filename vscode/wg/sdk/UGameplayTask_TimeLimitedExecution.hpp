#pragma once
#include "UGameplayTask.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGameplayTask_TimeLimitedExecution // Size: 0xA0
	: public UGameplayTask // Size: 0x70
{
private:
	typedef UGameplayTask_TimeLimitedExecution t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2008); // id32("Class GameplayTasks.GameplayTask_TimeLimitedExecution")
		return ptr;
	}
	FScriptMulticastDelegate OnFinished; /* Ofs: 0x70 Size: 0x10 - MulticastDelegateProperty GameplayTasks.GameplayTask_TimeLimitedExecution.OnFinished */
	FScriptMulticastDelegate OnTimeExpired; /* Ofs: 0x80 Size: 0x10 - MulticastDelegateProperty GameplayTasks.GameplayTask_TimeLimitedExecution.OnTimeExpired */
	uint8_t UnknownData90[0x10];


	inline bool SetOnFinished(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x70, value); }
	inline bool SetOnTimeExpired(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x80, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGameplayTask_TimeLimitedExecution = sizeof(UGameplayTask_TimeLimitedExecution); // 160
    static_assert(sizeof(UGameplayTask_TimeLimitedExecution) == 0xA0, "Size of UGameplayTask_TimeLimitedExecution is not correct.");
	auto constexpr UGameplayTask_TimeLimitedExecution_OnFinished_Offset = offsetof(UGameplayTask_TimeLimitedExecution, OnFinished);
	static_assert(UGameplayTask_TimeLimitedExecution_OnFinished_Offset == 0x70, "UGameplayTask_TimeLimitedExecution::OnFinished offset is not 70");
	auto constexpr UGameplayTask_TimeLimitedExecution_OnTimeExpired_Offset = offsetof(UGameplayTask_TimeLimitedExecution, OnTimeExpired);
	static_assert(UGameplayTask_TimeLimitedExecution_OnTimeExpired_Offset == 0x80, "UGameplayTask_TimeLimitedExecution::OnTimeExpired offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
