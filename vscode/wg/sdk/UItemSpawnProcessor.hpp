#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UItemSpawnProcessor // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef UItemSpawnProcessor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1915); // id32("Class TslGame.ItemSpawnProcessor")
		return ptr;
	}
	uint8_t UnknownData30[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUItemSpawnProcessor = sizeof(UItemSpawnProcessor); // 64
    static_assert(sizeof(UItemSpawnProcessor) == 0x40, "Size of UItemSpawnProcessor is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
