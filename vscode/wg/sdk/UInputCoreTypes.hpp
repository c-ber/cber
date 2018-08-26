#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInputCoreTypes // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UInputCoreTypes t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1698); // id32("Class InputCore.InputCoreTypes")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInputCoreTypes = sizeof(UInputCoreTypes); // 48
    static_assert(sizeof(UInputCoreTypes) == 0x30, "Size of UInputCoreTypes is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
