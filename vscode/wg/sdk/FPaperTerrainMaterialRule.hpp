#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) FPaperTerrainMaterialRule // Size: 0x38
{
public:
    ExternalPtr<struct UPaperSprite> StartCap; /* Ofs: 0x0 Size: 0x8 ObjectProperty Paper2D.PaperTerrainMaterialRule.StartCap */
    TArray<ExternalPtr<struct UPaperSprite>> Body; /* Ofs: 0x8 Size: 0x10 ArrayProperty Paper2D.PaperTerrainMaterialRule.Body */
    ExternalPtr<struct UPaperSprite> EndCap; /* Ofs: 0x18 Size: 0x8 ObjectProperty Paper2D.PaperTerrainMaterialRule.EndCap */
    float MinimumAngle; /* Ofs: 0x20 Size: 0x4 FloatProperty Paper2D.PaperTerrainMaterialRule.MinimumAngle */
    float MaximumAngle; /* Ofs: 0x24 Size: 0x4 FloatProperty Paper2D.PaperTerrainMaterialRule.MaximumAngle */
    bool bEnableCollision; /* Ofs: 0x28 Size: 0x1 BitMask: 01 BoolProperty Paper2D.PaperTerrainMaterialRule.bEnableCollision */
    uint8_t UnknownData29[0x3];
    float CollisionOffset; /* Ofs: 0x2C Size: 0x4 FloatProperty Paper2D.PaperTerrainMaterialRule.CollisionOffset */
    int32_t DrawOrder; /* Ofs: 0x30 Size: 0x4 IntProperty Paper2D.PaperTerrainMaterialRule.DrawOrder */
    uint8_t UnknownData34[0x4];
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofFPaperTerrainMaterialRule = sizeof(FPaperTerrainMaterialRule); // 56
    static_assert(sizeof(FPaperTerrainMaterialRule) == 0x38, "Size of FPaperTerrainMaterialRule is not correct.");
	auto constexpr FPaperTerrainMaterialRule_StartCap_Offset = offsetof(FPaperTerrainMaterialRule, StartCap);
	static_assert(FPaperTerrainMaterialRule_StartCap_Offset == 0x0, "FPaperTerrainMaterialRule::StartCap offset is not 0");
	auto constexpr FPaperTerrainMaterialRule_Body_Offset = offsetof(FPaperTerrainMaterialRule, Body);
	static_assert(FPaperTerrainMaterialRule_Body_Offset == 0x8, "FPaperTerrainMaterialRule::Body offset is not 8");
	auto constexpr FPaperTerrainMaterialRule_EndCap_Offset = offsetof(FPaperTerrainMaterialRule, EndCap);
	static_assert(FPaperTerrainMaterialRule_EndCap_Offset == 0x18, "FPaperTerrainMaterialRule::EndCap offset is not 18");
	auto constexpr FPaperTerrainMaterialRule_MinimumAngle_Offset = offsetof(FPaperTerrainMaterialRule, MinimumAngle);
	static_assert(FPaperTerrainMaterialRule_MinimumAngle_Offset == 0x20, "FPaperTerrainMaterialRule::MinimumAngle offset is not 20");
	auto constexpr FPaperTerrainMaterialRule_MaximumAngle_Offset = offsetof(FPaperTerrainMaterialRule, MaximumAngle);
	static_assert(FPaperTerrainMaterialRule_MaximumAngle_Offset == 0x24, "FPaperTerrainMaterialRule::MaximumAngle offset is not 24");
	auto constexpr FPaperTerrainMaterialRule_CollisionOffset_Offset = offsetof(FPaperTerrainMaterialRule, CollisionOffset);
	static_assert(FPaperTerrainMaterialRule_CollisionOffset_Offset == 0x2c, "FPaperTerrainMaterialRule::CollisionOffset offset is not 2c");
	auto constexpr FPaperTerrainMaterialRule_DrawOrder_Offset = offsetof(FPaperTerrainMaterialRule, DrawOrder);
	static_assert(FPaperTerrainMaterialRule_DrawOrder_Offset == 0x30, "FPaperTerrainMaterialRule::DrawOrder offset is not 30");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
