#pragma once

#include "RE/BSExtraData.h"  // BSExtraData
#include "RE/BSTArray.h"  // BSTArray
#include "RE/FormTypes.h"


namespace RE
{
	class ExtraFactionChanges : public BSExtraData
	{
	public:
		enum { kExtraTypeID = ExtraDataType::kFactionChanges };


		virtual ~ExtraFactionChanges();					// 00

		// override(BSExtraData)
		virtual ExtraDataType GetType() const override;	// 01 - { return kFactionChanges; }


		struct FactionInfo
		{
			TESFaction* faction;	// 00
			SInt8		rank;		// 08
			UInt8		pad9;		// 09
			UInt16		padA;		// 0A
			UInt32		padC;		// 0C
		};
		STATIC_ASSERT(sizeof(FactionInfo) == 0x10);


		BSTArray<FactionInfo>	factions;	// 10
		void*					unk28;		// 28
		UInt8					unk30;		// 30 - bool?
		UInt8					pad31;		// 31
		UInt16					pad32;		// 32
		UInt32					pad34;		// 34
	};
	STATIC_ASSERT(sizeof(ExtraFactionChanges) == 0x38);
}
