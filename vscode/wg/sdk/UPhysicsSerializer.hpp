#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPhysicsSerializer // Size: 0xD8
	: public UObject // Size: 0x30
{
private:
	typedef UPhysicsSerializer t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1177); // id32("Class Engine.PhysicsSerializer")
		return ptr;
	}
	uint8_t UnknownData30[0xA8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPhysicsSerializer = sizeof(UPhysicsSerializer); // 216
    static_assert(sizeof(UPhysicsSerializer) == 0xD8, "Size of UPhysicsSerializer is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
