#include "natives.h"
#include "types.h"
#include "constants.h"
#include "intrinsics.h"
#include "common.h"

#include "MenuExecutionHandling.h"
#include "Utils.h"

#define GetCursorIndex UI_GET_SELECTED_INDEX("HudGamerList", false)
#define MenuLayer "HudGamerList"

//Our menu structure
static Page Container =
{
	.HeaderText = { nullptr }, //Title
	.HeaderColor = nullptr, //Unused
	.TextColor = "<blue>", //Item color
	.ScrollBarColor = 10, //scrollbar color
	.MenuTemplate = 4, //UI style (4, 5, 7, 11, 25)
	.BitSet = null, //Bits 
	.TotalItemCount = null, //Items count for current menu level
	.CurrentMenuLevel = null, //Current menu level
	.Context = null, //Context, used for prompts
	.Level = { ExecutionEntry }, //Menu levels
	.Item = { nullptr } //Menu items
};

void InitMenuDraw()
{
	InitMenuExecution();
	ExecutionEntry(null);
}

Page* GetMenuContainer()
{
	return &Container;
}

inline void SetCursorIndex(int index) //Set the current menu index
{
	if (IS_PS3())
	{
		//Need to get PS3 offsets or use NET_PLAYER_LIST_SET_HIGHLIGHT
		return;
	}
	int hudGamerList = GET_GAME_EDITION() == 9 ? 0x830981F4 : 0x83098254; //9 is original, 10 is undead
	*(int*)(*(int*)hudGamerList + 0x30) = index;
}

bool HasPlayerOpenedMenu() //LB + RS
{
	if (IS_BUTTON_PRESSED(GetPlayerController(), BUTTON_R3, 1, 0))
		return IS_BUTTON_DOWN(GetPlayerController(), BUTTON_LB, 1, 0);
	return false;
}

inline void ShutDownMenu()
{
	bit_reset(&Container.BitSet, PB_IsMenuOpen);
	bit_reset(&Container.BitSet, PB_IsMenuJustOpen);

	NET_PLAYER_LIST_RESET();
	_ACTOR_ALLOW_BUMP_REACTIONS(MySelf, true);

	if (IS_SCRIPT_USE_CONTEXT_VALID(Container.Context))
		RELEASE_SCRIPT_USE_CONTEXT(Container.Context);
}

inline void OpenMenuControls()
{
	if (HasPlayerOpenedMenu())
	{
		bit_set(&Container.BitSet, PB_IsMenuJustOpen);
		if (bit_test(Container.BitSet, PB_IsMenuOpen))
			ShutDownMenu();
		else
		{
			bit_set(&Container.BitSet, PB_IsMenuOpen);
			UI_PUSH(MenuLayer);
			UI_INCLUDE(MenuLayer);
			UI_ENABLE(MenuLayer);
			UI_ACTIVATE(MenuLayer);
			UI_ENTER(MenuLayer);
			UI_FOCUS(MenuLayer);
			UI_REFRESH(MenuLayer);
			PLAY_SOUND_FRONTEND("HUD_MP_UNLOCK_MASTER");
			Container.Context = ADD_SCRIPT_USE_CONTEXT("Generic_Dbuffer128_1", 0, 11, 0, 0, 0, 0, -1, 0);
		}
	}
	else if (bit_test(Container.BitSet, PB_IsMenuJustOpen))
		bit_reset(&Container.BitSet, PB_IsMenuJustOpen);

	if (DECOR_CHECK_EXIST(MySelf, "DISABLE_HORSE_WHISTLE"))
		DECOR_REMOVE(MySelf, "DISABLE_HORSE_WHISTLE");
}

