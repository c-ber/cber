#pragma once
#include "UBattleRoyaleModeController_Def_C.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBattleRoyaleModeController_Desert_C // Size: 0x678
	: public UBattleRoyaleModeController_Def_C // Size: 0x678
{
private:
	typedef UBattleRoyaleModeController_Desert_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(135575); // id32("BlueprintGeneratedClass BattleRoyaleModeController_Desert.BattleRoyaleModeController_Desert_C")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBattleRoyaleModeController_Desert_C = sizeof(UBattleRoyaleModeController_Desert_C); // 1656
    static_assert(sizeof(UBattleRoyaleModeController_Desert_C) == 0x678, "Size of UBattleRoyaleModeController_Desert_C is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
