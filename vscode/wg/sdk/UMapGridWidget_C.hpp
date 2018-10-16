#pragma once
#include "UMapGridWidget.hpp"
#include "FVector2D.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMapGridWidget_C // Size: 0x8C8
	: public UMapGridWidget // Size: 0x8B0
{
private:
	typedef UMapGridWidget_C t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(67947); // id32("WidgetBlueprintGeneratedClass MapGridWidget.MapGridWidget_C")
		return ptr;
	}
	FVector2D StartPointUC; /* Ofs: 0x8B0 Size: 0x8 - StructProperty MapGridWidget.MapGridWidget_C.StartPointUC */
	FVector2D EndPointUC; /* Ofs: 0x8B8 Size: 0x8 - StructProperty MapGridWidget.MapGridWidget_C.EndPointUC */
	FVector2D StandardVector; /* Ofs: 0x8C0 Size: 0x8 - StructProperty MapGridWidget.MapGridWidget_C.StandardVector */


	inline bool SetStartPointUC(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x8B0, value); }
	inline bool SetEndPointUC(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x8B8, value); }
	inline bool SetStandardVector(t_structHelper inst, FVector2D value) { inst.WriteOffset(0x8C0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMapGridWidget_C = sizeof(UMapGridWidget_C); // 2248
    static_assert(sizeof(UMapGridWidget_C) == 0x8C8, "Size of UMapGridWidget_C is not correct.");
	auto constexpr UMapGridWidget_C_StartPointUC_Offset = offsetof(UMapGridWidget_C, StartPointUC);
	static_assert(UMapGridWidget_C_StartPointUC_Offset == 0x8b0, "UMapGridWidget_C::StartPointUC offset is not 8b0");
	auto constexpr UMapGridWidget_C_EndPointUC_Offset = offsetof(UMapGridWidget_C, EndPointUC);
	static_assert(UMapGridWidget_C_EndPointUC_Offset == 0x8b8, "UMapGridWidget_C::EndPointUC offset is not 8b8");
	auto constexpr UMapGridWidget_C_StandardVector_Offset = offsetof(UMapGridWidget_C, StandardVector);
	static_assert(UMapGridWidget_C_StandardVector_Offset == 0x8c0, "UMapGridWidget_C::StandardVector offset is not 8c0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
