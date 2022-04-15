#include "natives.h"
#include "common.h"
#include "intrinsics.h"
#include "Utils.h"
#include "MenuExecutionHandling.h"
#include "ItemExecution.h"
#include "Network.h"

void OnlinePlayerSubMenu(void* param)
{
	if (WasLastmenuDirectionForward())
		selectedPlayerId = GetMenuSlotId();

	SetHeader(GetSlotColor(selectedPlayerId));
	AddItem("Teleport to Player", TeleportToPlayer, nullptr);
}

void TeleportToPlayer(void* param)
{
	int index = *(int*)param;
	//Do stuff
}

void NetLoopedFunctions()
{
	//Running
}
