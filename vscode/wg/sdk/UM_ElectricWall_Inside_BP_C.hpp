#pragma once
#include "UTslPostProcessEffect.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "ETimelineDirection.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UM_ElectricWall_Inside_BP_C // Size: 0x480
	: public UTslPostProcessEffect // Size: 0x460
{
private:
	typedef UM_ElectricWall_Inside_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(88682); // id32("BlueprintGeneratedClass M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x460 Size: 0x8 - StructProperty M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.UberGraphFrame */
	ExternalPtr<struct USceneComponent> DefaultSceneRoot; /* Ofs: 0x468 Size: 0x8 - ObjectProperty M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.DefaultSceneRoot */
	float _____0______0_F1196C2844F052526643A091F7753F02; /* Ofs: 0x470 Size: 0x4 - FloatProperty M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C._____0______0_F1196C2844F052526643A091F7753F02 */
	TEnumAsByte<enum ETimelineDirection> _____0__Direction_F1196C2844F052526643A091F7753F02; /* Ofs: 0x474 Size: 0x1 - ByteProperty M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C._____0__Direction_F1196C2844F052526643A091F7753F02 */
	uint8_t UnknownData475[0x3];
	ExternalPtr<struct UTimelineComponent> ______x__1; /* Ofs: 0x478 Size: 0x8 - ObjectProperty M_ElectricWall_Inside_BP.M_ElectricWall_Inside_BP_C.АР„З|·xЗ_1 */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x460, value); }
	inline bool SetDefaultSceneRoot(t_structHelper inst, ExternalPtr<struct USceneComponent> value) { inst.WriteOffset(0x468, value); }
	inline bool Set_____0______0_F1196C2844F052526643A091F7753F02(t_structHelper inst, float value) { inst.WriteOffset(0x470, value); }
	inline bool Set_____0__Direction_F1196C2844F052526643A091F7753F02(t_structHelper inst, TEnumAsByte<enum ETimelineDirection> value) { inst.WriteOffset(0x474, value); }
	inline bool Set______x__1(t_structHelper inst, ExternalPtr<struct UTimelineComponent> value) { inst.WriteOffset(0x478, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUM_ElectricWall_Inside_BP_C = sizeof(UM_ElectricWall_Inside_BP_C); // 1152
    static_assert(sizeof(UM_ElectricWall_Inside_BP_C) == 0x480, "Size of UM_ElectricWall_Inside_BP_C is not correct.");
	auto constexpr UM_ElectricWall_Inside_BP_C_UberGraphFrame_Offset = offsetof(UM_ElectricWall_Inside_BP_C, UberGraphFrame);
	static_assert(UM_ElectricWall_Inside_BP_C_UberGraphFrame_Offset == 0x460, "UM_ElectricWall_Inside_BP_C::UberGraphFrame offset is not 460");
	auto constexpr UM_ElectricWall_Inside_BP_C_DefaultSceneRoot_Offset = offsetof(UM_ElectricWall_Inside_BP_C, DefaultSceneRoot);
	static_assert(UM_ElectricWall_Inside_BP_C_DefaultSceneRoot_Offset == 0x468, "UM_ElectricWall_Inside_BP_C::DefaultSceneRoot offset is not 468");
	auto constexpr UM_ElectricWall_Inside_BP_C______0______0_F1196C2844F052526643A091F7753F02_Offset = offsetof(UM_ElectricWall_Inside_BP_C, _____0______0_F1196C2844F052526643A091F7753F02);
	static_assert(UM_ElectricWall_Inside_BP_C______0______0_F1196C2844F052526643A091F7753F02_Offset == 0x470, "UM_ElectricWall_Inside_BP_C::_____0______0_F1196C2844F052526643A091F7753F02 offset is not 470");
	auto constexpr UM_ElectricWall_Inside_BP_C______0__Direction_F1196C2844F052526643A091F7753F02_Offset = offsetof(UM_ElectricWall_Inside_BP_C, _____0__Direction_F1196C2844F052526643A091F7753F02);
	static_assert(UM_ElectricWall_Inside_BP_C______0__Direction_F1196C2844F052526643A091F7753F02_Offset == 0x474, "UM_ElectricWall_Inside_BP_C::_____0__Direction_F1196C2844F052526643A091F7753F02 offset is not 474");
	auto constexpr UM_ElectricWall_Inside_BP_C_АР„З|·xЗ_1_Offset = offsetof(UM_ElectricWall_Inside_BP_C, АР„З|·xЗ_1);
	static_assert(UM_ElectricWall_Inside_BP_C_АР„З|·xЗ_1_Offset == 0x478, "UM_ElectricWall_Inside_BP_C::АР„З|·xЗ_1 offset is not 478");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
