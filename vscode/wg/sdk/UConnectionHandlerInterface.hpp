#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UConnectionHandlerInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UConnectionHandlerInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1834); // id32("Class TslGame.ConnectionHandlerInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUConnectionHandlerInterface = sizeof(UConnectionHandlerInterface); // 48
    static_assert(sizeof(UConnectionHandlerInterface) == 0x30, "Size of UConnectionHandlerInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
