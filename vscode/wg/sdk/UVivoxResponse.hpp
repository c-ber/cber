#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVivoxResponse // Size: 0xA0
	: public UObject // Size: 0x30
{
private:
	typedef UVivoxResponse t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(62); // id32("Class TslGame.VivoxResponse")
		return ptr;
	}
	uint8_t UnknownData30[0x70];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVivoxResponse = sizeof(UVivoxResponse); // 160
    static_assert(sizeof(UVivoxResponse) == 0xA0, "Size of UVivoxResponse is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
