#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UCurveEdPresetCurve // Size: 0x30
	: public UObject // Size: 0x30
{
private:
	typedef UCurveEdPresetCurve t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(708); // id32("Class Engine.CurveEdPresetCurve")
		return ptr;
	}
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUCurveEdPresetCurve = sizeof(UCurveEdPresetCurve); // 48
    static_assert(sizeof(UCurveEdPresetCurve) == 0x30, "Size of UCurveEdPresetCurve is not correct.");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
