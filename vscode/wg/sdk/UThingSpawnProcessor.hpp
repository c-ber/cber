#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UThingSpawnProcessor // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef UThingSpawnProcessor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1971); // id32("Class TslGame.ThingSpawnProcessor")
		return ptr;
	}
	uint8_t UnknownData30[0x10];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUThingSpawnProcessor = sizeof(UThingSpawnProcessor); // 64
    static_assert(sizeof(UThingSpawnProcessor) == 0x40, "Size of UThingSpawnProcessor is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
