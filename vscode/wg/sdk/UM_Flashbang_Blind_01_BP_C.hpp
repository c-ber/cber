#pragma once
#include "UTslPostProcessEffect.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "ETimelineDirection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UM_Flashbang_Blind_01_BP_C // Size: 0x490
	: public UTslPostProcessEffect // Size: 0x460
{
private:
	typedef UM_Flashbang_Blind_01_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(125998); // id32("BlueprintGeneratedClass M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x460 Size: 0x8 - StructProperty M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C.UberGraphFrame */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x468 Size: 0x8 - ObjectProperty M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C.DefaultSceneRoot */
	float _____1______0_AFF6D5134D79CE6B543B1D8991A51AF6; /* Ofs: 0x470 Size: 0x4 - FloatProperty M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C._____1______0_AFF6D5134D79CE6B543B1D8991A51AF6 */
	TEnumAsByte<enum ETimelineDirection> _____1__Direction_AFF6D5134D79CE6B543B1D8991A51AF6; /* Ofs: 0x474 Size: 0x1 - ByteProperty M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C._____1__Direction_AFF6D5134D79CE6B543B1D8991A51AF6 */
	uint8_t UnknownData475[0x3];
	ExternalPtr<struct UTimelineComponent> ______x__2; /* Ofs: 0x478 Size: 0x8 - ObjectProperty M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C.АР„З|·xЗ_2 */
	float _____0______0_2FD5CA0D48A747A9C536689E48D8A2F7; /* Ofs: 0x480 Size: 0x4 - FloatProperty M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C._____0______0_2FD5CA0D48A747A9C536689E48D8A2F7 */
	TEnumAsByte<enum ETimelineDirection> _____0__Direction_2FD5CA0D48A747A9C536689E48D8A2F7; /* Ofs: 0x484 Size: 0x1 - ByteProperty M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C._____0__Direction_2FD5CA0D48A747A9C536689E48D8A2F7 */
	uint8_t UnknownData485[0x3];
	ExternalPtr<struct UTimelineComponent> ______x__1; /* Ofs: 0x488 Size: 0x8 - ObjectProperty M_Flashbang_Blind_01_BP.M_Flashbang_Blind_01_BP_C.АР„З|·xЗ_1 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x460, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x468, value); }
	inline bool Set_____1______0_AFF6D5134D79CE6B543B1D8991A51AF6(t_structHelper inst, float value) { inst.WriteOffset(0x470, value); }
	inline bool Set_____1__Direction_AFF6D5134D79CE6B543B1D8991A51AF6(t_structHelper inst, TEnumAsByte<enum ETimelineDirection> value) { inst.WriteOffset(0x474, value); }
	inline bool Set______x__2(t_structHelper inst, ExternalPtr<struct UTimelineComponent> value) { inst.WriteOffset(0x478, value); }
	inline bool Set_____0______0_2FD5CA0D48A747A9C536689E48D8A2F7(t_structHelper inst, float value) { inst.WriteOffset(0x480, value); }
	inline bool Set_____0__Direction_2FD5CA0D48A747A9C536689E48D8A2F7(t_structHelper inst, TEnumAsByte<enum ETimelineDirection> value) { inst.WriteOffset(0x484, value); }
	inline bool Set______x__1(t_structHelper inst, ExternalPtr<struct UTimelineComponent> value) { inst.WriteOffset(0x488, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUM_Flashbang_Blind_01_BP_C = sizeof(UM_Flashbang_Blind_01_BP_C); // 1168
    static_assert(sizeof(UM_Flashbang_Blind_01_BP_C) == 0x490, "Size of UM_Flashbang_Blind_01_BP_C is not correct.");
	auto constexpr UM_Flashbang_Blind_01_BP_C_UberGraphFrame_Offset = offsetof(UM_Flashbang_Blind_01_BP_C, UberGraphFrame);
	static_assert(UM_Flashbang_Blind_01_BP_C_UberGraphFrame_Offset == 0x460, "UM_Flashbang_Blind_01_BP_C::UberGraphFrame offset is not 460");
	auto constexpr UM_Flashbang_Blind_01_BP_C_DefaultSceneRoot_Offset = offsetof(UM_Flashbang_Blind_01_BP_C, DefaultSceneRoot);
	static_assert(UM_Flashbang_Blind_01_BP_C_DefaultSceneRoot_Offset == 0x468, "UM_Flashbang_Blind_01_BP_C::DefaultSceneRoot offset is not 468");
	auto constexpr UM_Flashbang_Blind_01_BP_C______1______0_AFF6D5134D79CE6B543B1D8991A51AF6_Offset = offsetof(UM_Flashbang_Blind_01_BP_C, _____1______0_AFF6D5134D79CE6B543B1D8991A51AF6);
	static_assert(UM_Flashbang_Blind_01_BP_C______1______0_AFF6D5134D79CE6B543B1D8991A51AF6_Offset == 0x470, "UM_Flashbang_Blind_01_BP_C::_____1______0_AFF6D5134D79CE6B543B1D8991A51AF6 offset is not 470");
	auto constexpr UM_Flashbang_Blind_01_BP_C______1__Direction_AFF6D5134D79CE6B543B1D8991A51AF6_Offset = offsetof(UM_Flashbang_Blind_01_BP_C, _____1__Direction_AFF6D5134D79CE6B543B1D8991A51AF6);
	static_assert(UM_Flashbang_Blind_01_BP_C______1__Direction_AFF6D5134D79CE6B543B1D8991A51AF6_Offset == 0x474, "UM_Flashbang_Blind_01_BP_C::_____1__Direction_AFF6D5134D79CE6B543B1D8991A51AF6 offset is not 474");
	auto constexpr UM_Flashbang_Blind_01_BP_C_АР„З|·xЗ_2_Offset = offsetof(UM_Flashbang_Blind_01_BP_C, АР„З|·xЗ_2);
	static_assert(UM_Flashbang_Blind_01_BP_C_АР„З|·xЗ_2_Offset == 0x478, "UM_Flashbang_Blind_01_BP_C::АР„З|·xЗ_2 offset is not 478");
	auto constexpr UM_Flashbang_Blind_01_BP_C______0______0_2FD5CA0D48A747A9C536689E48D8A2F7_Offset = offsetof(UM_Flashbang_Blind_01_BP_C, _____0______0_2FD5CA0D48A747A9C536689E48D8A2F7);
	static_assert(UM_Flashbang_Blind_01_BP_C______0______0_2FD5CA0D48A747A9C536689E48D8A2F7_Offset == 0x480, "UM_Flashbang_Blind_01_BP_C::_____0______0_2FD5CA0D48A747A9C536689E48D8A2F7 offset is not 480");
	auto constexpr UM_Flashbang_Blind_01_BP_C______0__Direction_2FD5CA0D48A747A9C536689E48D8A2F7_Offset = offsetof(UM_Flashbang_Blind_01_BP_C, _____0__Direction_2FD5CA0D48A747A9C536689E48D8A2F7);
	static_assert(UM_Flashbang_Blind_01_BP_C______0__Direction_2FD5CA0D48A747A9C536689E48D8A2F7_Offset == 0x484, "UM_Flashbang_Blind_01_BP_C::_____0__Direction_2FD5CA0D48A747A9C536689E48D8A2F7 offset is not 484");
	auto constexpr UM_Flashbang_Blind_01_BP_C_АР„З|·xЗ_1_Offset = offsetof(UM_Flashbang_Blind_01_BP_C, АР„З|·xЗ_1);
	static_assert(UM_Flashbang_Blind_01_BP_C_АР„З|·xЗ_1_Offset == 0x488, "UM_Flashbang_Blind_01_BP_C::АР„З|·xЗ_1 offset is not 488");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
