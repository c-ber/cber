#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum ESimplygonMaterialChannel
{
   ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_AMBIENT = 0,
   ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_DIFFUSE = 1,
   ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_SPECULAR = 2,
   ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_OPACITY = 3,
   ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_EMISSIVE = 4,
   ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_NORMALS = 5,
   ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_DISPLACEMENT = 6,
   ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_BASECOLOR = 7,
   ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_ROUGHNESS = 8,
   ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_METALLIC = 9,
   ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_AO = 10,
   ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_SUBSURFACE = 11,
   ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_OPACITYMASK = 12,
   ESimplygonMaterialChannel__SG_MATERIAL_CHANNEL_MAX = 13,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
