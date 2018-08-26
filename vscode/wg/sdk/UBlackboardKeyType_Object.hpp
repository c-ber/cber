#pragma once
#include "UBlackboardKeyType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlackboardKeyType_Object // Size: 0x40
	: public UBlackboardKeyType // Size: 0x38
{
private:
	typedef UBlackboardKeyType_Object t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(565); // id32("Class AIModule.BlackboardKeyType_Object")
		return ptr;
	}
	ExternalPtr<struct UClass> BaseClass; /* Ofs: 0x38 Size: 0x8 - ClassProperty AIModule.BlackboardKeyType_Object.BaseClass */


	inline bool SetBaseClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlackboardKeyType_Object = sizeof(UBlackboardKeyType_Object); // 64
    static_assert(sizeof(UBlackboardKeyType_Object) == 0x40, "Size of UBlackboardKeyType_Object is not correct.");
	auto constexpr UBlackboardKeyType_Object_BaseClass_Offset = offsetof(UBlackboardKeyType_Object, BaseClass);
	static_assert(UBlackboardKeyType_Object_BaseClass_Offset == 0x38, "UBlackboardKeyType_Object::BaseClass offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
