#pragma once
#include "UTslBaseOptionWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBaseOptionWidget_C // Size: 0x3F4
	: public UTslBaseOptionWidget // Size: 0x3D0
{
private:
	typedef UBaseOptionWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(168939); // id32("WidgetBlueprintGeneratedClass BaseOptionWidget.BaseOptionWidget_C")
		return ptr;
	}
	TArray<struct FKey> PrevOptionKeyList; /* Ofs: 0x3D0 Size: 0x10 - ArrayProperty BaseOptionWidget.BaseOptionWidget_C.PrevOptionKeyList */
	TArray<struct FKey> NextOptionKeyList; /* Ofs: 0x3E0 Size: 0x10 - ArrayProperty BaseOptionWidget.BaseOptionWidget_C.NextOptionKeyList */
	float KeyUpTime; /* Ofs: 0x3F0 Size: 0x4 - FloatProperty BaseOptionWidget.BaseOptionWidget_C.KeyUpTime */


	inline bool SetPrevOptionKeyList(t_structHelper inst, TArray<struct FKey> value) { inst.WriteOffset(0x3D0, value); }
	inline bool SetNextOptionKeyList(t_structHelper inst, TArray<struct FKey> value) { inst.WriteOffset(0x3E0, value); }
	inline bool SetKeyUpTime(t_structHelper inst, float value) { inst.WriteOffset(0x3F0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBaseOptionWidget_C = sizeof(UBaseOptionWidget_C); // 1012
    static_assert(sizeof(UBaseOptionWidget_C) == 0x3F4, "Size of UBaseOptionWidget_C is not correct.");
	auto constexpr UBaseOptionWidget_C_PrevOptionKeyList_Offset = offsetof(UBaseOptionWidget_C, PrevOptionKeyList);
	static_assert(UBaseOptionWidget_C_PrevOptionKeyList_Offset == 0x3d0, "UBaseOptionWidget_C::PrevOptionKeyList offset is not 3d0");
	auto constexpr UBaseOptionWidget_C_NextOptionKeyList_Offset = offsetof(UBaseOptionWidget_C, NextOptionKeyList);
	static_assert(UBaseOptionWidget_C_NextOptionKeyList_Offset == 0x3e0, "UBaseOptionWidget_C::NextOptionKeyList offset is not 3e0");
	auto constexpr UBaseOptionWidget_C_KeyUpTime_Offset = offsetof(UBaseOptionWidget_C, KeyUpTime);
	static_assert(UBaseOptionWidget_C_KeyUpTime_Offset == 0x3f0, "UBaseOptionWidget_C::KeyUpTime offset is not 3f0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
