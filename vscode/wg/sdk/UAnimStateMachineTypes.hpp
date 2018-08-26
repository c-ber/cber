#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimStateMachineTypes // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UAnimStateMachineTypes t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(257); // id32("Class Engine.AnimStateMachineTypes")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimStateMachineTypes = sizeof(UAnimStateMachineTypes); // 48
    static_assert(sizeof(UAnimStateMachineTypes) == 0x30, "Size of UAnimStateMachineTypes is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
