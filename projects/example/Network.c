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
	vector3 position;

	if (!IS_SLOT_VALID(selectedPlayerId))
	{
		printf("Failed !\n<red>Invalid player</red>");
		return;
	}
	GET_SLOT_POSITION(selectedPlayerId, &position);
	TeleportActor(MySelf, position);
	printf("Teleported to %s", GetSlotColor(selectedPlayerId));
}

void NetLoopedFunctions()
{
	//Running
}