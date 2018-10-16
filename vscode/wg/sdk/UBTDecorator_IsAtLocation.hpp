#pragma once
#include "UBTDecorator_BlackboardBase.hpp"
#include "FAIDataProviderFloatValue.hpp"
#include "FAIDistanceType.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBTDecorator_IsAtLocation // Size: 0xD8
	: public UBTDecorator_BlackboardBase // Size: 0x98
{
private:
	typedef UBTDecorator_IsAtLocation t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(573); // id32("Class AIModule.BTDecorator_IsAtLocation")
		return ptr;
	}
	float AcceptableRadius; /* Ofs: 0x98 Size: 0x4 - FloatProperty AIModule.BTDecorator_IsAtLocation.AcceptableRadius */
	uint8_t UnknownData9C[0x4];
	FAIDataProviderFloatValue ParametrizedAcceptableRadius; /* Ofs: 0xA0 Size: 0x30 - StructProperty AIModule.BTDecorator_IsAtLocation.ParametrizedAcceptableRadius */
	TEnumAsByte<enum FAIDistanceType> GeometricDistanceType; /* Ofs: 0xD0 Size: 0x1 - EnumProperty AIModule.BTDecorator_IsAtLocation.GeometricDistanceType */
	uint8_t UnknownDataD1[0x3];
	uint8_t boolFieldD4;
	uint8_t UnknownDataD5[0x3];


	inline bool SetAcceptableRadius(t_structHelper inst, float value) { inst.WriteOffset(0x98, value); }
	inline bool SetParametrizedAcceptableRadius(t_structHelper inst, FAIDataProviderFloatValue value) { inst.WriteOffset(0xA0, value); }
	inline bool SetGeometricDistanceType(t_structHelper inst, TEnumAsByte<enum FAIDistanceType> value) { inst.WriteOffset(0xD0, value); }
	inline bool bUseParametrizedRadius()
	{
		return boolFieldD4& 0x1;
	}
	inline bool SetbUseParametrizedRadius(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD4, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bUseNavAgentGoalLocation()
	{
		return boolFieldD4& 0x2;
	}
	inline bool SetbUseNavAgentGoalLocation(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD4, (uint8_t)(value ? curVal | (uint8_t)2 : curVal & ~(uint8_t)2));
	}
	inline bool bPathFindingBasedTest()
	{
		return boolFieldD4& 0x4;
	}
	inline bool SetbPathFindingBasedTest(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0xD4, (uint8_t)(value ? curVal | (uint8_t)4 : curVal & ~(uint8_t)4));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBTDecorator_IsAtLocation = sizeof(UBTDecorator_IsAtLocation); // 216
    static_assert(sizeof(UBTDecorator_IsAtLocation) == 0xD8, "Size of UBTDecorator_IsAtLocation is not correct.");
	auto constexpr UBTDecorator_IsAtLocation_AcceptableRadius_Offset = offsetof(UBTDecorator_IsAtLocation, AcceptableRadius);
	static_assert(UBTDecorator_IsAtLocation_AcceptableRadius_Offset == 0x98, "UBTDecorator_IsAtLocation::AcceptableRadius offset is not 98");
	auto constexpr UBTDecorator_IsAtLocation_ParametrizedAcceptableRadius_Offset = offsetof(UBTDecorator_IsAtLocation, ParametrizedAcceptableRadius);
	static_assert(UBTDecorator_IsAtLocation_ParametrizedAcceptableRadius_Offset == 0xa0, "UBTDecorator_IsAtLocation::ParametrizedAcceptableRadius offset is not a0");
	auto constexpr UBTDecorator_IsAtLocation_GeometricDistanceType_Offset = offsetof(UBTDecorator_IsAtLocation, GeometricDistanceType);
	static_assert(UBTDecorator_IsAtLocation_GeometricDistanceType_Offset == 0xd0, "UBTDecorator_IsAtLocation::GeometricDistanceType offset is not d0");
	auto constexpr UBTDecorator_IsAtLocation_boolFieldD4_Offset = offsetof(UBTDecorator_IsAtLocation, boolFieldD4);
	static_assert(UBTDecorator_IsAtLocation_boolFieldD4_Offset == 0xd4, "UBTDecorator_IsAtLocation::boolFieldD4 offset is not d4");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
