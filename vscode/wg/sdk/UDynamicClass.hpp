#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDynamicClass // Size: 0x340
	: public UClass // Size: 0x2D0
{
private:
	typedef UDynamicClass t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(360); // id32("Class CoreUObject.DynamicClass")
		return ptr;
	}
	uint8_t UnknownData2D0[0x70];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDynamicClass = sizeof(UDynamicClass); // 832
    static_assert(sizeof(UDynamicClass) == 0x340, "Size of UDynamicClass is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
