#pragma once
#include "UBodySetup.hpp"
#include "FAggregateGeometry2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBodySetup2D // Size: 0x3F0
	: public UBodySetup // Size: 0x3C0
{
private:
	typedef UBodySetup2D t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(677); // id32("Class Engine.BodySetup2D")
		return ptr;
	}
//	FAggregateGeometry2D AggGeom2D; /* Ofs: 0x3B8 Size: 0x30 - StructProperty Engine.BodySetup2D.AggGeom2D */
	uint8_t UnknownData3C0[0x30];


//	inline bool SetAggGeom2D(t_structHelper inst, FAggregateGeometry2D value) { inst.WriteOffset(0x3B8, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBodySetup2D = sizeof(UBodySetup2D); // 1008
    static_assert(sizeof(UBodySetup2D) == 0x3F0, "Size of UBodySetup2D is not correct.");
//	auto constexpr UBodySetup2D_AggGeom2D_Offset = offsetof(UBodySetup2D, AggGeom2D);
//	static_assert(UBodySetup2D_AggGeom2D_Offset == 0x3b8, "UBodySetup2D::AggGeom2D offset is not 3b8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
