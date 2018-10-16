#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FLandscapeEditToolRenderData // Size: 0x28
{
public:
    ExternalPtr<struct UMaterialInterface> ToolMaterial; /* Ofs: 0x0 Size: 0x8 ObjectProperty Landscape.LandscapeEditToolRenderData.ToolMaterial */
    ExternalPtr<struct UMaterialInterface> GizmoMaterial; /* Ofs: 0x8 Size: 0x8 ObjectProperty Landscape.LandscapeEditToolRenderData.GizmoMaterial */
    int32_t SelectedType; /* Ofs: 0x10 Size: 0x4 IntProperty Landscape.LandscapeEditToolRenderData.SelectedType */
    int32_t DebugChannelR; /* Ofs: 0x14 Size: 0x4 IntProperty Landscape.LandscapeEditToolRenderData.DebugChannelR */
    int32_t DebugChannelG; /* Ofs: 0x18 Size: 0x4 IntProperty Landscape.LandscapeEditToolRenderData.DebugChannelG */
    int32_t DebugChannelB; /* Ofs: 0x1C Size: 0x4 IntProperty Landscape.LandscapeEditToolRenderData.DebugChannelB */
    ExternalPtr<struct UTexture2D> DataTexture; /* Ofs: 0x20 Size: 0x8 ObjectProperty Landscape.LandscapeEditToolRenderData.DataTexture */
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFLandscapeEditToolRenderData = sizeof(FLandscapeEditToolRenderData); // 40
    static_assert(sizeof(FLandscapeEditToolRenderData) == 0x28, "Size of FLandscapeEditToolRenderData is not correct.");
	auto constexpr FLandscapeEditToolRenderData_ToolMaterial_Offset = offsetof(FLandscapeEditToolRenderData, ToolMaterial);
	static_assert(FLandscapeEditToolRenderData_ToolMaterial_Offset == 0x0, "FLandscapeEditToolRenderData::ToolMaterial offset is not 0");
	auto constexpr FLandscapeEditToolRenderData_GizmoMaterial_Offset = offsetof(FLandscapeEditToolRenderData, GizmoMaterial);
	static_assert(FLandscapeEditToolRenderData_GizmoMaterial_Offset == 0x8, "FLandscapeEditToolRenderData::GizmoMaterial offset is not 8");
	auto constexpr FLandscapeEditToolRenderData_SelectedType_Offset = offsetof(FLandscapeEditToolRenderData, SelectedType);
	static_assert(FLandscapeEditToolRenderData_SelectedType_Offset == 0x10, "FLandscapeEditToolRenderData::SelectedType offset is not 10");
	auto constexpr FLandscapeEditToolRenderData_DebugChannelR_Offset = offsetof(FLandscapeEditToolRenderData, DebugChannelR);
	static_assert(FLandscapeEditToolRenderData_DebugChannelR_Offset == 0x14, "FLandscapeEditToolRenderData::DebugChannelR offset is not 14");
	auto constexpr FLandscapeEditToolRenderData_DebugChannelG_Offset = offsetof(FLandscapeEditToolRenderData, DebugChannelG);
	static_assert(FLandscapeEditToolRenderData_DebugChannelG_Offset == 0x18, "FLandscapeEditToolRenderData::DebugChannelG offset is not 18");
	auto constexpr FLandscapeEditToolRenderData_DebugChannelB_Offset = offsetof(FLandscapeEditToolRenderData, DebugChannelB);
	static_assert(FLandscapeEditToolRenderData_DebugChannelB_Offset == 0x1c, "FLandscapeEditToolRenderData::DebugChannelB offset is not 1c");
	auto constexpr FLandscapeEditToolRenderData_DataTexture_Offset = offsetof(FLandscapeEditToolRenderData, DataTexture);
	static_assert(FLandscapeEditToolRenderData_DataTexture_Offset == 0x20, "FLandscapeEditToolRenderData::DataTexture offset is not 20");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
