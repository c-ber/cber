#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimClassInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UAnimClassInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(258); // id32("Class Engine.AnimClassInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimClassInterface = sizeof(UAnimClassInterface); // 48
    static_assert(sizeof(UAnimClassInterface) == 0x30, "Size of UAnimClassInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
