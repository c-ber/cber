#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USelection // Size: 0x98
	: public UObject // Size: 0x30
{
private:
	typedef USelection t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1194); // id32("Class Engine.Selection")
		return ptr;
	}
	uint8_t UnknownData30[0x68];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSelection = sizeof(USelection); // 152
    static_assert(sizeof(USelection) == 0x98, "Size of USelection is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
