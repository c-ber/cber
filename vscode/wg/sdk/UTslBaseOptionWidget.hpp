#pragma once
#include "UUmgBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslBaseOptionWidget // Size: 0x3D0
	: public UUmgBaseWidget // Size: 0x300
{
private:
	typedef UTslBaseOptionWidget t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1432); // id32("Class TslGame.TslBaseOptionWidget")
		return ptr;
	}
	FName OptionName; /* Ofs: 0x300 Size: 0x8 - NameProperty TslGame.TslBaseOptionWidget.OptionName */
	uint8_t UnknownData308[0xC8];


	inline bool SetOptionName(t_structHelper inst, FName value) { inst.WriteOffset(0x300, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslBaseOptionWidget = sizeof(UTslBaseOptionWidget); // 976
    static_assert(sizeof(UTslBaseOptionWidget) == 0x3D0, "Size of UTslBaseOptionWidget is not correct.");
	auto constexpr UTslBaseOptionWidget_OptionName_Offset = offsetof(UTslBaseOptionWidget, OptionName);
	static_assert(UTslBaseOptionWidget_OptionName_Offset == 0x300, "UTslBaseOptionWidget::OptionName offset is not 300");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
