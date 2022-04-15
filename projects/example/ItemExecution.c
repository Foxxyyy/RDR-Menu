#include "natives.h"
#include "types.h"
#include "constants.h"
#include "intrinsics.h"
#include "common.h"
#include "ItemExecution.h"
#include "MenuExecutionHandling.h"
#include "Utils.h"
#include "Network.h"

bool boolTest = false;

void SetCreditsFunction(void* param)
{
	printf("Credits to Im Foxxyyy & Sockstress");
}

void SubMenu1(void* param)
{
	SetHeader("SubMenu 1");
	AddItemBool("Bool Test", &boolTest, 0, nullptr, nullptr);
	AddItem("> Credits", SetCreditsFunction, nullptr);
}

void NetworkOptions(void* param)
{
	SetHeader("Network Options");
	if (NET_IS_IN_SESSION())
	{
		for (register int i = 0; i < 16; i++)
		{
			if (!IS_SLOT_VALID(i)) continue;
			AddItemPlayer(i, OnlinePlayerSubMenu);
		}
	}
	else AddItem("Not in multiplayer session", NULL, NULL);
}


void MainMenu()
{
	SetHeader("RDR Menu");
	AddItemMenu("Submenu 1", SubMenu1, nullptr);
	AddItemMenu("Network Options", NetworkOptions, nullptr);
}

void LoopedOptions()
{
	//Refresh playerlist
	if (_STRING_COMPARE(UI_GET_STRING("Generic_Dbuffer64_0"), "Network Options"))
	{
		for (register int player = 0; player < 16; player++)
		{
			if (CheckPlayerEvent(player, 2048)) //Joined
				NetworkOptions(null);
		}
	}

	if (boolTest)
	{
		//Running
	}
}