#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UZipUtilityInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UZipUtilityInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2001); // id32("Class ZipUtility.ZipUtilityInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUZipUtilityInterface = sizeof(UZipUtilityInterface); // 48
    static_assert(sizeof(UZipUtilityInterface) == 0x30, "Size of UZipUtilityInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
