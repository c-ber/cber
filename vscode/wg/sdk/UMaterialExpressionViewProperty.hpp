#pragma once
#include "UMaterialExpression.hpp"
#include "EMaterialExposedViewProperty.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UMaterialExpressionViewProperty // Size: 0x70
	: public UMaterialExpression // Size: 0x68
{
private:
	typedef UMaterialExpressionViewProperty t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1014); // id32("Class Engine.MaterialExpressionViewProperty")
		return ptr;
	}
	TEnumAsByte<enum EMaterialExposedViewProperty> Property; /* Ofs: 0x68 Size: 0x1 - ByteProperty Engine.MaterialExpressionViewProperty.Property */
	uint8_t UnknownData69[0x7];


	inline bool SetProperty(t_structHelper inst, TEnumAsByte<enum EMaterialExposedViewProperty> value) { inst.WriteOffset(0x68, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUMaterialExpressionViewProperty = sizeof(UMaterialExpressionViewProperty); // 112
    static_assert(sizeof(UMaterialExpressionViewProperty) == 0x70, "Size of UMaterialExpressionViewProperty is not correct.");
	auto constexpr UMaterialExpressionViewProperty_Property_Offset = offsetof(UMaterialExpressionViewProperty, Property);
	static_assert(UMaterialExpressionViewProperty_Property_Offset == 0x68, "UMaterialExpressionViewProperty::Property offset is not 68");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
