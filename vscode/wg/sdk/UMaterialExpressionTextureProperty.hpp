#pragma once
#include "UMaterialExpression.hpp"
#include "FExpressionInput.hpp"
#include "EMaterialExposedTextureProperty.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionTextureProperty // Size: 0xA8
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionTextureProperty t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1005); // id32("Class Engine.MaterialExpressionTextureProperty")
		return ptr;
	}
	FExpressionInput TextureObject; /* Ofs: 0x68 Size: 0x38 - StructProperty Engine.MaterialExpressionTextureProperty.TextureObject */
	TEnumAsByte<enum EMaterialExposedTextureProperty> Property; /* Ofs: 0xA0 Size: 0x1 - ByteProperty Engine.MaterialExpressionTextureProperty.Property */
	uint8_t UnknownDataA1[0x7];


	inline bool SetTextureObject(t_structHelper inst, FExpressionInput value) { inst.WriteOffset(0x68, value); }
	inline bool SetProperty(t_structHelper inst, TEnumAsByte<enum EMaterialExposedTextureProperty> value) { inst.WriteOffset(0xA0, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionTextureProperty = sizeof(UMaterialExpressionTextureProperty); // 168
    static_assert(sizeof(UMaterialExpressionTextureProperty) == 0xA8, "Size of UMaterialExpressionTextureProperty is not correct.");
	auto constexpr UMaterialExpressionTextureProperty_TextureObject_Offset = offsetof(UMaterialExpressionTextureProperty, TextureObject);
	static_assert(UMaterialExpressionTextureProperty_TextureObject_Offset == 0x68, "UMaterialExpressionTextureProperty::TextureObject offset is not 68");
	auto constexpr UMaterialExpressionTextureProperty_Property_Offset = offsetof(UMaterialExpressionTextureProperty, Property);
	static_assert(UMaterialExpressionTextureProperty_Property_Offset == 0xa0, "UMaterialExpressionTextureProperty::Property offset is not a0");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
