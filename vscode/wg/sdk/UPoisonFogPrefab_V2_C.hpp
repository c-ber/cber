#pragma once
#include "UPoisonEffectBase_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "ETimelineDirection.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UPoisonFogPrefab_V2_C // Size: 0x700
	: public UPoisonEffectBase_C // Size: 0x418
{
private:
	typedef UPoisonFogPrefab_V2_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(111907); // id32("BlueprintGeneratedClass PoisonFogPrefab_V2.PoisonFogPrefab_V2_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x418 Size: 0x8 - StructProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.UberGraphFrame */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh79; /* Ofs: 0x420 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh79 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh78; /* Ofs: 0x428 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh78 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh77; /* Ofs: 0x430 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh77 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh76; /* Ofs: 0x438 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh76 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh75; /* Ofs: 0x440 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh75 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh35; /* Ofs: 0x448 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh35 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh34; /* Ofs: 0x450 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh34 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh33; /* Ofs: 0x458 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh33 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh32; /* Ofs: 0x460 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh32 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh31; /* Ofs: 0x468 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh31 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh30; /* Ofs: 0x470 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh30 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh29; /* Ofs: 0x478 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh29 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh28; /* Ofs: 0x480 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh28 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh27; /* Ofs: 0x488 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh27 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh26; /* Ofs: 0x490 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh26 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh25; /* Ofs: 0x498 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh25 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh24; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh24 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh23; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh23 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh22; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh22 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh21; /* Ofs: 0x4B8 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh21 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh20; /* Ofs: 0x4C0 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh20 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh19; /* Ofs: 0x4C8 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh19 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh18; /* Ofs: 0x4D0 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh18 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh17; /* Ofs: 0x4D8 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh17 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh16; /* Ofs: 0x4E0 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh16 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh15; /* Ofs: 0x4E8 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh15 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh14; /* Ofs: 0x4F0 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh14 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh13; /* Ofs: 0x4F8 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh13 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh12; /* Ofs: 0x500 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh12 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh11; /* Ofs: 0x508 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh11 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh10; /* Ofs: 0x510 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh10 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh9; /* Ofs: 0x518 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh9 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh8; /* Ofs: 0x520 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh8 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh7; /* Ofs: 0x528 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh7 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh6; /* Ofs: 0x530 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh6 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh5; /* Ofs: 0x538 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh5 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh4; /* Ofs: 0x540 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh4 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh3; /* Ofs: 0x548 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh3 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh2; /* Ofs: 0x550 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh2 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh1; /* Ofs: 0x558 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh1 */
	ExternalPtr<struct USceneComponent> Cylinder_Piece_Inner; /* Ofs: 0x560 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.Cylinder_Piece_Inner */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh74; /* Ofs: 0x568 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh74 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh73; /* Ofs: 0x570 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh73 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh72; /* Ofs: 0x578 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh72 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh71; /* Ofs: 0x580 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh71 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh70; /* Ofs: 0x588 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh70 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh69; /* Ofs: 0x590 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh69 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh68; /* Ofs: 0x598 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh68 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh67; /* Ofs: 0x5A0 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh67 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh66; /* Ofs: 0x5A8 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh66 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh65; /* Ofs: 0x5B0 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh65 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh64; /* Ofs: 0x5B8 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh64 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh63; /* Ofs: 0x5C0 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh63 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh62; /* Ofs: 0x5C8 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh62 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh61; /* Ofs: 0x5D0 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh61 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh60; /* Ofs: 0x5D8 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh60 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh59; /* Ofs: 0x5E0 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh59 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh58; /* Ofs: 0x5E8 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh58 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh57; /* Ofs: 0x5F0 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh57 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh56; /* Ofs: 0x5F8 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh56 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh; /* Ofs: 0x600 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh54; /* Ofs: 0x608 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh54 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh53; /* Ofs: 0x610 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh53 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh52; /* Ofs: 0x618 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh52 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh51; /* Ofs: 0x620 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh51 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh50; /* Ofs: 0x628 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh50 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh49; /* Ofs: 0x630 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh49 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh48; /* Ofs: 0x638 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh48 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh47; /* Ofs: 0x640 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh47 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh46; /* Ofs: 0x648 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh46 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh45; /* Ofs: 0x650 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh45 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh44; /* Ofs: 0x658 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh44 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh43; /* Ofs: 0x660 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh43 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh42; /* Ofs: 0x668 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh42 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh41; /* Ofs: 0x670 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh41 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh40; /* Ofs: 0x678 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh40 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh39; /* Ofs: 0x680 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh39 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh38; /* Ofs: 0x688 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh38 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh37; /* Ofs: 0x690 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh37 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh36; /* Ofs: 0x698 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh36 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh55; /* Ofs: 0x6A0 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.StaticMesh55 */
	ExternalPtr<struct USceneComponent> Cylinder_Piece_Outer; /* Ofs: 0x6A8 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.Cylinder_Piece_Outer */
	float _____0_Intensity_CBE2188C4DEA96C8D93E888D21A0962E; /* Ofs: 0x6B0 Size: 0x4 - FloatProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C._____0_Intensity_CBE2188C4DEA96C8D93E888D21A0962E */
	TEnumAsByte<enum ETimelineDirection> _____0__Direction_CBE2188C4DEA96C8D93E888D21A0962E; /* Ofs: 0x6B4 Size: 0x1 - ByteProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C._____0__Direction_CBE2188C4DEA96C8D93E888D21A0962E */
	uint8_t UnknownData6B5[0x3];
	ExternalPtr<struct UTimelineComponent> ______x__1; /* Ofs: 0x6B8 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.АР„З|·xЗ_1 */
	FVector Center; /* Ofs: 0x6C0 Size: 0xC - StructProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.Center */
	float Radius; /* Ofs: 0x6CC Size: 0x4 - FloatProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.Radius */
	ExternalPtr<struct UPostProcessVolume> PPVolume; /* Ofs: 0x6D0 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.PPVolume */
	ExternalPtr<struct UMaterial> PPMaterial; /* Ofs: 0x6D8 Size: 0x8 - ObjectProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.PPMaterial */
	TArray<ExternalPtr<struct USceneComponent>> InnerCylinderPieces; /* Ofs: 0x6E0 Size: 0x10 - ArrayProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.InnerCylinderPieces */
	TArray<ExternalPtr<struct USceneComponent>> OuterCylinderPieces; /* Ofs: 0x6F0 Size: 0x10 - ArrayProperty PoisonFogPrefab_V2.PoisonFogPrefab_V2_C.OuterCylinderPieces */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x418, value); }
	inline bool SetStaticMesh79(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x420, value); }
	inline bool SetStaticMesh78(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x428, value); }
	inline bool SetStaticMesh77(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x430, value); }
	inline bool SetStaticMesh76(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x438, value); }
	inline bool SetStaticMesh75(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x440, value); }
	inline bool SetStaticMesh35(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x448, value); }
	inline bool SetStaticMesh34(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x450, value); }
	inline bool SetStaticMesh33(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x458, value); }
	inline bool SetStaticMesh32(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x460, value); }
	inline bool SetStaticMesh31(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x468, value); }
	inline bool SetStaticMesh30(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x470, value); }
	inline bool SetStaticMesh29(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x478, value); }
	inline bool SetStaticMesh28(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x480, value); }
	inline bool SetStaticMesh27(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x488, value); }
	inline bool SetStaticMesh26(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x490, value); }
	inline bool SetStaticMesh25(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x498, value); }
	inline bool SetStaticMesh24(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetStaticMesh23(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetStaticMesh22(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetStaticMesh21(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetStaticMesh20(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetStaticMesh19(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetStaticMesh18(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetStaticMesh17(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetStaticMesh16(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetStaticMesh15(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetStaticMesh14(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetStaticMesh13(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetStaticMesh12(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x500, value); }
	inline bool SetStaticMesh11(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x508, value); }
	inline bool SetStaticMesh10(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x510, value); }
	inline bool SetStaticMesh9(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x518, value); }
	inline bool SetStaticMesh8(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x520, value); }
	inline bool SetStaticMesh7(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x528, value); }
	inline bool SetStaticMesh6(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x530, value); }
	inline bool SetStaticMesh5(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x538, value); }
	inline bool SetStaticMesh4(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x540, value); }
	inline bool SetStaticMesh3(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x548, value); }
	inline bool SetStaticMesh2(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x550, value); }
	inline bool SetStaticMesh1(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x558, value); }
	inline bool SetCylinder_Piece_Inner(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x560, value); }
	inline bool SetStaticMesh74(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x568, value); }
	inline bool SetStaticMesh73(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x570, value); }
	inline bool SetStaticMesh72(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x578, value); }
	inline bool SetStaticMesh71(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x580, value); }
	inline bool SetStaticMesh70(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x588, value); }
	inline bool SetStaticMesh69(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x590, value); }
	inline bool SetStaticMesh68(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x598, value); }
	inline bool SetStaticMesh67(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x5A0, value); }
	inline bool SetStaticMesh66(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x5A8, value); }
	inline bool SetStaticMesh65(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x5B0, value); }
	inline bool SetStaticMesh64(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x5B8, value); }
	inline bool SetStaticMesh63(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x5C0, value); }
	inline bool SetStaticMesh62(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x5C8, value); }
	inline bool SetStaticMesh61(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x5D0, value); }
	inline bool SetStaticMesh60(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x5D8, value); }
	inline bool SetStaticMesh59(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x5E0, value); }
	inline bool SetStaticMesh58(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x5E8, value); }
	inline bool SetStaticMesh57(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x5F0, value); }
	inline bool SetStaticMesh56(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x5F8, value); }
	inline bool SetStaticMesh(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x600, value); }
	inline bool SetStaticMesh54(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x608, value); }
	inline bool SetStaticMesh53(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x610, value); }
	inline bool SetStaticMesh52(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x618, value); }
	inline bool SetStaticMesh51(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x620, value); }
	inline bool SetStaticMesh50(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x628, value); }
	inline bool SetStaticMesh49(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x630, value); }
	inline bool SetStaticMesh48(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x638, value); }
	inline bool SetStaticMesh47(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x640, value); }
	inline bool SetStaticMesh46(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x648, value); }
	inline bool SetStaticMesh45(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x650, value); }
	inline bool SetStaticMesh44(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x658, value); }
	inline bool SetStaticMesh43(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x660, value); }
	inline bool SetStaticMesh42(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x668, value); }
	inline bool SetStaticMesh41(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x670, value); }
	inline bool SetStaticMesh40(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x678, value); }
	inline bool SetStaticMesh39(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x680, value); }
	inline bool SetStaticMesh38(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x688, value); }
	inline bool SetStaticMesh37(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x690, value); }
	inline bool SetStaticMesh36(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x698, value); }
	inline bool SetStaticMesh55(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x6A0, value); }
	inline bool SetCylinder_Piece_Outer(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x6A8, value); }
	inline bool Set_____0_Intensity_CBE2188C4DEA96C8D93E888D21A0962E(t_structHelper inst, float value) { inst.WriteOffset(0x6B0, value); }
	inline bool Set_____0__Direction_CBE2188C4DEA96C8D93E888D21A0962E(t_structHelper inst, TEnumAsByte<enum ETimelineDirection> value) { inst.WriteOffset(0x6B4, value); }
	inline bool Set______x__1(t_structHelper inst, ExternalPtr<struct UTimelineComponent> value) { inst.WriteOffset(0x6B8, value); }
	inline bool SetCenter(t_structHelper inst, FVector value) { inst.WriteOffset(0x6C0, value); }
	inline bool SetRadius(t_structHelper inst, float value) { inst.WriteOffset(0x6CC, value); }
	inline bool SetPPVolume(t_structHelper inst, ExternalPtr<struct UPostProcessVolume> value) { inst.WriteOffset(0x6D0, value); }
	inline bool SetPPMaterial(t_structHelper inst, ExternalPtr<struct UMaterial> value) { inst.WriteOffset(0x6D8, value); }
	inline bool SetInnerCylinderPieces(t_structHelper inst, TArray<ExternalPtr<struct USceneComponent>> value) { inst.WriteOffset(0x6E0, value); }
	inline bool SetOuterCylinderPieces(t_structHelper inst, TArray<ExternalPtr<struct USceneComponent>> value) { inst.WriteOffset(0x6F0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUPoisonFogPrefab_V2_C = sizeof(UPoisonFogPrefab_V2_C); // 1792
    static_assert(sizeof(UPoisonFogPrefab_V2_C) == 0x700, "Size of UPoisonFogPrefab_V2_C is not correct.");
	auto constexpr UPoisonFogPrefab_V2_C_UberGraphFrame_Offset = offsetof(UPoisonFogPrefab_V2_C, UberGraphFrame);
	static_assert(UPoisonFogPrefab_V2_C_UberGraphFrame_Offset == 0x418, "UPoisonFogPrefab_V2_C::UberGraphFrame offset is not 418");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh79_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh79);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh79_Offset == 0x420, "UPoisonFogPrefab_V2_C::StaticMesh79 offset is not 420");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh78_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh78);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh78_Offset == 0x428, "UPoisonFogPrefab_V2_C::StaticMesh78 offset is not 428");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh77_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh77);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh77_Offset == 0x430, "UPoisonFogPrefab_V2_C::StaticMesh77 offset is not 430");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh76_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh76);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh76_Offset == 0x438, "UPoisonFogPrefab_V2_C::StaticMesh76 offset is not 438");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh75_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh75);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh75_Offset == 0x440, "UPoisonFogPrefab_V2_C::StaticMesh75 offset is not 440");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh35_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh35);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh35_Offset == 0x448, "UPoisonFogPrefab_V2_C::StaticMesh35 offset is not 448");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh34_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh34);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh34_Offset == 0x450, "UPoisonFogPrefab_V2_C::StaticMesh34 offset is not 450");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh33_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh33);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh33_Offset == 0x458, "UPoisonFogPrefab_V2_C::StaticMesh33 offset is not 458");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh32_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh32);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh32_Offset == 0x460, "UPoisonFogPrefab_V2_C::StaticMesh32 offset is not 460");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh31_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh31);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh31_Offset == 0x468, "UPoisonFogPrefab_V2_C::StaticMesh31 offset is not 468");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh30_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh30);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh30_Offset == 0x470, "UPoisonFogPrefab_V2_C::StaticMesh30 offset is not 470");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh29_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh29);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh29_Offset == 0x478, "UPoisonFogPrefab_V2_C::StaticMesh29 offset is not 478");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh28_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh28);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh28_Offset == 0x480, "UPoisonFogPrefab_V2_C::StaticMesh28 offset is not 480");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh27_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh27);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh27_Offset == 0x488, "UPoisonFogPrefab_V2_C::StaticMesh27 offset is not 488");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh26_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh26);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh26_Offset == 0x490, "UPoisonFogPrefab_V2_C::StaticMesh26 offset is not 490");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh25_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh25);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh25_Offset == 0x498, "UPoisonFogPrefab_V2_C::StaticMesh25 offset is not 498");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh24_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh24);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh24_Offset == 0x4a0, "UPoisonFogPrefab_V2_C::StaticMesh24 offset is not 4a0");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh23_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh23);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh23_Offset == 0x4a8, "UPoisonFogPrefab_V2_C::StaticMesh23 offset is not 4a8");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh22_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh22);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh22_Offset == 0x4b0, "UPoisonFogPrefab_V2_C::StaticMesh22 offset is not 4b0");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh21_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh21);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh21_Offset == 0x4b8, "UPoisonFogPrefab_V2_C::StaticMesh21 offset is not 4b8");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh20_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh20);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh20_Offset == 0x4c0, "UPoisonFogPrefab_V2_C::StaticMesh20 offset is not 4c0");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh19_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh19);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh19_Offset == 0x4c8, "UPoisonFogPrefab_V2_C::StaticMesh19 offset is not 4c8");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh18_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh18);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh18_Offset == 0x4d0, "UPoisonFogPrefab_V2_C::StaticMesh18 offset is not 4d0");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh17_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh17);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh17_Offset == 0x4d8, "UPoisonFogPrefab_V2_C::StaticMesh17 offset is not 4d8");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh16_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh16);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh16_Offset == 0x4e0, "UPoisonFogPrefab_V2_C::StaticMesh16 offset is not 4e0");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh15_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh15);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh15_Offset == 0x4e8, "UPoisonFogPrefab_V2_C::StaticMesh15 offset is not 4e8");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh14_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh14);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh14_Offset == 0x4f0, "UPoisonFogPrefab_V2_C::StaticMesh14 offset is not 4f0");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh13_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh13);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh13_Offset == 0x4f8, "UPoisonFogPrefab_V2_C::StaticMesh13 offset is not 4f8");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh12_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh12);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh12_Offset == 0x500, "UPoisonFogPrefab_V2_C::StaticMesh12 offset is not 500");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh11_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh11);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh11_Offset == 0x508, "UPoisonFogPrefab_V2_C::StaticMesh11 offset is not 508");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh10_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh10);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh10_Offset == 0x510, "UPoisonFogPrefab_V2_C::StaticMesh10 offset is not 510");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh9_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh9);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh9_Offset == 0x518, "UPoisonFogPrefab_V2_C::StaticMesh9 offset is not 518");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh8_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh8);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh8_Offset == 0x520, "UPoisonFogPrefab_V2_C::StaticMesh8 offset is not 520");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh7_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh7);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh7_Offset == 0x528, "UPoisonFogPrefab_V2_C::StaticMesh7 offset is not 528");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh6_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh6);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh6_Offset == 0x530, "UPoisonFogPrefab_V2_C::StaticMesh6 offset is not 530");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh5_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh5);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh5_Offset == 0x538, "UPoisonFogPrefab_V2_C::StaticMesh5 offset is not 538");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh4_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh4);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh4_Offset == 0x540, "UPoisonFogPrefab_V2_C::StaticMesh4 offset is not 540");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh3_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh3);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh3_Offset == 0x548, "UPoisonFogPrefab_V2_C::StaticMesh3 offset is not 548");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh2_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh2);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh2_Offset == 0x550, "UPoisonFogPrefab_V2_C::StaticMesh2 offset is not 550");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh1_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh1);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh1_Offset == 0x558, "UPoisonFogPrefab_V2_C::StaticMesh1 offset is not 558");
	auto constexpr UPoisonFogPrefab_V2_C_Cylinder_Piece_Inner_Offset = offsetof(UPoisonFogPrefab_V2_C, Cylinder_Piece_Inner);
	static_assert(UPoisonFogPrefab_V2_C_Cylinder_Piece_Inner_Offset == 0x560, "UPoisonFogPrefab_V2_C::Cylinder_Piece_Inner offset is not 560");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh74_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh74);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh74_Offset == 0x568, "UPoisonFogPrefab_V2_C::StaticMesh74 offset is not 568");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh73_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh73);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh73_Offset == 0x570, "UPoisonFogPrefab_V2_C::StaticMesh73 offset is not 570");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh72_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh72);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh72_Offset == 0x578, "UPoisonFogPrefab_V2_C::StaticMesh72 offset is not 578");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh71_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh71);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh71_Offset == 0x580, "UPoisonFogPrefab_V2_C::StaticMesh71 offset is not 580");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh70_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh70);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh70_Offset == 0x588, "UPoisonFogPrefab_V2_C::StaticMesh70 offset is not 588");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh69_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh69);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh69_Offset == 0x590, "UPoisonFogPrefab_V2_C::StaticMesh69 offset is not 590");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh68_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh68);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh68_Offset == 0x598, "UPoisonFogPrefab_V2_C::StaticMesh68 offset is not 598");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh67_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh67);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh67_Offset == 0x5a0, "UPoisonFogPrefab_V2_C::StaticMesh67 offset is not 5a0");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh66_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh66);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh66_Offset == 0x5a8, "UPoisonFogPrefab_V2_C::StaticMesh66 offset is not 5a8");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh65_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh65);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh65_Offset == 0x5b0, "UPoisonFogPrefab_V2_C::StaticMesh65 offset is not 5b0");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh64_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh64);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh64_Offset == 0x5b8, "UPoisonFogPrefab_V2_C::StaticMesh64 offset is not 5b8");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh63_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh63);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh63_Offset == 0x5c0, "UPoisonFogPrefab_V2_C::StaticMesh63 offset is not 5c0");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh62_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh62);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh62_Offset == 0x5c8, "UPoisonFogPrefab_V2_C::StaticMesh62 offset is not 5c8");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh61_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh61);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh61_Offset == 0x5d0, "UPoisonFogPrefab_V2_C::StaticMesh61 offset is not 5d0");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh60_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh60);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh60_Offset == 0x5d8, "UPoisonFogPrefab_V2_C::StaticMesh60 offset is not 5d8");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh59_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh59);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh59_Offset == 0x5e0, "UPoisonFogPrefab_V2_C::StaticMesh59 offset is not 5e0");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh58_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh58);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh58_Offset == 0x5e8, "UPoisonFogPrefab_V2_C::StaticMesh58 offset is not 5e8");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh57_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh57);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh57_Offset == 0x5f0, "UPoisonFogPrefab_V2_C::StaticMesh57 offset is not 5f0");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh56_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh56);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh56_Offset == 0x5f8, "UPoisonFogPrefab_V2_C::StaticMesh56 offset is not 5f8");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh_Offset == 0x600, "UPoisonFogPrefab_V2_C::StaticMesh offset is not 600");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh54_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh54);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh54_Offset == 0x608, "UPoisonFogPrefab_V2_C::StaticMesh54 offset is not 608");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh53_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh53);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh53_Offset == 0x610, "UPoisonFogPrefab_V2_C::StaticMesh53 offset is not 610");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh52_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh52);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh52_Offset == 0x618, "UPoisonFogPrefab_V2_C::StaticMesh52 offset is not 618");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh51_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh51);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh51_Offset == 0x620, "UPoisonFogPrefab_V2_C::StaticMesh51 offset is not 620");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh50_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh50);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh50_Offset == 0x628, "UPoisonFogPrefab_V2_C::StaticMesh50 offset is not 628");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh49_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh49);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh49_Offset == 0x630, "UPoisonFogPrefab_V2_C::StaticMesh49 offset is not 630");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh48_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh48);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh48_Offset == 0x638, "UPoisonFogPrefab_V2_C::StaticMesh48 offset is not 638");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh47_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh47);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh47_Offset == 0x640, "UPoisonFogPrefab_V2_C::StaticMesh47 offset is not 640");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh46_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh46);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh46_Offset == 0x648, "UPoisonFogPrefab_V2_C::StaticMesh46 offset is not 648");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh45_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh45);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh45_Offset == 0x650, "UPoisonFogPrefab_V2_C::StaticMesh45 offset is not 650");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh44_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh44);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh44_Offset == 0x658, "UPoisonFogPrefab_V2_C::StaticMesh44 offset is not 658");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh43_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh43);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh43_Offset == 0x660, "UPoisonFogPrefab_V2_C::StaticMesh43 offset is not 660");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh42_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh42);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh42_Offset == 0x668, "UPoisonFogPrefab_V2_C::StaticMesh42 offset is not 668");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh41_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh41);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh41_Offset == 0x670, "UPoisonFogPrefab_V2_C::StaticMesh41 offset is not 670");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh40_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh40);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh40_Offset == 0x678, "UPoisonFogPrefab_V2_C::StaticMesh40 offset is not 678");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh39_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh39);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh39_Offset == 0x680, "UPoisonFogPrefab_V2_C::StaticMesh39 offset is not 680");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh38_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh38);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh38_Offset == 0x688, "UPoisonFogPrefab_V2_C::StaticMesh38 offset is not 688");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh37_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh37);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh37_Offset == 0x690, "UPoisonFogPrefab_V2_C::StaticMesh37 offset is not 690");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh36_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh36);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh36_Offset == 0x698, "UPoisonFogPrefab_V2_C::StaticMesh36 offset is not 698");
	auto constexpr UPoisonFogPrefab_V2_C_StaticMesh55_Offset = offsetof(UPoisonFogPrefab_V2_C, StaticMesh55);
	static_assert(UPoisonFogPrefab_V2_C_StaticMesh55_Offset == 0x6a0, "UPoisonFogPrefab_V2_C::StaticMesh55 offset is not 6a0");
	auto constexpr UPoisonFogPrefab_V2_C_Cylinder_Piece_Outer_Offset = offsetof(UPoisonFogPrefab_V2_C, Cylinder_Piece_Outer);
	static_assert(UPoisonFogPrefab_V2_C_Cylinder_Piece_Outer_Offset == 0x6a8, "UPoisonFogPrefab_V2_C::Cylinder_Piece_Outer offset is not 6a8");
	auto constexpr UPoisonFogPrefab_V2_C______0_Intensity_CBE2188C4DEA96C8D93E888D21A0962E_Offset = offsetof(UPoisonFogPrefab_V2_C, _____0_Intensity_CBE2188C4DEA96C8D93E888D21A0962E);
	static_assert(UPoisonFogPrefab_V2_C______0_Intensity_CBE2188C4DEA96C8D93E888D21A0962E_Offset == 0x6b0, "UPoisonFogPrefab_V2_C::_____0_Intensity_CBE2188C4DEA96C8D93E888D21A0962E offset is not 6b0");
	auto constexpr UPoisonFogPrefab_V2_C______0__Direction_CBE2188C4DEA96C8D93E888D21A0962E_Offset = offsetof(UPoisonFogPrefab_V2_C, _____0__Direction_CBE2188C4DEA96C8D93E888D21A0962E);
	static_assert(UPoisonFogPrefab_V2_C______0__Direction_CBE2188C4DEA96C8D93E888D21A0962E_Offset == 0x6b4, "UPoisonFogPrefab_V2_C::_____0__Direction_CBE2188C4DEA96C8D93E888D21A0962E offset is not 6b4");
	auto constexpr UPoisonFogPrefab_V2_C_АР„З|·xЗ_1_Offset = offsetof(UPoisonFogPrefab_V2_C, АР„З|·xЗ_1);
	static_assert(UPoisonFogPrefab_V2_C_АР„З|·xЗ_1_Offset == 0x6b8, "UPoisonFogPrefab_V2_C::АР„З|·xЗ_1 offset is not 6b8");
	auto constexpr UPoisonFogPrefab_V2_C_Center_Offset = offsetof(UPoisonFogPrefab_V2_C, Center);
	static_assert(UPoisonFogPrefab_V2_C_Center_Offset == 0x6c0, "UPoisonFogPrefab_V2_C::Center offset is not 6c0");
	auto constexpr UPoisonFogPrefab_V2_C_Radius_Offset = offsetof(UPoisonFogPrefab_V2_C, Radius);
	static_assert(UPoisonFogPrefab_V2_C_Radius_Offset == 0x6cc, "UPoisonFogPrefab_V2_C::Radius offset is not 6cc");
	auto constexpr UPoisonFogPrefab_V2_C_PPVolume_Offset = offsetof(UPoisonFogPrefab_V2_C, PPVolume);
	static_assert(UPoisonFogPrefab_V2_C_PPVolume_Offset == 0x6d0, "UPoisonFogPrefab_V2_C::PPVolume offset is not 6d0");
	auto constexpr UPoisonFogPrefab_V2_C_PPMaterial_Offset = offsetof(UPoisonFogPrefab_V2_C, PPMaterial);
	static_assert(UPoisonFogPrefab_V2_C_PPMaterial_Offset == 0x6d8, "UPoisonFogPrefab_V2_C::PPMaterial offset is not 6d8");
	auto constexpr UPoisonFogPrefab_V2_C_InnerCylinderPieces_Offset = offsetof(UPoisonFogPrefab_V2_C, InnerCylinderPieces);
	static_assert(UPoisonFogPrefab_V2_C_InnerCylinderPieces_Offset == 0x6e0, "UPoisonFogPrefab_V2_C::InnerCylinderPieces offset is not 6e0");
	auto constexpr UPoisonFogPrefab_V2_C_OuterCylinderPieces_Offset = offsetof(UPoisonFogPrefab_V2_C, OuterCylinderPieces);
	static_assert(UPoisonFogPrefab_V2_C_OuterCylinderPieces_Offset == 0x6f0, "UPoisonFogPrefab_V2_C::OuterCylinderPieces offset is not 6f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
