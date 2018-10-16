#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCoherentUIGTEventHelpers // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UCoherentUIGTEventHelpers t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2070); // id32("Class CoherentUIGTPlugin.CoherentUIGTEventHelpers")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCoherentUIGTEventHelpers = sizeof(UCoherentUIGTEventHelpers); // 48
    static_assert(sizeof(UCoherentUIGTEventHelpers) == 0x30, "Size of UCoherentUIGTEventHelpers is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
