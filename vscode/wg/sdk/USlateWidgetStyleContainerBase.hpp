#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USlateWidgetStyleContainerBase // Size: 0x38
	: public UObject // Size: 0x30
{
private:
	typedef USlateWidgetStyleContainerBase t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(379); // id32("Class SlateCore.SlateWidgetStyleContainerBase")
		return ptr;
	}
	uint8_t UnknownData30[0x8];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSlateWidgetStyleContainerBase = sizeof(USlateWidgetStyleContainerBase); // 56
    static_assert(sizeof(USlateWidgetStyleContainerBase) == 0x38, "Size of USlateWidgetStyleContainerBase is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
