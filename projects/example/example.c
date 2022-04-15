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
	ADD_PERSISTENT_SCRIPT(GET_THIS_SCRIPT_ID());
	InitMenuDraw();

	while (true)
	{
		HandleMenuUi();
		LoopedExecutionEntry();
		WAIT(0);
	}
}
