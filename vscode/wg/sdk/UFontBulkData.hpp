#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFontBulkData // Size: 0xD0
	: public UObject // Size: 0x30
{
private:
	typedef UFontBulkData t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(374); // id32("Class SlateCore.FontBulkData")
		return ptr;
	}
	uint8_t UnknownData30[0xA0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFontBulkData = sizeof(UFontBulkData); // 208
    static_assert(sizeof(UFontBulkData) == 0xD0, "Size of UFontBulkData is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
