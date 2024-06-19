/*
* Base source made by Mars (Im Foxxyyy) & Sockstress
*
* FLASH is the default tool that is used to visually represent the UI.
* 
* UIComponent    : base class for all components, must be put top-level container such as UILayer and UIScene.
* UILayer        : a generic lightweight container, all childrens are managed by this component.
* UIScene        : a container that groups any number of components except other UIScenes.
* UIPanel        : a generic lightweight container that groups any number of components.
* UIScrollBar    : a scrollbar to determine the contents of the viewing area.
* UILabel        : a display area for a short text string.
* UIButton       : implementation of a push button.
* UITab          : implementation of a push button.
* UIIcon         : represents single images.
* UIList         : a component that allows the user to select one or more objects from a list, supports scrolling.
* UIProgressBar  : a component that communicates the progress of some work by displaying its percentage of completion.
* UISpinner      : a single line input field that lets the user select a number or an object value from an ordered sequence.
* UIContext      : an interface to an external tool that artists use to represent/decorate these UI components. Each component has its own context interface.
* UIFactory      : a class to map inputs to the ones that the UI uses.
* UIInput        : a class to manages the creation of UI elements.
* UINavigator    : a class to manages the navigation/transitions between various UI components.
* UIManager      : a class used for various subsystem that manages a UI system.
* 
* Visibility dictates if a state is shown or hidden.
* Ideally the textures/meshes associated with the state should not be rendered at all.
* 
* Enabled/Disabled describes how input, events, and transitions are processed on a state.
* Input and events are processed if this flag is true, otherwise input and events are not processed.
* A disabled state should never be transitioned to.
* 
* Focused describes if a component is selected or not.
* All states for a focused component that are on a path from that focused component to its root component should also be focused.
* The only way for a component to receive input is if it is focused.
* 
* Active describes if a component is running.
* Siblings and children of this active component may or may not be active.
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
	bool loaded = false;
	Script fuiEventId = LaunchNewScript("$/content/scripting/DesignerDefined/ui/fuieventmonitor_o");

	ADD_PERSISTENT_SCRIPT(GET_THIS_SCRIPT_ID());
	InitMenuDraw();

	while (true)
	{
		if (!HUD_IS_FADED() && !IS_GAME_PAUSED())
		{
			if (!loaded)
			{
				AUDIO_MUSIC_ONE_SHOT("mex_mission_complete_song_01", 0, 0, 0, 0, 0);
				UI_SET_STRING_FORMAT("Generic_Dbuffer128_2", "Welcome <green>%s</green> !\n<purple>Hold</purple> <lb> <purple>and press</purple> <rs> <purple>to open</purple>", MyName, nullstr, nullstr);
				PRINT_BIG("Generic_Dbuffer128_2", 1084227584, 0.0f, 2, 0);
				loaded = true;
			}

			if (!IS_SCRIPT_VALID(fuiEventId))
			{
				fuiEventId = LaunchNewScript("$/content/scripting/DesignerDefined/ui/fuieventmonitor_o");
			}
		}
		HandleMenuUi();
		LoopedExecutionEntry();
		WAIT(0);
	}
}