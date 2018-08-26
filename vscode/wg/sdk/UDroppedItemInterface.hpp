#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDroppedItemInterface // Size: 0x30
	: public UInterface // Size: 0x30
{
private:
	typedef UDroppedItemInterface t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1856); // id32("Class TslGame.DroppedItemInterface")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDroppedItemInterface = sizeof(UDroppedItemInterface); // 48
    static_assert(sizeof(UDroppedItemInterface) == 0x30, "Size of UDroppedItemInterface is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
