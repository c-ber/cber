#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FCurveEdTab // Size: 0x30
{
public:
    FString TabName; /* Ofs: 0x0 Size: 0x10 StrProperty Engine.CurveEdTab.TabName */
    TArray<struct FCurveEdEntry> Curves; /* Ofs: 0x10 Size: 0x10 ArrayProperty Engine.CurveEdTab.Curves */
    float ViewStartInput; /* Ofs: 0x20 Size: 0x4 FloatProperty Engine.CurveEdTab.ViewStartInput */
    float ViewEndInput; /* Ofs: 0x24 Size: 0x4 FloatProperty Engine.CurveEdTab.ViewEndInput */
    float ViewStartOutput; /* Ofs: 0x28 Size: 0x4 FloatProperty Engine.CurveEdTab.ViewStartOutput */
    float ViewEndOutput; /* Ofs: 0x2C Size: 0x4 FloatProperty Engine.CurveEdTab.ViewEndOutput */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFCurveEdTab = sizeof(FCurveEdTab); // 48
    static_assert(sizeof(FCurveEdTab) == 0x30, "Size of FCurveEdTab is not correct.");
	auto constexpr FCurveEdTab_TabName_Offset = offsetof(FCurveEdTab, TabName);
	static_assert(FCurveEdTab_TabName_Offset == 0x0, "FCurveEdTab::TabName offset is not 0");
	auto constexpr FCurveEdTab_Curves_Offset = offsetof(FCurveEdTab, Curves);
	static_assert(FCurveEdTab_Curves_Offset == 0x10, "FCurveEdTab::Curves offset is not 10");
	auto constexpr FCurveEdTab_ViewStartInput_Offset = offsetof(FCurveEdTab, ViewStartInput);
	static_assert(FCurveEdTab_ViewStartInput_Offset == 0x20, "FCurveEdTab::ViewStartInput offset is not 20");
	auto constexpr FCurveEdTab_ViewEndInput_Offset = offsetof(FCurveEdTab, ViewEndInput);
	static_assert(FCurveEdTab_ViewEndInput_Offset == 0x24, "FCurveEdTab::ViewEndInput offset is not 24");
	auto constexpr FCurveEdTab_ViewStartOutput_Offset = offsetof(FCurveEdTab, ViewStartOutput);
	static_assert(FCurveEdTab_ViewStartOutput_Offset == 0x28, "FCurveEdTab::ViewStartOutput offset is not 28");
	auto constexpr FCurveEdTab_ViewEndOutput_Offset = offsetof(FCurveEdTab, ViewEndOutput);
	static_assert(FCurveEdTab_ViewEndOutput_Offset == 0x2c, "FCurveEdTab::ViewEndOutput offset is not 2c");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
