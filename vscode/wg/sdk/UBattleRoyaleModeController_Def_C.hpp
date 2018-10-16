#pragma once
#include "UBattleRoyaleModeController.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBattleRoyaleModeController_Def_C // Size: 0x678
	: public UBattleRoyaleModeController // Size: 0x670
{
private:
	typedef UBattleRoyaleModeController_Def_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(114804); // id32("BlueprintGeneratedClass BattleRoyaleModeController_Def.BattleRoyaleModeController_Def_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x670 Size: 0x8 - StructProperty BattleRoyaleModeController_Def.BattleRoyaleModeController_Def_C.UberGraphFrame */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x670, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBattleRoyaleModeController_Def_C = sizeof(UBattleRoyaleModeController_Def_C); // 1656
    static_assert(sizeof(UBattleRoyaleModeController_Def_C) == 0x678, "Size of UBattleRoyaleModeController_Def_C is not correct.");
	auto constexpr UBattleRoyaleModeController_Def_C_UberGraphFrame_Offset = offsetof(UBattleRoyaleModeController_Def_C, UberGraphFrame);
	static_assert(UBattleRoyaleModeController_Def_C_UberGraphFrame_Offset == 0x670, "UBattleRoyaleModeController_Def_C::UberGraphFrame offset is not 670");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
