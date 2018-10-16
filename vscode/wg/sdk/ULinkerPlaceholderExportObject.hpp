#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULinkerPlaceholderExportObject // Size: 0xE0
	: public UObject // Size: 0x30
{
private:
	typedef ULinkerPlaceholderExportObject t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(146); // id32("Class CoreUObject.LinkerPlaceholderExportObject")
		return ptr;
	}
	uint8_t UnknownData30[0xB0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULinkerPlaceholderExportObject = sizeof(ULinkerPlaceholderExportObject); // 224
    static_assert(sizeof(ULinkerPlaceholderExportObject) == 0xE0, "Size of ULinkerPlaceholderExportObject is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
