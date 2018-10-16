#pragma once
#include "FIntPoint.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBookMark2D // Size: 0x40
	: public UObject // Size: 0x30
{
private:
	typedef UBookMark2D t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(682); // id32("Class Engine.BookMark2D")
		return ptr;
	}
	float Zoom2D; /* Ofs: 0x30 Size: 0x4 - FloatProperty Engine.BookMark2D.Zoom2D */
	FIntPoint Location; /* Ofs: 0x34 Size: 0x8 - StructProperty Engine.BookMark2D.Location */
	uint8_t UnknownData3C[0x4];


	inline bool SetZoom2D(t_structHelper inst, float value) { inst.WriteOffset(0x30, value); }
	inline bool SetLocation(t_structHelper inst, FIntPoint value) { inst.WriteOffset(0x34, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBookMark2D = sizeof(UBookMark2D); // 64
    static_assert(sizeof(UBookMark2D) == 0x40, "Size of UBookMark2D is not correct.");
	auto constexpr UBookMark2D_Zoom2D_Offset = offsetof(UBookMark2D, Zoom2D);
	static_assert(UBookMark2D_Zoom2D_Offset == 0x30, "UBookMark2D::Zoom2D offset is not 30");
	auto constexpr UBookMark2D_Location_Offset = offsetof(UBookMark2D, Location);
	static_assert(UBookMark2D_Location_Offset == 0x34, "UBookMark2D::Location offset is not 34");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
