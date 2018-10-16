#pragma once
#include "FGuid.hpp"
#include "EFoliageScaling.hpp"
#include "FFloatInterval.hpp"
#include "FFoliageVertexColorChannelMask.hpp"
#include "FoliageVertexColorMask.hpp"
#include "FVector.hpp"
#include "FBoxSphereBounds.hpp"
#include "EComponentMobility.hpp"
#include "FInt32Interval.hpp"
#include "FBodyInstance.hpp"
#include "EHasCustomNavigableGeometry.hpp"
#include "FLightingChannels.hpp"
#include "FRuntimeFloatCurve.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UFoliageType // Size: 0x450
	: public UObject // Size: 0x30
{
private:
	typedef UFoliageType t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(388); // id32("Class Foliage.FoliageType")
		return ptr;
	}
	FGuid UpdateGuid; /* Ofs: 0x30 Size: 0x10 - StructProperty Foliage.FoliageType.UpdateGuid */
	float Density; /* Ofs: 0x40 Size: 0x4 - FloatProperty Foliage.FoliageType.Density */
	float DensityAdjustmentFactor; /* Ofs: 0x44 Size: 0x4 - FloatProperty Foliage.FoliageType.DensityAdjustmentFactor */
	float Radius; /* Ofs: 0x48 Size: 0x4 - FloatProperty Foliage.FoliageType.Radius */
	TEnumAsByte<enum EFoliageScaling> Scaling; /* Ofs: 0x4C Size: 0x1 - EnumProperty Foliage.FoliageType.Scaling */
	uint8_t UnknownData4D[0x3];
	FFloatInterval ScaleX; /* Ofs: 0x50 Size: 0x8 - StructProperty Foliage.FoliageType.ScaleX */
	FFloatInterval ScaleY; /* Ofs: 0x58 Size: 0x8 - StructProperty Foliage.FoliageType.ScaleY */
	FFloatInterval ScaleZ; /* Ofs: 0x60 Size: 0x8 - StructProperty Foliage.FoliageType.ScaleZ */
	FFoliageVertexColorChannelMask VertexColorMaskByChannel[4]; /* Ofs: 0x4 Size: 0xC - StructProperty Foliage.FoliageType.VertexColorMaskByChannel */
	TEnumAsByte<enum FoliageVertexColorMask> VertexColorMask; /* Ofs: 0x98 Size: 0x1 - ByteProperty Foliage.FoliageType.VertexColorMask */
	uint8_t UnknownData99[0x3];
	float VertexColorMaskThreshold; /* Ofs: 0x9C Size: 0x4 - FloatProperty Foliage.FoliageType.VertexColorMaskThreshold */
	uint8_t boolFieldA0;
	uint8_t UnknownDataA1[0x3];
	FFloatInterval ZOffset; /* Ofs: 0xA4 Size: 0x8 - StructProperty Foliage.FoliageType.ZOffset */
	uint8_t boolFieldAC;
	uint8_t UnknownDataAD[0x3];
	float AlignMaxAngle; /* Ofs: 0xB0 Size: 0x4 - FloatProperty Foliage.FoliageType.AlignMaxAngle */
	uint8_t boolFieldB4;
	uint8_t UnknownDataB5[0x3];
	float RandomPitchAngle; /* Ofs: 0xB8 Size: 0x4 - FloatProperty Foliage.FoliageType.RandomPitchAngle */
	FFloatInterval GroundSlopeAngle; /* Ofs: 0xBC Size: 0x8 - StructProperty Foliage.FoliageType.GroundSlopeAngle */
	FFloatInterval Height; /* Ofs: 0xC4 Size: 0x8 - StructProperty Foliage.FoliageType.Height */
	uint8_t UnknownDataCC[0x4];
	TArray<struct FName> LandscapeLayers; /* Ofs: 0xD0 Size: 0x10 - ArrayProperty Foliage.FoliageType.LandscapeLayers */
	FName LandscapeLayer; /* Ofs: 0xE0 Size: 0x8 - NameProperty Foliage.FoliageType.LandscapeLayer */
	uint8_t boolFieldE8;
	uint8_t UnknownDataE9[0x3];
	FVector CollisionScale; /* Ofs: 0xEC Size: 0xC - StructProperty Foliage.FoliageType.CollisionScale */
	float MinimumLayerWeight; /* Ofs: 0xF8 Size: 0x4 - FloatProperty Foliage.FoliageType.MinimumLayerWeight */
	FBoxSphereBounds MeshBounds; /* Ofs: 0xFC Size: 0x1C - StructProperty Foliage.FoliageType.MeshBounds */
	FVector LowBoundOriginRadius; /* Ofs: 0x118 Size: 0xC - StructProperty Foliage.FoliageType.LowBoundOriginRadius */
	TEnumAsByte<enum EComponentMobility> Mobility; /* Ofs: 0x124 Size: 0x1 - ByteProperty Foliage.FoliageType.Mobility */
	uint8_t UnknownData125[0x3];
	FInt32Interval CullDistance; /* Ofs: 0x128 Size: 0x8 - StructProperty Foliage.FoliageType.CullDistance */
	uint8_t boolField130;
	uint8_t boolField131;
	uint8_t UnknownData132[0x2];
	int32_t OverriddenLightMapRes; /* Ofs: 0x134 Size: 0x4 - IntProperty Foliage.FoliageType.OverriddenLightMapRes */
	uint8_t boolField138;
	uint8_t UnknownData139[0x7];
	FBodyInstance BodyInstance; /* Ofs: 0x140 Size: 0x240 - StructProperty Foliage.FoliageType.BodyInstance */
	TEnumAsByte<enum EHasCustomNavigableGeometry> CustomNavigableGeometry; /* Ofs: 0x380 Size: 0x1 - ByteProperty Foliage.FoliageType.CustomNavigableGeometry */
	FLightingChannels LightingChannels; /* Ofs: 0x381 Size: 0x3 - StructProperty Foliage.FoliageType.LightingChannels */
	uint8_t boolField384;
	uint8_t UnknownData385[0x3];
	int32_t CustomDepthStencilValue; /* Ofs: 0x388 Size: 0x4 - IntProperty Foliage.FoliageType.CustomDepthStencilValue */
	float CollisionRadius; /* Ofs: 0x38C Size: 0x4 - FloatProperty Foliage.FoliageType.CollisionRadius */
	float ShadeRadius; /* Ofs: 0x390 Size: 0x4 - FloatProperty Foliage.FoliageType.ShadeRadius */
	int32_t NumSteps; /* Ofs: 0x394 Size: 0x4 - IntProperty Foliage.FoliageType.NumSteps */
	float InitialSeedDensity; /* Ofs: 0x398 Size: 0x4 - FloatProperty Foliage.FoliageType.InitialSeedDensity */
	float AverageSpreadDistance; /* Ofs: 0x39C Size: 0x4 - FloatProperty Foliage.FoliageType.AverageSpreadDistance */
	float SpreadVariance; /* Ofs: 0x3A0 Size: 0x4 - FloatProperty Foliage.FoliageType.SpreadVariance */
	int32_t SeedsPerStep; /* Ofs: 0x3A4 Size: 0x4 - IntProperty Foliage.FoliageType.SeedsPerStep */
	int32_t DistributionSeed; /* Ofs: 0x3A8 Size: 0x4 - IntProperty Foliage.FoliageType.DistributionSeed */
	float MaxInitialSeedOffset; /* Ofs: 0x3AC Size: 0x4 - FloatProperty Foliage.FoliageType.MaxInitialSeedOffset */
	uint8_t boolField3B0;
	uint8_t boolField3B1;
	uint8_t UnknownData3B2[0x2];
	float MaxInitialAge; /* Ofs: 0x3B4 Size: 0x4 - FloatProperty Foliage.FoliageType.MaxInitialAge */
	float MaxAge; /* Ofs: 0x3B8 Size: 0x4 - FloatProperty Foliage.FoliageType.MaxAge */
	float OverlapPriority; /* Ofs: 0x3BC Size: 0x4 - FloatProperty Foliage.FoliageType.OverlapPriority */
	FFloatInterval ProceduralScale; /* Ofs: 0x3C0 Size: 0x8 - StructProperty Foliage.FoliageType.ProceduralScale */
	FRuntimeFloatCurve ScaleCurve; /* Ofs: 0x3C8 Size: 0x78 - StructProperty Foliage.FoliageType.ScaleCurve */
	int32_t ChangeCount; /* Ofs: 0x440 Size: 0x4 - IntProperty Foliage.FoliageType.ChangeCount */
	uint8_t boolField444;
	uint8_t boolField445;
	uint8_t UnknownData446[0xA];


	inline bool SetUpdateGuid(t_structHelper inst, FGuid value) { inst.WriteOffset(0x30, value); }
	inline bool SetDensity(t_structHelper inst, float value) { inst.WriteOffset(0x40, value); }
	inline bool SetDensityAdjustmentFactor(t_structHelper inst, float value) { inst.WriteOffset(0x44, value); }
	inline bool SetRadius(t_structHelper inst, float value) { inst.WriteOffset(0x48, value); }
	inline bool SetScaling(t_structHelper inst, TEnumAsByte<enum EFoliageScaling> value) { inst.WriteOffset(0x4C, value); }
	inline bool SetScaleX(t_structHelper inst, FFloatInterval value) { inst.WriteOffset(0x50, value); }
	inline bool SetScaleY(t_structHelper inst, FFloatInterval value) { inst.WriteOffset(0x58, value); }
	inline bool SetScaleZ(t_structHelper inst, FFloatInterval value) { inst.WriteOffset(0x60, value); }
	inline bool SetVertexColorMask(t_structHelper inst, TEnumAsByte<enum FoliageVertexColorMask> value) { inst.WriteOffset(0x98, value); }
	inline bool SetVertexColorMaskThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x9C, value); }
	inline bool VertexColorMaskInvert()
	{
		return boolFieldA0& 0x1;
	}
	inline bool SetVertexColorMaskInvert(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetZOffset(t_structHelper inst, FFloatInterval value) { inst.WriteOffset(0xA4, value); }
	inline bool AlignToNormal()
	{
		return boolFieldAC& 0x1;
	}
	inline bool SetAlignToNormal(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xAC, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetAlignMaxAngle(t_structHelper inst, float value) { inst.WriteOffset(0xB0, value); }
	inline bool RandomYaw()
	{
		return boolFieldB4& 0x1;
	}
	inline bool SetRandomYaw(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xB4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRandomPitchAngle(t_structHelper inst, float value) { inst.WriteOffset(0xB8, value); }
	inline bool SetGroundSlopeAngle(t_structHelper inst, FFloatInterval value) { inst.WriteOffset(0xBC, value); }
	inline bool SetHeight(t_structHelper inst, FFloatInterval value) { inst.WriteOffset(0xC4, value); }
	inline bool SetLandscapeLayers(t_structHelper inst, TArray<struct FName> value) { inst.WriteOffset(0xD0, value); }
	inline bool SetLandscapeLayer(t_structHelper inst, FName value) { inst.WriteOffset(0xE0, value); }
	inline bool CollisionWithWorld()
	{
		return boolFieldE8& 0x1;
	}
	inline bool SetCollisionWithWorld(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xE8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCollisionScale(t_structHelper inst, FVector value) { inst.WriteOffset(0xEC, value); }
	inline bool SetMinimumLayerWeight(t_structHelper inst, float value) { inst.WriteOffset(0xF8, value); }
	inline bool SetMeshBounds(t_structHelper inst, FBoxSphereBounds value) { inst.WriteOffset(0xFC, value); }
	inline bool SetLowBoundOriginRadius(t_structHelper inst, FVector value) { inst.WriteOffset(0x118, value); }
	inline bool SetMobility(t_structHelper inst, TEnumAsByte<enum EComponentMobility> value) { inst.WriteOffset(0x124, value); }
	inline bool SetCullDistance(t_structHelper inst, FInt32Interval value) { inst.WriteOffset(0x128, value); }
	inline bool bEnableStaticLighting()
	{
		return boolField130& 0x1;
	}
	inline bool SetbEnableStaticLighting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x130, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool CastShadow()
	{
		return boolField130& 0x2;
	}
	inline bool SetCastShadow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x130, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bAffectDynamicIndirectLighting()
	{
		return boolField130& 0x4;
	}
	inline bool SetbAffectDynamicIndirectLighting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x130, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool bAffectDistanceFieldLighting()
	{
		return boolField130& 0x8;
	}
	inline bool SetbAffectDistanceFieldLighting(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x130, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool bCastDynamicShadow()
	{
		return boolField130& 0x10;
	}
	inline bool SetbCastDynamicShadow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x130, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool bCastStaticShadow()
	{
		return boolField130& 0x20;
	}
	inline bool SetbCastStaticShadow(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x130, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool bCastShadowAsTwoSided()
	{
		return boolField130& 0x40;
	}
	inline bool SetbCastShadowAsTwoSided(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x130, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bReceivesDecals()
	{
		return boolField130& 0x80;
	}
	inline bool SetbReceivesDecals(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x130, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool bOverrideLightMapRes()
	{
		return boolField131& 0x1;
	}
	inline bool SetbOverrideLightMapRes(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x131, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetOverriddenLightMapRes(t_structHelper inst, int32_t value) { inst.WriteOffset(0x134, value); }
	inline bool bUseAsOccluder()
	{
		return boolField138& 0x1;
	}
	inline bool SetbUseAsOccluder(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x138, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetBodyInstance(t_structHelper inst, FBodyInstance value) { inst.WriteOffset(0x140, value); }
	inline bool SetCustomNavigableGeometry(t_structHelper inst, TEnumAsByte<enum EHasCustomNavigableGeometry> value) { inst.WriteOffset(0x380, value); }
	inline bool SetLightingChannels(t_structHelper inst, FLightingChannels value) { inst.WriteOffset(0x381, value); }
	inline bool bRenderCustomDepth()
	{
		return boolField384& 0x1;
	}
	inline bool SetbRenderCustomDepth(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x384, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetCustomDepthStencilValue(t_structHelper inst, int32_t value) { inst.WriteOffset(0x388, value); }
	inline bool SetCollisionRadius(t_structHelper inst, float value) { inst.WriteOffset(0x38C, value); }
	inline bool SetShadeRadius(t_structHelper inst, float value) { inst.WriteOffset(0x390, value); }
	inline bool SetNumSteps(t_structHelper inst, int32_t value) { inst.WriteOffset(0x394, value); }
	inline bool SetInitialSeedDensity(t_structHelper inst, float value) { inst.WriteOffset(0x398, value); }
	inline bool SetAverageSpreadDistance(t_structHelper inst, float value) { inst.WriteOffset(0x39C, value); }
	inline bool SetSpreadVariance(t_structHelper inst, float value) { inst.WriteOffset(0x3A0, value); }
	inline bool SetSeedsPerStep(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3A4, value); }
	inline bool SetDistributionSeed(t_structHelper inst, int32_t value) { inst.WriteOffset(0x3A8, value); }
	inline bool SetMaxInitialSeedOffset(t_structHelper inst, float value) { inst.WriteOffset(0x3AC, value); }
	inline bool bCanGrowInShade()
	{
		return boolField3B0& 0x1;
	}
	inline bool SetbCanGrowInShade(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3B0, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bSpawnsInShade()
	{
		return boolField3B1& 0x1;
	}
	inline bool SetbSpawnsInShade(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x3B1, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetMaxInitialAge(t_structHelper inst, float value) { inst.WriteOffset(0x3B4, value); }
	inline bool SetMaxAge(t_structHelper inst, float value) { inst.WriteOffset(0x3B8, value); }
	inline bool SetOverlapPriority(t_structHelper inst, float value) { inst.WriteOffset(0x3BC, value); }
	inline bool SetProceduralScale(t_structHelper inst, FFloatInterval value) { inst.WriteOffset(0x3C0, value); }
	inline bool SetScaleCurve(t_structHelper inst, FRuntimeFloatCurve value) { inst.WriteOffset(0x3C8, value); }
	inline bool SetChangeCount(t_structHelper inst, int32_t value) { inst.WriteOffset(0x440, value); }
	inline bool ReapplyDensity()
	{
		return boolField444& 0x1;
	}
	inline bool SetReapplyDensity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x444, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool ReapplyRadius()
	{
		return boolField444& 0x2;
	}
	inline bool SetReapplyRadius(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x444, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool ReapplyAlignToNormal()
	{
		return boolField444& 0x4;
	}
	inline bool SetReapplyAlignToNormal(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x444, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool ReapplyRandomYaw()
	{
		return boolField444& 0x8;
	}
	inline bool SetReapplyRandomYaw(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x444, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool ReapplyScaling()
	{
		return boolField444& 0x10;
	}
	inline bool SetReapplyScaling(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x444, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool ReapplyScaleX()
	{
		return boolField444& 0x20;
	}
	inline bool SetReapplyScaleX(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x444, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool ReapplyScaleY()
	{
		return boolField444& 0x40;
	}
	inline bool SetReapplyScaleY(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x444, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool ReapplyScaleZ()
	{
		return boolField444& 0x80;
	}
	inline bool SetReapplyScaleZ(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x444, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
	inline bool ReapplyRandomPitchAngle()
	{
		return boolField445& 0x1;
	}
	inline bool SetReapplyRandomPitchAngle(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x445, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool ReapplyGroundSlope()
	{
		return boolField445& 0x2;
	}
	inline bool SetReapplyGroundSlope(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x445, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool ReapplyHeight()
	{
		return boolField445& 0x4;
	}
	inline bool SetReapplyHeight(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x445, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
	inline bool ReapplyLandscapeLayers()
	{
		return boolField445& 0x8;
	}
	inline bool SetReapplyLandscapeLayers(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x445, (uint8_t)(value ? curVal | (uint8_t)8 : curVal & ~(uint8_t)8));
	}
	inline bool ReapplyZOffset()
	{
		return boolField445& 0x10;
	}
	inline bool SetReapplyZOffset(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x445, (uint8_t)(value ? curVal | (uint8_t)16 : curVal & ~(uint8_t)16));
	}
	inline bool ReapplyCollisionWithWorld()
	{
		return boolField445& 0x20;
	}
	inline bool SetReapplyCollisionWithWorld(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x445, (uint8_t)(value ? curVal | (uint8_t)32 : curVal & ~(uint8_t)32));
	}
	inline bool ReapplyVertexColorMask()
	{
		return boolField445& 0x40;
	}
	inline bool SetReapplyVertexColorMask(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x445, (uint8_t)(value ? curVal | (uint8_t)64 : curVal & ~(uint8_t)64));
	}
	inline bool bEnableDensityScaling()
	{
		return boolField445& 0x80;
	}
	inline bool SetbEnableDensityScaling(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x445, (uint8_t)(value ? curVal | (uint8_t)128 : curVal & ~(uint8_t)128));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUFoliageType = sizeof(UFoliageType); // 1104
    static_assert(sizeof(UFoliageType) == 0x450, "Size of UFoliageType is not correct.");
	auto constexpr UFoliageType_UpdateGuid_Offset = offsetof(UFoliageType, UpdateGuid);
	static_assert(UFoliageType_UpdateGuid_Offset == 0x30, "UFoliageType::UpdateGuid offset is not 30");
	auto constexpr UFoliageType_Density_Offset = offsetof(UFoliageType, Density);
	static_assert(UFoliageType_Density_Offset == 0x40, "UFoliageType::Density offset is not 40");
	auto constexpr UFoliageType_DensityAdjustmentFactor_Offset = offsetof(UFoliageType, DensityAdjustmentFactor);
	static_assert(UFoliageType_DensityAdjustmentFactor_Offset == 0x44, "UFoliageType::DensityAdjustmentFactor offset is not 44");
	auto constexpr UFoliageType_Radius_Offset = offsetof(UFoliageType, Radius);
	static_assert(UFoliageType_Radius_Offset == 0x48, "UFoliageType::Radius offset is not 48");
	auto constexpr UFoliageType_Scaling_Offset = offsetof(UFoliageType, Scaling);
	static_assert(UFoliageType_Scaling_Offset == 0x4c, "UFoliageType::Scaling offset is not 4c");
	auto constexpr UFoliageType_ScaleX_Offset = offsetof(UFoliageType, ScaleX);
	static_assert(UFoliageType_ScaleX_Offset == 0x50, "UFoliageType::ScaleX offset is not 50");
	auto constexpr UFoliageType_ScaleY_Offset = offsetof(UFoliageType, ScaleY);
	static_assert(UFoliageType_ScaleY_Offset == 0x58, "UFoliageType::ScaleY offset is not 58");
	auto constexpr UFoliageType_ScaleZ_Offset = offsetof(UFoliageType, ScaleZ);
	static_assert(UFoliageType_ScaleZ_Offset == 0x60, "UFoliageType::ScaleZ offset is not 60");
	auto constexpr UFoliageType_VertexColorMaskByChannel_Offset = offsetof(UFoliageType, VertexColorMaskByChannel);
	static_assert(UFoliageType_VertexColorMaskByChannel_Offset == 0x68, "UFoliageType::VertexColorMaskByChannel offset is not 68");
	auto constexpr UFoliageType_VertexColorMask_Offset = offsetof(UFoliageType, VertexColorMask);
	static_assert(UFoliageType_VertexColorMask_Offset == 0x98, "UFoliageType::VertexColorMask offset is not 98");
	auto constexpr UFoliageType_VertexColorMaskThreshold_Offset = offsetof(UFoliageType, VertexColorMaskThreshold);
	static_assert(UFoliageType_VertexColorMaskThreshold_Offset == 0x9c, "UFoliageType::VertexColorMaskThreshold offset is not 9c");
	auto constexpr UFoliageType_boolFieldA0_Offset = offsetof(UFoliageType, boolFieldA0);
	static_assert(UFoliageType_boolFieldA0_Offset == 0xa0, "UFoliageType::boolFieldA0 offset is not a0");
	auto constexpr UFoliageType_ZOffset_Offset = offsetof(UFoliageType, ZOffset);
	static_assert(UFoliageType_ZOffset_Offset == 0xa4, "UFoliageType::ZOffset offset is not a4");
	auto constexpr UFoliageType_boolFieldAC_Offset = offsetof(UFoliageType, boolFieldAC);
	static_assert(UFoliageType_boolFieldAC_Offset == 0xac, "UFoliageType::boolFieldAC offset is not ac");
	auto constexpr UFoliageType_AlignMaxAngle_Offset = offsetof(UFoliageType, AlignMaxAngle);
	static_assert(UFoliageType_AlignMaxAngle_Offset == 0xb0, "UFoliageType::AlignMaxAngle offset is not b0");
	auto constexpr UFoliageType_boolFieldB4_Offset = offsetof(UFoliageType, boolFieldB4);
	static_assert(UFoliageType_boolFieldB4_Offset == 0xb4, "UFoliageType::boolFieldB4 offset is not b4");
	auto constexpr UFoliageType_RandomPitchAngle_Offset = offsetof(UFoliageType, RandomPitchAngle);
	static_assert(UFoliageType_RandomPitchAngle_Offset == 0xb8, "UFoliageType::RandomPitchAngle offset is not b8");
	auto constexpr UFoliageType_GroundSlopeAngle_Offset = offsetof(UFoliageType, GroundSlopeAngle);
	static_assert(UFoliageType_GroundSlopeAngle_Offset == 0xbc, "UFoliageType::GroundSlopeAngle offset is not bc");
	auto constexpr UFoliageType_Height_Offset = offsetof(UFoliageType, Height);
	static_assert(UFoliageType_Height_Offset == 0xc4, "UFoliageType::Height offset is not c4");
	auto constexpr UFoliageType_LandscapeLayers_Offset = offsetof(UFoliageType, LandscapeLayers);
	static_assert(UFoliageType_LandscapeLayers_Offset == 0xd0, "UFoliageType::LandscapeLayers offset is not d0");
	auto constexpr UFoliageType_LandscapeLayer_Offset = offsetof(UFoliageType, LandscapeLayer);
	static_assert(UFoliageType_LandscapeLayer_Offset == 0xe0, "UFoliageType::LandscapeLayer offset is not e0");
	auto constexpr UFoliageType_boolFieldE8_Offset = offsetof(UFoliageType, boolFieldE8);
	static_assert(UFoliageType_boolFieldE8_Offset == 0xe8, "UFoliageType::boolFieldE8 offset is not e8");
	auto constexpr UFoliageType_CollisionScale_Offset = offsetof(UFoliageType, CollisionScale);
	static_assert(UFoliageType_CollisionScale_Offset == 0xec, "UFoliageType::CollisionScale offset is not ec");
	auto constexpr UFoliageType_MinimumLayerWeight_Offset = offsetof(UFoliageType, MinimumLayerWeight);
	static_assert(UFoliageType_MinimumLayerWeight_Offset == 0xf8, "UFoliageType::MinimumLayerWeight offset is not f8");
	auto constexpr UFoliageType_MeshBounds_Offset = offsetof(UFoliageType, MeshBounds);
	static_assert(UFoliageType_MeshBounds_Offset == 0xfc, "UFoliageType::MeshBounds offset is not fc");
	auto constexpr UFoliageType_LowBoundOriginRadius_Offset = offsetof(UFoliageType, LowBoundOriginRadius);
	static_assert(UFoliageType_LowBoundOriginRadius_Offset == 0x118, "UFoliageType::LowBoundOriginRadius offset is not 118");
	auto constexpr UFoliageType_Mobility_Offset = offsetof(UFoliageType, Mobility);
	static_assert(UFoliageType_Mobility_Offset == 0x124, "UFoliageType::Mobility offset is not 124");
	auto constexpr UFoliageType_CullDistance_Offset = offsetof(UFoliageType, CullDistance);
	static_assert(UFoliageType_CullDistance_Offset == 0x128, "UFoliageType::CullDistance offset is not 128");
	auto constexpr UFoliageType_boolField130_Offset = offsetof(UFoliageType, boolField130);
	static_assert(UFoliageType_boolField130_Offset == 0x130, "UFoliageType::boolField130 offset is not 130");
	auto constexpr UFoliageType_boolField131_Offset = offsetof(UFoliageType, boolField131);
	static_assert(UFoliageType_boolField131_Offset == 0x131, "UFoliageType::boolField131 offset is not 131");
	auto constexpr UFoliageType_OverriddenLightMapRes_Offset = offsetof(UFoliageType, OverriddenLightMapRes);
	static_assert(UFoliageType_OverriddenLightMapRes_Offset == 0x134, "UFoliageType::OverriddenLightMapRes offset is not 134");
	auto constexpr UFoliageType_boolField138_Offset = offsetof(UFoliageType, boolField138);
	static_assert(UFoliageType_boolField138_Offset == 0x138, "UFoliageType::boolField138 offset is not 138");
	auto constexpr UFoliageType_BodyInstance_Offset = offsetof(UFoliageType, BodyInstance);
	static_assert(UFoliageType_BodyInstance_Offset == 0x140, "UFoliageType::BodyInstance offset is not 140");
	auto constexpr UFoliageType_CustomNavigableGeometry_Offset = offsetof(UFoliageType, CustomNavigableGeometry);
	static_assert(UFoliageType_CustomNavigableGeometry_Offset == 0x380, "UFoliageType::CustomNavigableGeometry offset is not 380");
	auto constexpr UFoliageType_LightingChannels_Offset = offsetof(UFoliageType, LightingChannels);
	static_assert(UFoliageType_LightingChannels_Offset == 0x381, "UFoliageType::LightingChannels offset is not 381");
	auto constexpr UFoliageType_boolField384_Offset = offsetof(UFoliageType, boolField384);
	static_assert(UFoliageType_boolField384_Offset == 0x384, "UFoliageType::boolField384 offset is not 384");
	auto constexpr UFoliageType_CustomDepthStencilValue_Offset = offsetof(UFoliageType, CustomDepthStencilValue);
	static_assert(UFoliageType_CustomDepthStencilValue_Offset == 0x388, "UFoliageType::CustomDepthStencilValue offset is not 388");
	auto constexpr UFoliageType_CollisionRadius_Offset = offsetof(UFoliageType, CollisionRadius);
	static_assert(UFoliageType_CollisionRadius_Offset == 0x38c, "UFoliageType::CollisionRadius offset is not 38c");
	auto constexpr UFoliageType_ShadeRadius_Offset = offsetof(UFoliageType, ShadeRadius);
	static_assert(UFoliageType_ShadeRadius_Offset == 0x390, "UFoliageType::ShadeRadius offset is not 390");
	auto constexpr UFoliageType_NumSteps_Offset = offsetof(UFoliageType, NumSteps);
	static_assert(UFoliageType_NumSteps_Offset == 0x394, "UFoliageType::NumSteps offset is not 394");
	auto constexpr UFoliageType_InitialSeedDensity_Offset = offsetof(UFoliageType, InitialSeedDensity);
	static_assert(UFoliageType_InitialSeedDensity_Offset == 0x398, "UFoliageType::InitialSeedDensity offset is not 398");
	auto constexpr UFoliageType_AverageSpreadDistance_Offset = offsetof(UFoliageType, AverageSpreadDistance);
	static_assert(UFoliageType_AverageSpreadDistance_Offset == 0x39c, "UFoliageType::AverageSpreadDistance offset is not 39c");
	auto constexpr UFoliageType_SpreadVariance_Offset = offsetof(UFoliageType, SpreadVariance);
	static_assert(UFoliageType_SpreadVariance_Offset == 0x3a0, "UFoliageType::SpreadVariance offset is not 3a0");
	auto constexpr UFoliageType_SeedsPerStep_Offset = offsetof(UFoliageType, SeedsPerStep);
	static_assert(UFoliageType_SeedsPerStep_Offset == 0x3a4, "UFoliageType::SeedsPerStep offset is not 3a4");
	auto constexpr UFoliageType_DistributionSeed_Offset = offsetof(UFoliageType, DistributionSeed);
	static_assert(UFoliageType_DistributionSeed_Offset == 0x3a8, "UFoliageType::DistributionSeed offset is not 3a8");
	auto constexpr UFoliageType_MaxInitialSeedOffset_Offset = offsetof(UFoliageType, MaxInitialSeedOffset);
	static_assert(UFoliageType_MaxInitialSeedOffset_Offset == 0x3ac, "UFoliageType::MaxInitialSeedOffset offset is not 3ac");
	auto constexpr UFoliageType_boolField3B0_Offset = offsetof(UFoliageType, boolField3B0);
	static_assert(UFoliageType_boolField3B0_Offset == 0x3b0, "UFoliageType::boolField3B0 offset is not 3b0");
	auto constexpr UFoliageType_boolField3B1_Offset = offsetof(UFoliageType, boolField3B1);
	static_assert(UFoliageType_boolField3B1_Offset == 0x3b1, "UFoliageType::boolField3B1 offset is not 3b1");
	auto constexpr UFoliageType_MaxInitialAge_Offset = offsetof(UFoliageType, MaxInitialAge);
	static_assert(UFoliageType_MaxInitialAge_Offset == 0x3b4, "UFoliageType::MaxInitialAge offset is not 3b4");
	auto constexpr UFoliageType_MaxAge_Offset = offsetof(UFoliageType, MaxAge);
	static_assert(UFoliageType_MaxAge_Offset == 0x3b8, "UFoliageType::MaxAge offset is not 3b8");
	auto constexpr UFoliageType_OverlapPriority_Offset = offsetof(UFoliageType, OverlapPriority);
	static_assert(UFoliageType_OverlapPriority_Offset == 0x3bc, "UFoliageType::OverlapPriority offset is not 3bc");
	auto constexpr UFoliageType_ProceduralScale_Offset = offsetof(UFoliageType, ProceduralScale);
	static_assert(UFoliageType_ProceduralScale_Offset == 0x3c0, "UFoliageType::ProceduralScale offset is not 3c0");
	auto constexpr UFoliageType_ScaleCurve_Offset = offsetof(UFoliageType, ScaleCurve);
	static_assert(UFoliageType_ScaleCurve_Offset == 0x3c8, "UFoliageType::ScaleCurve offset is not 3c8");
	auto constexpr UFoliageType_ChangeCount_Offset = offsetof(UFoliageType, ChangeCount);
	static_assert(UFoliageType_ChangeCount_Offset == 0x440, "UFoliageType::ChangeCount offset is not 440");
	auto constexpr UFoliageType_boolField444_Offset = offsetof(UFoliageType, boolField444);
	static_assert(UFoliageType_boolField444_Offset == 0x444, "UFoliageType::boolField444 offset is not 444");
	auto constexpr UFoliageType_boolField445_Offset = offsetof(UFoliageType, boolField445);
	static_assert(UFoliageType_boolField445_Offset == 0x445, "UFoliageType::boolField445 offset is not 445");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