void UpdateMenuLevel(int directionandamount, void* param, int cursorIndex)
{
	if (directionandamount > 0 && directionandamount <= MaxMenuLevels)
	{
		bit_set(&Container.BitSet, PB_LastMenuDirection);
		Container.CurrentMenuLevel++;
		Container.Level[Container.CurrentMenuLevel].playerId = (int)param;
		SetCursorIndex(0);

		if (Container.CurrentMenuLevel < MaxMenuLevels)
		{
			Container.Level[Container.CurrentMenuLevel].UpdateMenuLevel = Container.Item[cursorIndex].Execute;
			Container.Level[Container.CurrentMenuLevel].UpdateMenuLevel(param);
		}
	}
	else if (directionandamount < 0 && directionandamount >= -MaxMenuLevels)
	{
		bit_reset(&Container.BitSet, PB_LastMenuDirection);
		if (Container.CurrentMenuLevel == 0)
		{
			ShutDownMenu();
			return;
		}
		else
		{
			Container.CurrentMenuLevel--;
			SetCursorIndex(LastMenuLevelOption[Container.CurrentMenuLevel]);

			if (Container.Level[Container.CurrentMenuLevel].UpdateMenuLevel != nullptr)
			{
				Container.Level[Container.CurrentMenuLevel + 1] = (MenuLevel) { null };
				Container.Level[Container.CurrentMenuLevel].UpdateMenuLevel(param);
			}
		}
	}
}

