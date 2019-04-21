#pragma once

#include <cstdint>  // uintptr_t


namespace RE
{
	namespace Offset
	{
		namespace ActivateHandler
		{
			// ??_7ActivateHandler@@6B@
			constexpr std::uintptr_t Vtbl = 0x0166F298;	// 1_5_73
		}


		namespace ActiveEffect
		{
			// E8 ? ? ? ? 48 85 DB 75 C9
			constexpr std::uintptr_t Dispell = 0x0053E380;	// 1_5_73
		}


		namespace Actor
		{
			// E8 ? ? ? ? 41 8B CE 3B C1
			constexpr std::uintptr_t CalcEntryValue = 0x001D9080;				// 1_5_73
			// E8 ? ? ? ? 49 8B D5 49 8B 8D ? ? ? ?
			constexpr std::uintptr_t DispelWornItemEnchantments = 0x00556F20;	// 1_5_73
			// E8 ? ? ? ? 85 C0 7E 2D
			constexpr std::uintptr_t GetDetectionLevel = 0x005FC9A0;			// 1_5_73
			// E8 ? ? ? ? 84 C0 49 0F 45 F4
			constexpr std::uintptr_t IsGhost = 0x005D2520;						// 1_5_73
			// E8 ? ? ? ? 48 8B CF 0F B6 E8
			constexpr std::uintptr_t IsRunning = 0x005D1190;					// 1_5_73
			// E8 ? ? ? ? EB 1D 8B 4D 7F
			constexpr std::uintptr_t SendStealAlarm = 0x005DD770;				// 1_5_73
			// ??_7Actor@@6B@
			constexpr std::uintptr_t Vtbl = 0x01655650;							// 1_5_73
		}


		namespace ActorKnowledge
		{
			// E8 ? ? ? ? 48 85 C0 74 09 8B 40 10
			constexpr std::uintptr_t GetDetectionState = 0x007186C0;	// 1_5_73
		}


		namespace ActorValueOwner
		{
			// E8 ? ? ? ? F3 44 0F 2C C0
			constexpr std::uintptr_t GetPlayerActorValueCurrent = 0x003E5250;	// 1_5_73
		}


		namespace AttackBlockHandler
		{
			// ??_7AttackBlockHandler@@6B@
			constexpr std::uintptr_t Vtbl = 0x0166F228;	// 1_5_73
		}


		namespace AutoMoveHandler
		{
			// ??_7AutoMoveHandler@@6B@
			constexpr std::uintptr_t Vtbl = 0x0166F2D8;	// 1_5_73
		}


		namespace BaseExtraList
		{
			// E8 ? ? ? ? 4C 8D 75 10
			constexpr std::uintptr_t Add = 0x00131990;					// 1_5_73
			// E8 ? ? ? ? F7 43 28 FF 03 00 00 75 0C
			constexpr std::uintptr_t SetExtraFlags = 0x00125D80;		// 1_5_73
			// E8 ? ? ? ? 90 41 89 1E 48 8B C7 48 8B 5C 24 60 48 8B 6C 24 68 48 83 C4 30 41 5E
			constexpr std::uintptr_t SetInventoryChanges = 0x0010F5C0;	// 1_5_73
		}


		namespace BSAudioManager
		{
			// E8 ? ? ? ? BA 33 00 00 00
			constexpr std::uintptr_t GetSingleton = 0x00BEE580;	// 1_5_73
			// E8 ? ? ? ? F3 0F 10 5E 5C
			constexpr std::uintptr_t SetUp = 0x00BEEE70;		// 1_5_73
		}


		namespace BSScaleformTranslator
		{
			// ??_7BSScaleformTranslator@@6B@
			constexpr std::uintptr_t Vtbl = 0x017B6BE0;	// 1_5_62
		}


		namespace BSScrapArrayAllocator
		{
			// E8 ? ? ? ? EB 10 89 6C 24 28
			constexpr std::uintptr_t Allocate = 0x00C05010;	// 1_5_73
			// E8 ? ? ? ? 89 75 DF
			constexpr std::uintptr_t Free = 0x00C051F0;		// 1_5_73
			// E8 ? ? ? ? 84 C0 8B 45 6F
			constexpr std::uintptr_t Resize = 0x00C050A0;	// 1_5_73
		}


