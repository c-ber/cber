#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UZULambdaDelegate // Size: 0xE0
	: public UObject // Size: 0x30
{
private:
	typedef UZULambdaDelegate t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2004); // id32("Class ZipUtility.ZULambdaDelegate")
		return ptr;
	}
	uint8_t UnknownData30[0xB0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUZULambdaDelegate = sizeof(UZULambdaDelegate); // 224
    static_assert(sizeof(UZULambdaDelegate) == 0xE0, "Size of UZULambdaDelegate is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
