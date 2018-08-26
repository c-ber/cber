#pragma once
#include "UVersionInfoCanvasBaseWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UVersionInfoCanvasWidget_C // Size: 0x350
	: public UVersionInfoCanvasBaseWidget // Size: 0x340
{
private:
	typedef UVersionInfoCanvasWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(193225); // id32("WidgetBlueprintGeneratedClass VersionInfoCanvasWidget.VersionInfoCanvasWidget_C")
		return ptr;
	}
	ExternalPtr<struct URetainerBox> RetainerBox_VersionInfo; /* Ofs: 0x340 Size: 0x8 - ObjectProperty VersionInfoCanvasWidget.VersionInfoCanvasWidget_C.RetainerBox_VersionInfo */
	ExternalPtr<struct UVersionInfoWidget_C> VersionInfo; /* Ofs: 0x348 Size: 0x8 - ObjectProperty VersionInfoCanvasWidget.VersionInfoCanvasWidget_C.VersionInfo */


	inline bool SetRetainerBox_VersionInfo(t_structHelper inst, ExternalPtr<struct URetainerBox> value) { inst.WriteOffset(0x340, value); }
	inline bool SetVersionInfo(t_structHelper inst, ExternalPtr<struct UVersionInfoWidget_C> value) { inst.WriteOffset(0x348, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUVersionInfoCanvasWidget_C = sizeof(UVersionInfoCanvasWidget_C); // 848
    static_assert(sizeof(UVersionInfoCanvasWidget_C) == 0x350, "Size of UVersionInfoCanvasWidget_C is not correct.");
	auto constexpr UVersionInfoCanvasWidget_C_RetainerBox_VersionInfo_Offset = offsetof(UVersionInfoCanvasWidget_C, RetainerBox_VersionInfo);
	static_assert(UVersionInfoCanvasWidget_C_RetainerBox_VersionInfo_Offset == 0x340, "UVersionInfoCanvasWidget_C::RetainerBox_VersionInfo offset is not 340");
	auto constexpr UVersionInfoCanvasWidget_C_VersionInfo_Offset = offsetof(UVersionInfoCanvasWidget_C, VersionInfo);
	static_assert(UVersionInfoCanvasWidget_C_VersionInfo_Offset == 0x348, "UVersionInfoCanvasWidget_C::VersionInfo offset is not 348");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
