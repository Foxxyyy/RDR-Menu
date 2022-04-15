#include "natives.h"
#include "types.h"
#include "constants.h"
#include "intrinsics.h"
#include "common.h"

#include "MenuExecutionHandling.h"
#include "MenuUiHandling.h"
#include "ItemExecution.h"
#include "Utils.h"
#include "Network.h"

static Page* Container = nullptr;
static int AddItemCounter = null;

void InitMenuExecution()
{
	Container = GetMenuContainer();
}

void ExecutionEntry(void* param)
{
	MainMenu();
}

void LoopedExecutionEntry()
{
	LoopedOptions();
	NetLoopedFunctions();
}

inline bool WasLastmenuDirectionForward()
{
	return bit_test(Container->BitSet, PB_LastMenuDirection);
}

int GetMenuSlotId()
{
	return Container->Level[Container->CurrentMenuLevel].playerId;
}

void ResetCurrentItem()
{
	Container->Item[AddItemCounter].BitSet = null;
	Container->Item[AddItemCounter].Execute = nullptr;
	Container->Item[AddItemCounter].AlternateExecute = nullptr;
	Container->Item[AddItemCounter].ItemText = nullstr;
	Container->Item[AddItemCounter].Selection.Type = MST_None;
	Container->Item[AddItemCounter].Selection.DynamicId = NULL;
	Container->Item[AddItemCounter].Selection.Value.Int = NULL;
	Container->Item[AddItemCounter].Selection.pValue.Int = nullptr;
	Container->Item[AddItemCounter].Selection.iIncrement = NULL;
	Container->Item[AddItemCounter].Selection.BoolBit = NULL;
	Container->Item[AddItemCounter].Selection.Precision = NULL;
	Container->Item[AddItemCounter].Selection.StartIndex.Int = NULL;
	Container->Item[AddItemCounter].Selection.EndIndex.Int = NULL;
}

void SetHeader(const char* HeaderText)
{
	AddItemCounter = 0;
	Container->TotalItemCount = 0;
	Container->HeaderText[Container->CurrentMenuLevel] = (char*)HeaderText;
}

void AddItem(const char* ItemText, void(*Callback)(void*), void(*AlternateExecute)(void*))
{
	if (AddItemCounter < 16)
	{
		ResetCurrentItem();
		Container->Item[AddItemCounter].ItemText = (char*)ItemText;
		Container->Item[AddItemCounter].Execute = Callback;
		Container->Item[AddItemCounter].Selection.Type = MST_None;
		Container->Item[AddItemCounter].AlternateExecute = AlternateExecute;
		AddItemCounter++;
		Container->TotalItemCount++;
	}
}

void AddItemInt(const char* ItemText, bool ExecuteOnChange, int MinValue, int MaxValue, int* StartIndex, int incAmount, void(*Callback)(void*), void(*AlternateExecute)(void*))
{
	if (AddItemCounter < 16)
	{
		ResetCurrentItem();
		Container->Item[AddItemCounter].ItemText = (char*)ItemText;
		Container->Item[AddItemCounter].Execute = Callback;
		Container->Item[AddItemCounter].Selection.StartIndex.Int = MinValue;
		Container->Item[AddItemCounter].Selection.EndIndex.Int = MaxValue;
		Container->Item[AddItemCounter].Selection.pValue.Int = StartIndex;
		Container->Item[AddItemCounter].Selection.iIncrement = incAmount;
		if (ExecuteOnChange)
			bit_set(&Container->Item[AddItemCounter].BitSet, ICB_ExecuteOnChange);
		Container->Item[AddItemCounter].Selection.Type = MST_Int;
		Container->Item[AddItemCounter].AlternateExecute = AlternateExecute;
		AddItemCounter++;
		Container->TotalItemCount++;
	}
}

