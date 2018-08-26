#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWFUFileListLambdaDelegate // Size: 0x90
	: public UObject // Size: 0x30
{
private:
	typedef UWFUFileListLambdaDelegate t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(333); // id32("Class WindowsFileUtility.WFUFileListLambdaDelegate")
		return ptr;
	}
	uint8_t UnknownData30[0x60];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWFUFileListLambdaDelegate = sizeof(UWFUFileListLambdaDelegate); // 144
    static_assert(sizeof(UWFUFileListLambdaDelegate) == 0x90, "Size of UWFUFileListLambdaDelegate is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
