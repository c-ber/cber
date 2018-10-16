#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) ULandscapeInfoMap // Size: 0x80
	: public UObject // Size: 0x30
{
private:
	typedef ULandscapeInfoMap t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1290); // id32("Class Landscape.LandscapeInfoMap")
		return ptr;
	}
	uint8_t UnknownData30[0x50];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofULandscapeInfoMap = sizeof(ULandscapeInfoMap); // 128
    static_assert(sizeof(ULandscapeInfoMap) == 0x80, "Size of ULandscapeInfoMap is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
