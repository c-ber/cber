#pragma once
#include "UBrush.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UBrushShape // Size: 0x440
	: public UBrush // Size: 0x440
{
private:
	typedef UBrushShape t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1706); // id32("Class Engine.BrushShape")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUBrushShape = sizeof(UBrushShape); // 1088
    static_assert(sizeof(UBrushShape) == 0x440, "Size of UBrushShape is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
