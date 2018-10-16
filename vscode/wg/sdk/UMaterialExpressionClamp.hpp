#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"
#include "EClampMode.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionClamp // Size: 0x120
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionClamp t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(880); // id32("Class Engine.MaterialExpressionClamp")
		return ptr;
	}
	FExpressionInput Input; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionClamp.Input */
	FExpressionInput Min; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionClamp.Min */
	FExpressionInput Max; /* Ofs: 0xD8 Size: 0x38 - StructProperty Engine.MaterialExpressionClamp.Max */
	TEnumAsByte<enum EClampMode> ClampMode; /* Ofs: 0x110 Size: 0x1 - ByteProperty Engine.MaterialExpressionClamp.ClampMode */
	uint8_t UnknownData111[0x3];
	float MinDefault; /* Ofs: 0x114 Size: 0x4 - FloatProperty Engine.MaterialExpressionClamp.MinDefault */
	float MaxDefault; /* Ofs: 0x118 Size: 0x4 - FloatProperty Engine.MaterialExpressionClamp.MaxDefault */
	uint8_t UnknownData11C[0x4];


	inline bool SetInput(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetMin(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
	inline bool SetMax(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xD8, value); }
	inline bool SetClampMode(t_structHelper inst, TEnumAsByte<enum EClampMode> value) { inst.WriteOffset(0x110, value); }
	inline bool SetMinDefault(t_structHelper inst, float value) { inst.WriteOffset(0x114, value); }
	inline bool SetMaxDefault(t_structHelper inst, float value) { inst.WriteOffset(0x118, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionClamp = sizeof(UMaterialExpressionClamp); // 288
    static_assert(sizeof(UMaterialExpressionClamp) == 0x120, "Size of UMaterialExpressionClamp is not correct.");
	auto constexpr UMaterialExpressionClamp_Input_Offset = offsetof(UMaterialExpressionClamp, Input);
	static_assert(UMaterialExpressionClamp_Input_Offset == 0x68, "UMaterialExpressionClamp::Input offset is not 68");
	auto constexpr UMaterialExpressionClamp_Min_Offset = offsetof(UMaterialExpressionClamp, Min);
	static_assert(UMaterialExpressionClamp_Min_Offset == 0xa0, "UMaterialExpressionClamp::Min offset is not a0");
	auto constexpr UMaterialExpressionClamp_Max_Offset = offsetof(UMaterialExpressionClamp, Max);
	static_assert(UMaterialExpressionClamp_Max_Offset == 0xd8, "UMaterialExpressionClamp::Max offset is not d8");
	auto constexpr UMaterialExpressionClamp_ClampMode_Offset = offsetof(UMaterialExpressionClamp, ClampMode);
	static_assert(UMaterialExpressionClamp_ClampMode_Offset == 0x110, "UMaterialExpressionClamp::ClampMode offset is not 110");
	auto constexpr UMaterialExpressionClamp_MinDefault_Offset = offsetof(UMaterialExpressionClamp, MinDefault);
	static_assert(UMaterialExpressionClamp_MinDefault_Offset == 0x114, "UMaterialExpressionClamp::MinDefault offset is not 114");
	auto constexpr UMaterialExpressionClamp_MaxDefault_Offset = offsetof(UMaterialExpressionClamp, MaxDefault);
	static_assert(UMaterialExpressionClamp_MaxDefault_Offset == 0x118, "UMaterialExpressionClamp::MaxDefault offset is not 118");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
