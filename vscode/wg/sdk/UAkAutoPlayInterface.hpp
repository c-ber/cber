#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAkAutoPlayInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UAkAutoPlayInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2133); // id32("Class AkAudio.AkAutoPlayInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAkAutoPlayInterface = sizeof(UAkAutoPlayInterface); // 48
    static_assert(sizeof(UAkAutoPlayInterface) == 0x30, "Size of UAkAutoPlayInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
