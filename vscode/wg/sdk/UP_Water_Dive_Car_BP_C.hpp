#pragma once
#include "UTslParticle.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UP_Water_Dive_Car_BP_C // Size: 0x480
	: public UTslParticle // Size: 0x470
{
private:
	typedef UP_Water_Dive_Car_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(147226); // id32("BlueprintGeneratedClass P_Water_Dive_Car_BP.P_Water_Dive_Car_BP_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x470 Size: 0x8 - StructProperty P_Water_Dive_Car_BP.P_Water_Dive_Car_BP_C.UberGraphFrame */
	float MaxSpeed; /* Ofs: 0x478 Size: 0x4 - FloatProperty P_Water_Dive_Car_BP.P_Water_Dive_Car_BP_C.MaxSpeed */
	float MaxRadius; /* Ofs: 0x47C Size: 0x4 - FloatProperty P_Water_Dive_Car_BP.P_Water_Dive_Car_BP_C.MaxRadius */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x470, value); }
	inline bool SetMaxSpeed(t_structHelper inst, float value) { inst.WriteOffset(0x478, value); }
	inline bool SetMaxRadius(t_structHelper inst, float value) { inst.WriteOffset(0x47C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUP_Water_Dive_Car_BP_C = sizeof(UP_Water_Dive_Car_BP_C); // 1152
    static_assert(sizeof(UP_Water_Dive_Car_BP_C) == 0x480, "Size of UP_Water_Dive_Car_BP_C is not correct.");
	auto constexpr UP_Water_Dive_Car_BP_C_UberGraphFrame_Offset = offsetof(UP_Water_Dive_Car_BP_C, UberGraphFrame);
	static_assert(UP_Water_Dive_Car_BP_C_UberGraphFrame_Offset == 0x470, "UP_Water_Dive_Car_BP_C::UberGraphFrame offset is not 470");
	auto constexpr UP_Water_Dive_Car_BP_C_MaxSpeed_Offset = offsetof(UP_Water_Dive_Car_BP_C, MaxSpeed);
	static_assert(UP_Water_Dive_Car_BP_C_MaxSpeed_Offset == 0x478, "UP_Water_Dive_Car_BP_C::MaxSpeed offset is not 478");
	auto constexpr UP_Water_Dive_Car_BP_C_MaxRadius_Offset = offsetof(UP_Water_Dive_Car_BP_C, MaxRadius);
	static_assert(UP_Water_Dive_Car_BP_C_MaxRadius_Offset == 0x47c, "UP_Water_Dive_Car_BP_C::MaxRadius offset is not 47c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