		namespace BSScript
		{
			namespace BSScriptObject
			{
				// E8 ? ? ? ? 49 89 3F
				constexpr std::uintptr_t IncRefCount = 0x01233EB0;	// 1_5_73
				// E8 ? ? ? ? 85 C0 75 10 49 8B CE
				constexpr std::uintptr_t DecRefCount = 0x01233F60;	// 1_5_73
			}


			namespace Internal
			{
				namespace VirtualMachine
				{
					// E8 ? ? ? ? 84 C0 0F 84 ? ? ? ? 48 83 7C 24 48 00
					constexpr std::uintptr_t AllocateArray = 0x01264A00;	// 1_5_73
				}
			}
		}


		namespace BSTArrayBase
		{
			// E8 ? ? ? ? 29 3E
			constexpr std::uintptr_t Move = 0x00C04980;	// 1_5_73
			// E8 ? ? ? ? 89 85 C8 00 00 00
			constexpr std::uintptr_t Push = 0x00C04A20;	// 1_5_73
		}


		namespace BSTArrayHeapAllocator
		{
			// E8 ? ? ? ? 33 F6 EB 19
			constexpr std::uintptr_t Allocate = 0x00C04CC0;	// 1_5_73
			// E8 ? ? ? ? 89 73 60
			constexpr std::uintptr_t Free = 0x00C04EC0;		// 1_5_73
			// E8 ? ? ? ? 84 C0 8B 44 24 50
			constexpr std::uintptr_t Resize = 0x00C04D40;	// 1_5_73
		}


		namespace BSTSmallArrayHeapAllocator
		{
			// E9 ? ? ? ? CC 48 85 C9
			constexpr std::uintptr_t Allocate = 0x00C06640;	// 1_5_73
			// E8 ? ? ? ? 44 89 3F
			constexpr std::uintptr_t Free = 0x00C06880;		// 1_5_73
			// E8 ? ? ? ? F7 07 00 00 00 80
			constexpr std::uintptr_t Resize = 0x00C06700;	// 1_5_73
		}


		namespace ChestsLooted
		{
			// E8 ? ? ? ? 48 8B C8 48 8D 54 24 51
			constexpr std::uintptr_t GetEventSource = 0x00862160;	// 1_5_73
		}


		namespace Condition
		{
			namespace Node
			{
				// E8 ? ? ? ? 44 0F B6 C0 45 84 F6
				constexpr std::uintptr_t Run = 0x004454C0;	// 1_5_73
			}


			// E8 ? ? ? ? 0F B6 D8 EB 08
			constexpr std::uintptr_t Run = 0x004447A0;	// 1_5_73
		}


		namespace Console
		{
			// 89 05 ? ? ? ? 49 C7 43 08 00 00 00 00
			constexpr std::uintptr_t SelectedRef = 0x02F4C31C;		// 1_5_73
			// E8 ? ? ? ? BE 02 00 00 00 8B C6
			constexpr std::uintptr_t SetSelectedRef = 0x0085BB30;	// 1_5_73
		}


		namespace CRC32Calculator
		{
			// E8 ? ? ? ? 8B 75 AB
			constexpr std::uintptr_t SizeOf32 = 0x00C064F0;		// 1_5_73
			// E8 ? ? ? ? 8B 5D C0
			constexpr std::uintptr_t SizeOf64 = 0x00C06570;		// 1_5_73
			// E8 ? ? ? ? 8B 9D B8 00 00 00
			constexpr std::uintptr_t SizeOfSize = 0x00C06490;	// 1_5_73
		}


		namespace FavoritesHandler
		{
			// ??_7FavoritesHandler@@6B@
			constexpr std::uintptr_t Vtbl = 0x016B84C8;	// 1_5_73
		}


		namespace FavoritesMenu
		{
			// ??_7FavoritesMenu@@6B@
			constexpr std::uintptr_t Vtbl = 0x016B1078;	// 1_5_73
		}


