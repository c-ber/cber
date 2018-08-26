#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBlendableInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UBlendableInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1722); // id32("Class Engine.BlendableInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBlendableInterface = sizeof(UBlendableInterface); // 48
    static_assert(sizeof(UBlendableInterface) == 0x30, "Size of UBlendableInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
