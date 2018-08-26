#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULinkerPlaceholderFunction // Size: 0x300
	: public UFunction // Size: 0x160
{
private:
	typedef ULinkerPlaceholderFunction t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(148); // id32("Class CoreUObject.LinkerPlaceholderFunction")
		return ptr;
	}
	uint8_t UnknownData160[0x1A0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULinkerPlaceholderFunction = sizeof(ULinkerPlaceholderFunction); // 768
    static_assert(sizeof(ULinkerPlaceholderFunction) == 0x300, "Size of ULinkerPlaceholderFunction is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