		namespace FirstPersonState
		{
			// ??_7FirstPersonState@@6B@
			constexpr std::uintptr_t Vtbl = 0x016A9E70;	// 1_5_73
		}


		namespace GFxTranslator
		{
			namespace TranslateInfo
			{
				// 48 85 D2 74 69 48 89 6C 24 10
				constexpr std::uintptr_t SetResultW = 0x00F4B2F0;	// 1_5_73
			}
		}


		namespace GMemory
		{
			// GFxFunctionHandler::virt_dtor + 35
			constexpr std::uintptr_t GlobalHeap = 0x03032C50;	// 1_5_73
		}


		namespace Inventory
		{
			// E8 ? ? ? ? 48 8B C8 48 8D 54 24 58 E8 ? ? ? ? 49 8B 0F
			constexpr std::uintptr_t GetEventSource = 0x001EF330;	// 1_5_73
		}


		namespace InventoryChanges
		{
			// E8 ? ? ? ? 48 8B F8 48 8B D7 48 8B CD
			constexpr std::uintptr_t Ctor = 0x001D9200;							// 1_5_73
			// E8 ? ? ? ? 90 8B 44 24 68 41 89 06 48 83 C4 38
			constexpr std::uintptr_t GenerateLeveledListChanges = 0x001E08B0;	// 1_5_73
			// E8 ? ? ? ? 40 84 F6 75 08
			constexpr std::uintptr_t InitContainer = 0x001E9D90;				// 1_5_73
			// E8 ? ? ? ? 48 85 ED 74 3F
			constexpr std::uintptr_t SendContainerChangedEvent = 0x001ECE20;	// 1_5_73
            // E8 ? ? ? ? 48 8D 55 A7 49 8B CC 
            constexpr std::uintptr_t ExecuteVisitor = 0x001E5190;               // 1_5_73
            // E8 ? ? ? ? 0F B6 6C 24 ? 40 84 ED 
            constexpr std::uintptr_t ExecuteVisitorOnWorn = 0x001E51D0;         // 1_5_73
		}


		namespace InventoryEntryData
		{
			// E8 ? ? ? ? 48 3B C7 74 25
			constexpr std::uintptr_t GetOwner = 0x001D6620;		// 1_5_73
			// E8 ? ? ? ? 4C 8B 2B
			constexpr std::uintptr_t GetWeight = 0x001A1730;	// 1_5_73
			// E8 ? ? ? ? 84 C0 0F 85 ? ? ? ? 48 8B 3F
			constexpr std::uintptr_t IsOwnedBy = 0x001D7590;	// 1_5_73
		}


		namespace InventoryMenu
		{
			namespace InventoryData
			{
				// E8 ? ? ? ? 48 8B D0 48 8D 8B 90 00 00 00
				constexpr std::uintptr_t GetSelectedItem = 0x00856400;	// 1_5_73
				// E8 ? ? ? ? EB 4A 80 7D 1A 1B
				constexpr std::uintptr_t Update = 0x00856A50;			// 1_5_73
			}
		}


		namespace ItemCrafted
		{
			// E8 ? ? ? ? 48 8B C8 48 8D 55 B8 E8 ? ? ? ? 45 85 E4
			constexpr std::uintptr_t GetEventSource = 0x008708A0;	// 1_5_73
		}


		namespace ItemsPickpocketed
		{
			// E8 ? ? ? ? 48 8B C8 48 8D 54 24 58 E8 ? ? ? ? EB 7B
			constexpr std::uintptr_t GetEventSource = 0x00862250;	// 1_5_73
		}


		namespace JumpHandler
		{
			// ??_7JumpHandler@@6B@
			constexpr std::uintptr_t Vtbl = 0x0166F398;	// 1_5_73
		}


		namespace LockState
		{
			// E8 ? ? ? ? 66 0F 6E C0 0F 5B C0 0F 5A C8 F2 0F 11 0F
			constexpr std::uintptr_t GetLockLevel = 0x00134A90;	// 1_5_73
		}


