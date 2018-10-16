#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULinkerPlaceholderClass // Size: 0x470
	: public UClass // Size: 0x2D0
{
private:
	typedef ULinkerPlaceholderClass t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(145); // id32("Class CoreUObject.LinkerPlaceholderClass")
		return ptr;
	}
	uint8_t UnknownData2D0[0x1A0];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULinkerPlaceholderClass = sizeof(ULinkerPlaceholderClass); // 1136
    static_assert(sizeof(ULinkerPlaceholderClass) == 0x470, "Size of ULinkerPlaceholderClass is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
