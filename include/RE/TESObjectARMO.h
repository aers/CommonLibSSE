#pragma once

#include "RE/BGSBipedObjectForm.h"  // BGSBipedObjectForm
#include "RE/BGSBlockBashData.h"  // BGSBlockBashData
#include "RE/BGSDestructibleObjectForm.h"  // BGSDestructibleObjectForm
#include "RE/BGSEquipType.h"  // BGSEquipType
#include "RE/BGSKeywordForm.h"  // BGSKeywordForm
#include "RE/BGSPickupPutdownSounds.h"  // BGSPickupPutdownSounds
#include "RE/BSTArray.h"  // BSTArray
#include "RE/TESBipedModelForm.h"  // TESBipedModelForm
#include "RE/TESBoundObject.h"  // TESBoundObject
#include "RE/TESDescription.h"  // TESDescription
#include "RE/TESEnchantableForm.h"  // TESEnchantableForm
#include "RE/TESFullName.h"  // TESFullName
#include "RE/TESRaceForm.h"  // TESRaceForm
#include "RE/TESValueForm.h"  // TESValueForm
#include "RE/TESWeightForm.h"  // TESWeightForm


namespace RE
{
    class ActorWeightModel;

	class TESObjectARMO :
		public TESBoundObject,				// 000
		public TESFullName,					// 030
		public TESRaceForm,					// 040
		public TESEnchantableForm,			// 050
		public TESValueForm,				// 068
		public TESWeightForm,				// 078
		public BGSDestructibleObjectForm,	// 088
		public BGSPickupPutdownSounds,		// 098
		public TESBipedModelForm,			// 0B0
		public BGSEquipType,				// 1A0
		public BGSBipedObjectForm,			// 1B0
		public BGSBlockBashData,			// 1C0
		public BGSKeywordForm,				// 1D8
		public TESDescription				// 1F0
	{
	public:
		enum { kTypeID = FormType::Armor };


		struct RecordFlags
		{
			enum RecordFlag : UInt32
			{
				kNonPlayable = 1 << 2,
				kDeleted = 1 << 5,
				kShield = 1 << 6,
				kIgnored = 1 << 12
			};
		};


		// override (TESBoundObject)
		virtual void	InitDefaults() override;						// 04
		virtual bool	LoadForm(TESFile* a_mod) override;				// 06
		virtual void	SaveBuffer(BGSSaveFormBuffer* a_buf) override;	// 0E
		virtual void	LoadBuffer(BGSLoadFormBuffer* a_buf) override;	// 0F
		virtual void	InitItem() override;							// 13
		virtual void	CopyFrom(TESForm* a_srcForm) override;			// 2F

		float			GetArmorRating();
        bool            ApplyArmorAddon(TESRace * a_race, ActorWeightModel * a_model, bool a_isFemale);
        bool            TestBodyPartByIndex(UInt32 a_index);


		// members
		UInt32						armorRating;	// 200 - DNAM - CK value * 100 as a UInt32
		UInt32						pad204;			// 204
		BSTArray<TESObjectARMA*>	armature;		// 208
		TESObjectARMO*				templateArmor;	// 220 - TNAM
	};
	STATIC_ASSERT(sizeof(TESObjectARMO) == 0x228);
	//virtual UInt64 Unk_14(void) override; - { if (templateArmor) this = templateArmor; return sub_1401947E0(this, -1); } - InstantiateTemplate()?
}
