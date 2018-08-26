#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavigationTypes // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UNavigationTypes t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1715); // id32("Class Engine.NavigationTypes")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavigationTypes = sizeof(UNavigationTypes); // 48
    static_assert(sizeof(UNavigationTypes) == 0x30, "Size of UNavigationTypes is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
