#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDynamicBlueprintBinding // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UDynamicBlueprintBinding t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(754); // id32("Class Engine.DynamicBlueprintBinding")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDynamicBlueprintBinding = sizeof(UDynamicBlueprintBinding); // 48
    static_assert(sizeof(UDynamicBlueprintBinding) == 0x30, "Size of UDynamicBlueprintBinding is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
