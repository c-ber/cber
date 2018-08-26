#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USubThingSpawnProcessor // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef USubThingSpawnProcessor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1972); // id32("Class TslGame.SubThingSpawnProcessor")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSubThingSpawnProcessor = sizeof(USubThingSpawnProcessor); // 48
    static_assert(sizeof(USubThingSpawnProcessor) == 0x30, "Size of USubThingSpawnProcessor is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
