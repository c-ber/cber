#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionPreviousFrameSwitch // Size: 0xD8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionPreviousFrameSwitch t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(968); // id32("Class Engine.MaterialExpressionPreviousFrameSwitch")
		return ptr;
	}
	FExpressionInput CurrentFrame; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionPreviousFrameSwitch.CurrentFrame */
	FExpressionInput PreviousFrame; /* Ofs: 0xA0 Size: 0x38 - StructProperty Engine.MaterialExpressionPreviousFrameSwitch.PreviousFrame */


	inline bool SetCurrentFrame(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetPreviousFrame(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionPreviousFrameSwitch = sizeof(UMaterialExpressionPreviousFrameSwitch); // 216
    static_assert(sizeof(UMaterialExpressionPreviousFrameSwitch) == 0xD8, "Size of UMaterialExpressionPreviousFrameSwitch is not correct.");
	auto constexpr UMaterialExpressionPreviousFrameSwitch_CurrentFrame_Offset = offsetof(UMaterialExpressionPreviousFrameSwitch, CurrentFrame);
	static_assert(UMaterialExpressionPreviousFrameSwitch_CurrentFrame_Offset == 0x68, "UMaterialExpressionPreviousFrameSwitch::CurrentFrame offset is not 68");
	auto constexpr UMaterialExpressionPreviousFrameSwitch_PreviousFrame_Offset = offsetof(UMaterialExpressionPreviousFrameSwitch, PreviousFrame);
	static_assert(UMaterialExpressionPreviousFrameSwitch_PreviousFrame_Offset == 0xa0, "UMaterialExpressionPreviousFrameSwitch::PreviousFrame offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
