#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULocalMessage // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef ULocalMessage t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(854); // id32("Class Engine.LocalMessage")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULocalMessage = sizeof(ULocalMessage); // 48
    static_assert(sizeof(ULocalMessage) == 0x30, "Size of ULocalMessage is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
