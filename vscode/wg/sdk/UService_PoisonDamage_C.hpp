#pragma once
#include "UBTService_BlueprintBase.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FTimerHandle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UService_PoisonDamage_C // Size: 0xB8
	: public UBTService_BlueprintBase // Size: 0xA0
{
private:
	typedef UService_PoisonDamage_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(114737); // id32("BlueprintGeneratedClass Service_PoisonDamage.Service_PoisonDamage_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0xA0 Size: 0x8 - StructProperty Service_PoisonDamage.Service_PoisonDamage_C.UberGraphFrame */
	FTimerHandle EverySecondTimer; /* Ofs: 0xA8 Size: 0x8 - StructProperty Service_PoisonDamage.Service_PoisonDamage_C.EverySecondTimer */
	ExternalPtr<struct UBattleRoyaleModeController> ModeController; /* Ofs: 0xB0 Size: 0x8 - ObjectProperty Service_PoisonDamage.Service_PoisonDamage_C.ModeController */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0xA0, value); }
	inline bool SetEverySecondTimer(t_structHelper inst, FTimerHandle value) { inst.WriteOffset(0xA8, value); }
	inline bool SetModeController(t_structHelper inst, ExternalPtr<struct UBattleRoyaleModeController> value) { inst.WriteOffset(0xB0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUService_PoisonDamage_C = sizeof(UService_PoisonDamage_C); // 184
    static_assert(sizeof(UService_PoisonDamage_C) == 0xB8, "Size of UService_PoisonDamage_C is not correct.");
	auto constexpr UService_PoisonDamage_C_UberGraphFrame_Offset = offsetof(UService_PoisonDamage_C, UberGraphFrame);
	static_assert(UService_PoisonDamage_C_UberGraphFrame_Offset == 0xa0, "UService_PoisonDamage_C::UberGraphFrame offset is not a0");
	auto constexpr UService_PoisonDamage_C_EverySecondTimer_Offset = offsetof(UService_PoisonDamage_C, EverySecondTimer);
	static_assert(UService_PoisonDamage_C_EverySecondTimer_Offset == 0xa8, "UService_PoisonDamage_C::EverySecondTimer offset is not a8");
	auto constexpr UService_PoisonDamage_C_ModeController_Offset = offsetof(UService_PoisonDamage_C, ModeController);
	static_assert(UService_PoisonDamage_C_ModeController_Offset == 0xb0, "UService_PoisonDamage_C::ModeController offset is not b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
