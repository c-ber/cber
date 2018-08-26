#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USlotWidgetBaseInterface_C // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef USlotWidgetBaseInterface_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(67597); // id32("BlueprintGeneratedClass SlotWidgetBaseInterface.SlotWidgetBaseInterface_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSlotWidgetBaseInterface_C = sizeof(USlotWidgetBaseInterface_C); // 48
    static_assert(sizeof(USlotWidgetBaseInterface_C) == 0x30, "Size of USlotWidgetBaseInterface_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
