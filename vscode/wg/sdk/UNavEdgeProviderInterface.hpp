#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavEdgeProviderInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UNavEdgeProviderInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1035); // id32("Class Engine.NavEdgeProviderInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavEdgeProviderInterface = sizeof(UNavEdgeProviderInterface); // 48
    static_assert(sizeof(UNavEdgeProviderInterface) == 0x30, "Size of UNavEdgeProviderInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
