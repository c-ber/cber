#pragma once
#include "UWidget.hpp"
#include "FSlateBrush.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UThrobber // Size: 0x1E0
	: public UWidget // Size: 0x130
{
private:
	typedef UThrobber t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(527); // id32("Class UMG.Throbber")
		return ptr;
	}
	int32_t NumberOfPieces; /* Ofs: 0x130 Size: 0x4 - IntProperty UMG.Throbber.NumberOfPieces */
	uint8_t boolField134;
	uint8_t boolField135;
	uint8_t boolField136;
	uint8_t UnknownData137[0x1];
	ExternalPtr<struct USlateBrushAsset> PieceImage; /* Ofs: 0x138 Size: 0x8 - ObjectProperty UMG.Throbber.PieceImage */
	FSlateBrush Image; /* Ofs: 0x140 Size: 0x90 - StructProperty UMG.Throbber.Image */
	uint8_t UnknownData1D0[0x10];


	inline bool SetNumberOfPieces(t_structHelper inst, int32_t value) { inst.WriteOffset(0x130, value); }
	inline bool bAnimateHorizontally()
	{
		return boolField134& 0x1;
	}
	inline bool SetbAnimateHorizontally(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x134, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAnimateVertically()
	{
		return boolField135& 0x1;
	}
	inline bool SetbAnimateVertically(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x135, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool bAnimateOpacity()
	{
		return boolField136& 0x1;
	}
	inline bool SetbAnimateOpacity(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x136, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetPieceImage(t_structHelper inst, ExternalPtr<struct USlateBrushAsset> value) { inst.WriteOffset(0x138, value); }
	inline bool SetImage(t_structHelper inst, FSlateBrush value) { inst.WriteOffset(0x140, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUThrobber = sizeof(UThrobber); // 480
    static_assert(sizeof(UThrobber) == 0x1E0, "Size of UThrobber is not correct.");
	auto constexpr UThrobber_NumberOfPieces_Offset = offsetof(UThrobber, NumberOfPieces);
	static_assert(UThrobber_NumberOfPieces_Offset == 0x130, "UThrobber::NumberOfPieces offset is not 130");
	auto constexpr UThrobber_boolField134_Offset = offsetof(UThrobber, boolField134);
	static_assert(UThrobber_boolField134_Offset == 0x134, "UThrobber::boolField134 offset is not 134");
	auto constexpr UThrobber_boolField135_Offset = offsetof(UThrobber, boolField135);
	static_assert(UThrobber_boolField135_Offset == 0x135, "UThrobber::boolField135 offset is not 135");
	auto constexpr UThrobber_boolField136_Offset = offsetof(UThrobber, boolField136);
	static_assert(UThrobber_boolField136_Offset == 0x136, "UThrobber::boolField136 offset is not 136");
	auto constexpr UThrobber_PieceImage_Offset = offsetof(UThrobber, PieceImage);
	static_assert(UThrobber_PieceImage_Offset == 0x138, "UThrobber::PieceImage offset is not 138");
	auto constexpr UThrobber_Image_Offset = offsetof(UThrobber, Image);
	static_assert(UThrobber_Image_Offset == 0x140, "UThrobber::Image offset is not 140");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
