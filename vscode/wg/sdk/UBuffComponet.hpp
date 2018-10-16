#pragma once
#include "UActorComponent.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuffComponet // Size: 0x250
	: public UActorComponent // Size: 0x1F0
{
private:
	typedef UBuffComponet t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1824); // id32("Class TslGame.BuffComponet")
		return ptr;
	}
//	TArray<ExternalPtr<struct UTslBuff>> Buffs; /* Ofs: 0x1E8 Size: 0x10 - ArrayProperty TslGame.BuffComponet.Buffs */
	uint8_t UnknownData1F0[0x60];


//	inline bool SetBuffs(t_structHelper inst, TArray<ExternalPtr<struct UTslBuff>> value) { inst.WriteOffset(0x1E8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuffComponet = sizeof(UBuffComponet); // 592
    static_assert(sizeof(UBuffComponet) == 0x250, "Size of UBuffComponet is not correct.");
//	auto constexpr UBuffComponet_Buffs_Offset = offsetof(UBuffComponet, Buffs);
//	static_assert(UBuffComponet_Buffs_Offset == 0x1e8, "UBuffComponet::Buffs offset is not 1e8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
