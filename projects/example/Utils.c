#include "natives.h"
#include "types.h"
#include "constants.h"
#include "intrinsics.h"
#include "common.h"
#include "varargs.h"
#include "Utils.h"

#pragma warning( disable: 6384 )

Controller GetPlayerController()
{
	if (IS_LOCAL_PLAYER_VALID(0))
		return _GET_ACTOR_CONTROLLER(GET_PLAYER_ACTOR(0));
	return null;
}

bool IS_BIT_SET(int n, int k)
{
	return ((1 << k) & n) != 0;
}

void SET_BIT(int* n, int k)
{
	*n |= 1 << k;
}

void CLEAR_BIT(int* n, int k)
{
	*n &= ~(1 << k);
}

char* StringFmt(char* fmt, char* p1, char* p2, char* p3)
{
	UI_SET_STRING_FORMAT("Generic_Dbuffer128_0", fmt, p1, p2, p3);
	return (char*)UI_GET_STRING("Generic_Dbuffer128_0");
}

const char* GetRegion(int volume) //Awful but have to be done
{
	switch (volume)
	{
		case 5: return "Cholla Springs";
		case 6: return "Diez Coronas";
		case 7: return "Gaptooth Bridge";
		case 8: return "Great Plains";
		case 9: return "Hennigan's Stead";
		case 10: return "Perdido";
		case 11: return "Punta Orgullo";
		case 12: return "Rio Bravo";
		case 13: return "Tall Trees";
		case 14: return "Agave Viejo";
		case 15: return "Armadillo";
		case 16: return "Beecher's Hope";
		case 17: return "Benedict Point";
		case 18: return "Blackwater";
		case 19: return "Casa Madrugada";
		case 20: return "Chuparosa";
		case 21: return "Cochinay";
		case 22: return "Coot's Chapel";
		case 23: return "El Matadero";
		case 24: return "El Presidio";
		case 25: return "Escalera";
		case 26: return "Las Hermanas";
		case 27: return "MacFarlane's Ranch";
		case 28: return "Manzanita Post";
		case 29: return "Pacific Union RR Camp";
		case 30: return "Plainview";
		case 31: return "Ridgewood Farm";
		case 32: return "Rathskeller Fork";
		case 33: return "Thieve's Landing";
		case 34: return "Torquemada";
		case 35: return "Fort Mercer";
		case 36: return "Gaptooth Breach";
		case 37: return "Nosalida";
		case 38: return "Pike's Basin";
		case 39: return "Tesoro Azul";
		case 40: return "Tumbleweed";
		case 41: return "Twin Rocks";
		case 88: return "Broken Tree";
		case 89: return "Critchley's Ranch";
		case 90: return "Crooked Toes";
		case 91: return "Cueva Seca";
		case 92: return "Rio del Lobo";
		case 93: return "Roca de Madera";
		case 94: return "The Scratching Post";
		case 95: return "Silent Stead";
		case 96: return "Venter's Place";
		case 97: return "Rancho Polvo";
		case 98: return "Warthington Ranch";
		default: return "Unknown";
	}
}

const char* GetSlotColor(int slot)
{
	if (!NET_IS_IN_SESSION())
		return "Unknown";

	char temp[23] = "MPPlayerNameColored_";
	straddi_s(temp, slot);
	return UI_GET_STRING(temp);
}

void TeleportActor(Actor actor, vector3 position)
{
	float heading = GET_HEADING(actor);
	if (IS_ACTOR_RIDING(actor))
		TELEPORT_ACTOR(GET_MOUNT(actor), &position, 1, 1, 1);
	else if (IS_ACTOR_DRIVING_VEHICLE(actor))
		TELEPORT_ACTOR(GET_VEHICLE(actor), &position, 1, 1, 1);
	else
		TELEPORT_ACTOR_WITH_HEADING(actor, position, heading, 1, 1, 1);
}

