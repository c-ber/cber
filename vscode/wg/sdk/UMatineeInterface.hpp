#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMatineeInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UMatineeInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1025); // id32("Class Engine.MatineeInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMatineeInterface = sizeof(UMatineeInterface); // 48
    static_assert(sizeof(UMatineeInterface) == 0x30, "Size of UMatineeInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
