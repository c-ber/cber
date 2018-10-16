#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFontProviderInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UFontProviderInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(376); // id32("Class SlateCore.FontProviderInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFontProviderInterface = sizeof(UFontProviderInterface); // 48
    static_assert(sizeof(UFontProviderInterface) == 0x30, "Size of UFontProviderInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
