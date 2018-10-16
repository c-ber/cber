#pragma once
#include "UMaterialExpression.hpp"
#include "ESpeedTreeGeometryType.hpp"
#include "ESpeedTreeWindType.hpp"
#include "ESpeedTreeLODType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionSpeedTree // Size: 0x78
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionSpeedTree t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(984); // id32("Class Engine.MaterialExpressionSpeedTree")
		return ptr;
	}
	TEnumAsByte<enum ESpeedTreeGeometryType> GeometryType; /* Ofs: 0x68 Size: 0x1 - ByteProperty Engine.MaterialExpressionSpeedTree.GeometryType */
	TEnumAsByte<enum ESpeedTreeWindType> WindType; /* Ofs: 0x69 Size: 0x1 - ByteProperty Engine.MaterialExpressionSpeedTree.WindType */
	TEnumAsByte<enum ESpeedTreeLODType> LODType; /* Ofs: 0x6A Size: 0x1 - ByteProperty Engine.MaterialExpressionSpeedTree.LODType */
	uint8_t UnknownData6B[0x1];
	float BillboardThreshold; /* Ofs: 0x6C Size: 0x4 - FloatProperty Engine.MaterialExpressionSpeedTree.BillboardThreshold */
	uint8_t boolField70;
	uint8_t UnknownData71[0x7];


	inline bool SetGeometryType(t_structHelper inst, TEnumAsByte<enum ESpeedTreeGeometryType> value) { inst.WriteOffset(0x68, value); }
	inline bool SetWindType(t_structHelper inst, TEnumAsByte<enum ESpeedTreeWindType> value) { inst.WriteOffset(0x69, value); }
	inline bool SetLODType(t_structHelper inst, TEnumAsByte<enum ESpeedTreeLODType> value) { inst.WriteOffset(0x6A, value); }
	inline bool SetBillboardThreshold(t_structHelper inst, float value) { inst.WriteOffset(0x6C, value); }
	inline bool bAccurateWindVelocities()
	{
		return boolField70& 0x1;
	}
	inline bool SetbAccurateWindVelocities(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x70, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionSpeedTree = sizeof(UMaterialExpressionSpeedTree); // 120
    static_assert(sizeof(UMaterialExpressionSpeedTree) == 0x78, "Size of UMaterialExpressionSpeedTree is not correct.");
	auto constexpr UMaterialExpressionSpeedTree_GeometryType_Offset = offsetof(UMaterialExpressionSpeedTree, GeometryType);
	static_assert(UMaterialExpressionSpeedTree_GeometryType_Offset == 0x68, "UMaterialExpressionSpeedTree::GeometryType offset is not 68");
	auto constexpr UMaterialExpressionSpeedTree_WindType_Offset = offsetof(UMaterialExpressionSpeedTree, WindType);
	static_assert(UMaterialExpressionSpeedTree_WindType_Offset == 0x69, "UMaterialExpressionSpeedTree::WindType offset is not 69");
	auto constexpr UMaterialExpressionSpeedTree_LODType_Offset = offsetof(UMaterialExpressionSpeedTree, LODType);
	static_assert(UMaterialExpressionSpeedTree_LODType_Offset == 0x6a, "UMaterialExpressionSpeedTree::LODType offset is not 6a");
	auto constexpr UMaterialExpressionSpeedTree_BillboardThreshold_Offset = offsetof(UMaterialExpressionSpeedTree, BillboardThreshold);
	static_assert(UMaterialExpressionSpeedTree_BillboardThreshold_Offset == 0x6c, "UMaterialExpressionSpeedTree::BillboardThreshold offset is not 6c");
	auto constexpr UMaterialExpressionSpeedTree_boolField70_Offset = offsetof(UMaterialExpressionSpeedTree, boolField70);
	static_assert(UMaterialExpressionSpeedTree_boolField70_Offset == 0x70, "UMaterialExpressionSpeedTree::boolField70 offset is not 70");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
