#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPhysicalMaterialPropertyBase // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UPhysicalMaterialPropertyBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1174); // id32("Class Engine.PhysicalMaterialPropertyBase")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPhysicalMaterialPropertyBase = sizeof(UPhysicalMaterialPropertyBase); // 48
    static_assert(sizeof(UPhysicalMaterialPropertyBase) == 0x30, "Size of UPhysicalMaterialPropertyBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
