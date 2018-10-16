#pragma once
#include "UUserWidget.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) USpectatingCanvasWidget_C // Size: 0x290
	: public UUserWidget // Size: 0x248
{
private:
	typedef USpectatingCanvasWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(191106); // id32("WidgetBlueprintGeneratedClass SpectatingCanvasWidget.SpectatingCanvasWidget_C")
		return ptr;
	}
	ExternalPtr<struct UTextBlock> KeyInfo; /* Ofs: 0x248 Size: 0x8 - ObjectProperty SpectatingCanvasWidget.SpectatingCanvasWidget_C.KeyInfo */
	ExternalPtr<struct UTextBlock> Name; /* Ofs: 0x250 Size: 0x8 - ObjectProperty SpectatingCanvasWidget.SpectatingCanvasWidget_C.Name */
	ExternalPtr<struct UTextBlock> Spectating; /* Ofs: 0x258 Size: 0x8 - ObjectProperty SpectatingCanvasWidget.SpectatingCanvasWidget_C.Spectating */
	ExternalPtr<struct UHorizontalBox> SpectatingKeyInfo; /* Ofs: 0x260 Size: 0x8 - ObjectProperty SpectatingCanvasWidget.SpectatingCanvasWidget_C.SpectatingKeyInfo */
	ExternalPtr<struct UTextBlock> SpectatingPlayerReportGuideText; /* Ofs: 0x268 Size: 0x8 - ObjectProperty SpectatingCanvasWidget.SpectatingCanvasWidget_C.SpectatingPlayerReportGuideText */
	ExternalPtr<struct UTextBlock> SpectatorCounter; /* Ofs: 0x270 Size: 0x8 - ObjectProperty SpectatingCanvasWidget.SpectatingCanvasWidget_C.SpectatorCounter */
	ExternalPtr<struct UHorizontalBox> SpectatorCounterHorizontalBox; /* Ofs: 0x278 Size: 0x8 - ObjectProperty SpectatingCanvasWidget.SpectatingCanvasWidget_C.SpectatorCounterHorizontalBox */
	ExternalPtr<struct UImage> SpectatorCounterIconImage; /* Ofs: 0x280 Size: 0x8 - ObjectProperty SpectatingCanvasWidget.SpectatingCanvasWidget_C.SpectatorCounterIconImage */
	ExternalPtr<struct UHorizontalBox> SpectingPlayerInfo; /* Ofs: 0x288 Size: 0x8 - ObjectProperty SpectatingCanvasWidget.SpectatingCanvasWidget_C.SpectingPlayerInfo */


	inline bool SetKeyInfo(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x248, value); }
	inline bool SetName(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x250, value); }
	inline bool SetSpectating(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x258, value); }
	inline bool SetSpectatingKeyInfo(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x260, value); }
	inline bool SetSpectatingPlayerReportGuideText(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x268, value); }
	inline bool SetSpectatorCounter(t_structHelper inst, ExternalPtr<struct UTextBlock> value) { inst.WriteOffset(0x270, value); }
	inline bool SetSpectatorCounterHorizontalBox(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x278, value); }
	inline bool SetSpectatorCounterIconImage(t_structHelper inst, ExternalPtr<struct UImage> value) { inst.WriteOffset(0x280, value); }
	inline bool SetSpectingPlayerInfo(t_structHelper inst, ExternalPtr<struct UHorizontalBox> value) { inst.WriteOffset(0x288, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUSpectatingCanvasWidget_C = sizeof(USpectatingCanvasWidget_C); // 656
    static_assert(sizeof(USpectatingCanvasWidget_C) == 0x290, "Size of USpectatingCanvasWidget_C is not correct.");
	auto constexpr USpectatingCanvasWidget_C_KeyInfo_Offset = offsetof(USpectatingCanvasWidget_C, KeyInfo);
	static_assert(USpectatingCanvasWidget_C_KeyInfo_Offset == 0x248, "USpectatingCanvasWidget_C::KeyInfo offset is not 248");
	auto constexpr USpectatingCanvasWidget_C_Name_Offset = offsetof(USpectatingCanvasWidget_C, Name);
	static_assert(USpectatingCanvasWidget_C_Name_Offset == 0x250, "USpectatingCanvasWidget_C::Name offset is not 250");
	auto constexpr USpectatingCanvasWidget_C_Spectating_Offset = offsetof(USpectatingCanvasWidget_C, Spectating);
	static_assert(USpectatingCanvasWidget_C_Spectating_Offset == 0x258, "USpectatingCanvasWidget_C::Spectating offset is not 258");
	auto constexpr USpectatingCanvasWidget_C_SpectatingKeyInfo_Offset = offsetof(USpectatingCanvasWidget_C, SpectatingKeyInfo);
	static_assert(USpectatingCanvasWidget_C_SpectatingKeyInfo_Offset == 0x260, "USpectatingCanvasWidget_C::SpectatingKeyInfo offset is not 260");
	auto constexpr USpectatingCanvasWidget_C_SpectatingPlayerReportGuideText_Offset = offsetof(USpectatingCanvasWidget_C, SpectatingPlayerReportGuideText);
	static_assert(USpectatingCanvasWidget_C_SpectatingPlayerReportGuideText_Offset == 0x268, "USpectatingCanvasWidget_C::SpectatingPlayerReportGuideText offset is not 268");
	auto constexpr USpectatingCanvasWidget_C_SpectatorCounter_Offset = offsetof(USpectatingCanvasWidget_C, SpectatorCounter);
	static_assert(USpectatingCanvasWidget_C_SpectatorCounter_Offset == 0x270, "USpectatingCanvasWidget_C::SpectatorCounter offset is not 270");
	auto constexpr USpectatingCanvasWidget_C_SpectatorCounterHorizontalBox_Offset = offsetof(USpectatingCanvasWidget_C, SpectatorCounterHorizontalBox);
	static_assert(USpectatingCanvasWidget_C_SpectatorCounterHorizontalBox_Offset == 0x278, "USpectatingCanvasWidget_C::SpectatorCounterHorizontalBox offset is not 278");
	auto constexpr USpectatingCanvasWidget_C_SpectatorCounterIconImage_Offset = offsetof(USpectatingCanvasWidget_C, SpectatorCounterIconImage);
	static_assert(USpectatingCanvasWidget_C_SpectatorCounterIconImage_Offset == 0x280, "USpectatingCanvasWidget_C::SpectatorCounterIconImage offset is not 280");
	auto constexpr USpectatingCanvasWidget_C_SpectingPlayerInfo_Offset = offsetof(USpectatingCanvasWidget_C, SpectingPlayerInfo);
	static_assert(USpectatingCanvasWidget_C_SpectingPlayerInfo_Offset == 0x288, "USpectatingCanvasWidget_C::SpectingPlayerInfo offset is not 288");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
