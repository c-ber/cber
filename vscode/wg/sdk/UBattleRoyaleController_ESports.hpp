#pragma once
#include "UBattleRoyaleModeController.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBattleRoyaleController_ESports // Size: 0x670
	: public UBattleRoyaleModeController // Size: 0x670
{
private:
	typedef UBattleRoyaleController_ESports t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1930); // id32("Class TslGame.BattleRoyaleController_ESports")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBattleRoyaleController_ESports = sizeof(UBattleRoyaleController_ESports); // 1648
    static_assert(sizeof(UBattleRoyaleController_ESports) == 0x670, "Size of UBattleRoyaleController_ESports is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
