#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

enum EViewModeIndex
{
   VMI_BrushWireframe = 0,
   VMI_Wireframe = 1,
   VMI_Unlit = 2,
   VMI_Lit = 3,
   VMI_Lit_DetailLighting = 4,
   VMI_LightingOnly = 5,
   VMI_LightComplexity = 6,
   VMI_ShaderComplexity = 8,
   VMI_LightmapDensity = 9,
   VMI_LitLightmapDensity = 10,
   VMI_ReflectionOverride = 11,
   VMI_VisualizeBuffer = 12,
   VMI_StationaryLightOverlap = 14,
   VMI_CollisionPawn = 15,
   VMI_CollisionVisibility = 16,
   VMI_LODColoration = 18,
   VMI_QuadOverdraw = 19,
   VMI_PrimitiveDistanceAccuracy = 20,
   VMI_MeshUVDensityAccuracy = 21,
   VMI_ShaderComplexityWithQuadOverdraw = 22,
   VMI_HLODColoration = 23,
   VMI_GroupLODColoration = 24,
   VMI_MaterialTextureScaleAccuracy = 25,
   VMI_RequiredTextureResolution = 26,
   VMI_Max = 27,
   VMI_Unknown = 255,
};}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
