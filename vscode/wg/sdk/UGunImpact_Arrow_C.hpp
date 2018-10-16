#pragma once
#include "UTslImpactEffect.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UGunImpact_Arrow_C // Size: 0x7F8
	: public UTslImpactEffect // Size: 0x7F0
{
private:
	typedef UGunImpact_Arrow_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(53118); // id32("BlueprintGeneratedClass GunImpact_Arrow.GunImpact_Arrow_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x7F0 Size: 0x8 - StructProperty GunImpact_Arrow.GunImpact_Arrow_C.UberGraphFrame */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x7F0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUGunImpact_Arrow_C = sizeof(UGunImpact_Arrow_C); // 2040
    static_assert(sizeof(UGunImpact_Arrow_C) == 0x7F8, "Size of UGunImpact_Arrow_C is not correct.");
	auto constexpr UGunImpact_Arrow_C_UberGraphFrame_Offset = offsetof(UGunImpact_Arrow_C, UberGraphFrame);
	static_assert(UGunImpact_Arrow_C_UberGraphFrame_Offset == 0x7f0, "UGunImpact_Arrow_C::UberGraphFrame offset is not 7f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
