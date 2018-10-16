#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavigationPathGenerator // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UNavigationPathGenerator t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1039); // id32("Class Engine.NavigationPathGenerator")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavigationPathGenerator = sizeof(UNavigationPathGenerator); // 48
    static_assert(sizeof(UNavigationPathGenerator) == 0x30, "Size of UNavigationPathGenerator is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
