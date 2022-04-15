#pragma once
#pragma GCC diagnostic ignored "-Wincompatible-pointer-types"
#pragma GCC diagnostic ignored "-Wswitch"
#pragma GCC diagnostic ignored "-Wextern-initializer"
#define MaxMenuLevels 10

//Menu item type
typedef enum MenuSelectionType
{
	MST_None,
	MST_Param,
	MST_Int,
	MST_Float,
	MST_Bool,
	MST_Menu,
	MST_MenuParam,
	MST_Player,
	MST_Char,
} MenuSelectionType;

//Menu bits
enum PageBits
{
	PB_IsMenuOpen,
	PB_IsMenuJustOpen,
	PB_LastMenuDirection //Back = 0, Forward = 1
};

//Item bits
enum ItemContainerBits
{
	ICB_ExecuteOnChange, //Gets whether the item executes on left, right scroll
	ICB_IsItemDisabled, //Gets whether the item is disabled
	ICB_BoolNumValue, //Current bool value for BoolNum operations
	ICB_DoesItemHaveConfirmation, //Gets if the item selection has to be confirmed
	ICB_DoesItemForwardHeaderText //Gets if the item forwards header text to the next submenu
};

//Menu item selection type
typedef union flintP
{
	int* Int;
	float* Float;
} flintP;

//Menu item structure
typedef struct ItemContainer
{
	int BitSet;
	void(*Execute)(void* param);

	union
	{
		void(*AlternateExecute)(void* param);
		bool HasAlternateExecute;
	};

	char* ItemText;
	struct
	{
		MenuSelectionType Type;
		int DynamicId;
		flint Value;
		flintP pValue;

		union
		{
			char** CharArray;
			int iIncrement;
			float fIncrement;
		};
		byte BoolBit;
		int Precision;
		flint StartIndex;
		flint EndIndex;
	} Selection;
} ItemContainer;

//Menu level and net player ids
typedef struct MenuLevel
{
	void(*UpdateMenuLevel)(void* param);
	int playerId;
} MenuLevel;

//Menu structure
typedef struct Page
{
	char* HeaderText[MaxMenuLevels];
	char* HeaderColor;
	char* TextColor;
	int ScrollBarColor;
	int MenuTemplate;
	int BitSet;
	int TotalItemCount;
	int CurrentMenuLevel;
	int Context;
	MenuLevel Level[MaxMenuLevels];
	ItemContainer Item[16];

} Page;

extern char* oldColor;
extern int LastMenuLevelOption[MaxMenuLevels] = { 0 };

//Declarations
void InitMenuDraw();
Page* GetMenuContainer();
inline void SetCursorIndex(int index);
bool HasPlayerOpenedMenu();
inline void ShutDownMenu();
inline void OpenMenuControls();
void UpdateMenuLevel(int directionandamount, void* param, int cursorIndex);
void ParseMenuControls();
void DoNeededStuff();
void SetSubtitle(char* subtitle);
unsafe bool CheckPlayerEvent(int slot, int bitEvent);
unsafe int GetVolumeValue(int slot);
void DrawMenu();
void HandleMenuUi();