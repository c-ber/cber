#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UModel // Size: 0x580
	: public UObject // Size: 0x30
{
private:
	typedef UModel t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(401); // id32("Class Engine.Model")
		return ptr;
	}
	uint8_t UnknownData30[0x550];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUModel = sizeof(UModel); // 1408
    static_assert(sizeof(UModel) == 0x580, "Size of UModel is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
