#pragma once
#include "UBTTaskNode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTTask_RunBehavior // Size: 0x80
	: public UBTTaskNode // Size: 0x78
{
private:
	typedef UBTTask_RunBehavior t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(607); // id32("Class AIModule.BTTask_RunBehavior")
		return ptr;
	}
	ExternalPtr<struct UBehaviorTree> BehaviorAsset; /* Ofs: 0x78 Size: 0x8 - ObjectProperty AIModule.BTTask_RunBehavior.BehaviorAsset */


	inline bool SetBehaviorAsset(t_structHelper inst, ExternalPtr<struct UBehaviorTree> value) { inst.WriteOffset(0x78, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTTask_RunBehavior = sizeof(UBTTask_RunBehavior); // 128
    static_assert(sizeof(UBTTask_RunBehavior) == 0x80, "Size of UBTTask_RunBehavior is not correct.");
	auto constexpr UBTTask_RunBehavior_BehaviorAsset_Offset = offsetof(UBTTask_RunBehavior, BehaviorAsset);
	static_assert(UBTTask_RunBehavior_BehaviorAsset_Offset == 0x78, "UBTTask_RunBehavior::BehaviorAsset offset is not 78");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
