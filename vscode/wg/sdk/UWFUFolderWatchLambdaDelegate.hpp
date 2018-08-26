#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWFUFolderWatchLambdaDelegate // Size: 0x90
	: public UObject // Size: 0x30
{
private:
	typedef UWFUFolderWatchLambdaDelegate t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(335); // id32("Class WindowsFileUtility.WFUFolderWatchLambdaDelegate")
		return ptr;
	}
	uint8_t UnknownData30[0x60];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWFUFolderWatchLambdaDelegate = sizeof(UWFUFolderWatchLambdaDelegate); // 144
    static_assert(sizeof(UWFUFolderWatchLambdaDelegate) == 0x90, "Size of UWFUFolderWatchLambdaDelegate is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
