#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UInterface_CollisionDataProvider // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UInterface_CollisionDataProvider t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1773); // id32("Class Engine.Interface_CollisionDataProvider")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUInterface_CollisionDataProvider = sizeof(UInterface_CollisionDataProvider); // 48
    static_assert(sizeof(UInterface_CollisionDataProvider) == 0x30, "Size of UInterface_CollisionDataProvider is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
