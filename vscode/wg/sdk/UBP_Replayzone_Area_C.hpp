#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBP_Replayzone_Area_C // Size: 0x538
	: public UActor // Size: 0x410
{
private:
	typedef UBP_Replayzone_Area_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(114486); // id32("BlueprintGeneratedClass BP_Replayzone_Area.BP_Replayzone_Area_C")
		return ptr;
	}
	ExternalPtr<struct UStaticMeshComponent> StaticMesh38; /* Ofs: 0x410 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh38 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh37; /* Ofs: 0x418 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh37 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh36; /* Ofs: 0x420 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh36 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh28; /* Ofs: 0x428 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh28 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh34; /* Ofs: 0x430 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh34 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh33; /* Ofs: 0x438 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh33 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh32; /* Ofs: 0x440 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh32 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh31; /* Ofs: 0x448 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh31 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh30; /* Ofs: 0x450 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh30 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh29; /* Ofs: 0x458 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh29 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh35; /* Ofs: 0x460 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh35 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh27; /* Ofs: 0x468 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh27 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh26; /* Ofs: 0x470 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh26 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh25; /* Ofs: 0x478 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh25 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh24; /* Ofs: 0x480 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh24 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh23; /* Ofs: 0x488 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh23 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh22; /* Ofs: 0x490 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh22 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh10; /* Ofs: 0x498 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh10 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh20; /* Ofs: 0x4A0 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh20 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh19; /* Ofs: 0x4A8 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh19 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh18; /* Ofs: 0x4B0 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh18 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh17; /* Ofs: 0x4B8 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh17 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh16; /* Ofs: 0x4C0 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh16 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh15; /* Ofs: 0x4C8 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh15 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh21; /* Ofs: 0x4D0 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh21 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh14; /* Ofs: 0x4D8 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh14 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh13; /* Ofs: 0x4E0 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh13 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh11; /* Ofs: 0x4E8 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh11 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh9; /* Ofs: 0x4F0 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh9 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh4; /* Ofs: 0x4F8 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh4 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh5; /* Ofs: 0x500 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh5 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh7; /* Ofs: 0x508 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh7 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh3; /* Ofs: 0x510 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh3 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh1; /* Ofs: 0x518 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh1 */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh; /* Ofs: 0x520 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh */
	ExternalPtr<struct UStaticMeshComponent> StaticMesh8; /* Ofs: 0x528 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.StaticMesh8 */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x530 Size: 0x8 - ObjectProperty BP_Replayzone_Area.BP_Replayzone_Area_C.DefaultSceneRoot */


	inline bool SetStaticMesh38(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x410, value); }
	inline bool SetStaticMesh37(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x418, value); }
	inline bool SetStaticMesh36(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x420, value); }
	inline bool SetStaticMesh28(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x428, value); }
	inline bool SetStaticMesh34(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x430, value); }
	inline bool SetStaticMesh33(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x438, value); }
	inline bool SetStaticMesh32(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x440, value); }
	inline bool SetStaticMesh31(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x448, value); }
	inline bool SetStaticMesh30(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x450, value); }
	inline bool SetStaticMesh29(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x458, value); }
	inline bool SetStaticMesh35(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x460, value); }
	inline bool SetStaticMesh27(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x468, value); }
	inline bool SetStaticMesh26(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x470, value); }
	inline bool SetStaticMesh25(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x478, value); }
	inline bool SetStaticMesh24(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x480, value); }
	inline bool SetStaticMesh23(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x488, value); }
	inline bool SetStaticMesh22(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x490, value); }
	inline bool SetStaticMesh10(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x498, value); }
	inline bool SetStaticMesh20(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4A0, value); }
	inline bool SetStaticMesh19(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4A8, value); }
	inline bool SetStaticMesh18(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4B0, value); }
	inline bool SetStaticMesh17(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4B8, value); }
	inline bool SetStaticMesh16(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4C0, value); }
	inline bool SetStaticMesh15(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4C8, value); }
	inline bool SetStaticMesh21(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4D0, value); }
	inline bool SetStaticMesh14(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4D8, value); }
	inline bool SetStaticMesh13(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4E0, value); }
	inline bool SetStaticMesh11(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4E8, value); }
	inline bool SetStaticMesh9(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4F0, value); }
	inline bool SetStaticMesh4(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x4F8, value); }
	inline bool SetStaticMesh5(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x500, value); }
	inline bool SetStaticMesh7(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x508, value); }
	inline bool SetStaticMesh3(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x510, value); }
	inline bool SetStaticMesh1(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x518, value); }
	inline bool SetStaticMesh(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x520, value); }
	inline bool SetStaticMesh8(t_structHelper inst, ExternalPtr<struct UStaticMeshComponent> value) { inst.WriteOffset(0x528, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x530, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBP_Replayzone_Area_C = sizeof(UBP_Replayzone_Area_C); // 1336
    static_assert(sizeof(UBP_Replayzone_Area_C) == 0x538, "Size of UBP_Replayzone_Area_C is not correct.");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh38_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh38);
	static_assert(UBP_Replayzone_Area_C_StaticMesh38_Offset == 0x410, "UBP_Replayzone_Area_C::StaticMesh38 offset is not 410");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh37_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh37);
	static_assert(UBP_Replayzone_Area_C_StaticMesh37_Offset == 0x418, "UBP_Replayzone_Area_C::StaticMesh37 offset is not 418");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh36_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh36);
	static_assert(UBP_Replayzone_Area_C_StaticMesh36_Offset == 0x420, "UBP_Replayzone_Area_C::StaticMesh36 offset is not 420");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh28_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh28);
	static_assert(UBP_Replayzone_Area_C_StaticMesh28_Offset == 0x428, "UBP_Replayzone_Area_C::StaticMesh28 offset is not 428");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh34_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh34);
	static_assert(UBP_Replayzone_Area_C_StaticMesh34_Offset == 0x430, "UBP_Replayzone_Area_C::StaticMesh34 offset is not 430");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh33_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh33);
	static_assert(UBP_Replayzone_Area_C_StaticMesh33_Offset == 0x438, "UBP_Replayzone_Area_C::StaticMesh33 offset is not 438");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh32_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh32);
	static_assert(UBP_Replayzone_Area_C_StaticMesh32_Offset == 0x440, "UBP_Replayzone_Area_C::StaticMesh32 offset is not 440");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh31_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh31);
	static_assert(UBP_Replayzone_Area_C_StaticMesh31_Offset == 0x448, "UBP_Replayzone_Area_C::StaticMesh31 offset is not 448");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh30_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh30);
	static_assert(UBP_Replayzone_Area_C_StaticMesh30_Offset == 0x450, "UBP_Replayzone_Area_C::StaticMesh30 offset is not 450");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh29_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh29);
	static_assert(UBP_Replayzone_Area_C_StaticMesh29_Offset == 0x458, "UBP_Replayzone_Area_C::StaticMesh29 offset is not 458");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh35_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh35);
	static_assert(UBP_Replayzone_Area_C_StaticMesh35_Offset == 0x460, "UBP_Replayzone_Area_C::StaticMesh35 offset is not 460");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh27_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh27);
	static_assert(UBP_Replayzone_Area_C_StaticMesh27_Offset == 0x468, "UBP_Replayzone_Area_C::StaticMesh27 offset is not 468");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh26_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh26);
	static_assert(UBP_Replayzone_Area_C_StaticMesh26_Offset == 0x470, "UBP_Replayzone_Area_C::StaticMesh26 offset is not 470");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh25_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh25);
	static_assert(UBP_Replayzone_Area_C_StaticMesh25_Offset == 0x478, "UBP_Replayzone_Area_C::StaticMesh25 offset is not 478");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh24_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh24);
	static_assert(UBP_Replayzone_Area_C_StaticMesh24_Offset == 0x480, "UBP_Replayzone_Area_C::StaticMesh24 offset is not 480");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh23_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh23);
	static_assert(UBP_Replayzone_Area_C_StaticMesh23_Offset == 0x488, "UBP_Replayzone_Area_C::StaticMesh23 offset is not 488");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh22_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh22);
	static_assert(UBP_Replayzone_Area_C_StaticMesh22_Offset == 0x490, "UBP_Replayzone_Area_C::StaticMesh22 offset is not 490");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh10_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh10);
	static_assert(UBP_Replayzone_Area_C_StaticMesh10_Offset == 0x498, "UBP_Replayzone_Area_C::StaticMesh10 offset is not 498");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh20_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh20);
	static_assert(UBP_Replayzone_Area_C_StaticMesh20_Offset == 0x4a0, "UBP_Replayzone_Area_C::StaticMesh20 offset is not 4a0");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh19_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh19);
	static_assert(UBP_Replayzone_Area_C_StaticMesh19_Offset == 0x4a8, "UBP_Replayzone_Area_C::StaticMesh19 offset is not 4a8");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh18_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh18);
	static_assert(UBP_Replayzone_Area_C_StaticMesh18_Offset == 0x4b0, "UBP_Replayzone_Area_C::StaticMesh18 offset is not 4b0");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh17_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh17);
	static_assert(UBP_Replayzone_Area_C_StaticMesh17_Offset == 0x4b8, "UBP_Replayzone_Area_C::StaticMesh17 offset is not 4b8");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh16_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh16);
	static_assert(UBP_Replayzone_Area_C_StaticMesh16_Offset == 0x4c0, "UBP_Replayzone_Area_C::StaticMesh16 offset is not 4c0");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh15_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh15);
	static_assert(UBP_Replayzone_Area_C_StaticMesh15_Offset == 0x4c8, "UBP_Replayzone_Area_C::StaticMesh15 offset is not 4c8");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh21_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh21);
	static_assert(UBP_Replayzone_Area_C_StaticMesh21_Offset == 0x4d0, "UBP_Replayzone_Area_C::StaticMesh21 offset is not 4d0");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh14_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh14);
	static_assert(UBP_Replayzone_Area_C_StaticMesh14_Offset == 0x4d8, "UBP_Replayzone_Area_C::StaticMesh14 offset is not 4d8");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh13_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh13);
	static_assert(UBP_Replayzone_Area_C_StaticMesh13_Offset == 0x4e0, "UBP_Replayzone_Area_C::StaticMesh13 offset is not 4e0");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh11_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh11);
	static_assert(UBP_Replayzone_Area_C_StaticMesh11_Offset == 0x4e8, "UBP_Replayzone_Area_C::StaticMesh11 offset is not 4e8");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh9_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh9);
	static_assert(UBP_Replayzone_Area_C_StaticMesh9_Offset == 0x4f0, "UBP_Replayzone_Area_C::StaticMesh9 offset is not 4f0");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh4_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh4);
	static_assert(UBP_Replayzone_Area_C_StaticMesh4_Offset == 0x4f8, "UBP_Replayzone_Area_C::StaticMesh4 offset is not 4f8");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh5_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh5);
	static_assert(UBP_Replayzone_Area_C_StaticMesh5_Offset == 0x500, "UBP_Replayzone_Area_C::StaticMesh5 offset is not 500");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh7_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh7);
	static_assert(UBP_Replayzone_Area_C_StaticMesh7_Offset == 0x508, "UBP_Replayzone_Area_C::StaticMesh7 offset is not 508");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh3_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh3);
	static_assert(UBP_Replayzone_Area_C_StaticMesh3_Offset == 0x510, "UBP_Replayzone_Area_C::StaticMesh3 offset is not 510");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh1_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh1);
	static_assert(UBP_Replayzone_Area_C_StaticMesh1_Offset == 0x518, "UBP_Replayzone_Area_C::StaticMesh1 offset is not 518");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh);
	static_assert(UBP_Replayzone_Area_C_StaticMesh_Offset == 0x520, "UBP_Replayzone_Area_C::StaticMesh offset is not 520");
	auto constexpr UBP_Replayzone_Area_C_StaticMesh8_Offset = offsetof(UBP_Replayzone_Area_C, StaticMesh8);
	static_assert(UBP_Replayzone_Area_C_StaticMesh8_Offset == 0x528, "UBP_Replayzone_Area_C::StaticMesh8 offset is not 528");
	auto constexpr UBP_Replayzone_Area_C_DefaultSceneRoot_Offset = offsetof(UBP_Replayzone_Area_C, DefaultSceneRoot);
	static_assert(UBP_Replayzone_Area_C_DefaultSceneRoot_Offset == 0x530, "UBP_Replayzone_Area_C::DefaultSceneRoot offset is not 530");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
