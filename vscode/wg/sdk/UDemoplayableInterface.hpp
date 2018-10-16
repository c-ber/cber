#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDemoplayableInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UDemoplayableInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(720); // id32("Class Engine.DemoplayableInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDemoplayableInterface = sizeof(UDemoplayableInterface); // 48
    static_assert(sizeof(UDemoplayableInterface) == 0x30, "Size of UDemoplayableInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
