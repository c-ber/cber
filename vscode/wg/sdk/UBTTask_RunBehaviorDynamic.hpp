#pragma once
#include "UBTTaskNode.hpp"
#include "FGameplayTag.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTTask_RunBehaviorDynamic // Size: 0x90
	: public UBTTaskNode // Size: 0x78
{
private:
	typedef UBTTask_RunBehaviorDynamic t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(608); // id32("Class AIModule.BTTask_RunBehaviorDynamic")
		return ptr;
	}
	FGameplayTag InjectionTag; /* Ofs: 0x78 Size: 0x8 - StructProperty AIModule.BTTask_RunBehaviorDynamic.InjectionTag */
	ExternalPtr<struct UBehaviorTree> DefaultBehaviorAsset; /* Ofs: 0x80 Size: 0x8 - ObjectProperty AIModule.BTTask_RunBehaviorDynamic.DefaultBehaviorAsset */
	ExternalPtr<struct UBehaviorTree> BehaviorAsset; /* Ofs: 0x88 Size: 0x8 - ObjectProperty AIModule.BTTask_RunBehaviorDynamic.BehaviorAsset */


	inline bool SetInjectionTag(t_structHelper inst, FGameplayTag value) { inst.WriteOffset(0x78, value); }
	inline bool SetDefaultBehaviorAsset(t_structHelper inst, ExternalPtr<struct UBehaviorTree> value) { inst.WriteOffset(0x80, value); }
	inline bool SetBehaviorAsset(t_structHelper inst, ExternalPtr<struct UBehaviorTree> value) { inst.WriteOffset(0x88, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTTask_RunBehaviorDynamic = sizeof(UBTTask_RunBehaviorDynamic); // 144
    static_assert(sizeof(UBTTask_RunBehaviorDynamic) == 0x90, "Size of UBTTask_RunBehaviorDynamic is not correct.");
	auto constexpr UBTTask_RunBehaviorDynamic_InjectionTag_Offset = offsetof(UBTTask_RunBehaviorDynamic, InjectionTag);
	static_assert(UBTTask_RunBehaviorDynamic_InjectionTag_Offset == 0x78, "UBTTask_RunBehaviorDynamic::InjectionTag offset is not 78");
	auto constexpr UBTTask_RunBehaviorDynamic_DefaultBehaviorAsset_Offset = offsetof(UBTTask_RunBehaviorDynamic, DefaultBehaviorAsset);
	static_assert(UBTTask_RunBehaviorDynamic_DefaultBehaviorAsset_Offset == 0x80, "UBTTask_RunBehaviorDynamic::DefaultBehaviorAsset offset is not 80");
	auto constexpr UBTTask_RunBehaviorDynamic_BehaviorAsset_Offset = offsetof(UBTTask_RunBehaviorDynamic, BehaviorAsset);
	static_assert(UBTTask_RunBehaviorDynamic_BehaviorAsset_Offset == 0x88, "UBTTask_RunBehaviorDynamic::BehaviorAsset offset is not 88");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
