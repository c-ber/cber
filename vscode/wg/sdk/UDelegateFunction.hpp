#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDelegateFunction // Size: 0x160
	: public UFunction // Size: 0x160
{
private:
	typedef UDelegateFunction t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(359); // id32("Class CoreUObject.DelegateFunction")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDelegateFunction = sizeof(UDelegateFunction); // 352
    static_assert(sizeof(UDelegateFunction) == 0x160, "Size of UDelegateFunction is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
