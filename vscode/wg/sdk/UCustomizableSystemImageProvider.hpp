#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCustomizableSystemImageProvider // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UCustomizableSystemImageProvider t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2018); // id32("Class CustomizableObject.CustomizableSystemImageProvider")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCustomizableSystemImageProvider = sizeof(UCustomizableSystemImageProvider); // 48
    static_assert(sizeof(UCustomizableSystemImageProvider) == 0x30, "Size of UCustomizableSystemImageProvider is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
