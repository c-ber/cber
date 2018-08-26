#pragma once
#include "UDefaultRifleSetting_C.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "ENUM_CrossbowState.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWeapCrossbow_1_C // Size: 0xFAB
	: public UDefaultRifleSetting_C // Size: 0xFA0
{
private:
	typedef UWeapCrossbow_1_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(57220); // id32("BlueprintGeneratedClass WeapCrossbow_2.WeapCrossbow_1_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0xFA0 Size: 0x8 - StructProperty WeapCrossbow_2.WeapCrossbow_1_C.UberGraphFrame */
	TEnumAsByte<enum ENUM_CrossbowState> CurrentState; /* Ofs: 0xFA8 Size: 0x1 - ByteProperty WeapCrossbow_2.WeapCrossbow_1_C.CurrentState */
	TEnumAsByte<enum ENUM_CrossbowState> LastState; /* Ofs: 0xFA9 Size: 0x1 - ByteProperty WeapCrossbow_2.WeapCrossbow_1_C.LastState */
	uint8_t boolFieldFAA;


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0xFA0, value); }
	inline bool SetCurrentState(t_structHelper inst, TEnumAsByte<enum ENUM_CrossbowState> value) { inst.WriteOffset(0xFA8, value); }
	inline bool SetLastState(t_structHelper inst, TEnumAsByte<enum ENUM_CrossbowState> value) { inst.WriteOffset(0xFA9, value); }
	inline bool bWantsToReload()
	{
		return boolFieldFAA& 0x1;
	}
	inline bool SetbWantsToReload(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xFAA, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWeapCrossbow_1_C = sizeof(UWeapCrossbow_1_C); // 4011
    static_assert(sizeof(UWeapCrossbow_1_C) == 0xFAB, "Size of UWeapCrossbow_1_C is not correct.");
	auto constexpr UWeapCrossbow_1_C_UberGraphFrame_Offset = offsetof(UWeapCrossbow_1_C, UberGraphFrame);
	static_assert(UWeapCrossbow_1_C_UberGraphFrame_Offset == 0xfa0, "UWeapCrossbow_1_C::UberGraphFrame offset is not fa0");
	auto constexpr UWeapCrossbow_1_C_CurrentState_Offset = offsetof(UWeapCrossbow_1_C, CurrentState);
	static_assert(UWeapCrossbow_1_C_CurrentState_Offset == 0xfa8, "UWeapCrossbow_1_C::CurrentState offset is not fa8");
	auto constexpr UWeapCrossbow_1_C_LastState_Offset = offsetof(UWeapCrossbow_1_C, LastState);
	static_assert(UWeapCrossbow_1_C_LastState_Offset == 0xfa9, "UWeapCrossbow_1_C::LastState offset is not fa9");
	auto constexpr UWeapCrossbow_1_C_boolFieldFAA_Offset = offsetof(UWeapCrossbow_1_C, boolFieldFAA);
	static_assert(UWeapCrossbow_1_C_boolFieldFAA_Offset == 0xfaa, "UWeapCrossbow_1_C::boolFieldFAA offset is not faa");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
