#pragma once
#include "UPowerup_Base_C.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPowerup_Bandage_C // Size: 0x460
	: public UPowerup_Base_C // Size: 0x458
{
private:
	typedef UPowerup_Bandage_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(92960); // id32("BlueprintGeneratedClass Powerup_Bandage.Powerup_Bandage_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x458 Size: 0x8 - StructProperty Powerup_Bandage.Powerup_Bandage_C.UberGraphFrame */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x458, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPowerup_Bandage_C = sizeof(UPowerup_Bandage_C); // 1120
    static_assert(sizeof(UPowerup_Bandage_C) == 0x460, "Size of UPowerup_Bandage_C is not correct.");
	auto constexpr UPowerup_Bandage_C_UberGraphFrame_Offset = offsetof(UPowerup_Bandage_C, UberGraphFrame);
	static_assert(UPowerup_Bandage_C_UberGraphFrame_Offset == 0x458, "UPowerup_Bandage_C::UberGraphFrame offset is not 458");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