		namespace LookHandler
		{
			// ??_7LookHandler@@6B@
			constexpr std::uintptr_t Vtbl = 0x0166F150;	// 1_5_73
		}


		namespace MagicTarget
		{
			// 48 89 5C 24 18 56 48 83 EC 20 48 8B 01 48 8B F2 FF 50 38
			constexpr std::uintptr_t HasMagicEffect = 0x005530D0;	// 1_5_73
		}


		namespace MenuControls
		{
			// E8 ? ? ? ? 8D 56 07
			constexpr std::uintptr_t RegisterHandler = 0x008A7F20;	// 1_5_73
			// E8 ? ? ? ? 90 C6 43 0C 00
			constexpr std::uintptr_t RemoveHandler = 0x008A7FF0;	// 1_5_73
		}


		namespace MenuOpenHandler
		{
			// ??_7MenuOpenHandler@@6B@
			constexpr std::uintptr_t Vtbl = 0x016B8490;	// 1_5_73
		}


		namespace MessageDataFactoryManager
		{
			// E8 ? ? ? ? 48 8B C8 48 85 C0 74 0C 48 8B 00
			constexpr std::uintptr_t GetCreator = 0x003262F0;	// 1_5_73
			// E8 ? ? ? ? 48 8B C8 48 8D 57 08
			constexpr std::uintptr_t GetSingleton = 0x00326460;		// 1_5_73
		}


		namespace MovementHandler
		{
			// ??_7MovementHandler@@6B@
			constexpr std::uintptr_t Vtbl = 0x0166F1B8;	// 1_5_73
		}


		namespace NiControllerManager
		{
			// E8 ? ? ? ? 48 8B E8 E8 ? ? ? ?
			constexpr std::uintptr_t GetSequenceByName = 0x00189B00;	// 1_5_73
		}


		namespace NiRefObject
		{
			// NiRefObject::virt_dtor + 13
			constexpr std::uintptr_t TotalObjectCount = 0x03012520;	// 1_5_73
		}


		namespace PlayerCharacter
		{
			// E8 ? ? ? ? 48 3B C6 74 16
			constexpr std::uintptr_t GetActorInFavorState = 0x006B3670;	// 1_5_73
			// 48 83 EC 38 80 7C 24 70 00
			constexpr std::uintptr_t GetPickpocketChance = 0x003BCF40;	// 1_5_73
			// E8 ? ? ? ? 44 89 65 67
			constexpr std::uintptr_t PlayPickupEvent = 0x0069FE60;		// 1_5_73
			// E8 ? ? ? ? 66 C7 43 18 00 00
			constexpr std::uintptr_t StartActivation = 0x006A9F90;		// 1_5_73
			// E8 ? ? ? ? 84 C0 75 08 40 32 F6
			constexpr std::uintptr_t TryToPickPocket = 0x006B2530;		// 1_5_73
			// ??_7PlayerCharacter@@6B@
			constexpr std::uintptr_t Vtbl = 0x016635F0;					// 1_5_73
		}


		namespace ReadyWeaponHandler
		{
			// ??_7ReadyWeaponHandler@@6B@
			constexpr std::uintptr_t Vtbl = 0x0166F268;	// 1_5_73
		}


		namespace RunHandler
		{
			// ??_7RunHandler@@6B@
			constexpr std::uintptr_t Vtbl = 0x0166F308;	// 1_5_73
		}


		namespace ScriptEventSourceHolder
		{
			// E8 ? ? ? ? 90 48 8B 45 D7 48 85 C0 74 1C
			constexpr std::uintptr_t SendActivateEvent = 0x002A2070;	// 1_5_73
		}


		namespace ShoutHandler
		{
			// ??_7ShoutHandler@@6B@
			constexpr std::uintptr_t Vtbl = 0x0166F3F8;	// 1_5_73
		}


		namespace Sky
		{
			// E8 ? ? ? ? 48 8B 40 48
			constexpr std::uintptr_t GetSingleton = 0x00177790;	// 1_5_73
		}