#pragma region STUFF_TO_HIDE
void ftoa(float n, char* res, float decimalPlaces)
{
	bool frontneg = false;
	bool backneg = false;
	bool changeneg = false;
	int ipart = (int)n;
	if (ipart < 0)
		frontneg = true;
	float fpart = n - (float)ipart;
	fpart = fpart * POW(10.0f, decimalPlaces);
	if (fpart < 0)
		backneg = true;
	if (frontneg && backneg)
		fpart = -fpart;
	else if (!frontneg && backneg)
	{
		fpart = -fpart;
		ipart = -ipart;
	}
	if (ipart == 0 && backneg)
	{
		ipart = -1;
		changeneg = true;
	}
	char buffer[20];
	sprintf(buffer, "%i", ipart);
	if (changeneg)
		buffer[1] = '0';
	int length = STRING_LENGTH(buffer);
	for (int i = 0; i < length; i++)
		res[i] = buffer[i];
	if (decimalPlaces != 0.0f)
	{
		res[length] = '.';
		length++;
		sprintf(buffer, "%i", (int)fpart);
		int newlength = STRING_LENGTH(buffer);
		for (int i = 0; i < newlength; i++)
			res[length + i] = buffer[i];
	}
}

void vsprintf(char* buffer, const char* fmt, va_list va)
{
	int formatLen = STRING_LENGTH(fmt);
	char tempBuffer[4] = { 0, 0, 0, 0 };
	strcpy(buffer, "", 255);

	enum
	{
		PF_Positive,
		PF_Prefix
	};

	int PF_Options = 0;

	for (int i = 0; i < formatLen; i++)
	{
		#define AdvanceFormat() if (++i >= formatLen) goto end_sprintf;
		if (fmt[i] == '%')
		{
			AdvanceFormat();
			PF_Parse_Flags:
			switch (fmt[i])
			{
				case '+':
					bit_set(&PF_Options, PF_Positive);
					AdvanceFormat();
					goto PF_Parse_Flags;
				case '#':
					bit_set(&PF_Options, PF_Prefix);
					AdvanceFormat();
					goto PF_Parse_Flags;
			}

			switch (fmt[i])
			{
				case 'd':
				case 'i':
				{
					int value = va_arg(va, int);
					if (bit_test(PF_Options, PF_Positive) && value >= 0)
						stradd(buffer, "+", 255);
					straddi(buffer, value, 255);
				}
				break;
				case 'o':
					if (bit_test(PF_Options, PF_Prefix))
						stradd(buffer, "0", 255);
					straddi(buffer, IntToBase(va_arg(va, int), 8), 255);
					break;
				case 'p':
				case 'x':
					if (bit_test(PF_Options, PF_Prefix))
						stradd(buffer, "0x", 255);
					stradd(buffer, IntToHex(va_arg(va, int), true), 255);
					break;
				case 'X':
					if (bit_test(PF_Options, PF_Prefix))
						stradd(buffer, "0X", 255);
					stradd(buffer, IntToHex(va_arg(va, int), false), 255);
					break;
				case 'c':
					tempBuffer[0] = va_arg(va, char);
					stradd(buffer, tempBuffer, 255);
					break;
				case 's':
					stradd(buffer, va_arg(va, char*), 255);
					break;
				case 'n':
					*va_arg(va, int*) = STRING_LENGTH(buffer);
					break;
				case '%':
					tempBuffer[0] = fmt[i];
					stradd(buffer, tempBuffer, 255);
					break;
			}
		}
		else
		{
			tempBuffer[0] = fmt[i];
			stradd(buffer, tempBuffer, 255);
		}
	}
	end_sprintf:;
}
#pragma endregion

void sprintf(char* buffer, const char* fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	vsprintf(buffer, fmt, args);
}

void printf(char* fmt, ...)
{
	char text[255], buffer[255];

	va_list args;
	va_start(args, fmt);
	vsprintf(text, fmt, args);

	strcpy(buffer, "<0xFFA500><ROCKSTAR></0x> ", sizeof(buffer));
	stradd(buffer, text, sizeof(buffer));

	HUD_CLEAR_OBJECTIVE_QUEUE();
	MESSAGE_VARIABLE_ANALOG_QUEUE(buffer, 5.0f, true, 2, 1, 0, 0, 0);
}

void PrintChat(char* text, char* text2, char* text3)
{
	_PRINT_CHAT(text, text2, text3, 0, 0, 0, 0);
}

Script LaunchNewScript(char* script)
{
	if (!DOES_SCRIPT_EXIST(script))
	{
		return -1;
	}

	REQUEST_ASSET(script, ASSET_TYPE_Script);
	int id = GET_ASSET_ID(script, ASSET_TYPE_Script);

	while (!STREAMING_IS_SCRIPT_LOADED(id))
	{
		STREAMING_REQUEST_SCRIPT(id);
		WAIT(0);
	}

	Script scr = LAUNCH_NEW_SCRIPT(script, 0);
	ADD_PERSISTENT_SCRIPT(scr);
	return scr;
}