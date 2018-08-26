#pragma once
#include "UTslParticle.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UP_Aquarail_FrontDrive_FoamLeft_BP_C // Size: 0x480
	: public UTslParticle // Size: 0x470
{
private:
	typedef UP_Aquarail_FrontDrive_FoamLeft_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(116095); // id32("BlueprintGeneratedClass P_Aquarail_FrontDrive_FoamLeft_BP.P_Aquarail_FrontDrive_FoamLeft_BP_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x470 Size: 0x8 - StructProperty P_Aquarail_FrontDrive_FoamLeft_BP.P_Aquarail_FrontDrive_FoamLeft_BP_C.UberGraphFrame */
	uint8_t boolField478;
	uint8_t UnknownData479[0x3];
	float YFactor; /* Ofs: 0x47C Size: 0x4 - FloatProperty P_Aquarail_FrontDrive_FoamLeft_BP.P_Aquarail_FrontDrive_FoamLeft_BP_C.YFactor */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x470, value); }
	inline bool IsLeft()
	{
		return boolField478& 0x1;
	}
	inline bool SetIsLeft(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x478, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetYFactor(t_structHelper inst, float value) { inst.WriteOffset(0x47C, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUP_Aquarail_FrontDrive_FoamLeft_BP_C = sizeof(UP_Aquarail_FrontDrive_FoamLeft_BP_C); // 1152
    static_assert(sizeof(UP_Aquarail_FrontDrive_FoamLeft_BP_C) == 0x480, "Size of UP_Aquarail_FrontDrive_FoamLeft_BP_C is not correct.");
	auto constexpr UP_Aquarail_FrontDrive_FoamLeft_BP_C_UberGraphFrame_Offset = offsetof(UP_Aquarail_FrontDrive_FoamLeft_BP_C, UberGraphFrame);
	static_assert(UP_Aquarail_FrontDrive_FoamLeft_BP_C_UberGraphFrame_Offset == 0x470, "UP_Aquarail_FrontDrive_FoamLeft_BP_C::UberGraphFrame offset is not 470");
	auto constexpr UP_Aquarail_FrontDrive_FoamLeft_BP_C_boolField478_Offset = offsetof(UP_Aquarail_FrontDrive_FoamLeft_BP_C, boolField478);
	static_assert(UP_Aquarail_FrontDrive_FoamLeft_BP_C_boolField478_Offset == 0x478, "UP_Aquarail_FrontDrive_FoamLeft_BP_C::boolField478 offset is not 478");
	auto constexpr UP_Aquarail_FrontDrive_FoamLeft_BP_C_YFactor_Offset = offsetof(UP_Aquarail_FrontDrive_FoamLeft_BP_C, YFactor);
	static_assert(UP_Aquarail_FrontDrive_FoamLeft_BP_C_YFactor_Offset == 0x47c, "UP_Aquarail_FrontDrive_FoamLeft_BP_C::YFactor offset is not 47c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
