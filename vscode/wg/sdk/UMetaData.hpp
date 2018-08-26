#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMetaData // Size: 0xD0
	: public UObject // Size: 0x30
{
private:
	typedef UMetaData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(149); // id32("Class CoreUObject.MetaData")
		return ptr;
	}
	uint8_t UnknownData30[0xA0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMetaData = sizeof(UMetaData); // 208
    static_assert(sizeof(UMetaData) == 0xD0, "Size of UMetaData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
