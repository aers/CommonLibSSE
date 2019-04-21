#pragma once

#include "skse64/GameExtraData.h"  // ::InventoryEntryData::EquipData

#include "RE/BSTList.h"  // BSSimpleList
#include "RE/FormTypes.h"  // TESForm, TESObjectREFR
#include "RE/Memory.h"  // TES_HEAP_REDEFINE_NEW


namespace RE
{
	class BaseExtraList;
	class InventoryEntryData;

	class InventoryChanges
	{
	public:
        class IItemChangeVisitor
        {
        public:
            enum class ReturnType : UInt32
            {
                kBreak,
                kContinue
            };

            virtual ~IItemChangeVisitor() {}

            virtual ReturnType  Visit(InventoryEntryData * a_entry) = 0;                                
            virtual bool        Unk_02(UInt32 a_arg1, UInt32 a_arg2) { return true; }                   
            virtual ReturnType  Unk_03(InventoryEntryData * a_entry, UInt32 a_arg2, bool &a_result) { a_result = true; return Visit(a_entry); }  
        };

		explicit InventoryChanges(TESObjectREFR* a_ref);

		InventoryEntryData*	FindItemEntry(TESForm* a_item);
		InventoryEntryData*	CreateEquipEntryData(TESForm* a_item);
		void				GetEquipItemData(::InventoryEntryData::EquipData& a_stateOut, TESForm* a_item, SInt32 a_itemID);
		void				SetUniqueID(BaseExtraList* a_itemList, TESForm* a_oldForm, TESForm* a_newForm);
		void				TransferItemUID(BaseExtraList* a_extraList, TESForm* a_oldForm, TESForm* a_newForm, UInt32 a_arg4);
		void				InitContainer();
		void				GenerateLeveledListChanges();
		void				SendContainerChangedEvent(BaseExtraList* a_itemExtraList, TESObjectREFR* a_fromRefr, TESForm* a_item, SInt32 a_count);

        void                ExecuteVisitor(IItemChangeVisitor * a_visitor);
        void                ExecuteVisitorOnWorn(IItemChangeVisitor * a_visitor);

		TES_HEAP_REDEFINE_NEW();

		BSSimpleList<InventoryEntryData*>*	entryList;		// 00
		TESObjectREFR*						owner;			// 08
		float								totalWeight;	// 10
		float								armorWeight;	// 14
		bool								changed;		// 18
		UInt8								unk19;			// 19
		UInt8								unk1A;			// 1A
		UInt8								unk1B;			// 1B
		UInt32								unk1C;			// 1C

	private:
		InventoryChanges* Ctor_Internal(TESObjectREFR* a_ref);
	};
	STATIC_ASSERT(sizeof(InventoryChanges) == 0x20);
}