//Number selector and buttons handler
void ParseMenuControls()
{
	static uint HoldLeftCounter = 0, HoldRightCounter = 0;
	int cursorIndex = GetCursorIndex;
	ItemContainer* CurrentItem = &Container.Item[cursorIndex];

	if (!bit_test(CurrentItem->BitSet, ICB_IsItemDisabled))
	{
		MenuSelectionType CurrentType = CurrentItem->Selection.Type;
		switch (CurrentType)
		{
			case MST_Int:
			case MST_Char:
			{
				if (IS_BUTTON_RELEASED(GetPlayerController(), DPAD_LEFT, 1, 0))
				{
					if (*CurrentItem->Selection.pValue.Int <= CurrentItem->Selection.StartIndex.Int)
						*CurrentItem->Selection.pValue.Int = CurrentItem->Selection.EndIndex.Int;
					else
						*CurrentItem->Selection.pValue.Int -= (CurrentType == MST_Char) ? 1 : CurrentItem->Selection.iIncrement;
					if (bit_test(CurrentItem->BitSet, ICB_ExecuteOnChange))
						CurrentItem->Execute(CurrentItem->Selection.pValue.Int);
				}
				else if (IS_BUTTON_RELEASED(GetPlayerController(), DPAD_RIGHT, 1, 0))
				{
					if (*CurrentItem->Selection.pValue.Int >= CurrentItem->Selection.EndIndex.Int)
						*CurrentItem->Selection.pValue.Int = CurrentItem->Selection.StartIndex.Int;
					else
						*CurrentItem->Selection.pValue.Int += (CurrentType == MST_Char) ? 1 : CurrentItem->Selection.iIncrement;
					if (bit_test(CurrentItem->BitSet, ICB_ExecuteOnChange))
						CurrentItem->Execute(CurrentItem->Selection.pValue.Int);
				}
			}
			break;
			case MST_Float:
			{
				if (IS_BUTTON_RELEASED(GetPlayerController(), DPAD_LEFT, 1, 0))
				{
					if (*CurrentItem->Selection.pValue.Float <= CurrentItem->Selection.StartIndex.Float + 0.000015) //0.000000015 fixes rounding errors
						*CurrentItem->Selection.pValue.Float = CurrentItem->Selection.EndIndex.Float;
					else
						*CurrentItem->Selection.pValue.Float -= CurrentItem->Selection.fIncrement;
					if (bit_test(CurrentItem->BitSet, ICB_ExecuteOnChange))
						CurrentItem->Execute(CurrentItem->Selection.pValue.Float);
				}
				else if (IS_BUTTON_RELEASED(GetPlayerController(), DPAD_RIGHT, 1, 0))
				{
					if (*CurrentItem->Selection.pValue.Float >= CurrentItem->Selection.EndIndex.Float)
						*CurrentItem->Selection.pValue.Float = CurrentItem->Selection.StartIndex.Float;
					else
						*CurrentItem->Selection.pValue.Float += CurrentItem->Selection.fIncrement;
					if (bit_test(CurrentItem->BitSet, ICB_ExecuteOnChange))
						CurrentItem->Execute(CurrentItem->Selection.pValue.Float);
				}
			}
			break;
			default:
				break;
		}
		if (IS_BUTTON_RELEASED(GetPlayerController(), DPAD_DOWN, 1, 0))
		{
			if (GetCursorIndex > Container.TotalItemCount - 2)
				SetCursorIndex(0);
			else
				SetCursorIndex(GetCursorIndex + 1);
			PLAY_SOUND_FRONTEND("HUD_MENU_NAV_DOWN_MASTER");
		}
		if (IS_BUTTON_RELEASED(GetPlayerController(), DPAD_UP, 1, 0))
		{
			if (GetCursorIndex < 1)
				SetCursorIndex(Container.TotalItemCount - 1);
			else
				SetCursorIndex(GetCursorIndex - 1);
			PLAY_SOUND_FRONTEND("HUD_MENU_NAV_UP_MASTER");
		}
		if (IS_BUTTON_RELEASED(GetPlayerController(), BUTTON_A, 1, 0))
		{
			PLAY_SOUND_FRONTEND("HUD_MENU_SELECT_MASTER");
			switch (CurrentType)
			{
				case MST_Bool:
				{
					bool bitSet = IS_BIT_SET(*CurrentItem->Selection.pValue.Int, CurrentItem->Selection.BoolBit);
					if (!bitSet)
						SET_BIT(CurrentItem->Selection.pValue.Int, CurrentItem->Selection.BoolBit);
					else
						CLEAR_BIT(CurrentItem->Selection.pValue.Int, CurrentItem->Selection.BoolBit);
					if (CurrentItem->Execute != nullptr)
						CurrentItem->Execute((void*)!bitSet);
					return;
				}
				break;
				case MST_Menu:
				case MST_MenuParam:
					LastMenuLevelOption[Container.CurrentMenuLevel] = cursorIndex;
					UpdateMenuLevel(1, (CurrentType == MST_MenuParam) ? (void*)CurrentItem->Selection.Value.Int : null, cursorIndex);
					return;
				case MST_Player:
					LastMenuLevelOption[Container.CurrentMenuLevel] = cursorIndex;
					UpdateMenuLevel(1, (void*)CurrentItem->Selection.DynamicId, cursorIndex);
					return;
			}
			if (CurrentItem->Execute != nullptr)
				CurrentItem->Execute((CurrentType == MST_MenuParam || CurrentType == MST_Param) ? (void*)CurrentItem->Selection.Value.Int : CurrentItem->Selection.pValue.Int);
		}
		if (CurrentItem->HasAlternateExecute && IS_BUTTON_RELEASED(GetPlayerController(), BUTTON_X, 1, 0))
		{
			if (CurrentItem->AlternateExecute != nullptr)
				CurrentItem->AlternateExecute(null);
		}
	}
	if (IS_BUTTON_RELEASED(GetPlayerController(), BUTTON_B, 1, 0))
	{
		UpdateMenuLevel(-1, null, cursorIndex);
		PLAY_SOUND_FRONTEND("HUD_MENU_BACK_MASTER");
	}
}

void DoNeededStuff() //Random stuff that we should use when menu is open
{
	HUD_CLEAR_HELP_QUEUE(); //Gets ride of PRINT_HELP
	DECOR_SET_BOOL(MySelf, "DISABLE_HORSE_WHISTLE", true); //Disables whistling when menu is open
	CANCEL_CURRENTLY_PLAYING_AMBIENT_SPEECH(MySelf); //Disables speeches when menu is open (animation is still visible)
	_ACTOR_ALLOW_BUMP_REACTIONS(MySelf, false); //Disables bump reactions

	if (GET_STICK_X(GetPlayerController(), false, 0) > 0.2f || GET_STICK_X(GetPlayerController(), false, 0) < -0.2f || GET_STICK_Y(GetPlayerController(), false, 0) > 0.2f || GET_STICK_Y(GetPlayerController(), false, 0) < -0.2f)
		SET_PLAYER_CONTROL(0, true, false, false);
	else
		SET_PLAYER_CONTROL(0, false, true, true);
}

