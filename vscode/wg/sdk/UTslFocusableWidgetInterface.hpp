#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslFocusableWidgetInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UTslFocusableWidgetInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1381); // id32("Class TslGame.TslFocusableWidgetInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslFocusableWidgetInterface = sizeof(UTslFocusableWidgetInterface); // 48
    static_assert(sizeof(UTslFocusableWidgetInterface) == 0x30, "Size of UTslFocusableWidgetInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