void AddItemChar(const char* ItemText, bool ExecuteOnChange, char** strings, int ArraySize, int* StartIndex, void(*Callback)(void*), void(*AlternateExecute)(void*))
{
	if (AddItemCounter < 16)
	{
		ResetCurrentItem();
		Container->Item[AddItemCounter].ItemText = (char*)ItemText;
		Container->Item[AddItemCounter].Execute = Callback;
		Container->Item[AddItemCounter].Selection.StartIndex.Int = 0;
		Container->Item[AddItemCounter].Selection.EndIndex.Int = ArraySize - 1;
		Container->Item[AddItemCounter].Selection.pValue.Int = StartIndex;
		if (ExecuteOnChange)
			bit_set(&Container->Item[AddItemCounter].BitSet, ICB_ExecuteOnChange);
		Container->Item[AddItemCounter].Selection.Type = MST_Char;
		Container->Item[AddItemCounter].Selection.CharArray = strings;
		Container->Item[AddItemCounter].AlternateExecute = AlternateExecute;
		AddItemCounter++;
		Container->TotalItemCount++;
	}
}

void AddItemFloat(const char* ItemText, bool ExecuteOnChange, float MinValue, float MaxValue, float* StartIndex, float incAmount, float Precision, void(*Callback)(void*), void(*AlternateExecute)(void*))
{
	if (AddItemCounter < 16)
	{
		ResetCurrentItem();
		Container->Item[AddItemCounter].ItemText = (char*)ItemText;
		Container->Item[AddItemCounter].Execute = Callback;
		Container->Item[AddItemCounter].Selection.StartIndex.Float = MinValue;
		Container->Item[AddItemCounter].Selection.EndIndex.Float = MaxValue;
		Container->Item[AddItemCounter].Selection.pValue.Float = StartIndex;
		if (ExecuteOnChange)
			bit_set(&Container->Item[AddItemCounter].BitSet, ICB_ExecuteOnChange);
		Container->Item[AddItemCounter].Selection.Type = MST_Float;
		Container->Item[AddItemCounter].Selection.Precision = Precision;
		Container->Item[AddItemCounter].Selection.fIncrement = incAmount;
		Container->Item[AddItemCounter].AlternateExecute = AlternateExecute;
		AddItemCounter++;
		Container->TotalItemCount++;
	}
}

void AddItemBool(const char* ItemText, int* StartIndex, byte Bit, void(*Callback)(void*), void(*AlternateExecute)(void*))
{
	if (AddItemCounter < 16)
	{
		ResetCurrentItem();
		Container->Item[AddItemCounter].ItemText = (char*)ItemText;
		Container->Item[AddItemCounter].Execute = Callback;
		Container->Item[AddItemCounter].Selection.pValue.Int = StartIndex;
		Container->Item[AddItemCounter].Selection.Type = MST_Bool;
		Container->Item[AddItemCounter].Selection.BoolBit = Bit;
		Container->Item[AddItemCounter].AlternateExecute = AlternateExecute;
		AddItemCounter++;
		Container->TotalItemCount++;
	}
}

void AddItemMenu(const char* ItemText, void(*Callback)(void*), void(*AlternateExecute)(void*))
{
	if (AddItemCounter < 16)
	{
		ResetCurrentItem();
		Container->Item[AddItemCounter].ItemText = (char*)ItemText;
		Container->Item[AddItemCounter].Execute = Callback;
		Container->Item[AddItemCounter].Selection.Type = MST_Menu;
		Container->Item[AddItemCounter].AlternateExecute = AlternateExecute;
		AddItemCounter++;
		Container->TotalItemCount++;
	}
}

void AddItemWithParamAlt(const char* ItemText, int Param, void(*Callback)(void*), void(*AlternateExecute)(void*))
{
	if (AddItemCounter < 16)
	{
		ResetCurrentItem();
		Container->Item[AddItemCounter].ItemText = (char*)ItemText;
		Container->Item[AddItemCounter].Selection.Type = MST_Param;
		Container->Item[AddItemCounter].Selection.Value.Int = Param;
		Container->Item[AddItemCounter].Execute = Callback;
		Container->Item[AddItemCounter].AlternateExecute = AlternateExecute;
		AddItemCounter++;
		Container->TotalItemCount++;
	}
}

void AddItemPlayer(int PlayerId, void(*Callback)(void*))
{
	if (AddItemCounter < 16)
	{
		ResetCurrentItem();
		Container->Item[AddItemCounter].Selection.DynamicId = PlayerId;
		Container->Item[AddItemCounter].ItemText = (char*)GetSlotColor(PlayerId);
		Container->Item[AddItemCounter].Execute = Callback;
		Container->Item[AddItemCounter].Selection.Type = MST_Player;
		AddItemCounter++;
		Container->TotalItemCount++;
	}
}