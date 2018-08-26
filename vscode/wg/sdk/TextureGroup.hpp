#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum TextureGroup
{
   TEXTUREGROUP_World = 0,
   TEXTUREGROUP_WorldNormalMap = 1,
   TEXTUREGROUP_WorldSpecular = 2,
   TEXTUREGROUP_Character = 3,
   TEXTUREGROUP_CharacterNormalMap = 4,
   TEXTUREGROUP_CharacterSpecular = 5,
   TEXTUREGROUP_Weapon = 6,
   TEXTUREGROUP_WeaponNormalMap = 7,
   TEXTUREGROUP_WeaponSpecular = 8,
   TEXTUREGROUP_Vehicle = 9,
   TEXTUREGROUP_VehicleNormalMap = 10,
   TEXTUREGROUP_VehicleSpecular = 11,
   TEXTUREGROUP_Landscape = 12,
   TEXTUREGROUP_LandscapeNormalMap = 13,
   TEXTUREGROUP_LandscapeSpecular = 14,
   TEXTUREGROUP_Cinematic = 15,
   TEXTUREGROUP_Effects = 16,
   TEXTUREGROUP_EffectsNotFiltered = 17,
   TEXTUREGROUP_Skybox = 18,
   TEXTUREGROUP_UI = 19,
   TEXTUREGROUP_Lightmap = 20,
   TEXTUREGROUP_RenderTarget = 21,
   TEXTUREGROUP_MobileFlattened = 22,
   TEXTUREGROUP_ProcBuilding_Face = 23,
   TEXTUREGROUP_ProcBuilding_LightMap = 24,
   TEXTUREGROUP_Shadowmap = 25,
   TEXTUREGROUP_ColorLookupTable = 26,
   TEXTUREGROUP_Terrain_Heightmap = 27,
   TEXTUREGROUP_Terrain_Weightmap = 28,
   TEXTUREGROUP_Bokeh = 29,
   TEXTUREGROUP_IESLightProfile = 30,
   TEXTUREGROUP_Pixels2D = 31,
   TEXTUREGROUP_HierarchicalLOD = 32,
   TEXTUREGROUP_MAX = 33,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
