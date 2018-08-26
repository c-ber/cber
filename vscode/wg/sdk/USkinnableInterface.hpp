#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USkinnableInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef USkinnableInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1852); // id32("Class TslGame.SkinnableInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSkinnableInterface = sizeof(USkinnableInterface); // 48
    static_assert(sizeof(USkinnableInterface) == 0x30, "Size of USkinnableInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
