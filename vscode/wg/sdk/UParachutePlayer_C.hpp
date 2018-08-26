#pragma once
#include "UParachuteVehicle.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "ETimelineDirection.hpp"
#include "FVector2D.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UParachutePlayer_C // Size: 0x6D4
	: public UParachuteVehicle // Size: 0x5E0
{
private:
	typedef UParachutePlayer_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(91730); // id32("BlueprintGeneratedClass ParachutePlayer.ParachutePlayer_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x5E0 Size: 0x8 - StructProperty ParachutePlayer.ParachutePlayer_C.UberGraphFrame */
	ExternalPtr<struct UParachuteVehicleSeatInteraction> ParachuteVehicleSeatInteraction; /* Ofs: 0x5E8 Size: 0x8 - ObjectProperty ParachutePlayer.ParachutePlayer_C.ParachuteVehicleSeatInteraction */
	ExternalPtr<struct UParticleSystemComponent> CloudEffectParachuting; /* Ofs: 0x5F0 Size: 0x8 - ObjectProperty ParachutePlayer.ParachutePlayer_C.CloudEffectParachuting */
	ExternalPtr<struct UParticleSystemComponent> CloudEffectFalling; /* Ofs: 0x5F8 Size: 0x8 - ObjectProperty ParachutePlayer.ParachutePlayer_C.CloudEffectFalling */
	ExternalPtr<struct UCameraComponent> FreeFallFirstPersonCameraInVehicle; /* Ofs: 0x600 Size: 0x8 - ObjectProperty ParachutePlayer.ParachutePlayer_C.FreeFallFirstPersonCameraInVehicle */
	ExternalPtr<struct USpringArmInVehicleComponent> FreeFallFirstSpringArmInVehicle; /* Ofs: 0x608 Size: 0x8 - ObjectProperty ParachutePlayer.ParachutePlayer_C.FreeFallFirstSpringArmInVehicle */
	ExternalPtr<struct UCameraComponent> FreeFallThirdPersonCameraInVehicle; /* Ofs: 0x610 Size: 0x8 - ObjectProperty ParachutePlayer.ParachutePlayer_C.FreeFallThirdPersonCameraInVehicle */
	ExternalPtr<struct USpringArmInVehicleComponent> FreeFallThirdPersonSpringArmInVehicle; /* Ofs: 0x618 Size: 0x8 - ObjectProperty ParachutePlayer.ParachutePlayer_C.FreeFallThirdPersonSpringArmInVehicle */
	ExternalPtr<struct UCameraComponent> FirstPersonCameraInVehicle; /* Ofs: 0x620 Size: 0x8 - ObjectProperty ParachutePlayer.ParachutePlayer_C.FirstPersonCameraInVehicle */
	ExternalPtr<struct UCameraComponent> ThirdPersonCameraInVehicle; /* Ofs: 0x628 Size: 0x8 - ObjectProperty ParachutePlayer.ParachutePlayer_C.ThirdPersonCameraInVehicle */
	ExternalPtr<struct USpringArmInVehicleComponent> FirstPersonSpringArmInVehicle; /* Ofs: 0x630 Size: 0x8 - ObjectProperty ParachutePlayer.ParachutePlayer_C.FirstPersonSpringArmInVehicle */
	ExternalPtr<struct USpringArmInVehicleComponent> ThirdPersonSpringArmInVehicle; /* Ofs: 0x638 Size: 0x8 - ObjectProperty ParachutePlayer.ParachutePlayer_C.ThirdPersonSpringArmInVehicle */
	float _____0______1_48D534754930C313D14949AAF35C3B50; /* Ofs: 0x640 Size: 0x4 - FloatProperty ParachutePlayer.ParachutePlayer_C._____0______1_48D534754930C313D14949AAF35C3B50 */
	TEnumAsByte<enum ETimelineDirection> _____0__Direction_48D534754930C313D14949AAF35C3B50; /* Ofs: 0x644 Size: 0x1 - ByteProperty ParachutePlayer.ParachutePlayer_C._____0__Direction_48D534754930C313D14949AAF35C3B50 */
	uint8_t UnknownData645[0x3];
	ExternalPtr<struct UTimelineComponent> ______x__1; /* Ofs: 0x648 Size: 0x8 - ObjectProperty ParachutePlayer.ParachutePlayer_C.АР„З|·xЗ_1 */
	float MaxTerminalVelocity; /* Ofs: 0x650 Size: 0x4 - FloatProperty ParachutePlayer.ParachutePlayer_C.MaxTerminalVelocity */
	float MaxDecreaseTerminalVelocity; /* Ofs: 0x654 Size: 0x4 - FloatProperty ParachutePlayer.ParachutePlayer_C.MaxDecreaseTerminalVelocity */
	float LandingBrakeFactor; /* Ofs: 0x658 Size: 0x4 - FloatProperty ParachutePlayer.ParachutePlayer_C.LandingBrakeFactor */
	float MaxLateralSpeed; /* Ofs: 0x65C Size: 0x4 - FloatProperty ParachutePlayer.ParachutePlayer_C.MaxLateralSpeed */
	uint8_t boolField660;
	uint8_t UnknownData661[0x7];
	FScriptMulticastDelegate On_Land; /* Ofs: 0x668 Size: 0x10 - MulticastDelegateProperty ParachutePlayer.ParachutePlayer_C.On_Land */
	FVector2D TestCoord_Start; /* Ofs: 0x678 Size: 0x8 - StructProperty ParachutePlayer.ParachutePlayer_C.TestCoord_Start */
	FVector2D TestCoord_End; /* Ofs: 0x680 Size: 0x8 - StructProperty ParachutePlayer.ParachutePlayer_C.TestCoord_End */
	float ParachuteFallingAltitudeStart; /* Ofs: 0x688 Size: 0x4 - FloatProperty ParachutePlayer.ParachutePlayer_C.ParachuteFallingAltitudeStart */
	float ParachuteFallingAltitude; /* Ofs: 0x68C Size: 0x4 - FloatProperty ParachutePlayer.ParachutePlayer_C.ParachuteFallingAltitude */
	float SpeedKPH; /* Ofs: 0x690 Size: 0x4 - FloatProperty ParachutePlayer.ParachutePlayer_C.SpeedKPH */
	float ActualAltitude; /* Ofs: 0x694 Size: 0x4 - FloatProperty ParachutePlayer.ParachutePlayer_C.ActualAltitude */
	float InitialSunMultiplier; /* Ofs: 0x698 Size: 0x4 - FloatProperty ParachutePlayer.ParachutePlayer_C.InitialSunMultiplier */
	float InitialFogMultiplier; /* Ofs: 0x69C Size: 0x4 - FloatProperty ParachutePlayer.ParachutePlayer_C.InitialFogMultiplier */
	float InitialStartDistance; /* Ofs: 0x6A0 Size: 0x4 - FloatProperty ParachutePlayer.ParachutePlayer_C.InitialStartDistance */
	float StartSunMultiplier; /* Ofs: 0x6A4 Size: 0x4 - FloatProperty ParachutePlayer.ParachutePlayer_C.StartSunMultiplier */
	float StartFogMultiplier; /* Ofs: 0x6A8 Size: 0x4 - FloatProperty ParachutePlayer.ParachutePlayer_C.StartFogMultiplier */
	float StartStartDistance; /* Ofs: 0x6AC Size: 0x4 - FloatProperty ParachutePlayer.ParachutePlayer_C.StartStartDistance */
	ExternalPtr<struct UAtmosphericFogComponent> RefAtmosphereFogComponent; /* Ofs: 0x6B0 Size: 0x8 - ObjectProperty ParachutePlayer.ParachutePlayer_C.RefAtmosphereFogComponent */
	ExternalPtr<struct UExponentialHeightFogComponent> RefExponontialFogComponent; /* Ofs: 0x6B8 Size: 0x8 - ObjectProperty ParachutePlayer.ParachutePlayer_C.RefExponontialFogComponent */
	float VerticalSpeedKPH; /* Ofs: 0x6C0 Size: 0x4 - FloatProperty ParachutePlayer.ParachutePlayer_C.VerticalSpeedKPH */
	FVector LastVelocity; /* Ofs: 0x6C4 Size: 0xC - StructProperty ParachutePlayer.ParachutePlayer_C.LastVelocity */
	float RelativeVelocity; /* Ofs: 0x6D0 Size: 0x4 - FloatProperty ParachutePlayer.ParachutePlayer_C.RelativeVelocity */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetParachuteVehicleSeatInteraction(t_structHelper inst, ExternalPtr<struct UParachuteVehicleSeatInteraction> value) { inst.WriteOffset(0x5E8, value); }
	inline bool SetCloudEffectParachuting(t_structHelper inst, ExternalPtr<struct UParticleSystemComponent> value) { inst.WriteOffset(0x5F0, value); }
	inline bool SetCloudEffectFalling(t_structHelper inst, ExternalPtr<struct UParticleSystemComponent> value) { inst.WriteOffset(0x5F8, value); }
	inline bool SetFreeFallFirstPersonCameraInVehicle(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x600, value); }
	inline bool SetFreeFallFirstSpringArmInVehicle(t_structHelper inst, ExternalPtr<struct USpringArmInVehicleComponent> value) { inst.WriteOffset(0x608, value); }
	inline bool SetFreeFallThirdPersonCameraInVehicle(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x610, value); }
	inline bool SetFreeFallThirdPersonSpringArmInVehicle(t_structHelper inst, ExternalPtr<struct USpringArmInVehicleComponent> value) { inst.WriteOffset(0x618, value); }
	inline bool SetFirstPersonCameraInVehicle(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x620, value); }
	inline bool SetThirdPersonCameraInVehicle(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x628, value); }
	inline bool SetFirstPersonSpringArmInVehicle(t_structHelper inst, ExternalPtr<struct USpringArmInVehicleComponent> value) { inst.WriteOffset(0x630, value); }
	inline bool SetThirdPersonSpringArmInVehicle(t_structHelper inst, ExternalPtr<struct USpringArmInVehicleComponent> value) { inst.WriteOffset(0x638, value); }
	inline bool Set_____0______1_48D534754930C313D14949AAF35C3B50(t_structHelper inst, float value) { inst.WriteOffset(0x640, value); }
	inline bool Set_____0__Direction_48D534754930C313D14949AAF35C3B50(t_structHelper inst, TEnumAsByte<enum ETimelineDirection> value) { inst.WriteOffset(0x644, value); }
	inline bool Set______x__1(t_structHelper inst, ExternalPtr<struct UTimelineComponent> value) { inst.WriteOffset(0x648, value); }
	inline bool SetMaxTerminalVelocity(t_structHelper inst, float value) { inst.WriteOffset(0x650, value); }
	inline bool SetMaxDecreaseTerminalVelocity(t_structHelper inst, float value) { inst.WriteOffset(0x654, value); }
	inline bool SetLandingBrakeFactor(t_structHelper inst, float value) { inst.WriteOffset(0x658, value); }
	inline bool SetMaxLateralSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x65C, value); }
	inline bool isDebug()
	{
		return boolField660& 0x1;
	}
	inline bool SetisDebug(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x660, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOn_Land(t_structHelper inst, FScriptMulticastDelegate value) { inst.WriteOffset(0x668, value); }
	inline bool SetTestCoord_Start(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x678, value); }
	inline bool SetTestCoord_End(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x680, value); }
	inline bool SetParachuteFallingAltitudeStart(t_structHelper inst, float value) { inst.WriteOffset(0x688, value); }
	inline bool SetParachuteFallingAltitude(t_structHelper inst, float value) { inst.WriteOffset(0x68C, value); }
	inline bool SetSpeedKPH(t_structHelper inst, float value) { inst.WriteOffset(0x690, value); }
	inline bool SetActualAltitude(t_structHelper inst, float value) { inst.WriteOffset(0x694, value); }
	inline bool SetInitialSunMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x698, value); }
	inline bool SetInitialFogMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x69C, value); }
	inline bool SetInitialStartDistance(t_structHelper inst, float value) { inst.WriteOffset(0x6A0, value); }
	inline bool SetStartSunMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x6A4, value); }
	inline bool SetStartFogMultiplier(t_structHelper inst, float value) { inst.WriteOffset(0x6A8, value); }
	inline bool SetStartStartDistance(t_structHelper inst, float value) { inst.WriteOffset(0x6AC, value); }
	inline bool SetRefAtmosphereFogComponent(t_structHelper inst, ExternalPtr<struct UAtmosphericFogComponent> value) { inst.WriteOffset(0x6B0, value); }
	inline bool SetRefExponontialFogComponent(t_structHelper inst, ExternalPtr<struct UExponentialHeightFogComponent> value) { inst.WriteOffset(0x6B8, value); }
	inline bool SetVerticalSpeedKPH(t_structHelper inst, float value) { inst.WriteOffset(0x6C0, value); }
	inline bool SetLastVelocity(t_structHelper inst, FVector value) { inst.WriteOffset(0x6C4, value); }
	inline bool SetRelativeVelocity(t_structHelper inst, float value) { inst.WriteOffset(0x6D0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUParachutePlayer_C = sizeof(UParachutePlayer_C); // 1748
    static_assert(sizeof(UParachutePlayer_C) == 0x6D4, "Size of UParachutePlayer_C is not correct.");
	auto constexpr UParachutePlayer_C_UberGraphFrame_Offset = offsetof(UParachutePlayer_C, UberGraphFrame);
	static_assert(UParachutePlayer_C_UberGraphFrame_Offset == 0x5e0, "UParachutePlayer_C::UberGraphFrame offset is not 5e0");
	auto constexpr UParachutePlayer_C_ParachuteVehicleSeatInteraction_Offset = offsetof(UParachutePlayer_C, ParachuteVehicleSeatInteraction);
	static_assert(UParachutePlayer_C_ParachuteVehicleSeatInteraction_Offset == 0x5e8, "UParachutePlayer_C::ParachuteVehicleSeatInteraction offset is not 5e8");
	auto constexpr UParachutePlayer_C_CloudEffectParachuting_Offset = offsetof(UParachutePlayer_C, CloudEffectParachuting);
	static_assert(UParachutePlayer_C_CloudEffectParachuting_Offset == 0x5f0, "UParachutePlayer_C::CloudEffectParachuting offset is not 5f0");
	auto constexpr UParachutePlayer_C_CloudEffectFalling_Offset = offsetof(UParachutePlayer_C, CloudEffectFalling);
	static_assert(UParachutePlayer_C_CloudEffectFalling_Offset == 0x5f8, "UParachutePlayer_C::CloudEffectFalling offset is not 5f8");
	auto constexpr UParachutePlayer_C_FreeFallFirstPersonCameraInVehicle_Offset = offsetof(UParachutePlayer_C, FreeFallFirstPersonCameraInVehicle);
	static_assert(UParachutePlayer_C_FreeFallFirstPersonCameraInVehicle_Offset == 0x600, "UParachutePlayer_C::FreeFallFirstPersonCameraInVehicle offset is not 600");
	auto constexpr UParachutePlayer_C_FreeFallFirstSpringArmInVehicle_Offset = offsetof(UParachutePlayer_C, FreeFallFirstSpringArmInVehicle);
	static_assert(UParachutePlayer_C_FreeFallFirstSpringArmInVehicle_Offset == 0x608, "UParachutePlayer_C::FreeFallFirstSpringArmInVehicle offset is not 608");
	auto constexpr UParachutePlayer_C_FreeFallThirdPersonCameraInVehicle_Offset = offsetof(UParachutePlayer_C, FreeFallThirdPersonCameraInVehicle);
	static_assert(UParachutePlayer_C_FreeFallThirdPersonCameraInVehicle_Offset == 0x610, "UParachutePlayer_C::FreeFallThirdPersonCameraInVehicle offset is not 610");
	auto constexpr UParachutePlayer_C_FreeFallThirdPersonSpringArmInVehicle_Offset = offsetof(UParachutePlayer_C, FreeFallThirdPersonSpringArmInVehicle);
	static_assert(UParachutePlayer_C_FreeFallThirdPersonSpringArmInVehicle_Offset == 0x618, "UParachutePlayer_C::FreeFallThirdPersonSpringArmInVehicle offset is not 618");
	auto constexpr UParachutePlayer_C_FirstPersonCameraInVehicle_Offset = offsetof(UParachutePlayer_C, FirstPersonCameraInVehicle);
	static_assert(UParachutePlayer_C_FirstPersonCameraInVehicle_Offset == 0x620, "UParachutePlayer_C::FirstPersonCameraInVehicle offset is not 620");
	auto constexpr UParachutePlayer_C_ThirdPersonCameraInVehicle_Offset = offsetof(UParachutePlayer_C, ThirdPersonCameraInVehicle);
	static_assert(UParachutePlayer_C_ThirdPersonCameraInVehicle_Offset == 0x628, "UParachutePlayer_C::ThirdPersonCameraInVehicle offset is not 628");
	auto constexpr UParachutePlayer_C_FirstPersonSpringArmInVehicle_Offset = offsetof(UParachutePlayer_C, FirstPersonSpringArmInVehicle);
	static_assert(UParachutePlayer_C_FirstPersonSpringArmInVehicle_Offset == 0x630, "UParachutePlayer_C::FirstPersonSpringArmInVehicle offset is not 630");
	auto constexpr UParachutePlayer_C_ThirdPersonSpringArmInVehicle_Offset = offsetof(UParachutePlayer_C, ThirdPersonSpringArmInVehicle);
	static_assert(UParachutePlayer_C_ThirdPersonSpringArmInVehicle_Offset == 0x638, "UParachutePlayer_C::ThirdPersonSpringArmInVehicle offset is not 638");
	auto constexpr UParachutePlayer_C______0______1_48D534754930C313D14949AAF35C3B50_Offset = offsetof(UParachutePlayer_C, _____0______1_48D534754930C313D14949AAF35C3B50);
	static_assert(UParachutePlayer_C______0______1_48D534754930C313D14949AAF35C3B50_Offset == 0x640, "UParachutePlayer_C::_____0______1_48D534754930C313D14949AAF35C3B50 offset is not 640");
	auto constexpr UParachutePlayer_C______0__Direction_48D534754930C313D14949AAF35C3B50_Offset = offsetof(UParachutePlayer_C, _____0__Direction_48D534754930C313D14949AAF35C3B50);
	static_assert(UParachutePlayer_C______0__Direction_48D534754930C313D14949AAF35C3B50_Offset == 0x644, "UParachutePlayer_C::_____0__Direction_48D534754930C313D14949AAF35C3B50 offset is not 644");
	auto constexpr UParachutePlayer_C_АР„З|·xЗ_1_Offset = offsetof(UParachutePlayer_C, АР„З|·xЗ_1);
	static_assert(UParachutePlayer_C_АР„З|·xЗ_1_Offset == 0x648, "UParachutePlayer_C::АР„З|·xЗ_1 offset is not 648");
	auto constexpr UParachutePlayer_C_MaxTerminalVelocity_Offset = offsetof(UParachutePlayer_C, MaxTerminalVelocity);
	static_assert(UParachutePlayer_C_MaxTerminalVelocity_Offset == 0x650, "UParachutePlayer_C::MaxTerminalVelocity offset is not 650");
	auto constexpr UParachutePlayer_C_MaxDecreaseTerminalVelocity_Offset = offsetof(UParachutePlayer_C, MaxDecreaseTerminalVelocity);
	static_assert(UParachutePlayer_C_MaxDecreaseTerminalVelocity_Offset == 0x654, "UParachutePlayer_C::MaxDecreaseTerminalVelocity offset is not 654");
	auto constexpr UParachutePlayer_C_LandingBrakeFactor_Offset = offsetof(UParachutePlayer_C, LandingBrakeFactor);
	static_assert(UParachutePlayer_C_LandingBrakeFactor_Offset == 0x658, "UParachutePlayer_C::LandingBrakeFactor offset is not 658");
	auto constexpr UParachutePlayer_C_MaxLateralSpeed_Offset = offsetof(UParachutePlayer_C, MaxLateralSpeed);
	static_assert(UParachutePlayer_C_MaxLateralSpeed_Offset == 0x65c, "UParachutePlayer_C::MaxLateralSpeed offset is not 65c");
	auto constexpr UParachutePlayer_C_boolField660_Offset = offsetof(UParachutePlayer_C, boolField660);
	static_assert(UParachutePlayer_C_boolField660_Offset == 0x660, "UParachutePlayer_C::boolField660 offset is not 660");
	auto constexpr UParachutePlayer_C_On_Land_Offset = offsetof(UParachutePlayer_C, On_Land);
	static_assert(UParachutePlayer_C_On_Land_Offset == 0x668, "UParachutePlayer_C::On_Land offset is not 668");
	auto constexpr UParachutePlayer_C_TestCoord_Start_Offset = offsetof(UParachutePlayer_C, TestCoord_Start);
	static_assert(UParachutePlayer_C_TestCoord_Start_Offset == 0x678, "UParachutePlayer_C::TestCoord_Start offset is not 678");
	auto constexpr UParachutePlayer_C_TestCoord_End_Offset = offsetof(UParachutePlayer_C, TestCoord_End);
	static_assert(UParachutePlayer_C_TestCoord_End_Offset == 0x680, "UParachutePlayer_C::TestCoord_End offset is not 680");
	auto constexpr UParachutePlayer_C_ParachuteFallingAltitudeStart_Offset = offsetof(UParachutePlayer_C, ParachuteFallingAltitudeStart);
	static_assert(UParachutePlayer_C_ParachuteFallingAltitudeStart_Offset == 0x688, "UParachutePlayer_C::ParachuteFallingAltitudeStart offset is not 688");
	auto constexpr UParachutePlayer_C_ParachuteFallingAltitude_Offset = offsetof(UParachutePlayer_C, ParachuteFallingAltitude);
	static_assert(UParachutePlayer_C_ParachuteFallingAltitude_Offset == 0x68c, "UParachutePlayer_C::ParachuteFallingAltitude offset is not 68c");
	auto constexpr UParachutePlayer_C_SpeedKPH_Offset = offsetof(UParachutePlayer_C, SpeedKPH);
	static_assert(UParachutePlayer_C_SpeedKPH_Offset == 0x690, "UParachutePlayer_C::SpeedKPH offset is not 690");
	auto constexpr UParachutePlayer_C_ActualAltitude_Offset = offsetof(UParachutePlayer_C, ActualAltitude);
	static_assert(UParachutePlayer_C_ActualAltitude_Offset == 0x694, "UParachutePlayer_C::ActualAltitude offset is not 694");
	auto constexpr UParachutePlayer_C_InitialSunMultiplier_Offset = offsetof(UParachutePlayer_C, InitialSunMultiplier);
	static_assert(UParachutePlayer_C_InitialSunMultiplier_Offset == 0x698, "UParachutePlayer_C::InitialSunMultiplier offset is not 698");
	auto constexpr UParachutePlayer_C_InitialFogMultiplier_Offset = offsetof(UParachutePlayer_C, InitialFogMultiplier);
	static_assert(UParachutePlayer_C_InitialFogMultiplier_Offset == 0x69c, "UParachutePlayer_C::InitialFogMultiplier offset is not 69c");
	auto constexpr UParachutePlayer_C_InitialStartDistance_Offset = offsetof(UParachutePlayer_C, InitialStartDistance);
	static_assert(UParachutePlayer_C_InitialStartDistance_Offset == 0x6a0, "UParachutePlayer_C::InitialStartDistance offset is not 6a0");
	auto constexpr UParachutePlayer_C_StartSunMultiplier_Offset = offsetof(UParachutePlayer_C, StartSunMultiplier);
	static_assert(UParachutePlayer_C_StartSunMultiplier_Offset == 0x6a4, "UParachutePlayer_C::StartSunMultiplier offset is not 6a4");
	auto constexpr UParachutePlayer_C_StartFogMultiplier_Offset = offsetof(UParachutePlayer_C, StartFogMultiplier);
	static_assert(UParachutePlayer_C_StartFogMultiplier_Offset == 0x6a8, "UParachutePlayer_C::StartFogMultiplier offset is not 6a8");
	auto constexpr UParachutePlayer_C_StartStartDistance_Offset = offsetof(UParachutePlayer_C, StartStartDistance);
	static_assert(UParachutePlayer_C_StartStartDistance_Offset == 0x6ac, "UParachutePlayer_C::StartStartDistance offset is not 6ac");
	auto constexpr UParachutePlayer_C_RefAtmosphereFogComponent_Offset = offsetof(UParachutePlayer_C, RefAtmosphereFogComponent);
	static_assert(UParachutePlayer_C_RefAtmosphereFogComponent_Offset == 0x6b0, "UParachutePlayer_C::RefAtmosphereFogComponent offset is not 6b0");
	auto constexpr UParachutePlayer_C_RefExponontialFogComponent_Offset = offsetof(UParachutePlayer_C, RefExponontialFogComponent);
	static_assert(UParachutePlayer_C_RefExponontialFogComponent_Offset == 0x6b8, "UParachutePlayer_C::RefExponontialFogComponent offset is not 6b8");
	auto constexpr UParachutePlayer_C_VerticalSpeedKPH_Offset = offsetof(UParachutePlayer_C, VerticalSpeedKPH);
	static_assert(UParachutePlayer_C_VerticalSpeedKPH_Offset == 0x6c0, "UParachutePlayer_C::VerticalSpeedKPH offset is not 6c0");
	auto constexpr UParachutePlayer_C_LastVelocity_Offset = offsetof(UParachutePlayer_C, LastVelocity);
	static_assert(UParachutePlayer_C_LastVelocity_Offset == 0x6c4, "UParachutePlayer_C::LastVelocity offset is not 6c4");
	auto constexpr UParachutePlayer_C_RelativeVelocity_Offset = offsetof(UParachutePlayer_C, RelativeVelocity);
	static_assert(UParachutePlayer_C_RelativeVelocity_Offset == 0x6d0, "UParachutePlayer_C::RelativeVelocity offset is not 6d0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
