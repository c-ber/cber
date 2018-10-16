#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UActionInputEventHolder // Size: 0x58
	: public UObject // Size: 0x30
{
private:
	typedef UActionInputEventHolder t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(403); // id32("Class TslGame.ActionInputEventHolder")
		return ptr;
	}
	uint8_t UnknownData30[0x28];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUActionInputEventHolder = sizeof(UActionInputEventHolder); // 88
    static_assert(sizeof(UActionInputEventHolder) == 0x58, "Size of UActionInputEventHolder is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
