#pragma once
#include "UBTTask_BlueprintBase.hpp"
#include "FPointerToUberGraphFrame.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTask_RedZoneFinishCheck_C // Size: 0xB4
	: public UBTTask_BlueprintBase // Size: 0xA8
{
private:
	typedef UTask_RedZoneFinishCheck_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(125029); // id32("BlueprintGeneratedClass Task_RedZoneFinishCheck.Task_RedZoneFinishCheck_C")
		return ptr;
	}
	FPointerToUberGraphFrame UberGraphFrame; /* Ofs: 0xA8 Size: 0x8 - StructProperty Task_RedZoneFinishCheck.Task_RedZoneFinishCheck_C.UberGraphFrame */
	float TotalTime; /* Ofs: 0xB0 Size: 0x4 - FloatProperty Task_RedZoneFinishCheck.Task_RedZoneFinishCheck_C.TotalTime */


	inline bool SetUberGraphFrame(t_structHelper inst, FPointerToUberGraphFrame value) { inst.WriteOffset(0xA8, value); }
	inline bool SetTotalTime(t_structHelper inst, float value) { inst.WriteOffset(0xB0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTask_RedZoneFinishCheck_C = sizeof(UTask_RedZoneFinishCheck_C); // 180
    static_assert(sizeof(UTask_RedZoneFinishCheck_C) == 0xB4, "Size of UTask_RedZoneFinishCheck_C is not correct.");
	auto constexpr UTask_RedZoneFinishCheck_C_UberGraphFrame_Offset = offsetof(UTask_RedZoneFinishCheck_C, UberGraphFrame);
	static_assert(UTask_RedZoneFinishCheck_C_UberGraphFrame_Offset == 0xa8, "UTask_RedZoneFinishCheck_C::UberGraphFrame offset is not a8");
	auto constexpr UTask_RedZoneFinishCheck_C_TotalTime_Offset = offsetof(UTask_RedZoneFinishCheck_C, TotalTime);
	static_assert(UTask_RedZoneFinishCheck_C_TotalTime_Offset == 0xb0, "UTask_RedZoneFinishCheck_C::TotalTime offset is not b0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
