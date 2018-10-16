#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavNodeInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UNavNodeInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1043); // id32("Class Engine.NavNodeInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavNodeInterface = sizeof(UNavNodeInterface); // 48
    static_assert(sizeof(UNavNodeInterface) == 0x30, "Size of UNavNodeInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
