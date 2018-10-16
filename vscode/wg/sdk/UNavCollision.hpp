#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UNavCollision // Size: 0x118
	: public UObject // Size: 0x30
{
private:
	typedef UNavCollision t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1034); // id32("Class Engine.NavCollision")
		return ptr;
	}
	uint8_t UnknownData30[0x50];
	TArray<struct FNavCollisionCylinder> CylinderCollision; /* Ofs: 0x80 Size: 0x10 - ArrayProperty Engine.NavCollision.CylinderCollision */
	TArray<struct FNavCollisionBox> BoxCollision; /* Ofs: 0x90 Size: 0x10 - ArrayProperty Engine.NavCollision.BoxCollision */
	ExternalPtr<struct UClass> AreaClass; /* Ofs: 0xA0 Size: 0x8 - ClassProperty Engine.NavCollision.AreaClass */
	uint8_t boolFieldA8;
	uint8_t UnknownDataA9[0x6F];


	inline bool SetCylinderCollision(t_structHelper inst, TArray<struct FNavCollisionCylinder> value) { inst.WriteOffset(0x80, value); }
	inline bool SetBoxCollision(t_structHelper inst, TArray<struct FNavCollisionBox> value) { inst.WriteOffset(0x90, value); }
	inline bool SetAreaClass(t_structHelper inst, ExternalPtr<struct UClass> value) { inst.WriteOffset(0xA0, value); }
	inline bool bIsDynamicObstacle()
	{
		return boolFieldA8& 0x1;
	}
	inline bool SetbIsDynamicObstacle(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bGatherConvexGeometry()
	{
		return boolFieldA8& 0x2;
	}
	inline bool SetbGatherConvexGeometry(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xA8, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUNavCollision = sizeof(UNavCollision); // 280
    static_assert(sizeof(UNavCollision) == 0x118, "Size of UNavCollision is not correct.");
	auto constexpr UNavCollision_CylinderCollision_Offset = offsetof(UNavCollision, CylinderCollision);
	static_assert(UNavCollision_CylinderCollision_Offset == 0x80, "UNavCollision::CylinderCollision offset is not 80");
	auto constexpr UNavCollision_BoxCollision_Offset = offsetof(UNavCollision, BoxCollision);
	static_assert(UNavCollision_BoxCollision_Offset == 0x90, "UNavCollision::BoxCollision offset is not 90");
	auto constexpr UNavCollision_AreaClass_Offset = offsetof(UNavCollision, AreaClass);
	static_assert(UNavCollision_AreaClass_Offset == 0xa0, "UNavCollision::AreaClass offset is not a0");
	auto constexpr UNavCollision_boolFieldA8_Offset = offsetof(UNavCollision, boolFieldA8);
	static_assert(UNavCollision_boolFieldA8_Offset == 0xa8, "UNavCollision::boolFieldA8 offset is not a8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
