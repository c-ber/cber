#pragma once
#include "UContentWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UWindowTitleBarArea // Size: 0x168
	: public UContentWidget // Size: 0x148
{
private:
	typedef UWindowTitleBarArea t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(481); // id32("Class UMG.WindowTitleBarArea")
		return ptr;
	}
	uint8_t boolField148;
	uint8_t UnknownData149[0x1F];


	inline bool bDoubleClickTogglesFullscreen()
	{
		return boolField148& 0x1;
	}
	inline bool SetbDoubleClickTogglesFullscreen(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x148, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUWindowTitleBarArea = sizeof(UWindowTitleBarArea); // 360
    static_assert(sizeof(UWindowTitleBarArea) == 0x168, "Size of UWindowTitleBarArea is not correct.");
	auto constexpr UWindowTitleBarArea_boolField148_Offset = offsetof(UWindowTitleBarArea, boolField148);
	static_assert(UWindowTitleBarArea_boolField148_Offset == 0x148, "UWindowTitleBarArea::boolField148 offset is not 148");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
