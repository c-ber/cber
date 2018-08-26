#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavPathObserverInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UNavPathObserverInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1766); // id32("Class Engine.NavPathObserverInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavPathObserverInterface = sizeof(UNavPathObserverInterface); // 48
    static_assert(sizeof(UNavPathObserverInterface) == 0x30, "Size of UNavPathObserverInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
