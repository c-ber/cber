#pragma once
#include "UTslParticle.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UP_AquaRail_FrontDrive_FoamRight_BP_C // Size: 0x47C
	: public UTslParticle // Size: 0x470
{
private:
	typedef UP_AquaRail_FrontDrive_FoamRight_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(116052); // id32("BlueprintGeneratedClass P_AquaRail_FrontDrive_FoamRight_BP.P_AquaRail_FrontDrive_FoamRight_BP_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x470 Size: 0x8 - StructProperty P_AquaRail_FrontDrive_FoamRight_BP.P_AquaRail_FrontDrive_FoamRight_BP_C.UberGraphFrame */
	float YFactor; /* Ofs: 0x478 Size: 0x4 - FloatProperty P_AquaRail_FrontDrive_FoamRight_BP.P_AquaRail_FrontDrive_FoamRight_BP_C.YFactor */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x470, value); }
	inline bool SetYFactor(t_structHelper inst, float value) { inst.WriteOffset(0x478, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUP_AquaRail_FrontDrive_FoamRight_BP_C = sizeof(UP_AquaRail_FrontDrive_FoamRight_BP_C); // 1148
    static_assert(sizeof(UP_AquaRail_FrontDrive_FoamRight_BP_C) == 0x47C, "Size of UP_AquaRail_FrontDrive_FoamRight_BP_C is not correct.");
	auto constexpr UP_AquaRail_FrontDrive_FoamRight_BP_C_UberGraphFrame_Offset = offsetof(UP_AquaRail_FrontDrive_FoamRight_BP_C, UberGraphFrame);
	static_assert(UP_AquaRail_FrontDrive_FoamRight_BP_C_UberGraphFrame_Offset == 0x470, "UP_AquaRail_FrontDrive_FoamRight_BP_C::UberGraphFrame offset is not 470");
	auto constexpr UP_AquaRail_FrontDrive_FoamRight_BP_C_YFactor_Offset = offsetof(UP_AquaRail_FrontDrive_FoamRight_BP_C, YFactor);
	static_assert(UP_AquaRail_FrontDrive_FoamRight_BP_C_YFactor_Offset == 0x478, "UP_AquaRail_FrontDrive_FoamRight_BP_C::YFactor offset is not 478");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