void SetSubtitle(char* subtitle) //Set the subtitle
{
	int* subtitlePointer = getGlobalPtrAtIndex(76905);
	strcpy((const char*)subtitlePointer, subtitle, 64);
	NET_PLAYER_LIST_SET_DESCRIPTION((const char*)subtitlePointer);
}

unsafe bool CheckPlayerEvent(int slot, int bitEvent) //Checks bits from in-game events
{
	__getFrame(0);
	__getGlobalP(76943);
	__getArrayP(96);
	__getImm(31);
	__getFrame(1);
	__and();
	__setFrame(21);
	__getFrame(21);
	__getFrame(1);
	__cmpEq();
	return __popI();
}

unsafe int GetVolumeValue(int slot) //Return the region value from the defined slot id
{
	__getFrame(0);
	__getGlobalP(76943);
	__getArray(96);
	return __popI();
}

void DrawMenu() //There's a lot to handle
{
	int framesPerSecond = (1.0f / GET_LAST_FRAME_TIME()); //Fps counter
	char buffer[256]; //Global menu buffer
	char str[64]; //Global columnas buffer

	//In case index is going crazy we're setting it back to 0
	if (GetCursorIndex + 1 > Container.TotalItemCount)
		SetCursorIndex(0);

	//Clear menu items
	NET_PLAYER_LIST_RESET();

	//Prompts - Game Informations
	UI_SET_STRING_FORMAT("Generic_Dbuffer128_1", "<red>Host:</red> %s   <blue>Players:</blue> %i   <green>FPS:</green> %i", GetSlotColor(GET_SLOT_FOR_HOST()), (const char*)GET_NUM_PLAYERS(), (const char*)framesPerSecond);

	//Header
	UI_SET_STRING_FORMAT("Generic_Dbuffer64_0", "%s", Container.HeaderText[Container.CurrentMenuLevel], NULL, NULL);
	NET_PLAYER_LIST_SET_TITLE("Generic_Dbuffer64_0");

	//Subheader
	if (Container.MenuTemplate != 7) //Text doesn't really fit for UI Style 7
		UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", "Welcome %s <green>(%i/%i)</green>", MyName, (const char*)GetCursorIndex + 1, (const char*)Container.TotalItemCount);
	else
		UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", "<green>(%i/%i)</green>", (const char*)GetCursorIndex + 1, (const char*)Container.TotalItemCount, NULL);
	SetSubtitle("Generic_Dbuffer128_0");

	for (int i = Container.TotalItemCount - 1, j = 0; i >= 0; i--, j++)
	{
		switch (Container.Item[j].Selection.Type) //Current item type
		{
			case MST_Menu:
			case MST_MenuParam:
				sprintf(buffer, "%s%s<space>>>", Container.TextColor, Container.Item[j].ItemText); //Submenus
				break;
			default:
				sprintf(buffer, "%s%s", Container.TextColor, Container.Item[j].ItemText); //Other items
				break;
		}
		NET_PLAYER_LIST_ADD_ITEM(buffer, i); //Draw item text at defined menu slot
		_UI_SET_ITEM_COLOR(Container.ScrollBarColor); //Use defined scrollbar color (have to be used for each items)
		NET_PLAYER_LIST_SET_TEMPLATE(Container.MenuTemplate); //Set up the menu style
		NET_PLAYER_LIST_SET_HEADER(1, "");
		NET_PLAYER_LIST_SET_HEADER(2, "");
		NET_PLAYER_LIST_SET_HEADER(3, "");
		NET_PLAYER_LIST_SET_HEADER(4, "");
		UI_DISABLE_INPUT(MenuLayer); //Disable all UI inputs

		switch (Container.Item[j].Selection.Type) //Current item type (have to be used after item is drawn to work properly)
		{
			case MST_Int:
				sprintf(str, "[%i]", *Container.Item[j].Selection.pValue.Int);
				_UI_DRAW_RIGHT_TEXT(0, str); //This is what we use to display bools/items lists
				break;
			case MST_Float:
				sprintf(str, "[%s]", _FLOAT_TO_STRING(*Container.Item[j].Selection.pValue.Float, 1, Container.Item[j].Selection.Precision));
				_UI_DRAW_RIGHT_TEXT(0, str); //This is what we use to display bools/items lists
				break;
			case MST_Char:
				sprintf(str, "[%s]", Container.Item[j].Selection.CharArray[*Container.Item[j].Selection.pValue.Int]);
				_UI_DRAW_RIGHT_TEXT(0, str); //This is what we use to display bools/items lists
				break;
			case MST_Player:
			{
				sprintf(str, "%s", GetRegion(GetVolumeValue(Container.Item[j].Selection.DynamicId))); //Get the current slot region from its volume
				_UI_DRAW_RIGHT_TEXT(0, str); //Display region

				if (CheckPlayerEvent(Container.Item[j].Selection.DynamicId, 131072)) //Detect if someone is most wanted
					_UI_DRAW_RIGHT_TEXT(1, "<SKULL>"); //Display most wanted blip
				else if (CheckPlayerEvent(Container.Item[j].Selection.DynamicId, 134217728)) //Detect if someone is playing land grab
					_UI_DRAW_RIGHT_TEXT(1, "<MP_DEFEND>"); //Display land grab blip
				break;
			}
			case MST_Bool:
			{
				bool toggled = IS_BIT_SET(*Container.Item[j].Selection.pValue.Int, Container.Item[j].Selection.BoolBit);
				_UI_DRAW_RIGHT_TEXT(0, toggled ? "[<green>ON</green>]" : "[<red>OFF</red>]");
			}
			break;
		}
		UI_FOCUS(MenuLayer);
		UI_REFRESH(MenuLayer);
	}
}

