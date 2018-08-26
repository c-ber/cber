#pragma once
#include "UTslBuff.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBuff_Invulnerablility_C // Size: 0x478
	: public UTslBuff // Size: 0x470
{
private:
	typedef UBuff_Invulnerablility_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88491); // id32("BlueprintGeneratedClass Buff_Invulnerablility.Buff_Invulnerablility_C")
		return ptr;
	}
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x470 Size: 0x8 - ObjectProperty Buff_Invulnerablility.Buff_Invulnerablility_C.DefaultSceneRoot */


	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x470, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBuff_Invulnerablility_C = sizeof(UBuff_Invulnerablility_C); // 1144
    static_assert(sizeof(UBuff_Invulnerablility_C) == 0x478, "Size of UBuff_Invulnerablility_C is not correct.");
	auto constexpr UBuff_Invulnerablility_C_DefaultSceneRoot_Offset = offsetof(UBuff_Invulnerablility_C, DefaultSceneRoot);
	static_assert(UBuff_Invulnerablility_C_DefaultSceneRoot_Offset == 0x470, "UBuff_Invulnerablility_C::DefaultSceneRoot offset is not 470");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
