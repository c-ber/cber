#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UAnimNotify // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef UAnimNotify t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(268); // id32("Class Engine.AnimNotify")
		return ptr;
	}
	uint8_t UnknownData30[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUAnimNotify = sizeof(UAnimNotify); // 64
    static_assert(sizeof(UAnimNotify) == 0x40, "Size of UAnimNotify is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
