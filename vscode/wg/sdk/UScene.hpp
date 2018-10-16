#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UScene // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UScene t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1723); // id32("Class Engine.Scene")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUScene = sizeof(UScene); // 48
    static_assert(sizeof(UScene) == 0x30, "Size of UScene is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
