#pragma once
#include "USlateWidgetStyleContainerBase.hpp"
#include "FTslChatStyle.hpp"


#ifdef _MSC_VER
	#pragma pack(push, 1)
#endif

namespace PUBGSDK {

struct alignas(1) UTslChatWidgetStyle // Size: 0x9C0
	: public USlateWidgetStyleContainerBase // Size: 0x38
{
private:
	typedef UTslChatWidgetStyle t_struct;
	typedef ExternalPtr<t_struct> t_structHelper;
public:
	static ExternalPtr<struct UClass> StaticClass()
	{
		static ExternalPtr<struct UClass> ptr;
		if(!ptr) ptr = UObject::FindClassFast(1348); // id32("Class TslGame.TslChatWidgetStyle")
		return ptr;
	}
	FTslChatStyle ChatStyle; /* Ofs: 0x38 Size: 0x988 - StructProperty TslGame.TslChatWidgetStyle.ChatStyle */


	inline bool SetChatStyle(t_structHelper inst, FTslChatStyle value) { inst.WriteOffset(0x38, value); }
};
#ifdef VALIDATE_SDK
namespace Validation{

    auto constexpr sizeofUTslChatWidgetStyle = sizeof(UTslChatWidgetStyle); // 2496
    static_assert(sizeof(UTslChatWidgetStyle) == 0x9C0, "Size of UTslChatWidgetStyle is not correct.");
	auto constexpr UTslChatWidgetStyle_ChatStyle_Offset = offsetof(UTslChatWidgetStyle, ChatStyle);
	static_assert(UTslChatWidgetStyle_ChatStyle_Offset == 0x38, "UTslChatWidgetStyle::ChatStyle offset is not 38");
}
#endif
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
