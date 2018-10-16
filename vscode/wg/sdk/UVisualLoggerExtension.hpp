#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVisualLoggerExtension // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UVisualLoggerExtension t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(667); // id32("Class AIModule.VisualLoggerExtension")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVisualLoggerExtension = sizeof(UVisualLoggerExtension); // 48
    static_assert(sizeof(UVisualLoggerExtension) == 0x30, "Size of UVisualLoggerExtension is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
