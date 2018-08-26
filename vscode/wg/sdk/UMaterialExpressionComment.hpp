#pragma once
#include "UMaterialExpression.hpp"
#include "FLinearColor.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionComment // Size: 0x90
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionComment t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(882); // id32("Class Engine.MaterialExpressionComment")
		return ptr;
	}
	int32_t SizeX; /* Ofs: 0x68 Size: 0x4 - IntProperty Engine.MaterialExpressionComment.SizeX */
	int32_t SizeY; /* Ofs: 0x6C Size: 0x4 - IntProperty Engine.MaterialExpressionComment.SizeY */
	FString Text; /* Ofs: 0x70 Size: 0x10 - StrProperty Engine.MaterialExpressionComment.Text */
	FLinearColor CommentColor; /* Ofs: 0x80 Size: 0x10 - StructProperty Engine.MaterialExpressionComment.CommentColor */


	inline bool SetSizeX(t_structHelper inst, int32_t value) { inst.WriteOffset(0x68, value); }
	inline bool SetSizeY(t_structHelper inst, int32_t value) { inst.WriteOffset(0x6C, value); }
	inline bool SetText(t_structHelper inst, FString value) { inst.WriteOffset(0x70, value); }
	inline bool SetCommentColor(t_structHelper inst, FLinearColor value) { inst.WriteOffset(0x80, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionComment = sizeof(UMaterialExpressionComment); // 144
    static_assert(sizeof(UMaterialExpressionComment) == 0x90, "Size of UMaterialExpressionComment is not correct.");
	auto constexpr UMaterialExpressionComment_SizeX_Offset = offsetof(UMaterialExpressionComment, SizeX);
	static_assert(UMaterialExpressionComment_SizeX_Offset == 0x68, "UMaterialExpressionComment::SizeX offset is not 68");
	auto constexpr UMaterialExpressionComment_SizeY_Offset = offsetof(UMaterialExpressionComment, SizeY);
	static_assert(UMaterialExpressionComment_SizeY_Offset == 0x6c, "UMaterialExpressionComment::SizeY offset is not 6c");
	auto constexpr UMaterialExpressionComment_Text_Offset = offsetof(UMaterialExpressionComment, Text);
	static_assert(UMaterialExpressionComment_Text_Offset == 0x70, "UMaterialExpressionComment::Text offset is not 70");
	auto constexpr UMaterialExpressionComment_CommentColor_Offset = offsetof(UMaterialExpressionComment, CommentColor);
	static_assert(UMaterialExpressionComment_CommentColor_Offset == 0x80, "UMaterialExpressionComment::CommentColor offset is not 80");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
