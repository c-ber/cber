#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USlotContainerInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef USlotContainerInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1839); // id32("Class TslGame.SlotContainerInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSlotContainerInterface = sizeof(USlotContainerInterface); // 48
    static_assert(sizeof(USlotContainerInterface) == 0x30, "Size of USlotContainerInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
