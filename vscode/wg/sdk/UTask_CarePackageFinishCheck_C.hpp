#pragma once
#include "UBTTask_BlueprintBase.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTask_CarePackageFinishCheck_C // Size: 0xB4
	: public UBTTask_BlueprintBase // Size: 0xA8
{
private:
	typedef UTask_CarePackageFinishCheck_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(115281); // id32("BlueprintGeneratedClass Task_CarePackageFinishCheck.Task_CarePackageFinishCheck_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0xA8 Size: 0x8 - StructProperty Task_CarePackageFinishCheck.Task_CarePackageFinishCheck_C.UberGraphFrame */
	float TotalTime; /* Ofs: 0xB0 Size: 0x4 - FloatProperty Task_CarePackageFinishCheck.Task_CarePackageFinishCheck_C.TotalTime */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0xA8, value); }
	inline bool SetTotalTime(t_structHelper inst, float value) { inst.WriteOffset(0xB0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTask_CarePackageFinishCheck_C = sizeof(UTask_CarePackageFinishCheck_C); // 180
    static_assert(sizeof(UTask_CarePackageFinishCheck_C) == 0xB4, "Size of UTask_CarePackageFinishCheck_C is not correct.");
	auto constexpr UTask_CarePackageFinishCheck_C_UberGraphFrame_Offset = offsetof(UTask_CarePackageFinishCheck_C, UberGraphFrame);
	static_assert(UTask_CarePackageFinishCheck_C_UberGraphFrame_Offset == 0xa8, "UTask_CarePackageFinishCheck_C::UberGraphFrame offset is not a8");
	auto constexpr UTask_CarePackageFinishCheck_C_TotalTime_Offset = offsetof(UTask_CarePackageFinishCheck_C, TotalTime);
	static_assert(UTask_CarePackageFinishCheck_C_TotalTime_Offset == 0xb0, "UTask_CarePackageFinishCheck_C::TotalTime offset is not b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
