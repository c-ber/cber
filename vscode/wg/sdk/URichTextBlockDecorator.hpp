#pragma once


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) URichTextBlockDecorator // Size: 0x38
	: public UObject // Size: 0x30
{
private:
	typedef URichTextBlockDecorator t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1645); // id32("Class UMG.RichTextBlockDecorator")
		return ptr;
	}
	uint8_t boolField30;
	uint8_t UnknownData31[0x3];
	int32_t RevealedIndex; /* Ofs: 0x34 Size: 0x4 - IntProperty UMG.RichTextBlockDecorator.RevealedIndex */


	inline bool bReveal()
	{
		return boolField30& 0x1;
	}
	inline bool SetbReveal(t_structHelper inst, bool value)
	{
		auto curVal = *reinterpret_cast<uint8_t*>(&value);
		inst.WriteOffset(0x30, (uint8_t)(value ? curVal | (uint8_t)1 : curVal & ~(uint8_t)1));
	}
	inline bool SetRevealedIndex(t_structHelper inst, int32_t value) { inst.WriteOffset(0x34, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofURichTextBlockDecorator = sizeof(URichTextBlockDecorator); // 56
    static_assert(sizeof(URichTextBlockDecorator) == 0x38, "Size of URichTextBlockDecorator is not correct.");
	auto constexpr URichTextBlockDecorator_boolField30_Offset = offsetof(URichTextBlockDecorator, boolField30);
	static_assert(URichTextBlockDecorator_boolField30_Offset == 0x30, "URichTextBlockDecorator::boolField30 offset is not 30");
	auto constexpr URichTextBlockDecorator_RevealedIndex_Offset = offsetof(URichTextBlockDecorator, RevealedIndex);
	static_assert(URichTextBlockDecorator_RevealedIndex_Offset == 0x34, "URichTextBlockDecorator::RevealedIndex offset is not 34");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
