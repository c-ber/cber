#pragma once
#include "UAnimInstance.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimSingleNodeInstance // Size: 0x398
	: public UAnimInstance // Size: 0x380
{
private:
	typedef UAnimSingleNodeInstance t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(270); // id32("Class Engine.AnimSingleNodeInstance")
		return ptr;
	}
	ExternalPtr<struct UAnimationAsset> CurrentAsset; /* Ofs: 0x380 Size: 0x8 - ObjectProperty Engine.AnimSingleNodeInstance.CurrentAsset */
	FScriptDelegate PostEvaluateAnimEvent; /* Ofs: 0x388 Size: 0x10 - DelegateProperty Engine.AnimSingleNodeInstance.PostEvaluateAnimEvent */


	inline bool SetCurrentAsset(t_structHelper inst, ExternalPtr<struct UAnimationAsset> value) { inst.WriteOffset(0x380, value); }
	inline bool SetPostEvaluateAnimEvent(t_structHelper inst, FScriptDelegate value) { inst.WriteOffset(0x388, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimSingleNodeInstance = sizeof(UAnimSingleNodeInstance); // 920
    static_assert(sizeof(UAnimSingleNodeInstance) == 0x398, "Size of UAnimSingleNodeInstance is not correct.");
	auto constexpr UAnimSingleNodeInstance_CurrentAsset_Offset = offsetof(UAnimSingleNodeInstance, CurrentAsset);
	static_assert(UAnimSingleNodeInstance_CurrentAsset_Offset == 0x380, "UAnimSingleNodeInstance::CurrentAsset offset is not 380");
	auto constexpr UAnimSingleNodeInstance_PostEvaluateAnimEvent_Offset = offsetof(UAnimSingleNodeInstance, PostEvaluateAnimEvent);
	static_assert(UAnimSingleNodeInstance_PostEvaluateAnimEvent_Offset == 0x388, "UAnimSingleNodeInstance::PostEvaluateAnimEvent offset is not 388");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
