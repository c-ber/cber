#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCoherentUIGTJSEvent // Size: 0xB0
	: public UObject // Size: 0x30
{
private:
	typedef UCoherentUIGTJSEvent t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(2068); // id32("Class CoherentUIGTPlugin.CoherentUIGTJSEvent")
		return ptr;
	}
	uint8_t UnknownData30[0x80];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCoherentUIGTJSEvent = sizeof(UCoherentUIGTJSEvent); // 176
    static_assert(sizeof(UCoherentUIGTJSEvent) == 0xB0, "Size of UCoherentUIGTJSEvent is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
