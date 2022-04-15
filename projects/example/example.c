/*
	Base source made by Im Foxxyyy & Sockstress
*/

#include "natives.h"
#include "types.h"
#include "constants.h"
#include "intrinsics.h"
#include "common.h"

#include "MenuUiHandling.h"
#include "MenuExecutionHandling.h"
#include "Utils.h"
#include "ItemExecution.h"

void main()
{
	int welcomeMessageDisplayed = 0;
	Script fuiEventId = LaunchNewScript("$/content/scripting/DesignerDefined/ui/fuieventmonitor_o", false);
	ADD_PERSISTENT_SCRIPT(GET_THIS_SCRIPT_ID());
	InitMenuDraw();

	while (true)
	{
		if (!HUD_IS_FADED() && !IS_GAME_PAUSED())
		{
			if (welcomeMessageDisplayed == 0)
			{
				AUDIO_MUSIC_ONE_SHOT("mex_mission_complete_song_01", 0, 0, 0, 0, 0);
				UI_SET_STRING_FORMAT("Generic_Dbuffer128_2", "Welcome <green>%s</green> !\n<purple>Hold</purple> <lb> <purple>and press</purple> <rs> <purple>to open</purple>", MyName, nullstr, nullstr);
				PRINT_BIG("Generic_Dbuffer128_2", 1084227584, 0.0f, 2, 0);
				welcomeMessageDisplayed = 1;
			}
			if (GET_GAME_EDITION() != 9 && GET_GAME_EDITION() != 10)
			{
				printf("You aren't on a compatible supported version of the game\n<0xBA60D4>Terminating the menu to save you from crashes !</0x>");
				TERMINATE_THIS_SCRIPT();
			}
			if (!IS_SCRIPT_VALID(fuiEventId))
				fuiEventId = LaunchNewScript("$/content/scripting/DesignerDefined/ui/fuieventmonitor_o");
		}
		HandleMenuUi();
		LoopedExecutionEntry();
		WAIT(0);
	}
}
