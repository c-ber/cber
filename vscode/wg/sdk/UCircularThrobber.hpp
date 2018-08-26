#pragma once
#include "UWidget.hpp"
#include "FSlateBrush.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCircularThrobber // Size: 0x1F0
	: public UWidget // Size: 0x130
{
private:
	typedef UCircularThrobber t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(484); // id32("Class UMG.CircularThrobber")
		return ptr;
	}
	int32_t NumberOfPieces; /* Ofs: 0x130 Size: 0x4 - IntProperty UMG.CircularThrobber.NumberOfPieces */
	float Period; /* Ofs: 0x134 Size: 0x4 - FloatProperty UMG.CircularThrobber.Period */
	float Radius; /* Ofs: 0x138 Size: 0x4 - FloatProperty UMG.CircularThrobber.Radius */
	uint8_t UnknownData13C[0x4];
	ExternalPtr<struct USlateBrushAsset> PieceImage; /* Ofs: 0x140 Size: 0x8 - ObjectProperty UMG.CircularThrobber.PieceImage */
	FSlateBrush Image; /* Ofs: 0x148 Size: 0x90 - StructProperty UMG.CircularThrobber.Image */
	uint8_t boolField1D8;
	uint8_t UnknownData1D9[0x17];


	inline bool SetNumberOfPieces(t_structHelper inst, int32_t value) { inst.WriteOffset(0x130, value); }
	inline bool SetPeriod(t_structHelper inst, float value) { inst.WriteOffset(0x134, value); }
	inline bool SetRadius(t_structHelper inst, float value) { inst.WriteOffset(0x138, value); }
	inline bool SetPieceImage(t_structHelper inst, ExternalPtr<struct USlateBrushAsset> value) { inst.WriteOffset(0x140, value); }
	inline bool SetImage(t_structHelper inst, FSlateBrush value) { inst.WriteOffset(0x148, value); }
	inline bool bEnableRadius()
	{
		return boolField1D8& 0x1;
	}
	inline bool SetbEnableRadius(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x1D8, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCircularThrobber = sizeof(UCircularThrobber); // 496
    static_assert(sizeof(UCircularThrobber) == 0x1F0, "Size of UCircularThrobber is not correct.");
	auto constexpr UCircularThrobber_NumberOfPieces_Offset = offsetof(UCircularThrobber, NumberOfPieces);
	static_assert(UCircularThrobber_NumberOfPieces_Offset == 0x130, "UCircularThrobber::NumberOfPieces offset is not 130");
	auto constexpr UCircularThrobber_Period_Offset = offsetof(UCircularThrobber, Period);
	static_assert(UCircularThrobber_Period_Offset == 0x134, "UCircularThrobber::Period offset is not 134");
	auto constexpr UCircularThrobber_Radius_Offset = offsetof(UCircularThrobber, Radius);
	static_assert(UCircularThrobber_Radius_Offset == 0x138, "UCircularThrobber::Radius offset is not 138");
	auto constexpr UCircularThrobber_PieceImage_Offset = offsetof(UCircularThrobber, PieceImage);
	static_assert(UCircularThrobber_PieceImage_Offset == 0x140, "UCircularThrobber::PieceImage offset is not 140");
	auto constexpr UCircularThrobber_Image_Offset = offsetof(UCircularThrobber, Image);
	static_assert(UCircularThrobber_Image_Offset == 0x148, "UCircularThrobber::Image offset is not 148");
	auto constexpr UCircularThrobber_boolField1D8_Offset = offsetof(UCircularThrobber, boolField1D8);
	static_assert(UCircularThrobber_boolField1D8_Offset == 0x1d8, "UCircularThrobber::boolField1D8 offset is not 1d8");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