void HandleMenuUi()
{
	//Open menu & set up
	OpenMenuControls();

	//Display and handle buttons & stuff
	if (bit_test(Container.BitSet, PB_IsMenuOpen))
	{
		ParseMenuControls();
		DrawMenu();
		DoNeededStuff();
	}
	else
	{
		SET_PLAYER_CONTROL(0, true, false, false);
		if (UI_ISFOCUSED(MenuLayer))
			UI_UNFOCUS(MenuLayer);
		else
		{
			UI_FOCUS(MenuLayer);
			UI_RESTORE(MenuLayer);
			UI_REFRESH(MenuLayer);
		}

		//Basically while menu is not opened and playerlist is focused
		while (UI_ISFOCUSED(MenuLayer))
		{
			//Make sure the bottom right message is removed, this should've already been handled by ShutdownMenu()
			if (IS_SCRIPT_USE_CONTEXT_VALID(Container.Context))
				RELEASE_SCRIPT_USE_CONTEXT(Container.Context);

			//Remove all the remaining items, this should've already been handled by ShutdownMenu()
			NET_PLAYER_LIST_RESET();

			//Fix the playerlist and add its original title
			if (NET_GET_FREE_ROAM_MODE() == 1)
				UI_SET_STRING_FORMAT("Generic_Dbuffer64_0", "%s", "Hardcore Free Roam", NULL, NULL);
			else if (NET_GET_FREE_ROAM_MODE() == 2)
				UI_SET_STRING_FORMAT("Generic_Dbuffer64_0", "%s", "Friendly Free Roam", NULL, NULL);
			else
				UI_SET_STRING_FORMAT("Generic_Dbuffer64_0", "%s", "Free Roam", NULL, NULL);
			NET_PLAYER_LIST_SET_TITLE("Generic_Dbuffer64_0");

			//Make sure the playerlist doesn't get fucked up with random messages from our menu
			UI_SET_STRING("Generic_Dbuffer128_0", "");
			SetSubtitle("Generic_Dbuffer128_0");

			//UI_DISABLE_INPUT(MenuLayer); //Disable all inputs from the playerlist - not needed anymore
			UI_UNFOCUS(MenuLayer);
			WAIT(0);
		}
	}
}