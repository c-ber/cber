#pragma once
#include "UTransportAircraftVehicle.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UDummyTransportAircraft_C // Size: 0x954
	: public UTransportAircraftVehicle // Size: 0x5B0
{
private:
	typedef UDummyTransportAircraft_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(157066); // id32("BlueprintGeneratedClass DummyTransportAircraft.DummyTransportAircraft_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x5B0 Size: 0x8 - StructProperty DummyTransportAircraft.DummyTransportAircraft_C.UberGraphFrame */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat35; /* Ofs: 0x5B8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat35 */
	ExternalPtr<struct UStaticMeshComponent> c130_CargoDoor_02; /* Ofs: 0x5C0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.c130_CargoDoor_02 */
	ExternalPtr<struct UStaticMeshComponent> c130_CargoDoor_01; /* Ofs: 0x5C8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.c130_CargoDoor_01 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat103; /* Ofs: 0x5D0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat103 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat102; /* Ofs: 0x5D8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat102 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat101; /* Ofs: 0x5E0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat101 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat100; /* Ofs: 0x5E8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat100 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat99; /* Ofs: 0x5F0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat99 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat98; /* Ofs: 0x5F8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat98 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat97; /* Ofs: 0x600 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat97 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat96; /* Ofs: 0x608 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat96 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat95; /* Ofs: 0x610 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat95 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat94; /* Ofs: 0x618 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat94 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat93; /* Ofs: 0x620 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat93 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat92; /* Ofs: 0x628 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat92 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat91; /* Ofs: 0x630 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat91 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat90; /* Ofs: 0x638 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat90 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat89; /* Ofs: 0x640 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat89 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat88; /* Ofs: 0x648 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat88 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat87; /* Ofs: 0x650 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat87 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat86; /* Ofs: 0x658 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat86 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat85; /* Ofs: 0x660 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat85 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat84; /* Ofs: 0x668 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat84 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat83; /* Ofs: 0x670 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat83 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat82; /* Ofs: 0x678 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat82 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat81; /* Ofs: 0x680 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat81 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat80; /* Ofs: 0x688 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat80 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat79; /* Ofs: 0x690 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat79 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat78; /* Ofs: 0x698 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat78 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat77; /* Ofs: 0x6A0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat77 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat76; /* Ofs: 0x6A8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat76 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat75; /* Ofs: 0x6B0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat75 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat74; /* Ofs: 0x6B8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat74 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat73; /* Ofs: 0x6C0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat73 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat72; /* Ofs: 0x6C8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat72 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat71; /* Ofs: 0x6D0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat71 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat70; /* Ofs: 0x6D8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat70 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat69; /* Ofs: 0x6E0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat69 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat68; /* Ofs: 0x6E8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat68 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat67; /* Ofs: 0x6F0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat67 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat66; /* Ofs: 0x6F8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat66 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat65; /* Ofs: 0x700 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat65 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat64; /* Ofs: 0x708 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat64 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat63; /* Ofs: 0x710 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat63 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat62; /* Ofs: 0x718 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat62 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat61; /* Ofs: 0x720 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat61 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat60; /* Ofs: 0x728 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat60 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat59; /* Ofs: 0x730 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat59 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat58; /* Ofs: 0x738 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat58 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat57; /* Ofs: 0x740 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat57 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat56; /* Ofs: 0x748 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat56 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat55; /* Ofs: 0x750 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat55 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat54; /* Ofs: 0x758 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat54 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat53; /* Ofs: 0x760 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat53 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat52; /* Ofs: 0x768 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat52 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat51; /* Ofs: 0x770 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat51 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat50; /* Ofs: 0x778 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat50 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat49; /* Ofs: 0x780 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat49 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat48; /* Ofs: 0x788 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat48 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat47; /* Ofs: 0x790 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat47 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat46; /* Ofs: 0x798 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat46 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat45; /* Ofs: 0x7A0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat45 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat44; /* Ofs: 0x7A8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat44 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat43; /* Ofs: 0x7B0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat43 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat42; /* Ofs: 0x7B8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat42 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat41; /* Ofs: 0x7C0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat41 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat40; /* Ofs: 0x7C8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat40 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat39; /* Ofs: 0x7D0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat39 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat38; /* Ofs: 0x7D8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat38 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat37; /* Ofs: 0x7E0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat37 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat36; /* Ofs: 0x7E8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat36 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat34; /* Ofs: 0x7F0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat34 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat33; /* Ofs: 0x7F8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat33 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat32; /* Ofs: 0x800 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat32 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat31; /* Ofs: 0x808 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat31 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat30; /* Ofs: 0x810 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat30 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat29; /* Ofs: 0x818 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat29 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat28; /* Ofs: 0x820 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat28 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat27; /* Ofs: 0x828 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat27 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat26; /* Ofs: 0x830 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat26 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat25; /* Ofs: 0x838 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat25 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat24; /* Ofs: 0x840 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat24 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat23; /* Ofs: 0x848 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat23 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat22; /* Ofs: 0x850 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat22 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat21; /* Ofs: 0x858 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat21 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat20; /* Ofs: 0x860 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat20 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat19; /* Ofs: 0x868 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat19 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat18; /* Ofs: 0x870 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat18 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat17; /* Ofs: 0x878 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat17 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat16; /* Ofs: 0x880 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat16 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat15; /* Ofs: 0x888 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat15 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat14; /* Ofs: 0x890 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat14 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat13; /* Ofs: 0x898 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat13 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat12; /* Ofs: 0x8A0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat12 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat11; /* Ofs: 0x8A8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat11 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat10; /* Ofs: 0x8B0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat10 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat9; /* Ofs: 0x8B8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat9 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat8; /* Ofs: 0x8C0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat8 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat7; /* Ofs: 0x8C8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat7 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat6; /* Ofs: 0x8D0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat6 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat5; /* Ofs: 0x8D8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat5 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat4; /* Ofs: 0x8E0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat4 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat3; /* Ofs: 0x8E8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat3 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat2; /* Ofs: 0x8F0 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat2 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat1; /* Ofs: 0x8F8 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat1 */
	ExternalPtr<struct UVehicleSeatInteractionComponent> Seat0; /* Ofs: 0x900 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Seat0 */
	ExternalPtr<struct UCameraComponent> ThirdPersonCameraInVehicle; /* Ofs: 0x908 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.ThirdPersonCameraInVehicle */
	ExternalPtr<struct USpringArmInVehicleComponent> ThirdPersonVehicleSpringArm; /* Ofs: 0x910 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.ThirdPersonVehicleSpringArm */
	ExternalPtr<struct UParticleSystemComponent> Rotors; /* Ofs: 0x918 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Rotors */
	ExternalPtr<struct UMaterialBillboardComponent> Light_CenterFrontLow; /* Ofs: 0x920 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Light_CenterFrontLow */
	ExternalPtr<struct UMaterialBillboardComponent> Light_CenterBack; /* Ofs: 0x928 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Light_CenterBack */
	ExternalPtr<struct UMaterialBillboardComponent> Light_CenterFrontHigh; /* Ofs: 0x930 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Light_CenterFrontHigh */
	ExternalPtr<struct UMaterialBillboardComponent> Light_RightWing; /* Ofs: 0x938 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Light_RightWing */
	ExternalPtr<struct UMaterialBillboardComponent> Light_LeftWing; /* Ofs: 0x940 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.Light_LeftWing */
	ExternalPtr<struct UTslVehicleCommonComponent> TslVehicleCommon; /* Ofs: 0x948 Size: 0x8 - ObjectProperty DummyTransportAircraft.DummyTransportAircraft_C.TslVehicleCommon */
	float DoorAlpha; /* Ofs: 0x950 Size: 0x4 - FloatProperty DummyTransportAircraft.DummyTransportAircraft_C.DoorAlpha */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetSeat35(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x5B8, value); }
	inline bool Setc130_CargoDoor_02(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x5C0, value); }
	inline bool Setc130_CargoDoor_01(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetSeat103(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetSeat102(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetSeat101(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetSeat100(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x5E8, value); }
	inline bool SetSeat99(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x5F0, value); }
	inline bool SetSeat98(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x5F8, value); }
	inline bool SetSeat97(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x600, value); }
	inline bool SetSeat96(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x608, value); }
	inline bool SetSeat95(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x610, value); }
	inline bool SetSeat94(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x618, value); }
	inline bool SetSeat93(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x620, value); }
	inline bool SetSeat92(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x628, value); }
	inline bool SetSeat91(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x630, value); }
	inline bool SetSeat90(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x638, value); }
	inline bool SetSeat89(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x640, value); }
	inline bool SetSeat88(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x648, value); }
	inline bool SetSeat87(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x650, value); }
	inline bool SetSeat86(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x658, value); }
	inline bool SetSeat85(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x660, value); }
	inline bool SetSeat84(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x668, value); }
	inline bool SetSeat83(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x670, value); }
	inline bool SetSeat82(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x678, value); }
	inline bool SetSeat81(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x680, value); }
	inline bool SetSeat80(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x688, value); }
	inline bool SetSeat79(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x690, value); }
	inline bool SetSeat78(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x698, value); }
	inline bool SetSeat77(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x6A0, value); }
	inline bool SetSeat76(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x6A8, value); }
	inline bool SetSeat75(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x6B0, value); }
	inline bool SetSeat74(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x6B8, value); }
	inline bool SetSeat73(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x6C0, value); }
	inline bool SetSeat72(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x6C8, value); }
	inline bool SetSeat71(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x6D0, value); }
	inline bool SetSeat70(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x6D8, value); }
	inline bool SetSeat69(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x6E0, value); }
	inline bool SetSeat68(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x6E8, value); }
	inline bool SetSeat67(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x6F0, value); }
	inline bool SetSeat66(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x6F8, value); }
	inline bool SetSeat65(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x700, value); }
	inline bool SetSeat64(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x708, value); }
	inline bool SetSeat63(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x710, value); }
	inline bool SetSeat62(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x718, value); }
	inline bool SetSeat61(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x720, value); }
	inline bool SetSeat60(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x728, value); }
	inline bool SetSeat59(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x730, value); }
	inline bool SetSeat58(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x738, value); }
	inline bool SetSeat57(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x740, value); }
	inline bool SetSeat56(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x748, value); }
	inline bool SetSeat55(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x750, value); }
	inline bool SetSeat54(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x758, value); }
	inline bool SetSeat53(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x760, value); }
	inline bool SetSeat52(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x768, value); }
	inline bool SetSeat51(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x770, value); }
	inline bool SetSeat50(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x778, value); }
	inline bool SetSeat49(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x780, value); }
	inline bool SetSeat48(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x788, value); }
	inline bool SetSeat47(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x790, value); }
	inline bool SetSeat46(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x798, value); }
	inline bool SetSeat45(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x7A0, value); }
	inline bool SetSeat44(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x7A8, value); }
	inline bool SetSeat43(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x7B0, value); }
	inline bool SetSeat42(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x7B8, value); }
	inline bool SetSeat41(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x7C0, value); }
	inline bool SetSeat40(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x7C8, value); }
	inline bool SetSeat39(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x7D0, value); }
	inline bool SetSeat38(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x7D8, value); }
	inline bool SetSeat37(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x7E0, value); }
	inline bool SetSeat36(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x7E8, value); }
	inline bool SetSeat34(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x7F0, value); }
	inline bool SetSeat33(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x7F8, value); }
	inline bool SetSeat32(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x800, value); }
	inline bool SetSeat31(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x808, value); }
	inline bool SetSeat30(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x810, value); }
	inline bool SetSeat29(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x818, value); }
	inline bool SetSeat28(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x820, value); }
	inline bool SetSeat27(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x828, value); }
	inline bool SetSeat26(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x830, value); }
	inline bool SetSeat25(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x838, value); }
	inline bool SetSeat24(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x840, value); }
	inline bool SetSeat23(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x848, value); }
	inline bool SetSeat22(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x850, value); }
	inline bool SetSeat21(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x858, value); }
	inline bool SetSeat20(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x860, value); }
	inline bool SetSeat19(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x868, value); }
	inline bool SetSeat18(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x870, value); }
	inline bool SetSeat17(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x878, value); }
	inline bool SetSeat16(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x880, value); }
	inline bool SetSeat15(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x888, value); }
	inline bool SetSeat14(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x890, value); }
	inline bool SetSeat13(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x898, value); }
	inline bool SetSeat12(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x8A0, value); }
	inline bool SetSeat11(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x8A8, value); }
	inline bool SetSeat10(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x8B0, value); }
	inline bool SetSeat9(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x8B8, value); }
	inline bool SetSeat8(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x8C0, value); }
	inline bool SetSeat7(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x8C8, value); }
	inline bool SetSeat6(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x8D0, value); }
	inline bool SetSeat5(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x8D8, value); }
	inline bool SetSeat4(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x8E0, value); }
	inline bool SetSeat3(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x8E8, value); }
	inline bool SetSeat2(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x8F0, value); }
	inline bool SetSeat1(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x8F8, value); }
	inline bool SetSeat0(t_structHelper inst, ExternalPtr<struct UVehicleSeatInteractionComponent> value) { inst.WriteOffset(0x900, value); }
	inline bool SetThirdPersonCameraInVehicle(t_structHelper inst, ExternalPtr<struct UCameraComponent> value) { inst.WriteOffset(0x908, value); }
	inline bool SetThirdPersonVehicleSpringArm(t_structHelper inst, ExternalPtr<struct USpringArmInVehicleComponent> value) { inst.WriteOffset(0x910, value); }
	inline bool SetRotors(t_structHelper inst, ExternalPtr<struct UParticleSystemComponent> value) { inst.WriteOffset(0x918, value); }
	inline bool SetLight_CenterFrontLow(t_structHelper inst, ExternalPtr<struct UMaterialBillboardComponent> value) { inst.WriteOffset(0x920, value); }
	inline bool SetLight_CenterBack(t_structHelper inst, ExternalPtr<struct UMaterialBillboardComponent> value) { inst.WriteOffset(0x928, value); }
	inline bool SetLight_CenterFrontHigh(t_structHelper inst, ExternalPtr<struct UMaterialBillboardComponent> value) { inst.WriteOffset(0x930, value); }
	inline bool SetLight_RightWing(t_structHelper inst, ExternalPtr<struct UMaterialBillboardComponent> value) { inst.WriteOffset(0x938, value); }
	inline bool SetLight_LeftWing(t_structHelper inst, ExternalPtr<struct UMaterialBillboardComponent> value) { inst.WriteOffset(0x940, value); }
	inline bool SetTslVehicleCommon(t_structHelper inst, ExternalPtr<struct UTslVehicleCommonComponent> value) { inst.WriteOffset(0x948, value); }
	inline bool SetDoorAlpha(t_structHelper inst, float value) { inst.WriteOffset(0x950, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUDummyTransportAircraft_C = sizeof(UDummyTransportAircraft_C); // 2388
    static_assert(sizeof(UDummyTransportAircraft_C) == 0x954, "Size of UDummyTransportAircraft_C is not correct.");
	auto constexpr UDummyTransportAircraft_C_UberGraphFrame_Offset = offsetof(UDummyTransportAircraft_C, UberGraphFrame);
	static_assert(UDummyTransportAircraft_C_UberGraphFrame_Offset == 0x5b0, "UDummyTransportAircraft_C::UberGraphFrame offset is not 5b0");
	auto constexpr UDummyTransportAircraft_C_Seat35_Offset = offsetof(UDummyTransportAircraft_C, Seat35);
	static_assert(UDummyTransportAircraft_C_Seat35_Offset == 0x5b8, "UDummyTransportAircraft_C::Seat35 offset is not 5b8");
	auto constexpr UDummyTransportAircraft_C_c130_CargoDoor_02_Offset = offsetof(UDummyTransportAircraft_C, c130_CargoDoor_02);
	static_assert(UDummyTransportAircraft_C_c130_CargoDoor_02_Offset == 0x5c0, "UDummyTransportAircraft_C::c130_CargoDoor_02 offset is not 5c0");
	auto constexpr UDummyTransportAircraft_C_c130_CargoDoor_01_Offset = offsetof(UDummyTransportAircraft_C, c130_CargoDoor_01);
	static_assert(UDummyTransportAircraft_C_c130_CargoDoor_01_Offset == 0x5c8, "UDummyTransportAircraft_C::c130_CargoDoor_01 offset is not 5c8");
	auto constexpr UDummyTransportAircraft_C_Seat103_Offset = offsetof(UDummyTransportAircraft_C, Seat103);
	static_assert(UDummyTransportAircraft_C_Seat103_Offset == 0x5d0, "UDummyTransportAircraft_C::Seat103 offset is not 5d0");
	auto constexpr UDummyTransportAircraft_C_Seat102_Offset = offsetof(UDummyTransportAircraft_C, Seat102);
	static_assert(UDummyTransportAircraft_C_Seat102_Offset == 0x5d8, "UDummyTransportAircraft_C::Seat102 offset is not 5d8");
	auto constexpr UDummyTransportAircraft_C_Seat101_Offset = offsetof(UDummyTransportAircraft_C, Seat101);
	static_assert(UDummyTransportAircraft_C_Seat101_Offset == 0x5e0, "UDummyTransportAircraft_C::Seat101 offset is not 5e0");
	auto constexpr UDummyTransportAircraft_C_Seat100_Offset = offsetof(UDummyTransportAircraft_C, Seat100);
	static_assert(UDummyTransportAircraft_C_Seat100_Offset == 0x5e8, "UDummyTransportAircraft_C::Seat100 offset is not 5e8");
	auto constexpr UDummyTransportAircraft_C_Seat99_Offset = offsetof(UDummyTransportAircraft_C, Seat99);
	static_assert(UDummyTransportAircraft_C_Seat99_Offset == 0x5f0, "UDummyTransportAircraft_C::Seat99 offset is not 5f0");
	auto constexpr UDummyTransportAircraft_C_Seat98_Offset = offsetof(UDummyTransportAircraft_C, Seat98);
	static_assert(UDummyTransportAircraft_C_Seat98_Offset == 0x5f8, "UDummyTransportAircraft_C::Seat98 offset is not 5f8");
	auto constexpr UDummyTransportAircraft_C_Seat97_Offset = offsetof(UDummyTransportAircraft_C, Seat97);
	static_assert(UDummyTransportAircraft_C_Seat97_Offset == 0x600, "UDummyTransportAircraft_C::Seat97 offset is not 600");
	auto constexpr UDummyTransportAircraft_C_Seat96_Offset = offsetof(UDummyTransportAircraft_C, Seat96);
	static_assert(UDummyTransportAircraft_C_Seat96_Offset == 0x608, "UDummyTransportAircraft_C::Seat96 offset is not 608");
	auto constexpr UDummyTransportAircraft_C_Seat95_Offset = offsetof(UDummyTransportAircraft_C, Seat95);
	static_assert(UDummyTransportAircraft_C_Seat95_Offset == 0x610, "UDummyTransportAircraft_C::Seat95 offset is not 610");
	auto constexpr UDummyTransportAircraft_C_Seat94_Offset = offsetof(UDummyTransportAircraft_C, Seat94);
	static_assert(UDummyTransportAircraft_C_Seat94_Offset == 0x618, "UDummyTransportAircraft_C::Seat94 offset is not 618");
	auto constexpr UDummyTransportAircraft_C_Seat93_Offset = offsetof(UDummyTransportAircraft_C, Seat93);
	static_assert(UDummyTransportAircraft_C_Seat93_Offset == 0x620, "UDummyTransportAircraft_C::Seat93 offset is not 620");
	auto constexpr UDummyTransportAircraft_C_Seat92_Offset = offsetof(UDummyTransportAircraft_C, Seat92);
	static_assert(UDummyTransportAircraft_C_Seat92_Offset == 0x628, "UDummyTransportAircraft_C::Seat92 offset is not 628");
	auto constexpr UDummyTransportAircraft_C_Seat91_Offset = offsetof(UDummyTransportAircraft_C, Seat91);
	static_assert(UDummyTransportAircraft_C_Seat91_Offset == 0x630, "UDummyTransportAircraft_C::Seat91 offset is not 630");
	auto constexpr UDummyTransportAircraft_C_Seat90_Offset = offsetof(UDummyTransportAircraft_C, Seat90);
	static_assert(UDummyTransportAircraft_C_Seat90_Offset == 0x638, "UDummyTransportAircraft_C::Seat90 offset is not 638");
	auto constexpr UDummyTransportAircraft_C_Seat89_Offset = offsetof(UDummyTransportAircraft_C, Seat89);
	static_assert(UDummyTransportAircraft_C_Seat89_Offset == 0x640, "UDummyTransportAircraft_C::Seat89 offset is not 640");
	auto constexpr UDummyTransportAircraft_C_Seat88_Offset = offsetof(UDummyTransportAircraft_C, Seat88);
	static_assert(UDummyTransportAircraft_C_Seat88_Offset == 0x648, "UDummyTransportAircraft_C::Seat88 offset is not 648");
	auto constexpr UDummyTransportAircraft_C_Seat87_Offset = offsetof(UDummyTransportAircraft_C, Seat87);
	static_assert(UDummyTransportAircraft_C_Seat87_Offset == 0x650, "UDummyTransportAircraft_C::Seat87 offset is not 650");
	auto constexpr UDummyTransportAircraft_C_Seat86_Offset = offsetof(UDummyTransportAircraft_C, Seat86);
	static_assert(UDummyTransportAircraft_C_Seat86_Offset == 0x658, "UDummyTransportAircraft_C::Seat86 offset is not 658");
	auto constexpr UDummyTransportAircraft_C_Seat85_Offset = offsetof(UDummyTransportAircraft_C, Seat85);
	static_assert(UDummyTransportAircraft_C_Seat85_Offset == 0x660, "UDummyTransportAircraft_C::Seat85 offset is not 660");
	auto constexpr UDummyTransportAircraft_C_Seat84_Offset = offsetof(UDummyTransportAircraft_C, Seat84);
	static_assert(UDummyTransportAircraft_C_Seat84_Offset == 0x668, "UDummyTransportAircraft_C::Seat84 offset is not 668");
	auto constexpr UDummyTransportAircraft_C_Seat83_Offset = offsetof(UDummyTransportAircraft_C, Seat83);
	static_assert(UDummyTransportAircraft_C_Seat83_Offset == 0x670, "UDummyTransportAircraft_C::Seat83 offset is not 670");
	auto constexpr UDummyTransportAircraft_C_Seat82_Offset = offsetof(UDummyTransportAircraft_C, Seat82);
	static_assert(UDummyTransportAircraft_C_Seat82_Offset == 0x678, "UDummyTransportAircraft_C::Seat82 offset is not 678");
	auto constexpr UDummyTransportAircraft_C_Seat81_Offset = offsetof(UDummyTransportAircraft_C, Seat81);
	static_assert(UDummyTransportAircraft_C_Seat81_Offset == 0x680, "UDummyTransportAircraft_C::Seat81 offset is not 680");
	auto constexpr UDummyTransportAircraft_C_Seat80_Offset = offsetof(UDummyTransportAircraft_C, Seat80);
	static_assert(UDummyTransportAircraft_C_Seat80_Offset == 0x688, "UDummyTransportAircraft_C::Seat80 offset is not 688");
	auto constexpr UDummyTransportAircraft_C_Seat79_Offset = offsetof(UDummyTransportAircraft_C, Seat79);
	static_assert(UDummyTransportAircraft_C_Seat79_Offset == 0x690, "UDummyTransportAircraft_C::Seat79 offset is not 690");
	auto constexpr UDummyTransportAircraft_C_Seat78_Offset = offsetof(UDummyTransportAircraft_C, Seat78);
	static_assert(UDummyTransportAircraft_C_Seat78_Offset == 0x698, "UDummyTransportAircraft_C::Seat78 offset is not 698");
	auto constexpr UDummyTransportAircraft_C_Seat77_Offset = offsetof(UDummyTransportAircraft_C, Seat77);
	static_assert(UDummyTransportAircraft_C_Seat77_Offset == 0x6a0, "UDummyTransportAircraft_C::Seat77 offset is not 6a0");
	auto constexpr UDummyTransportAircraft_C_Seat76_Offset = offsetof(UDummyTransportAircraft_C, Seat76);
	static_assert(UDummyTransportAircraft_C_Seat76_Offset == 0x6a8, "UDummyTransportAircraft_C::Seat76 offset is not 6a8");
	auto constexpr UDummyTransportAircraft_C_Seat75_Offset = offsetof(UDummyTransportAircraft_C, Seat75);
	static_assert(UDummyTransportAircraft_C_Seat75_Offset == 0x6b0, "UDummyTransportAircraft_C::Seat75 offset is not 6b0");
	auto constexpr UDummyTransportAircraft_C_Seat74_Offset = offsetof(UDummyTransportAircraft_C, Seat74);
	static_assert(UDummyTransportAircraft_C_Seat74_Offset == 0x6b8, "UDummyTransportAircraft_C::Seat74 offset is not 6b8");
	auto constexpr UDummyTransportAircraft_C_Seat73_Offset = offsetof(UDummyTransportAircraft_C, Seat73);
	static_assert(UDummyTransportAircraft_C_Seat73_Offset == 0x6c0, "UDummyTransportAircraft_C::Seat73 offset is not 6c0");
	auto constexpr UDummyTransportAircraft_C_Seat72_Offset = offsetof(UDummyTransportAircraft_C, Seat72);
	static_assert(UDummyTransportAircraft_C_Seat72_Offset == 0x6c8, "UDummyTransportAircraft_C::Seat72 offset is not 6c8");
	auto constexpr UDummyTransportAircraft_C_Seat71_Offset = offsetof(UDummyTransportAircraft_C, Seat71);
	static_assert(UDummyTransportAircraft_C_Seat71_Offset == 0x6d0, "UDummyTransportAircraft_C::Seat71 offset is not 6d0");
	auto constexpr UDummyTransportAircraft_C_Seat70_Offset = offsetof(UDummyTransportAircraft_C, Seat70);
	static_assert(UDummyTransportAircraft_C_Seat70_Offset == 0x6d8, "UDummyTransportAircraft_C::Seat70 offset is not 6d8");
	auto constexpr UDummyTransportAircraft_C_Seat69_Offset = offsetof(UDummyTransportAircraft_C, Seat69);
	static_assert(UDummyTransportAircraft_C_Seat69_Offset == 0x6e0, "UDummyTransportAircraft_C::Seat69 offset is not 6e0");
	auto constexpr UDummyTransportAircraft_C_Seat68_Offset = offsetof(UDummyTransportAircraft_C, Seat68);
	static_assert(UDummyTransportAircraft_C_Seat68_Offset == 0x6e8, "UDummyTransportAircraft_C::Seat68 offset is not 6e8");
	auto constexpr UDummyTransportAircraft_C_Seat67_Offset = offsetof(UDummyTransportAircraft_C, Seat67);
	static_assert(UDummyTransportAircraft_C_Seat67_Offset == 0x6f0, "UDummyTransportAircraft_C::Seat67 offset is not 6f0");
	auto constexpr UDummyTransportAircraft_C_Seat66_Offset = offsetof(UDummyTransportAircraft_C, Seat66);
	static_assert(UDummyTransportAircraft_C_Seat66_Offset == 0x6f8, "UDummyTransportAircraft_C::Seat66 offset is not 6f8");
	auto constexpr UDummyTransportAircraft_C_Seat65_Offset = offsetof(UDummyTransportAircraft_C, Seat65);
	static_assert(UDummyTransportAircraft_C_Seat65_Offset == 0x700, "UDummyTransportAircraft_C::Seat65 offset is not 700");
	auto constexpr UDummyTransportAircraft_C_Seat64_Offset = offsetof(UDummyTransportAircraft_C, Seat64);
	static_assert(UDummyTransportAircraft_C_Seat64_Offset == 0x708, "UDummyTransportAircraft_C::Seat64 offset is not 708");
	auto constexpr UDummyTransportAircraft_C_Seat63_Offset = offsetof(UDummyTransportAircraft_C, Seat63);
	static_assert(UDummyTransportAircraft_C_Seat63_Offset == 0x710, "UDummyTransportAircraft_C::Seat63 offset is not 710");
	auto constexpr UDummyTransportAircraft_C_Seat62_Offset = offsetof(UDummyTransportAircraft_C, Seat62);
	static_assert(UDummyTransportAircraft_C_Seat62_Offset == 0x718, "UDummyTransportAircraft_C::Seat62 offset is not 718");
	auto constexpr UDummyTransportAircraft_C_Seat61_Offset = offsetof(UDummyTransportAircraft_C, Seat61);
	static_assert(UDummyTransportAircraft_C_Seat61_Offset == 0x720, "UDummyTransportAircraft_C::Seat61 offset is not 720");
	auto constexpr UDummyTransportAircraft_C_Seat60_Offset = offsetof(UDummyTransportAircraft_C, Seat60);
	static_assert(UDummyTransportAircraft_C_Seat60_Offset == 0x728, "UDummyTransportAircraft_C::Seat60 offset is not 728");
	auto constexpr UDummyTransportAircraft_C_Seat59_Offset = offsetof(UDummyTransportAircraft_C, Seat59);
	static_assert(UDummyTransportAircraft_C_Seat59_Offset == 0x730, "UDummyTransportAircraft_C::Seat59 offset is not 730");
	auto constexpr UDummyTransportAircraft_C_Seat58_Offset = offsetof(UDummyTransportAircraft_C, Seat58);
	static_assert(UDummyTransportAircraft_C_Seat58_Offset == 0x738, "UDummyTransportAircraft_C::Seat58 offset is not 738");
	auto constexpr UDummyTransportAircraft_C_Seat57_Offset = offsetof(UDummyTransportAircraft_C, Seat57);
	static_assert(UDummyTransportAircraft_C_Seat57_Offset == 0x740, "UDummyTransportAircraft_C::Seat57 offset is not 740");
	auto constexpr UDummyTransportAircraft_C_Seat56_Offset = offsetof(UDummyTransportAircraft_C, Seat56);
	static_assert(UDummyTransportAircraft_C_Seat56_Offset == 0x748, "UDummyTransportAircraft_C::Seat56 offset is not 748");
	auto constexpr UDummyTransportAircraft_C_Seat55_Offset = offsetof(UDummyTransportAircraft_C, Seat55);
	static_assert(UDummyTransportAircraft_C_Seat55_Offset == 0x750, "UDummyTransportAircraft_C::Seat55 offset is not 750");
	auto constexpr UDummyTransportAircraft_C_Seat54_Offset = offsetof(UDummyTransportAircraft_C, Seat54);
	static_assert(UDummyTransportAircraft_C_Seat54_Offset == 0x758, "UDummyTransportAircraft_C::Seat54 offset is not 758");
	auto constexpr UDummyTransportAircraft_C_Seat53_Offset = offsetof(UDummyTransportAircraft_C, Seat53);
	static_assert(UDummyTransportAircraft_C_Seat53_Offset == 0x760, "UDummyTransportAircraft_C::Seat53 offset is not 760");
	auto constexpr UDummyTransportAircraft_C_Seat52_Offset = offsetof(UDummyTransportAircraft_C, Seat52);
	static_assert(UDummyTransportAircraft_C_Seat52_Offset == 0x768, "UDummyTransportAircraft_C::Seat52 offset is not 768");
	auto constexpr UDummyTransportAircraft_C_Seat51_Offset = offsetof(UDummyTransportAircraft_C, Seat51);
	static_assert(UDummyTransportAircraft_C_Seat51_Offset == 0x770, "UDummyTransportAircraft_C::Seat51 offset is not 770");
	auto constexpr UDummyTransportAircraft_C_Seat50_Offset = offsetof(UDummyTransportAircraft_C, Seat50);
	static_assert(UDummyTransportAircraft_C_Seat50_Offset == 0x778, "UDummyTransportAircraft_C::Seat50 offset is not 778");
	auto constexpr UDummyTransportAircraft_C_Seat49_Offset = offsetof(UDummyTransportAircraft_C, Seat49);
	static_assert(UDummyTransportAircraft_C_Seat49_Offset == 0x780, "UDummyTransportAircraft_C::Seat49 offset is not 780");
	auto constexpr UDummyTransportAircraft_C_Seat48_Offset = offsetof(UDummyTransportAircraft_C, Seat48);
	static_assert(UDummyTransportAircraft_C_Seat48_Offset == 0x788, "UDummyTransportAircraft_C::Seat48 offset is not 788");
	auto constexpr UDummyTransportAircraft_C_Seat47_Offset = offsetof(UDummyTransportAircraft_C, Seat47);
	static_assert(UDummyTransportAircraft_C_Seat47_Offset == 0x790, "UDummyTransportAircraft_C::Seat47 offset is not 790");
	auto constexpr UDummyTransportAircraft_C_Seat46_Offset = offsetof(UDummyTransportAircraft_C, Seat46);
	static_assert(UDummyTransportAircraft_C_Seat46_Offset == 0x798, "UDummyTransportAircraft_C::Seat46 offset is not 798");
	auto constexpr UDummyTransportAircraft_C_Seat45_Offset = offsetof(UDummyTransportAircraft_C, Seat45);
	static_assert(UDummyTransportAircraft_C_Seat45_Offset == 0x7a0, "UDummyTransportAircraft_C::Seat45 offset is not 7a0");
	auto constexpr UDummyTransportAircraft_C_Seat44_Offset = offsetof(UDummyTransportAircraft_C, Seat44);
	static_assert(UDummyTransportAircraft_C_Seat44_Offset == 0x7a8, "UDummyTransportAircraft_C::Seat44 offset is not 7a8");
	auto constexpr UDummyTransportAircraft_C_Seat43_Offset = offsetof(UDummyTransportAircraft_C, Seat43);
	static_assert(UDummyTransportAircraft_C_Seat43_Offset == 0x7b0, "UDummyTransportAircraft_C::Seat43 offset is not 7b0");
	auto constexpr UDummyTransportAircraft_C_Seat42_Offset = offsetof(UDummyTransportAircraft_C, Seat42);
	static_assert(UDummyTransportAircraft_C_Seat42_Offset == 0x7b8, "UDummyTransportAircraft_C::Seat42 offset is not 7b8");
	auto constexpr UDummyTransportAircraft_C_Seat41_Offset = offsetof(UDummyTransportAircraft_C, Seat41);
	static_assert(UDummyTransportAircraft_C_Seat41_Offset == 0x7c0, "UDummyTransportAircraft_C::Seat41 offset is not 7c0");
	auto constexpr UDummyTransportAircraft_C_Seat40_Offset = offsetof(UDummyTransportAircraft_C, Seat40);
	static_assert(UDummyTransportAircraft_C_Seat40_Offset == 0x7c8, "UDummyTransportAircraft_C::Seat40 offset is not 7c8");
	auto constexpr UDummyTransportAircraft_C_Seat39_Offset = offsetof(UDummyTransportAircraft_C, Seat39);
	static_assert(UDummyTransportAircraft_C_Seat39_Offset == 0x7d0, "UDummyTransportAircraft_C::Seat39 offset is not 7d0");
	auto constexpr UDummyTransportAircraft_C_Seat38_Offset = offsetof(UDummyTransportAircraft_C, Seat38);
	static_assert(UDummyTransportAircraft_C_Seat38_Offset == 0x7d8, "UDummyTransportAircraft_C::Seat38 offset is not 7d8");
	auto constexpr UDummyTransportAircraft_C_Seat37_Offset = offsetof(UDummyTransportAircraft_C, Seat37);
	static_assert(UDummyTransportAircraft_C_Seat37_Offset == 0x7e0, "UDummyTransportAircraft_C::Seat37 offset is not 7e0");
	auto constexpr UDummyTransportAircraft_C_Seat36_Offset = offsetof(UDummyTransportAircraft_C, Seat36);
	static_assert(UDummyTransportAircraft_C_Seat36_Offset == 0x7e8, "UDummyTransportAircraft_C::Seat36 offset is not 7e8");
	auto constexpr UDummyTransportAircraft_C_Seat34_Offset = offsetof(UDummyTransportAircraft_C, Seat34);
	static_assert(UDummyTransportAircraft_C_Seat34_Offset == 0x7f0, "UDummyTransportAircraft_C::Seat34 offset is not 7f0");
	auto constexpr UDummyTransportAircraft_C_Seat33_Offset = offsetof(UDummyTransportAircraft_C, Seat33);
	static_assert(UDummyTransportAircraft_C_Seat33_Offset == 0x7f8, "UDummyTransportAircraft_C::Seat33 offset is not 7f8");
	auto constexpr UDummyTransportAircraft_C_Seat32_Offset = offsetof(UDummyTransportAircraft_C, Seat32);
	static_assert(UDummyTransportAircraft_C_Seat32_Offset == 0x800, "UDummyTransportAircraft_C::Seat32 offset is not 800");
	auto constexpr UDummyTransportAircraft_C_Seat31_Offset = offsetof(UDummyTransportAircraft_C, Seat31);
	static_assert(UDummyTransportAircraft_C_Seat31_Offset == 0x808, "UDummyTransportAircraft_C::Seat31 offset is not 808");
	auto constexpr UDummyTransportAircraft_C_Seat30_Offset = offsetof(UDummyTransportAircraft_C, Seat30);
	static_assert(UDummyTransportAircraft_C_Seat30_Offset == 0x810, "UDummyTransportAircraft_C::Seat30 offset is not 810");
	auto constexpr UDummyTransportAircraft_C_Seat29_Offset = offsetof(UDummyTransportAircraft_C, Seat29);
	static_assert(UDummyTransportAircraft_C_Seat29_Offset == 0x818, "UDummyTransportAircraft_C::Seat29 offset is not 818");
	auto constexpr UDummyTransportAircraft_C_Seat28_Offset = offsetof(UDummyTransportAircraft_C, Seat28);
	static_assert(UDummyTransportAircraft_C_Seat28_Offset == 0x820, "UDummyTransportAircraft_C::Seat28 offset is not 820");
	auto constexpr UDummyTransportAircraft_C_Seat27_Offset = offsetof(UDummyTransportAircraft_C, Seat27);
	static_assert(UDummyTransportAircraft_C_Seat27_Offset == 0x828, "UDummyTransportAircraft_C::Seat27 offset is not 828");
	auto constexpr UDummyTransportAircraft_C_Seat26_Offset = offsetof(UDummyTransportAircraft_C, Seat26);
	static_assert(UDummyTransportAircraft_C_Seat26_Offset == 0x830, "UDummyTransportAircraft_C::Seat26 offset is not 830");
	auto constexpr UDummyTransportAircraft_C_Seat25_Offset = offsetof(UDummyTransportAircraft_C, Seat25);
	static_assert(UDummyTransportAircraft_C_Seat25_Offset == 0x838, "UDummyTransportAircraft_C::Seat25 offset is not 838");
	auto constexpr UDummyTransportAircraft_C_Seat24_Offset = offsetof(UDummyTransportAircraft_C, Seat24);
	static_assert(UDummyTransportAircraft_C_Seat24_Offset == 0x840, "UDummyTransportAircraft_C::Seat24 offset is not 840");
	auto constexpr UDummyTransportAircraft_C_Seat23_Offset = offsetof(UDummyTransportAircraft_C, Seat23);
	static_assert(UDummyTransportAircraft_C_Seat23_Offset == 0x848, "UDummyTransportAircraft_C::Seat23 offset is not 848");
	auto constexpr UDummyTransportAircraft_C_Seat22_Offset = offsetof(UDummyTransportAircraft_C, Seat22);
	static_assert(UDummyTransportAircraft_C_Seat22_Offset == 0x850, "UDummyTransportAircraft_C::Seat22 offset is not 850");
	auto constexpr UDummyTransportAircraft_C_Seat21_Offset = offsetof(UDummyTransportAircraft_C, Seat21);
	static_assert(UDummyTransportAircraft_C_Seat21_Offset == 0x858, "UDummyTransportAircraft_C::Seat21 offset is not 858");
	auto constexpr UDummyTransportAircraft_C_Seat20_Offset = offsetof(UDummyTransportAircraft_C, Seat20);
	static_assert(UDummyTransportAircraft_C_Seat20_Offset == 0x860, "UDummyTransportAircraft_C::Seat20 offset is not 860");
	auto constexpr UDummyTransportAircraft_C_Seat19_Offset = offsetof(UDummyTransportAircraft_C, Seat19);
	static_assert(UDummyTransportAircraft_C_Seat19_Offset == 0x868, "UDummyTransportAircraft_C::Seat19 offset is not 868");
	auto constexpr UDummyTransportAircraft_C_Seat18_Offset = offsetof(UDummyTransportAircraft_C, Seat18);
	static_assert(UDummyTransportAircraft_C_Seat18_Offset == 0x870, "UDummyTransportAircraft_C::Seat18 offset is not 870");
	auto constexpr UDummyTransportAircraft_C_Seat17_Offset = offsetof(UDummyTransportAircraft_C, Seat17);
	static_assert(UDummyTransportAircraft_C_Seat17_Offset == 0x878, "UDummyTransportAircraft_C::Seat17 offset is not 878");
	auto constexpr UDummyTransportAircraft_C_Seat16_Offset = offsetof(UDummyTransportAircraft_C, Seat16);
	static_assert(UDummyTransportAircraft_C_Seat16_Offset == 0x880, "UDummyTransportAircraft_C::Seat16 offset is not 880");
	auto constexpr UDummyTransportAircraft_C_Seat15_Offset = offsetof(UDummyTransportAircraft_C, Seat15);
	static_assert(UDummyTransportAircraft_C_Seat15_Offset == 0x888, "UDummyTransportAircraft_C::Seat15 offset is not 888");
	auto constexpr UDummyTransportAircraft_C_Seat14_Offset = offsetof(UDummyTransportAircraft_C, Seat14);
	static_assert(UDummyTransportAircraft_C_Seat14_Offset == 0x890, "UDummyTransportAircraft_C::Seat14 offset is not 890");
	auto constexpr UDummyTransportAircraft_C_Seat13_Offset = offsetof(UDummyTransportAircraft_C, Seat13);
	static_assert(UDummyTransportAircraft_C_Seat13_Offset == 0x898, "UDummyTransportAircraft_C::Seat13 offset is not 898");
	auto constexpr UDummyTransportAircraft_C_Seat12_Offset = offsetof(UDummyTransportAircraft_C, Seat12);
	static_assert(UDummyTransportAircraft_C_Seat12_Offset == 0x8a0, "UDummyTransportAircraft_C::Seat12 offset is not 8a0");
	auto constexpr UDummyTransportAircraft_C_Seat11_Offset = offsetof(UDummyTransportAircraft_C, Seat11);
	static_assert(UDummyTransportAircraft_C_Seat11_Offset == 0x8a8, "UDummyTransportAircraft_C::Seat11 offset is not 8a8");
	auto constexpr UDummyTransportAircraft_C_Seat10_Offset = offsetof(UDummyTransportAircraft_C, Seat10);
	static_assert(UDummyTransportAircraft_C_Seat10_Offset == 0x8b0, "UDummyTransportAircraft_C::Seat10 offset is not 8b0");
	auto constexpr UDummyTransportAircraft_C_Seat9_Offset = offsetof(UDummyTransportAircraft_C, Seat9);
	static_assert(UDummyTransportAircraft_C_Seat9_Offset == 0x8b8, "UDummyTransportAircraft_C::Seat9 offset is not 8b8");
	auto constexpr UDummyTransportAircraft_C_Seat8_Offset = offsetof(UDummyTransportAircraft_C, Seat8);
	static_assert(UDummyTransportAircraft_C_Seat8_Offset == 0x8c0, "UDummyTransportAircraft_C::Seat8 offset is not 8c0");
	auto constexpr UDummyTransportAircraft_C_Seat7_Offset = offsetof(UDummyTransportAircraft_C, Seat7);
	static_assert(UDummyTransportAircraft_C_Seat7_Offset == 0x8c8, "UDummyTransportAircraft_C::Seat7 offset is not 8c8");
	auto constexpr UDummyTransportAircraft_C_Seat6_Offset = offsetof(UDummyTransportAircraft_C, Seat6);
	static_assert(UDummyTransportAircraft_C_Seat6_Offset == 0x8d0, "UDummyTransportAircraft_C::Seat6 offset is not 8d0");
	auto constexpr UDummyTransportAircraft_C_Seat5_Offset = offsetof(UDummyTransportAircraft_C, Seat5);
	static_assert(UDummyTransportAircraft_C_Seat5_Offset == 0x8d8, "UDummyTransportAircraft_C::Seat5 offset is not 8d8");
	auto constexpr UDummyTransportAircraft_C_Seat4_Offset = offsetof(UDummyTransportAircraft_C, Seat4);
	static_assert(UDummyTransportAircraft_C_Seat4_Offset == 0x8e0, "UDummyTransportAircraft_C::Seat4 offset is not 8e0");
	auto constexpr UDummyTransportAircraft_C_Seat3_Offset = offsetof(UDummyTransportAircraft_C, Seat3);
	static_assert(UDummyTransportAircraft_C_Seat3_Offset == 0x8e8, "UDummyTransportAircraft_C::Seat3 offset is not 8e8");
	auto constexpr UDummyTransportAircraft_C_Seat2_Offset = offsetof(UDummyTransportAircraft_C, Seat2);
	static_assert(UDummyTransportAircraft_C_Seat2_Offset == 0x8f0, "UDummyTransportAircraft_C::Seat2 offset is not 8f0");
	auto constexpr UDummyTransportAircraft_C_Seat1_Offset = offsetof(UDummyTransportAircraft_C, Seat1);
	static_assert(UDummyTransportAircraft_C_Seat1_Offset == 0x8f8, "UDummyTransportAircraft_C::Seat1 offset is not 8f8");
	auto constexpr UDummyTransportAircraft_C_Seat0_Offset = offsetof(UDummyTransportAircraft_C, Seat0);
	static_assert(UDummyTransportAircraft_C_Seat0_Offset == 0x900, "UDummyTransportAircraft_C::Seat0 offset is not 900");
	auto constexpr UDummyTransportAircraft_C_ThirdPersonCameraInVehicle_Offset = offsetof(UDummyTransportAircraft_C, ThirdPersonCameraInVehicle);
	static_assert(UDummyTransportAircraft_C_ThirdPersonCameraInVehicle_Offset == 0x908, "UDummyTransportAircraft_C::ThirdPersonCameraInVehicle offset is not 908");
	auto constexpr UDummyTransportAircraft_C_ThirdPersonVehicleSpringArm_Offset = offsetof(UDummyTransportAircraft_C, ThirdPersonVehicleSpringArm);
	static_assert(UDummyTransportAircraft_C_ThirdPersonVehicleSpringArm_Offset == 0x910, "UDummyTransportAircraft_C::ThirdPersonVehicleSpringArm offset is not 910");
	auto constexpr UDummyTransportAircraft_C_Rotors_Offset = offsetof(UDummyTransportAircraft_C, Rotors);
	static_assert(UDummyTransportAircraft_C_Rotors_Offset == 0x918, "UDummyTransportAircraft_C::Rotors offset is not 918");
	auto constexpr UDummyTransportAircraft_C_Light_CenterFrontLow_Offset = offsetof(UDummyTransportAircraft_C, Light_CenterFrontLow);
	static_assert(UDummyTransportAircraft_C_Light_CenterFrontLow_Offset == 0x920, "UDummyTransportAircraft_C::Light_CenterFrontLow offset is not 920");
	auto constexpr UDummyTransportAircraft_C_Light_CenterBack_Offset = offsetof(UDummyTransportAircraft_C, Light_CenterBack);
	static_assert(UDummyTransportAircraft_C_Light_CenterBack_Offset == 0x928, "UDummyTransportAircraft_C::Light_CenterBack offset is not 928");
	auto constexpr UDummyTransportAircraft_C_Light_CenterFrontHigh_Offset = offsetof(UDummyTransportAircraft_C, Light_CenterFrontHigh);
	static_assert(UDummyTransportAircraft_C_Light_CenterFrontHigh_Offset == 0x930, "UDummyTransportAircraft_C::Light_CenterFrontHigh offset is not 930");
	auto constexpr UDummyTransportAircraft_C_Light_RightWing_Offset = offsetof(UDummyTransportAircraft_C, Light_RightWing);
	static_assert(UDummyTransportAircraft_C_Light_RightWing_Offset == 0x938, "UDummyTransportAircraft_C::Light_RightWing offset is not 938");
	auto constexpr UDummyTransportAircraft_C_Light_LeftWing_Offset = offsetof(UDummyTransportAircraft_C, Light_LeftWing);
	static_assert(UDummyTransportAircraft_C_Light_LeftWing_Offset == 0x940, "UDummyTransportAircraft_C::Light_LeftWing offset is not 940");
	auto constexpr UDummyTransportAircraft_C_TslVehicleCommon_Offset = offsetof(UDummyTransportAircraft_C, TslVehicleCommon);
	static_assert(UDummyTransportAircraft_C_TslVehicleCommon_Offset == 0x948, "UDummyTransportAircraft_C::TslVehicleCommon offset is not 948");
	auto constexpr UDummyTransportAircraft_C_DoorAlpha_Offset = offsetof(UDummyTransportAircraft_C, DoorAlpha);
	static_assert(UDummyTransportAircraft_C_DoorAlpha_Offset == 0x950, "UDummyTransportAircraft_C::DoorAlpha offset is not 950");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
