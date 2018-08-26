#pragma once
#include "UChannel.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UActorChannel // Size: 0x238
	: public UChannel // Size: 0x70
{
private:
	typedef UActorChannel t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(692); // id32("Class Engine.ActorChannel")
		return ptr;
	}
	ExternalPtr<struct UActor> Actor; /* Ofs: 0x70 Size: 0x8 - ObjectProperty Engine.ActorChannel.Actor */
	uint8_t UnknownData78[0x1C0];


	inline bool SetActor(t_structHelper inst, ExternalPtr<struct UActor> value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUActorChannel = sizeof(UActorChannel); // 568
    static_assert(sizeof(UActorChannel) == 0x238, "Size of UActorChannel is not correct.");
	auto constexpr UActorChannel_Actor_Offset = offsetof(UActorChannel, Actor);
	static_assert(UActorChannel_Actor_Offset == 0x70, "UActorChannel::Actor offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
