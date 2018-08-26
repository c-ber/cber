#pragma once
#include "UActor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslPassAreaRectangle // Size: 0x420
	: public UActor // Size: 0x410
{
private:
	typedef UTslPassAreaRectangle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1470); // id32("Class TslGame.TslPassAreaRectangle")
		return ptr;
	}
//	ExternalPtr<struct UBoxComponent> BoxComponent; /* Ofs: 0x408 Size: 0x8 - ObjectProperty TslGame.TslPassAreaRectangle.BoxComponent */
	float Width; /* Ofs: 0x410 Size: 0x4 - FloatProperty TslGame.TslPassAreaRectangle.Width */
	float Height; /* Ofs: 0x414 Size: 0x4 - FloatProperty TslGame.TslPassAreaRectangle.Height */
	uint8_t UnknownData418[0x8];


//	inline bool SetBoxComponent(t_structHelper inst, ExternalPtr<struct UBoxComponent> value) { inst.WriteOffset(0x408, value); }
	inline bool SetWidth(t_structHelper inst, float value) { inst.WriteOffset(0x410, value); }
	inline bool SetHeight(t_structHelper inst, float value) { inst.WriteOffset(0x414, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslPassAreaRectangle = sizeof(UTslPassAreaRectangle); // 1056
    static_assert(sizeof(UTslPassAreaRectangle) == 0x420, "Size of UTslPassAreaRectangle is not correct.");
//	auto constexpr UTslPassAreaRectangle_BoxComponent_Offset = offsetof(UTslPassAreaRectangle, BoxComponent);
//	static_assert(UTslPassAreaRectangle_BoxComponent_Offset == 0x408, "UTslPassAreaRectangle::BoxComponent offset is not 408");
	auto constexpr UTslPassAreaRectangle_Width_Offset = offsetof(UTslPassAreaRectangle, Width);
	static_assert(UTslPassAreaRectangle_Width_Offset == 0x410, "UTslPassAreaRectangle::Width offset is not 410");
	auto constexpr UTslPassAreaRectangle_Height_Offset = offsetof(UTslPassAreaRectangle, Height);
	static_assert(UTslPassAreaRectangle_Height_Offset == 0x414, "UTslPassAreaRectangle::Height offset is not 414");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
