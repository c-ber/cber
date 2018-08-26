#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USubActor // Size: 0x410
	: public UActor // Size: 0x410
{
private:
	typedef USubActor t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1837); // id32("Class TslGame.SubActor")
		return ptr;
	}
//	ExternalPtr<struct UTslCharacter> NetOwnerCharacter; /* Ofs: 0x408 Size: 0x8 - ObjectProperty TslGame.SubActor.NetOwnerCharacter */


//	inline bool SetNetOwnerCharacter(t_structHelper inst, ExternalPtr<struct UTslCharacter> value) { inst.WriteOffset(0x408, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSubActor = sizeof(USubActor); // 1040
    static_assert(sizeof(USubActor) == 0x410, "Size of USubActor is not correct.");
//	auto constexpr USubActor_NetOwnerCharacter_Offset = offsetof(USubActor, NetOwnerCharacter);
//	static_assert(USubActor_NetOwnerCharacter_Offset == 0x408, "USubActor::NetOwnerCharacter offset is not 408");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