		namespace SneakHandler
		{
			// ??_7SneakHandler@@6B@
			constexpr std::uintptr_t Vtbl = 0x0166F3C8;	// 1_5_73
		}


		namespace SoundData
		{
			// E8 ? ? ? ? EB 0E 84 C0
			constexpr std::uintptr_t Play = 0x00BED530;			// 1_5_73
			// E8 ? ? ? ? F3 0F 10 5D 9F
			constexpr std::uintptr_t SetNode = 0x00BEDB10;		// 1_5_73
			// E8 ? ? ? ? 4C 8D 7E 20
			constexpr std::uintptr_t SetPosition = 0x00BED920;	// 1_5_73
		}


		namespace SprintHandler
		{
			// ??_7SprintHandler@@6B@
			constexpr std::uintptr_t Vtbl = 0x0166F1E8;	// 1_5_73
		}


		namespace TESNPC
		{
			// ??_7TESNPC@@6B@
			constexpr std::uintptr_t Vtbl = 0x0159FCE0;	// 1_5_73
		}


		namespace TESObjectACTI
		{
			// ??_7TESObjectACTI@@6B@
			constexpr std::uintptr_t Vtbl = 0x01557700;	// 1_5_73
		}

        namespace TESObjectARMO
		{
            // E8 ? ? ? ? FF C3 41 3B 5E 10 72 95 
            constexpr std::uintptr_t ApplyArmorAddon = 0x00228AD0; // 1_5_73
            // E8 ? ? ? ? 84 C0 0F 84 ? ? ? ? 48 8B CD E8 ? ? ? ? 4C 8B E0 48 8B D0 49 8B CE E8 ? ? ? ? 84 C0 0F 84 ? ? ? ? 48 8B D5 
            constexpr std::uintptr_t TestBodyPartByIndex = 0x00228D60; // 1_5_73
		}

		namespace TESObjectCONT
		{
			// E8 ? ? ? ? 48 8B C8 EB 03 49 8B CF 48 89 0D ? ? ? ? 48 8B 01 41 B0 01 BA 0E 00 00 00 + 71
			constexpr std::uintptr_t Vtbl = 0x01559940;	// 1_5_73
		}


		namespace TESObjectREFR
		{
			// E8 ? ? ? ? 48 8B 4E 40 48 8B 01 8B 55 77
			constexpr std::uintptr_t ActivateRefChildren = 0x002A8CC0;	// 1_5_73
			// E8 ? ? ? ? 8B 7B 14
			constexpr std::uintptr_t GetInventoryChanges = 0x001D8E40;	// 1_5_73
			// E8 ? ? ? ? FF 40 18
			constexpr std::uintptr_t GetLockState = 0x002A74C0;			// 1_5_73
			// E8 ? ? ? ? 85 C0 48 8B CB
			constexpr std::uintptr_t GetNumItems = 0x0028E250;			// 1_5_73
			// E8 ? ? ? ? 48 3B D8 75 08
			constexpr std::uintptr_t GetOwner = 0x002A6670;				// 1_5_73
			// E8 ? ? ? ? 41 B4 01 EB 1B
			constexpr std::uintptr_t PlayAnimation = 0x00189E30;		// 1_5_73
		}


		namespace ThirdPersonState
		{
			// ??_7ThirdPersonState@@6B@
			constexpr std::uintptr_t Vtbl = 0x0162F2B0;	// 1_5_73
		}


		namespace TogglePOVHandler
		{
			// ??_7TogglePOVHandler@@6B@
			constexpr std::uintptr_t Vtbl = 0x0166F428;	// 1_5_73
		}


		namespace ToggleRunHandler
		{
			// ??_7ToggleRunHandler@@6B@
			constexpr std::uintptr_t Vtbl = 0x0166F308;	// 1_5_73
		}


		// 48 83 EC 18 F3 41 0F 10 60 04
		constexpr std::uintptr_t WorldPtToScreenPt3 = 0x00C660D0;	// 1_5_73
		// E8 ? ? ? ? 83 FE 0C
		constexpr std::uintptr_t DebugNotification = 0x008DA3D0;	// 1_5_73
	}
}
