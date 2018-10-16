#pragma once
#include "UTslMotorbikeVehicle.hpp"
#include "FVector.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslMotorbikeVehicle_Sidecar // Size: 0xA70
	: public UTslMotorbikeVehicle // Size: 0xA60
{
private:
	typedef UTslMotorbikeVehicle_Sidecar t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(47); // id32("Class TslGame.TslMotorbikeVehicle_Sidecar")
		return ptr;
	}
//	float Sidecar_COM_Y_Left; /* Ofs: 0xA58 Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle_Sidecar.Sidecar_COM_Y_Left */
//	float Sidecar_COM_Y_Right; /* Ofs: 0xA5C Size: 0x4 - FloatProperty TslGame.TslMotorbikeVehicle_Sidecar.Sidecar_COM_Y_Right */
	FVector Sidecar_StabilizerHigh_StaticCOM; /* Ofs: 0xA60 Size: 0xC - StructProperty TslGame.TslMotorbikeVehicle_Sidecar.Sidecar_StabilizerHigh_StaticCOM */
	uint8_t UnknownDataA6C[0x4];


//	inline bool SetSidecar_COM_Y_Left(t_structHelper inst, float value) { inst.WriteOffset(0xA58, value); }
//	inline bool SetSidecar_COM_Y_Right(t_structHelper inst, float value) { inst.WriteOffset(0xA5C, value); }
	inline bool SetSidecar_StabilizerHigh_StaticCOM(t_structHelper inst, FVector value) { inst.WriteOffset(0xA60, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslMotorbikeVehicle_Sidecar = sizeof(UTslMotorbikeVehicle_Sidecar); // 2672
    static_assert(sizeof(UTslMotorbikeVehicle_Sidecar) == 0xA70, "Size of UTslMotorbikeVehicle_Sidecar is not correct.");
//	auto constexpr UTslMotorbikeVehicle_Sidecar_Sidecar_COM_Y_Left_Offset = offsetof(UTslMotorbikeVehicle_Sidecar, Sidecar_COM_Y_Left);
//	static_assert(UTslMotorbikeVehicle_Sidecar_Sidecar_COM_Y_Left_Offset == 0xa58, "UTslMotorbikeVehicle_Sidecar::Sidecar_COM_Y_Left offset is not a58");
//	auto constexpr UTslMotorbikeVehicle_Sidecar_Sidecar_COM_Y_Right_Offset = offsetof(UTslMotorbikeVehicle_Sidecar, Sidecar_COM_Y_Right);
//	static_assert(UTslMotorbikeVehicle_Sidecar_Sidecar_COM_Y_Right_Offset == 0xa5c, "UTslMotorbikeVehicle_Sidecar::Sidecar_COM_Y_Right offset is not a5c");
	auto constexpr UTslMotorbikeVehicle_Sidecar_Sidecar_StabilizerHigh_StaticCOM_Offset = offsetof(UTslMotorbikeVehicle_Sidecar, Sidecar_StabilizerHigh_StaticCOM);
	static_assert(UTslMotorbikeVehicle_Sidecar_Sidecar_StabilizerHigh_StaticCOM_Offset == 0xa60, "UTslMotorbikeVehicle_Sidecar::Sidecar_StabilizerHigh_StaticCOM offset is not a60");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
