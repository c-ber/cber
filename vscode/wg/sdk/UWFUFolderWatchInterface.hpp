#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWFUFolderWatchInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UWFUFolderWatchInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(334); // id32("Class WindowsFileUtility.WFUFolderWatchInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWFUFolderWatchInterface = sizeof(UWFUFolderWatchInterface); // 48
    static_assert(sizeof(UWFUFolderWatchInterface) == 0x30, "Size of UWFUFolderWatchInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
