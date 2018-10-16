#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBehaviorTreeTypes // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UBehaviorTreeTypes t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(547); // id32("Class AIModule.BehaviorTreeTypes")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBehaviorTreeTypes = sizeof(UBehaviorTreeTypes); // 48
    static_assert(sizeof(UBehaviorTreeTypes) == 0x30, "Size of UBehaviorTreeTypes is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
