#pragma once

#include "RE/BSExtraData.h"
#include "RE/BSTList.h"
#include "RE/ExtraDataTypes.h"


namespace RE
{
	class TESObjectREFR;


	class ExtraLitWaterRefs : public BSExtraData
	{
	public:
		inline static constexpr auto RTTI = RTTI_ExtraLitWaterRefs;


		enum { kExtraTypeID = ExtraDataType::kLitWaterRefs };


		virtual ~ExtraLitWaterRefs();													// 00

		// override (BSExtraData)
		virtual ExtraDataType	GetType() const override;								// 01 - { return kLitWaterRefs; }
		virtual bool			IsNotEqual(const BSExtraData* a_rhs) const override;	// 02 - { return refs != a_rhs->refs; }


		// members
		BSSimpleList<TESObjectREFR*> refs;	// 10
	};
	STATIC_ASSERT(sizeof(ExtraLitWaterRefs) == 0x20);
}
