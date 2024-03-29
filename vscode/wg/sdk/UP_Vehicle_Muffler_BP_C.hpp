#pragma once
#include "UTslParticle.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UP_Vehicle_Muffler_BP_C // Size: 0x478
	: public UTslParticle // Size: 0x470
{
private:
	typedef UP_Vehicle_Muffler_BP_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(123627); // id32("BlueprintGeneratedClass P_Vehicle_Muffler_BP.P_Vehicle_Muffler_BP_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0x470 Size: 0x8 - StructProperty P_Vehicle_Muffler_BP.P_Vehicle_Muffler_BP_C.UberGraphFrame */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0x470, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUP_Vehicle_Muffler_BP_C = sizeof(UP_Vehicle_Muffler_BP_C); // 1144
    static_assert(sizeof(UP_Vehicle_Muffler_BP_C) == 0x478, "Size of UP_Vehicle_Muffler_BP_C is not correct.");
	auto constexpr UP_Vehicle_Muffler_BP_C_UberGraphFrame_Offset = offsetof(UP_Vehicle_Muffler_BP_C, UberGraphFrame);
	static_assert(UP_Vehicle_Muffler_BP_C_UberGraphFrame_Offset == 0x470, "UP_Vehicle_Muffler_BP_C::UberGraphFrame offset is not 470");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
