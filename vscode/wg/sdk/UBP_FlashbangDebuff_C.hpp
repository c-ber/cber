#pragma once
#include "UTslFlashbangDebuff.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_FlashbangDebuff_C // Size: 0x508
	: public UTslFlashbangDebuff // Size: 0x500
{
private:
	typedef UBP_FlashbangDebuff_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(126037); // id32("BlueprintGeneratedClass BP_FlashbangDebuff.BP_FlashbangDebuff_C")
		return ptr;
	}
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x500 Size: 0x8 - ObjectProperty BP_FlashbangDebuff.BP_FlashbangDebuff_C.DefaultSceneRoot */


	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x500, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_FlashbangDebuff_C = sizeof(UBP_FlashbangDebuff_C); // 1288
    static_assert(sizeof(UBP_FlashbangDebuff_C) == 0x508, "Size of UBP_FlashbangDebuff_C is not correct.");
	auto constexpr UBP_FlashbangDebuff_C_DefaultSceneRoot_Offset = offsetof(UBP_FlashbangDebuff_C, DefaultSceneRoot);
	static_assert(UBP_FlashbangDebuff_C_DefaultSceneRoot_Offset == 0x500, "UBP_FlashbangDebuff_C::DefaultSceneRoot offset is not 500");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
