#pragma once
#include "FColor.hpp"
#include "FPlane.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCanvas // Size: 0x2D0
	: public UObject // Size: 0x30
{
private:
	typedef UCanvas t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(690); // id32("Class Engine.Canvas")
		return ptr;
	}
	float OrgX; /* Ofs: 0x30 Size: 0x4 - FloatProperty Engine.Canvas.OrgX */
	float OrgY; /* Ofs: 0x34 Size: 0x4 - FloatProperty Engine.Canvas.OrgY */
	float ClipX; /* Ofs: 0x38 Size: 0x4 - FloatProperty Engine.Canvas.ClipX */
	float ClipY; /* Ofs: 0x3C Size: 0x4 - FloatProperty Engine.Canvas.ClipY */
	FColor DrawColor; /* Ofs: 0x40 Size: 0x4 - StructProperty Engine.Canvas.DrawColor */
	uint8_t boolField44;
	uint8_t UnknownData45[0x3];
	int32_t SizeX; /* Ofs: 0x48 Size: 0x4 - IntProperty Engine.Canvas.SizeX */
	int32_t SizeY; /* Ofs: 0x4C Size: 0x4 - IntProperty Engine.Canvas.SizeY */
	FPlane ColorModulate; /* Ofs: 0x50 Size: 0x10 - StructProperty Engine.Canvas.ColorModulate */
	ExternalPtr<struct UTexture2D> DefaultTexture; /* Ofs: 0x60 Size: 0x8 - ObjectProperty Engine.Canvas.DefaultTexture */
	ExternalPtr<struct UTexture2D> GradientTexture0; /* Ofs: 0x68 Size: 0x8 - ObjectProperty Engine.Canvas.GradientTexture0 */
	ExternalPtr<struct UReporterGraph> ReporterGraph; /* Ofs: 0x70 Size: 0x8 - ObjectProperty Engine.Canvas.ReporterGraph */
	uint8_t UnknownData78[0x258];


	inline bool SetOrgX(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
	inline bool SetOrgY(t_structHelper inst, float value) { inst.WriteOffset(0x34, value); }
	inline bool SetClipX(t_structHelper inst, float value) { inst.WriteOffset(0x38, value); }
	inline bool SetClipY(t_structHelper inst, float value) { inst.WriteOffset(0x3C, value); }
	inline bool SetDrawColor(t_structHelper inst, FColor value) { inst.WriteOffset(0x40, value); }
	inline bool bCenterX()
	{
		return boolField44& 0x1;
	}
	inline bool SetbCenterX(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x44, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bCenterY()
	{
		return boolField44& 0x2;
	}
	inline bool SetbCenterY(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x44, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bNoSmooth()
	{
		return boolField44& 0x4;
	}
	inline bool SetbNoSmooth(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x44, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool SetSizeX(t_structHelper inst, int32_t value) { inst.WriteOffset(0x48, value); }
	inline bool SetSizeY(t_structHelper inst, int32_t value) { inst.WriteOffset(0x4C, value); }
	inline bool SetColorModulate(t_structHelper inst, FPlane value) { inst.WriteOffset(0x50, value); }
	inline bool SetDefaultTexture(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x60, value); }
	inline bool SetGradientTexture0(t_structHelper inst, ExternalPtr<struct UTexture2D> value) { inst.WriteOffset(0x68, value); }
	inline bool SetReporterGraph(t_structHelper inst, ExternalPtr<struct UReporterGraph> value) { inst.WriteOffset(0x70, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCanvas = sizeof(UCanvas); // 720
    static_assert(sizeof(UCanvas) == 0x2D0, "Size of UCanvas is not correct.");
	auto constexpr UCanvas_OrgX_Offset = offsetof(UCanvas, OrgX);
	static_assert(UCanvas_OrgX_Offset == 0x30, "UCanvas::OrgX offset is not 30");
	auto constexpr UCanvas_OrgY_Offset = offsetof(UCanvas, OrgY);
	static_assert(UCanvas_OrgY_Offset == 0x34, "UCanvas::OrgY offset is not 34");
	auto constexpr UCanvas_ClipX_Offset = offsetof(UCanvas, ClipX);
	static_assert(UCanvas_ClipX_Offset == 0x38, "UCanvas::ClipX offset is not 38");
	auto constexpr UCanvas_ClipY_Offset = offsetof(UCanvas, ClipY);
	static_assert(UCanvas_ClipY_Offset == 0x3c, "UCanvas::ClipY offset is not 3c");
	auto constexpr UCanvas_DrawColor_Offset = offsetof(UCanvas, DrawColor);
	static_assert(UCanvas_DrawColor_Offset == 0x40, "UCanvas::DrawColor offset is not 40");
	auto constexpr UCanvas_boolField44_Offset = offsetof(UCanvas, boolField44);
	static_assert(UCanvas_boolField44_Offset == 0x44, "UCanvas::boolField44 offset is not 44");
	auto constexpr UCanvas_SizeX_Offset = offsetof(UCanvas, SizeX);
	static_assert(UCanvas_SizeX_Offset == 0x48, "UCanvas::SizeX offset is not 48");
	auto constexpr UCanvas_SizeY_Offset = offsetof(UCanvas, SizeY);
	static_assert(UCanvas_SizeY_Offset == 0x4c, "UCanvas::SizeY offset is not 4c");
	auto constexpr UCanvas_ColorModulate_Offset = offsetof(UCanvas, ColorModulate);
	static_assert(UCanvas_ColorModulate_Offset == 0x50, "UCanvas::ColorModulate offset is not 50");
	auto constexpr UCanvas_DefaultTexture_Offset = offsetof(UCanvas, DefaultTexture);
	static_assert(UCanvas_DefaultTexture_Offset == 0x60, "UCanvas::DefaultTexture offset is not 60");
	auto constexpr UCanvas_GradientTexture0_Offset = offsetof(UCanvas, GradientTexture0);
	static_assert(UCanvas_GradientTexture0_Offset == 0x68, "UCanvas::GradientTexture0 offset is not 68");
	auto constexpr UCanvas_ReporterGraph_Offset = offsetof(UCanvas, ReporterGraph);
	static_assert(UCanvas_ReporterGraph_Offset == 0x70, "UCanvas::ReporterGraph offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
