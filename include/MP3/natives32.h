/*H**********************************************************************
* FILENAME :	natives32.h					START DATE :	10 Sept 16
*
* DESCRIPTION :
*		Native functions to be used with all Max Payne 3 targets and platforms of SC-CL.
*
* NOTES :
*		This file is part of SC-CL's include library.
*
* LICENSE :
*
*		Copyright 2016 SC-CL
*
*		Redistribution and use in source and binary forms, with or without
*		modification, are permitted provided that the following conditions are met:
*
*		* Redistributions of source code must retain the above copyright
*		notice, this list of conditions and the following disclaimer.
*
*		* Redistributions in binary form must reproduce the above copyright
*		notice, this list of conditions and the following disclaimer in the
*		documentation and/or other materials provided with the distribution.
*
*		* Neither SC-CL nor its contributors may be used to endorse or promote products
*		derived from this software without specific prior written permission.
*
*		* Redistribution of this software in source or binary forms shall be free
*		of all charges or fees to the recipient of this software.
*
*		THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
*		ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
*		WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
*		DISCLAIMED. IN NO EVENT SHALL SC-CL BE LIABLE FOR ANY
*		DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
*		(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
*		LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
*		ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
*		(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
*		SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
* AUTHORS :
*		Rocko Tompkins
*		Nathan James
*H*/
#pragma once
#include "types.h"
#include "constants.h"

//Fix for intellisense nonsense
#ifndef _MSC_VER
#define _native __attribute((native))
#define _native32(hash) __attribute((native(hash)))
#define l ;
#else
#define _native
#define _native32(hash)
#define l {};
#endif

#pragma region SYSTEM
extern _native uint TIMERA(void)l
extern _native uint TIMERB(void)l
extern _native uint TIMERSYSTEM(void)l
extern _native void SETTIMERA(uint value)l
extern _native void SETTIMERB(uint value)l
extern _native void SETTIMERSYSTEM(uint value)l
extern _native uint TIMESTEP(void)l
extern _native float TIMESTEPUNWARPED(void)l
extern _native void WAIT(int timeMS)l
extern _native void WAITUNWARPED(int timeMS)l
extern _native void WAITUNPAUSED(int timeMS)l
extern _native void PRINTSTRING(const char* value)l
extern _native void PRINTFLOAT(float value)l
extern _native void PRINTFLOAT2(int wholenumbers, int decimalplaces, float value)l
extern _native void PRINTINT(int value)l
extern _native void PRINTINT2(int places, int value)l
extern _native void PRINTNL(void)l
extern _native void PRINTVECTOR(float x, float y, float z)l
extern _native void BREAKPOINT(void)l
extern _native float SIN(float value)l
extern _native float COS(float value)l
extern _native float SQRT(float value)l
extern _native float POW(float base, float power)l
extern _native float EXP(float exponent)l
extern _native float VMAG(float x, float y, float z)l
extern _native float VMAG2(float x, float y, float z)l
extern _native float VDIST(float x0, float y0, float z0, float x1, float y1, float z1)l
extern _native float VDIST2(float x0, float y0, float z0, float x1, float y1, float z1)l
extern _native int SHIFT_LEFT(int val, uint shifts)l
extern _native int SHIFT_RIGHT(int val, uint shifts)l
extern _native uint START_NEW_SCRIPT(const char* scriptName, uint stacksize)l
extern _native uint START_NEW_SCRIPT_WITH_ARGS(const char* scriptname, void *params, int paramcount, uint stacksize)l
extern _native uint START_NEW_SCRIPT_TYPED(const char* scriptname, uint stacksize, ScriptAny unk)l
extern _native uint START_NEW_SCRIPT_TYPED_WITH_ARGS(const char* scriptname, char* unk, void* params, int paramcount, uint stacksize)l
extern _native int FLOOR(float value)l
extern _native int CEIL(float value)l
extern _native int ROUND(float value)l
extern _native float TO_FLOAT(uint value)l
extern _native void SNAPSHOT_GLOBALS(void)l
extern _native void CLEAR_TEXT_LABEL(const char* label)l
#pragma endregion
extern _native void CREATE_AICOMBATACTION_COVERENTER(char* unk1, char* unk2, char* unk3)l
#pragma region AUDIO
extern _native ScriptAny CREATE_NEW_SCRIPTED_CONVERSATION(ScriptAny unk)l
extern _native void SET_CONVERSATION_CHECK_HASH(ScriptAny unk1, ScriptAny unk2)l
extern _native void ADD_LINE_TO_CONVERSATION(ScriptAny unk1, ScriptAny unk2, char* unk3, char* unk4, ScriptAny unk5, ScriptAny unk6, ScriptAny unk7, ScriptAny unk8, ScriptAny unk9)l
extern _native void ADD_PED_TO_CONVERSATION(ScriptAny unk1, int unk2, ScriptAny unk3, char* unk4)l
extern _native void ADD_PED_TO_CONVERSATION_ENUM(ScriptAny unk1, int unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native void START_SCRIPTED_CONVERSATION(ScriptAny unk1, char* unk2, ScriptAny unk3, char* unk4)l
extern _native void START_SCRIPT_CONVERSATION(ScriptAny unk1, bool unk2, bool unk3)l
extern _native bool IS_SCRIPTED_CONVERSATION_ONGOING(ScriptAny unk)l
extern _native int GET_CURRENT_SCRIPTED_CONVERSATION_LINE(ScriptAny unk)l
extern _native void PAUSE_SCRIPTED_CONVERSATION(ScriptAny unk, bool pause)l
extern _native ScriptAny STOP_SCRIPTED_CONVERSATION(ScriptAny unk1, bool unk2, bool unk3)l
extern _native void STOP_ALL_SCRIPTED_CONVERSATIONS(bool unk)l
extern _native void PRIVATE_SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE(ScriptAny unk)l
extern _native ScriptAny GET_CHECK_HASH_FROM_CONVERSATION_ID(ScriptAny unk)l
extern _native void GET_SPEECH_FOR_EMERGENCY_SERVICE_CALL(ScriptAny unk1, char* unk2)l
extern _native void PLAY_AUDIO_EVENT(const char* name)l
extern _native void PLAY_AUDIO_EVENT_FROM_PED(const char* name, Ped ped)l
extern _native void PLAY_AUDIO_EVENT_FROM_VEHICLE(const char* name, Vehicle veh)l
extern _native void PLAY_AUDIO_EVENT_FROM_OBJECT(const char* EventName, Object obj)l
extern _native void PLAY_COMPANION_DEATH_GUNSHOT(ScriptAny unk)l
extern _native bool IS_SCRIPT_AUDIO_BANK_LOADED(char* unk1, bool unk2)l
extern _native bool LOAD_SCRIPT_AUDIO_BANK(char* unk)l
extern _native bool REQUEST_SCRIPT_AUDIO_BANK(char* unk)l
extern _native void RELEASE_SCRIPT_AUDIO_BANK(void)l
extern _native void RELEASE_NAMED_SCRIPT_AUDIO_BANK(char* unk)l
extern _native uint GET_SOUND_ID(void)l
extern _native void RELEASE_SOUND_ID(uint sound)l
extern _native void PLAY_SOUND(int SoundId, const char* SoundName)l
extern _native void PLAY_SOUND_FRONTEND(uint sound, const char* soundName)l
extern _native void PLAY_SOUND_FROM_PED(int SoundId, const char* SoundName, Ped ped)l
extern _native void PLAY_SOUND_FROM_VEHICLE(int SoundId, const char* SoundName, Vehicle veh)l
extern _native void PLAY_SOUND_FROM_COORD(int sound_id, const char* name, float x, float y, float z)l
extern _native void PLAY_FIRE_SOUND_FROM_COORD(int sound_id, float x, float y, float z)l
extern _native void PLAY_SOUND_FROM_OBJECT(int sound_id, const char* name, Object obj)l
extern _native void STOP_SOUND(uint sound, bool unk)l
extern _native void SET_VARIABLE_ON_SOUND(uint sound, const char* varname, float value)l
extern _native bool HAS_SOUND_FINISHED(uint sound)l
extern _native void AUDIO_RESET_PED_DEAD_SPEECH_FLAG(ScriptAny unk)l
extern _native void SCREAM(ScriptAny unk)l
extern _native void PLAY_PED_AMBIENT_SPEECH(ScriptAny unk1, char* unk2, bool unk3, bool unk4, ScriptAny unk5, bool unk6, ScriptAny unk7)l
extern _native void PLAY_PED_AMBIENT_SPEECH_WITH_VOICE(ScriptAny unk1, char* unk2, char* unk3, bool unk4, bool unk5, ScriptAny unk6, bool unk7, ScriptAny unk8)l
extern _native void PRELOAD_ANNOUNCER_SPEECH(char* unk1, bool unk2)l
extern _native void PLAY_PRELOADED_ANNOUNCER_SPEECH(void)l
extern _native void PLAY_PRELOADED_SPEECH(ScriptAny unk)l
extern _native void PLAY_RELIEF_SIGH(ScriptAny unk)l
extern _native void SET_AMBIENT_VOICE_NAME(Ped ped, const char* name, float unk)l
extern _native void SET_PED_VOICE_FULL(ScriptAny unk)l
extern _native void SET_VOICE_ID_FROM_HEAD_COMPONENT(ScriptAny unk)l
extern _native void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(ScriptAny unk)l
extern _native bool IS_AMBIENT_SPEECH_PLAYING(Ped ped)l
extern _native bool IS_SCRIPTED_SPEECH_PLAYING(Ped ped)l
extern _native bool IS_ANY_SPEECH_PLAYING(Ped ped)l
extern _native bool IS_MONOLOGUE_PLAYING(void)l
extern _native int TIME_SINCE_LAST_MONOLOGUE(void)l
extern _native void PLAY_PED_AUDIO_EVENT_ANIM(ScriptAny unk1, char* unk2)l
extern _native void PLAY_END_CREDITS_MUSIC(bool play)l
extern _native int GET_CUTSCENE_AUDIO_TIME_MS(void)l
extern _native void STOP_CUTSCENE_AUDIO(void)l
extern _native void SET_GAMEWORLD_AUDIO_MUTE(bool mute)l
extern _native void SET_AUDIO_PAUSE(bool pause)l
extern _native void SILENCE_VEHICLE(ScriptAny unk1, bool unk2)l
extern _native void SET_TRAIN_AUDIO_ROLLOFF(Vehicle train, float rolloff)l
extern _native void SET_HELI_AUDIO_MAX_OCCLUSION(void)l
extern _native void SET_COLLISION_AUDIO_DISABLED(bool disable)l
extern _native ScriptAny GET_SCRIPT_STREAM_STATE(char* unk1, int unk2)l
extern _native bool LOAD_SCRIPT_STREAM(char* unk1, int unk2)l
extern _native bool REQUEST_SCRIPT_STREAM(char* unk1, int unk2)l
extern _native bool CLEAR_SCRIPT_STREAM_REQUESTS(char* unk)l
extern _native void PLAY_SCRIPT_STREAM_FROM_PED(Ped ped, int unk2)l
extern _native void PLAY_SCRIPT_STREAM_FROM_OBJECT(Object object, int unk2)l
extern _native void PLAY_SCRIPT_STREAM_FROM_VEHICLE(Vehicle veh, int unk2)l
extern _native void PLAY_SCRIPT_STREAM_FROM_COORD(float x, float y, float z, ScriptAny unk)l
extern _native void PLAY_SCRIPT_STREAM_FRONTEND(int unk)l
extern _native void PLAY_SCRIPT_STREAM_FRONTEND_INT(int unk1, ScriptAny unk2)l
extern _native void STOP_SCRIPT_STREAM(int unk)l
extern _native void ENABLE_PED_PAIN(Ped ped, bool enable)l
extern _native void STOP_PED_SPEAKING(Ped ped, bool stopspeaking)l
extern _native bool IS_AMBIENT_SPEECH_DISABLED(Ped ped)l
extern _native void AUDIO_SET_PLAYER_PAIN_NAME(char* name)l
extern _native void AUDIO_SET_SIDEKICK_PAIN_NAME(char* name)l
extern _native void SET_SIREN_WITH_NO_DRIVER(Vehicle car, bool set)l
extern _native bool IS_GAME_IN_CONTROL_OF_MUSIC(void)l
extern _native void SET_END_CREDITS_FADE_ACTIVE(bool set)l
extern _native ScriptAny AUD_GET_ANIM_MARKER_LEVEL(void)l
extern _native void ENABLE_AMBIENT_ZONE(char* ambient, bool enable)l
extern _native void ENABLE_WALLA_ZONE(char* walla, bool enable)l
extern _native void ENABLE_STATIC_EMITTER(char* emitter, bool enable)l
extern _native void SET_STATIC_EMITTER_VOLUME(char* emitter, float volume)l
extern _native void CHANGE_STATIC_EMITTER_SOUND(char* emitter, char* sound)l
extern _native void ENABLE_AMBIENT_STREAM(char* ambient, bool enable)l
extern _native void CHANGE_AMBIENT_STREAM_SOUND(char* ambient, char* sound)l
extern _native void SET_FADE_MUTE_OVERRIDE(bool mute)l
extern _native void SET_LOBBY_MUTE_OVERRIDE(bool set)l
extern _native void ENABLE_AUDIO_MISSION_FLAG(ScriptAny unk, bool enable)l
extern _native void AUD_SET_IS_POWER_ON(bool set)l
extern _native void TRIGGER_THUNDER(float unk1, bool unk2)l
extern _native void TRIGGER_LIGHTNING(bool unk)l
extern _native void PLAY_MUSIC(char* unk1, ScriptAny unk2)l
extern _native void STOP_MUSIC(void)l
extern _native void ENABLE_AUDIO_MIX_LAYER(ScriptAny unk1, bool unk2, float unk3, ScriptAny unk4)l
extern _native void TRIGGER_EXPLOSION_AUDIO_MIX_LAYER(char* explosion, float x, float y, float z)l
extern _native void TRIGGER_EXPLOSION_AUDIO_FROM_PED(char* explosion, Ped ped)l
extern _native void TRIGGER_EXPLOSION_AUDIO_FROM_OBJECT(char* explosion, Object object)l
extern _native void TRIGGER_EXPLOSION_AUDIO_FROM_COORDS(char* explosion, float x, float y, float z)l
extern _native void MUTE_EXPLOSIONS(void)l
extern _native void UNMUTE_EXPLOSIONS(void)l
extern _native void ENABLE_HEARTBEAT_RUMBLE(bool enable)l
extern _native void ENABLE_TINNITUS(bool enable)l
extern _native void ENABLE_MPM(bool enable)l
extern _native void SET_DEATH_STATE_ACTIVE(bool set)l
extern _native void AUDIO_ENABLE_HEALTH_MIX(bool enable)l
extern _native void AUDIO_ENABLE_FE_MUSIC(bool enable)l
extern _native void SET_PED_HAS_SPECIAL_GUN_SOUND(Ped ped, bool set)l
extern _native void SET_PED_IS_HUMAN_SHIELD(Ped ped, bool set)l
extern _native void AUDIO_IGNORE_NEXT_WARP_TRANSITION_SOUND(void)l
extern _native void LOAD_BULLET_CAM_BANK(ScriptAny unk)l
extern _native void AUDIO_MUSIC_FORCE_TRACK(char* unk1, char* unk2, char* unk3, float unk4, ScriptAny unk5, ScriptAny unk6, float unk7, bool unk8)l
extern _native void AUDIO_MUSIC_FORCE_TRACK_HASH(uint hash, char* unk1, char* unk2, float unk3, ScriptAny unk4, ScriptAny unk5, float unk6, bool unk7)l
extern _native void AUDIO_MUSIC_SET_MOOD(char* unk1, char* unk2, float unk3, ScriptAny unk4, ScriptAny unk5)l
extern _native void AUDIO_MUSIC_ONE_SHOT(char* unk1, char* unk2)l
extern _native bool AUDIO_MUSIC_PLAY_PREPARED(void)l
extern _native void AUDIO_MUSIC_ADJUST_VOLUME(float volume)l
extern _native bool AUDIO_MUSIC_IS_PREPARED(void)l
extern _native void AUDIO_MUSIC_SET_STATE(char* state)l
extern _native void AUDIO_MUSIC_RELEASE_CONTROL(ScriptAny unk1, bool unk2)l
extern _native void AUDIO_MUSIC_SUSPEND(ScriptAny unk)l
extern _native void AUDIO_MUSIC_RESUME(void)l
extern _native bool AUDIO_IS_MUSIC_PLAYING(void)l
extern _native bool AUDIO_IS_SCRIPTED_MUSIC_PLAYING(void)l
extern _native bool AUDIO_IS_FRONTEND_MUSIC_PLAYING(void)l
extern _native void AUDIO_MUSIC_SET_SUSPENSE_ALLOWED(void)l
extern _native void AUDIO_MUSIC_PLAY_UNSCRIPTED_NOW(void)l
extern _native int AUDIO_MUSIC_GET_MS_UNTIL_AUDIO_SYNC(char* unk1, char* unk2, ScriptAny unk3, ScriptAny unk4, bool unk5)l
extern _native bool AUDIO_MUSIC_IS_AUDIO_SYNC_NOW(char* unk1, char* unk2, ScriptAny unk3, ScriptAny unk4, bool unk5)l
extern _native void AUDIO_MUSIC_CLEAR_AUDIO_SYNC_VARIABLES(void)l
extern _native bool AUDIO_MUSIC_IS_MARKER_IN_RANGE(char* unk1, char* unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native bool AUDIO_IS_CUTSCENE_PLAYING(void)l
extern _native bool AUDIO_MUSIC_REQUEST_ONESHOT(char* unk1, ScriptAny unk2)l
extern _native bool AUDIO_MUSIC_PRELOAD_ONESHOT(char* unk1, ScriptAny unk2)l
extern _native void AUDIO_MUSIC_PLAY_ONESHOT(void)l
extern _native void AUDIO_MUSIC_STOP_ONESHOT(void)l
extern _native bool AUDIO_MUSIC_IS_ONESHOT_PREPARED(char* unk)l
extern _native void AUDIO_SET_PED_FOOTSTEPS_ON(bool set)l
extern _native void AUDIO_SET_SINGLE_PED_FOOTSTEPS_ON(Ped ped, bool set)l
extern _native void AUDIO_SET_PED_FOOTSTEPS_VOLUME(Ped ped, float volume)l
extern _native void AUDIO_SET_PED_FOOTSTEPS_ROLLOFF(Ped ped, float rolloff)l
extern _native void AUDIO_DISABLE_WADING_SOUNDS(bool disable)l
extern _native void AUDIO_ENABLE_TV_MOVIE(bool enable)l
extern _native void AUDIO_SET_PED_HAS_MP_BURST_GROUNDED(Ped ped, bool set)l
extern _native void AUDIO_SET_BREATHING_STATUS(ScriptAny unk1, int unk2)l
extern _native void AUDIO_CHANGE_PORTAL_SETTINGS(char* unk1, char* unk2)l
extern _native void AUD_ENABLE_PRE_BINK_SHUTDOWN(bool enable)l
extern _native void AUDIO_LOAD_METADATA(char* unk1, char* unk2, char* unk3)l
extern _native void AUDIO_UNLOAD_METADATA(char* unk1, char* unk2)l
extern _native void AUDIO_LOAD_SPEECH_DATA(char* unk)l
extern _native void AUDIO_LOAD_BANK(char* unk1, char* unk2)l
extern _native void AUDIO_MAKE_SLOT_STATIC(char* unk)l
extern _native void PLAY_DLC_SOUND_FRONTEND(ScriptAny unk1, char* unk2, char* unk3)l
#pragma endregion
#pragma region CAMERA
extern _native void RENDER_SCRIPT_CAMS(bool unk1, bool unk2, ScriptAny unk3, bool unk4)l
extern _native Camera CREATE_CAM(char* unk1, bool unk2)l
extern _native Camera CREATE_CAM_WITH_PARAMS(char* unk1, float unk2, float unk3, float unk4, float unk5, float unk6, float unk7, float unk8, bool unk9)l
extern _native void DESTROY_CAM(Camera camera)l
extern _native void DESTROY_ALL_CAMS(void)l
extern _native bool DOES_CAM_EXIST(Camera camera)l
extern _native void SET_CAM_ACTIVE(Camera camera, bool value)l
extern _native bool IS_CAM_ACTIVE(Camera camera)l
extern _native bool IS_CAM_RENDERING(Camera camera)l
extern _native Camera GET_RENDERING_CAM(void)l
extern _native vector3 GET_CAM_COORD(Camera camera)l
extern _native vector3 GET_CAM_ROT(Camera camera)l
extern _native float GET_CAM_FOV(Camera camer)l
extern _native float GET_CAM_NEAR_CLIP(Camera camera)l
extern _native float GET_CAM_FAR_CLIP(Camera camera)l
extern _native float GET_CAM_NEAR_DOF(Camera camera)l
extern _native float GET_CAM_FAR_DOF(Camera camera)l
extern _native float GET_CAM_DOF_STRENGTH(Camera camera)l
extern _native float GET_CAM_MOTION_BLUR_STRENGTH(Camera camera)l
extern _native void SET_CAM_PARAMS(Camera camera, float unk1, float unk2, float unk3, float unk4, float unk5, float unk6, float unk7, ScriptAny unk8, ScriptAny unk9, ScriptAny unk10)l
extern _native void SET_CAM_COORD(Camera camera, float x, float y, float z)l
extern _native void SET_CAM_ROT(Camera camera, float angleX, float angleY, float angleZ)l
extern _native void SET_CAM_FOV(Camera camera, float fov)l
extern _native void SET_CAM_NEAR_CLIP(int cam, float clip)l
extern _native void SET_CAM_FAR_CLIP(int cam, float clip)l
extern _native void SET_CAM_NEAR_DOF(Camera cam, float unk1, float unk2)l
extern _native void SET_CAM_FAR_DOF(Camera cam, float unk1, float unk2)l
extern _native void SET_CAM_DOF_STRENGTH(Camera cam, float strength)l
extern _native void SET_CAM_MOTION_BLUR_STRENGTH(Camera cam, float strength)l
extern _native void SET_CAM_VIEW_MODE(int mode)l
extern _native int GET_CAM_VIEW_MODE(void)l
extern _native void ATTACH_CAM_TO_PED(Camera cam, Ped ped, float x, float y, float z, bool unk)l
extern _native void ATTACH_CAM_TO_VEHICLE(Camera cam, Vehicle veh, float x, float y, float z, bool unk)l
extern _native void ATTACH_CAM_TO_OBJECT(Camera cam, Object obj, float x, float y, float z, bool unk)l
extern _native void DETACH_CAM(Camera cam)l
extern _native void SET_CAM_INHERIT_ROLL_OBJECT(int cam, Object obj)l
extern _native void SET_CAM_INHERIT_ROLL_VEHICLE(int cam, Vehicle veh)l
extern _native void POINT_CAM_AT_COORD(int cam, float x, float y, float z)l
extern _native void POINT_CAM_AT_PED(Camera cam, Ped ped, float x, float y, float z, bool unk)l
extern _native void POINT_CAM_AT_VEHICLE(Camera cam, Vehicle veh, float x, float y, float z, bool unk)l
extern _native void POINT_CAM_AT_OBJECT(Camera cam, Object obj, float x, float y, float z, bool unk)l
extern _native void STOP_CAM_POINTING(Camera cam)l
extern _native Camera GET_DEBUG_CAM(void)l
extern _native void ADD_CAM_SPLINE_NODE(Camera cam, float unk1, float unk2, float unk3, float unk4, float unk5, float unk6)l
extern _native void SET_CAM_ACTIVE_WITH_INTERP(Camera cam, ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native bool IS_CAM_INTERPOLATING(Camera cam)l
extern _native void SHAKE_CAM(Camera cam, char* unk1, float unk2)l
extern _native bool IS_CAM_SHAKING(Camera cam)l
extern _native void SET_CAM_SHAKE_AMPLITUDE(Camera cam, float amplitude)l
extern _native void STOP_CAM_SHAKING(Camera cam, bool stop)l
extern _native void SET_HANDYCAM_SHAKE(Camera cam, bool unk1, bool unk2, ScriptAny unk3, float unk4, float unk5, float unk6, float unk7, float unk8, float unk9, ScriptAny unk10)l
extern _native bool IS_SCREEN_FADED_OUT(void)l
extern _native bool IS_SCREEN_FADED_IN(void)l
extern _native bool IS_SCREEN_FADING_OUT(void)l
extern _native bool IS_SCREEN_FADING_IN(void)l
extern _native void DO_SCREEN_FADE_IN(uint timeMS)l
extern _native void DO_SCREEN_FADE_OUT(uint timeMS)l
extern _native void SET_WIDESCREEN_BORDERS(bool set, ScriptAny unk)l
extern _native bool ARE_WIDESCREEN_BORDERS_ACTIVE(void)l
extern _native vector3 GET_GAMEPLAY_CAM_COORD(void)l
extern _native vector3 GET_GAMEPLAY_CAM_ROT(void)l
extern _native float GET_GAMEPLAY_CAM_FOV(void)l
extern _native float GET_GAMEPLAY_CAM_RELATIVE_HEADING(void)l
extern _native void SET_GAMEPLAY_CAM_RELATIVE_HEADING(float unk1, float unk2, bool unk3)l
extern _native float GET_GAMEPLAY_CAM_RELATIVE_PITCH(void)l
extern _native void SET_GAMEPLAY_CAM_RELATIVE_PITCH(float unk1, float unk2, bool unk3)l
extern _native void SHAKE_GAMEPLAY_CAM(char* unk1, float unk2)l
extern _native bool IS_GAMEPLAY_CAM_SHAKING(char* unk)l
extern _native void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(char* unk, float amplitude)l
extern _native void STOP_GAMEPLAY_CAM_SHAKING(char* unk1, bool unk2)l
extern _native void IS_SPHERE_VISIBLE(float x, float y, float z, float radius, bool unk)l
extern _native bool IS_FOLLOW_PED_CAM_ACTIVE(void)l
extern _native int GET_FOLLOW_PED_CAM_ZOOM_LEVEL(void)l
extern _native void SET_FOLLOW_PED_CAM_ZOOM_LEVEL(int level)l
extern _native bool IS_FOLLOW_VEHICLE_CAM_ACTIVE(void)l
extern _native int GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(void)l
extern _native void SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(int level)l
extern _native bool IS_AIM_CAM_ACTIVE(void)l
extern _native float GET_AIM_CAM_ZOOL_LEVEL(void)l
extern _native void SET_AIM_CAM_ZOOM_LEVEL(float level)l
extern _native void SET_CAMERA_OVERRIDE(char* unk1, char* unk2, bool unk3, bool unk4, bool unk5)l
extern _native void SET_GAMEPLAY_COORD_HINT(float x, float y, float z, ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native void SET_GAMEPLAY_PED_HINT(Ped ped, float x, float y, float z, bool unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native void SET_GAMEPLAY_VEHICLE_HINT(Vehicle veh, float x, float y, float z, bool unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native void SET_GAMEPLAY_OBJECT_HINT(Object obj, float x, float y, float z, bool unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native void SET_GAMEPLAY_HINT_FOV(float fov)l
extern _native void SET_GAMEPLAY_HINT_RELATIVE_PITCH(float unk1, float unk2)l
extern _native bool IS_GAMEPLAY_HINT_ACTIVE(void)l
extern _native void STOP_GAMEPLAY_HINT(void)l
extern _native void SET_CINEMATIC_BUTTON_ACTIVE(bool set)l
extern _native bool IS_BULLET_CAMERA_ACTIVE(void)l
extern _native bool IS_BULLET_CAMERA_SCENE_ACTIVE(ScriptAny unk)l
extern _native bool IS_BULLET_CAMERA_RUNNING(bool unk)l
extern _native bool SETUP_BULLET_CAMERA_SCENE(ScriptAny unk1, char* unk2, float unk3, float unk4, float unk5, float unk6, float unk7, float unk8, float unk9, float unk10, float unk11, float unk12, float unk13, float unk14, float unk15, float unk16, float unk17, float unk18, float unk19, float unk20, char* unk21, char* unk22)l
extern _native void SETUP_BULLET_CAMERA_ANIM_SCENE(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native void RESET_BULLET_CAMERA_TIMEWARP_SCALE(int scale)l
extern _native ScriptAny GET_BULLET_CAMERA_SCENE_START(char* unk)l
extern _native void SET_BULLET_CAMERA_VICTIM(ScriptAny unk1, ScriptAny unk2)l
extern _native void SET_BULLET_CAMERA_VEHICLE(ScriptAny unk1, ScriptAny unk2)l
extern _native void SET_BULLET_CAMERA_TRACKER(int unk)l
extern _native void SET_BULLET_CAMERA_OBJECT_TRACKER(int unk)l
extern _native void SET_BULLET_CAMERA_TRACKED_PED(int unk, Ped ped)l
extern _native ScriptAny GET_BULLET_CAMERA_MARKER(void)l
extern _native void BULLET_CAMERA_TRACK_UNTIL_GROUNDED(bool set)l
extern _native void BULLET_CAMERA_ALLOW_TRACK_BULLET(bool allow)l
extern _native void BULLET_CAMERA_PRELOAD_TEXT_BINK(char* text, bool unk)l
extern _native void SET_PED_BULLET_CAMERA_ON_NEXT_HIT(ScriptAny unk)l
extern _native void ALLOW_BULLET_CAMERA_TO_GAMEPLAY(bool unk1, bool unk2)l
extern _native bool IS_BULLET_CAMERA_TO_GAMEPLAY_ALLOWED(void)l
extern _native int GET_PRESET_DURATION(char* preset)l
extern _native bool SET_PRESET_TEXT(char* preset, int unk1, int unk2, char* text)l
extern _native bool SET_PRESET_TEXTVIDEO(char* preset, int unk1, int unk2, char* text)l
extern _native bool SET_PRESET_TEXT_TIMING(char* preset, ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, float unk4, ScriptAny unk5, float unk6, ScriptAny unk7, float unk8, ScriptAny unk9, float unk10, ScriptAny unk11, float unk12, ScriptAny unk13, float unk14)l
extern _native void SET_BCAM_STR_HELPER_TRACK_PLAYER(bool set)l
extern _native void SET_PORTAL_TRACK_DEATH_CAMERA(bool set)l
extern _native void ALLOW_BULLET_CAMERA_SLOWDOWN(bool allow)l
extern _native void TERMINATE_GAME_BULLET_CAMERA(void)l
extern _native void START_PANEL_WIPE(ScriptAny unk1, int unk2)l
extern _native void ENABLE_BULLET_CAMERA_WIPE(bool enable)l
extern _native bool IS_BULLET_CAMERA_WIPE_ENABLED(void)l
extern _native bool IS_BULLET_CAMERA_WIPE_STOPPED(void)l
extern _native void RESUME_BULLET_CAMERA_WIPE(void)l
extern _native void RESUME_BULLET_CAMERA_WIPE_ON_FADEIN(void)l
extern _native void FORCE_CUSTOM_WIPE_BULLET_CAMERA(bool force)l
extern _native void FORCE_QUICK_DEATH_CAMERAS(bool force)l
extern _native void ALLOW_BULLET_CAMERA_CHEAT(bool allow)l
extern _native void PLAY_KILLSTRIP_LOCAL(ScriptAny unk1, ScriptAny unk2)l
extern _native void FREEZE_CURRENT_PANEL(void)l
extern _native void SET_CAM_SIDE_LEFT(bool set)l
extern _native void SET_CAM_FORCE_LEFT_SIDE(bool set)l
extern _native void OVERRIDE_WARP_MODIFIER(bool unk, float modifier)l
extern _native void SET_RAIL_RELATIVE_DIR(bool unk, float dir)l
extern _native void CAMERA_POINT_AT_GRENADE(bool set)l
extern _native void CAMERA_POINT_AT_PED(Ped ped, ScriptAny unk)l
extern _native void CAMERA_POINT_AT_VEHICLE(Vehicle veh, ScriptAny unk)l
extern _native void CAMERA_POINT_AT_OBJECT(Object obj, ScriptAny unk)l
extern _native void CAMERA_POINT_AT_COORD(float x, float y, float z, ScriptAny unk)l
extern _native void CAMERA_CLEAR_POINT_AT_TARGET(void)l
extern _native bool CAMERA_IS_POINTING_AT_TARGET(void)l
extern _native void CAMERA_SNAP_POINT_AT_COORD(float x, float y, float z)l
extern _native void CAMERA_CAN_TARGET_OBJECT(Object obj, bool can)l
extern _native void CAMERA_CAN_TARGET_VEHICLE(Vehicle veh, bool can)l
extern _native void CAMERA_CAN_TARGET_TIRES(bool can)l
extern _native void CAMERA_CAN_TARGET_PROJECTILES(bool can)l
extern _native void CAMERA_FIRST_PERSON_TRACK_RATE(float rate)l
extern _native void CAMERA_AIM_OVERRIDE(bool enable)l
extern _native void CAMERA_ENABLE_FIRST_TIME_AIM_LOCK(bool enable)l
extern _native void CAMERA_USE_HANDY_CAM(bool unk1, float unk2, bool unk3)l
extern _native void CAMERA_ENABLE_SHOULDER_MODE(bool enable)l
extern _native bool CAMERA_SETTINGS_IS_HARD_LOCK_ENABLED(void)l
extern _native void CAMERA_PLAY_ANIMATED(char* unk1, char* unk2, bool unk3, float unk4, float unk5, float unk6, float unk7, bool unk8, ScriptAny unk9)l
extern _native void CAMERA_PLAY_ANIMATED_ATTACHED_VEHICLE(char* unk1, char* unk2, float unk3, float unk4, float unk5, float unk6, ScriptAny unk7, bool unk8, ScriptAny unk9)l
extern _native void CAMERA_PLAY_ANIMATED_ATTACHED_VEHICLE_RELATIVE(char* unk1, char* unk2, ScriptAny unk3, bool unk4, ScriptAny unk5)l
extern _native void CAMERA_PLAY_ANIMATED_ATTACHED_PED_RELATIVE(char* unk1, char* unk2, ScriptAny unk3, bool unk4, ScriptAny unk5)l
extern _native void CAMERA_PLAY_ANIMATED_WITH_SRL(char* unk1, char* unk2, bool unk3, float unk4, float unk5, float unk6, float unk7, bool unk8, char* unk9)l
extern _native void CAMERA_ANIMATED_USE_DOF(bool use)l
extern _native void CAMERA_ANIMATED_STOP(ScriptAny unk1, bool stop)l
extern _native int CAMERA_ANIMATED_CURRENT_TIME(void)l
extern _native int CAMERA_ANIMATED_LENGTH(char* unk1, char* unk2)l
extern _native bool IS_ANIMATED_CAMERA_PLAYING(void)l
extern _native bool CAMERA_ANIMATED_START_POSITION(char* unk1, char* unk2)l
extern _native bool CAMERA_ANIMATED_START_HEADING(char* unk1, char* unk2, char* unk3)l
extern _native void CAMERA_ANIMATED_START_FOV(char* unk1, char* unk2, char* unk3)l
extern _native void CAMERA_ANIMATED_RECORD_SRL(void)l
extern _native void CAMERA_SET_HIGH_COVER_LOCK_ON_ANGLE_LIMIT(float angle)l
extern _native void CAMERA_FREEZE_FRAME(bool unk1, ScriptAny unk2, ScriptAny unk3, float unk4)l
extern _native bool IS_CAMERA_AIMING_AT_ENEMY(void)l
extern _native void SET_CAMERA_USE_COVER_FOR_AIMING(bool set)l
extern _native void CAMERA_OVERRIDE_EFFECT_OBSTRUCTION(bool set)l
#pragma endregion
extern _native void SET_ACTTEST_ENABLED(char* unk1, bool unk2)l
extern _native void SET_ACTIONTREE_INFO(char* unk1, char* unk2, char* unk3)l
extern _native void GET_ACTIONTREE_INFO(char* unk1, ScriptAny unk2, char* unk3, ScriptAny unk4, char* unk5)l
#pragma region DEBUG
extern _native void SET_DEBUG_ACTIVE(void)l
extern _native void SET_DEBUG_TEXT_VISIBLE(void)l
extern _native void SCRIPT_ASSERT(char* unk1, ScriptAny unk2)l
extern _native void OPEN_DEBUG_FILE(void)l
extern _native void CLOSE_DEBUG_FILE(void)l
extern _native void SAVE_INT_TO_DEBUG_FILE(void)l
extern _native void SAVE_FLOAT_TO_DEBUG_FILE(void)l
extern _native void SAVE_NEWLINE_TO_DEBUG_FILE(void)l
extern _native void SAVE_STRING_TO_DEBUG_FILE(char* string)l
extern _native void OPEN_NAMED_DEBUG_FILE(char* unk1, char* unk2)l
extern _native void SAVE_INT_TO_NAMED_DEBUG_FILE(int value, char* unk1, char* unk2)l
extern _native void SAVE_FLOAT_TO_NAMED_DEBUG_FILE(float value, char* unk1, char* unk2)l
extern _native void SAVE_STRING_TO_NAMED_DEBUG_FILE(char* string, char* unk2, char* unk3)l
extern _native void SAVE_NEWLINE_TO_NAMED_DEBUG_FILE(char* unk1, char* unk2)l
extern _native void CLEAR_NAMED_DEBUG_FILE(char* unk1, char* unk2)l
extern _native void DEBUG_SET_SELECTED_PED(void)l
extern _native void SET_CURRENT_WIDGET_GROUP(void)l
extern _native void CLEAR_CURRENT_WIDGET_GROUP(void)l
extern _native int START_WIDGET_GROUP(char* unk)l
extern _native void STOP_WIDGET_GROUP(void)l
extern _native int ADD_WIDGET_INT_SLIDER(char* unk1, char* unk2)l
extern _native int ADD_WIDGET_FLOAT_SLIDER(char* unk1, char* unk2)l
extern _native int ADD_WIDGET_INT_READ_ONLY(char* unk1, char* unk2)l
extern _native int ADD_WIDGET_FLOAT_READ_ONLY(char* unk1, char* unk2)l
extern _native int ADD_WIDGET_BOOL(char* unk1, char* unk2)l
extern _native int ADD_WIDGET_STRING(char* string)l
extern _native void DELETE_WIDGET_GROUP(void)l
extern _native void DELETE_WIDGET(void)l
extern _native bool DOES_WIDGET_GROUP_EXIST(void)l
extern _native void START_NEW_WIDGET_COMBO(void)l
extern _native void ADD_TO_WIDGET_COMBO(char* unk)l
extern _native int STOP_WIDGET_COMBO(char* unk1, char* unk2)l
extern _native void GET_CONTENTS_OF_COMBO_WIDGET_SELECTION(int unk1, char* unk2)l
extern _native int ADD_TEXT_WIDGET(char* unk)l
extern _native void GET_CONTENTS_OF_TEXT_WIDGET(int unk1, char* unk2)l
extern _native void SET_CONTENTS_OF_TEXT_WIDGET(int unk1, char* unk2)l
extern _native void GET_NETWORK_RESTART_NODE_DEBUG(ScriptAny unk1, char* unk2)l
extern _native void PRINT_MISSION_DESCRIPTION(char* unk)l
extern _native void GET_NAME_OF_SCRIPT_TO_AUTOMATICALLY_START(ScriptAny unk1, char* unk2)l
extern _native void PRINT_MEMORY_STATS(void)l
extern _native void DISPLAYF(char* unk1, char* unk2)l
extern _native void ASSERTF(bool unk1, char* unk2, char* unk3)l
extern _native void SET_ENABLE_PED_PROCESS_INTELLIGENCE(void)l
extern _native vector3 GET_POSITION_OF_LAST_MOUSECLICK(void)l
extern _native void FORCE_OPEN_NETWORK(void)l
extern _native void FORCE_CLOSE_NETWORK(void)l
#pragma endregion
#pragma region UI
extern _native void SET_CHIQUITAS_ALWAYS_VISIBLE_ON_PLAYER(Player player, bool set)l
extern _native void SET_CHIQUITAS_ALWAYS_VISIBLE(bool set)l
extern _native bool UI_SET(ScriptAny unk1, ScriptAny unk2)l
extern _native bool UI_GET(ScriptAny unk1, ScriptAny unk2)l
extern _native bool UI_DOES_FRAME_EXIST_HASH(uint hash)l
extern _native bool UI_DOES_FRAME_EXIST_NAME(char* name)l
extern _native void UI_SET_MP_BIG_NUMBER(ScriptAny unk1, ScriptAny unk2)l
extern _native int UI_GET_SELECTED_INDEX(ScriptAny unk)l
extern _native void UI_SET_WORLDCONTAINER_POS(float x, float y, float z, ScriptAny unk)l
extern _native void UI_ADD_MP_HITMARK(ScriptAny unk1, ScriptAny unk2)l
extern _native void UI_REMOVE_MP_HITMARKS(void)l
extern _native bool UI_LOAD_AFTER_ACTION_REPORT(char* unk)l
extern _native bool UI_SHOW_TOOLTIP(ScriptAny unk1, char* unk2)l
extern _native void UI_CLEAR_TOOLTIP(void)l
extern _native void UI_LOAD_MINIMAP_TXD(char* txd)l
extern _native void FORCE_SUBTITLES(bool force)l
extern _native void PRINT(const char* gxtName, uint timeMS, bool enable)l
extern _native void PRINT_NOW(const char* gxtName, uint timeMS, bool enable)l
extern _native void CLEAR_PRINTS(void)l
extern _native void CLEAR_BRIEF(void)l
extern _native void PRINT_WITH_NUMBER(const char* gxtName, int value, uint timeMS, bool enable)l
extern _native void PRINT_WITH_NUMBER_NOW(const char* gxtName, int value, uint timeMS, bool enable)l
extern _native void PRINT_WITH_2_NUMBERS(const char* gxtName, int value1, int value2, uint timeMS, bool enable)l
extern _native void PRINT_WITH_2_NUMBERS_NOW(const char* gxtName, int value1, int value2, uint timeMS, bool enable)l
extern _native void PRINT_STRING_IN_STRING(const char* gxtName, const char* gxtText, uint timeMS, bool enable)l
extern _native void PRINT_STRING_IN_STRING_NOW(const char* gxtName, const char* gxtText, uint timeMS, bool enable)l
extern _native void PRINT_STRING_WITH_LITERAL_STRING(const char* gxtentry, const char* string, int time, int flag)l
extern _native void PRINT_STRING_WITH_LITERAL_STRING_NOW(const char* gxtName, const char* text, uint timeMS, bool enable)l
extern _native void CLEAR_THIS_PRINT(const char* gxtentry)l
extern _native void CLEAR_SMALL_PRINTS(void)l
extern _native ScriptAny IS_THIS_PRINT_BEING_DISPLAYED(const char* gxtentry, int Unk615, int Unk616, int Unk617, int Unk618, int Unk619, int Unk620, int Unk621, int Unk622, int Unk623, int Unk624)l
extern _native void LOAD_ADDITIONAL_TEXT(const char* textName, uint textIndex)l
extern _native void REQUEST_ADDITIONAL_TEXT(const char* textName, uint textIndex)l
extern _native bool HAS_ADDITIONAL_TEXT_LOADED(uint textIndex)l
extern _native void CLEAR_ADDITIONAL_TEXT(int textid, bool Unk634)l
extern _native bool IS_STREAMING_ADDITIONAL_TEXT(uint textIndex)l
extern _native bool HAS_THIS_ADDITIONAL_TEXT_LOADED(const char* textName, uint textIndex)l
extern _native bool IS_MESSAGE_BEING_DISPLAYED(void)l
extern _native bool DOES_TEXT_LABEL_EXIST(const char* gxtentry)l
extern _native uint GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(const char* gxtName)l
extern _native int GET_FIRST_INDEX_OF(char* str1, char* str2)l
extern _native uint GET_LENGTH_OF_LITERAL_STRING(const char* literalString)l
extern _native const char* GET_NTH_INTEGER_IN_STRING(const char* gxtName, uint index)l
extern _native bool IS_HUD_PREFERENCE_SWITCHED_ON(void)l
extern _native bool IS_HUD_RETICULE_COMPLEX(void)l
extern _native void SET_DISPLAY_FLAGS(int flags, bool unk)l
extern _native void DISPLAY_HUD(bool display)l
extern _native void SET_PAUSE_MENU_ACTIVE(bool set)l
extern _native void ENABLE_PAUSE_MENU(bool enable)l
extern _native void SET_ROUTE_FLASHES(void)l
extern _native void SET_BLIP_ROUTE(ScriptAny unk1, bool unk2)l
extern _native void ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(bool add)l
extern _native void SET_RADAR_ZOOM(float zoom)l
extern _native void GET_HUD_COLOUR(uint type, uint *pR, uint *pG, uint *pB, uint *pA)l
extern _native void GET_CORRECTED_COLOUR(uint r, uint g, uint b, uint *pR, uint *pG, uint *pB)l
extern _native void SET_FRONTEND_ACTIVE(bool set)l
extern _native bool IS_PAUSE_MENU_ACTIVE(void)l
extern _native void SET_NEXT_MULTIPLAYER_MESSAGE_TIMEOUT(ScriptAny unk1, ScriptAny unk2)l
extern _native void SET_NEXT_TICKER_MESSAGE_BACKGROUND_COLOR(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native void SET_MPITEMS_OVERHEAD_ICONS_ENABLED(bool unk1, bool unk2)l
extern _native void INIT_TICKER_DATA(char* unk)l
extern _native void ADD_TICKER_MESSAGE(char* unk)l
extern _native void ADD_MULTIPLAYER_MESSAGE(char* message, bool unk)l
extern _native void CLEAR_TICKER_MESSAGES(void)l
extern _native void CLEAR_CENTRAL_MESSAGES(void)l
extern _native void CLEAR_DEATH_RECORDS(void)l
extern _native void REGISTER_INJURY(void)l
extern _native void GET_PREVIOUS_FONT_SETTINGS(void)l
extern _native int GET_NUMBER_LINES_WITH_SUBSTRINGS(float Unk707, float Unk708, const char* str1, const char* str2, const char* str3)l
extern _native void DISPLAY_TEXT(float x, float y, const char* gxtName)l
extern _native void SET_TEXT_SCALE(float w, float h)l
extern _native void SET_TEXT_LINE_DISPLAY(uint unk1, uint unk2)l
extern _native void SET_TEXT_COLOUR(uint r, uint g, uint b, uint a)l
extern _native void SET_TEXT_JUSTIFY(bool value)l
extern _native void SET_TEXT_CENTRE(bool value)l
extern _native void SET_TEXT_TO_USE_TEXT_FILE_COLOURS(bool value)l
extern _native void SET_TEXT_LINE_HEIGHT_MULT(float lineHeight)l
extern _native void SET_TEXT_WRAP(float unk1, float unk2)l
extern _native void SET_TEXT_BACKGROUND(bool value)l
extern _native void SET_TEXT_USE_UNDERSCORE(bool value)l
extern _native void SET_TEXT_PROPORTIONAL(bool value)l
extern _native void LOAD_TEXT_FONT(uint font)l
extern _native bool IS_TEXT_FONT_LOADED(void)l
extern _native void SET_TEXT_FONT(uint font)l
extern _native void SET_TEXT_DRAW_BEFORE_FADE(bool value)l
extern _native void SET_TEXT_RIGHT_JUSTIFY(bool value)l
extern _native void DISPLAY_TEXT_WITH_NUMBER(float x, float y, const char* gxtName, int value)l
extern _native void DISPLAY_TEXT_WITH_2_NUMBERS(float x, float y, const char* gxtName, int number1, int number2)l
extern _native void DISPLAY_TEXT_WITH_3_NUMBERS(float x, float y, const char* gxtentry, int Unk649, int Unk650, int Unk651)l
extern _native void SET_TEXT_DROPSHADOW(bool displayShadow, uint r, uint g, uint b, uint a)l
extern _native void DISPLAY_TEXT_WITH_FLOAT(float x, float y, const char* gxtName, float value, uint unknown)l
extern _native void DISPLAY_TEXT_WITH_LITERAL_STRING(float x, float y, const char* gxtName, const char* literalStr)l
extern _native void DISPLAY_TEXT_WITH_TWO_LITERAL_STRINGS(float x, float y, const char* gxtName, const char* literalStr1, const char* literalStr2)l
extern _native void DISPLAY_TEXT_WITH_STRING(float x, float y, const char* gxtName, const char* gxtStringName)l
extern _native void DISPLAY_TEXT_WITH_TWO_STRINGS(float x, float y, const char* gxtName, const char* gxtStringName1, const char* gxtStringName2)l
extern _native void SET_TEXT_EDGE(bool displayEdge, uint r, uint g, uint b, uint a)l
extern _native void SET_TEXT_RENDER_ID(uint renderId)l
extern _native void GET_SCRIPT_RENDERTARGET_RENDER_ID(uint *pRenderId)l
extern _native void SET_SCRIPT_RENDERTARGET_SIZE_ID(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native void PRINT_HELP(const char* gxtName)l
extern _native void PRINT_HELP_WITH_NUMBER(const char* gxtName, int value)l
extern _native void PRINT_HELP_WITH_STRING(const char* gxtName, const char* gxtText)l
extern _native void PRINT_HELP_WITH_STRING_NO_SOUND(const char* gxtName, const char* gxtText)l
extern _native void CLEAR_HELP(void)l
extern _native void PRINT_HELP_FOREVER(const char* gxtName)l
extern _native void PRINT_HELP_FOREVER_WITH_NUMBER(const char* gxtName, int value)l
extern _native void PRINT_HELP_FOREVER_WITH_STRING(const char* gxtName, const char* gxtText)l
extern _native void PRINT_HELP_FOREVER_WITH_STRING_NO_SOUND(const char* gxtName, const char* gxtText)l
extern _native bool IS_HELP_MESSAGE_BEING_DISPLAYED(void)l
extern _native void SET_HELP_MESSAGE_BOX_SIZE(float Unk773)l
extern _native void GET_HELP_MESSAGE_BOX_SIZE(float *x, float *y)l
extern _native bool IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(const char* gxtentry)l
extern _native bool IS_THIS_HELP_MESSAGE_WITH_NUMBER_BEING_DISPLAYED(const char* gxtentry, int number)l
extern _native bool IS_THIS_HELP_MESSAGE_WITH_STRING_BEING_DISPLAYED(const char* gxtentry, const char* str)l
extern _native void DISPLAY_NON_MINIGAME_HELP_MESSAGES(bool Unk637)l
extern _native bool DOES_THIS_MINIGAME_SCRIPT_ALLOW_NON_MINIGAME_HELP_MESSAGES(void)l
extern _native void ADD_TO_PREVIOUS_BRIEF(const char* gxtentry)l
extern _native void ADD_TO_PREVIOUS_BRIEF_WITH_UNDERSCORE(const char* gxtentry)l
extern _native int GET_CENTRE_BLIP_ID(void)l
extern _native Blip GET_NEXT_BLIP_INFO_ID(uint type)l
extern _native Blip GET_FIRST_BLIP_INFO_ID(uint type)l
extern _native vector3 GET_BLIP_INFO_ID_COORD(Blip blip)l
extern _native uint GET_BLIP_INFO_ID_DISPLAY(Blip blip)l
extern _native uint GET_BLIP_INFO_ID_TYPE(Blip blip)l
extern _native uint GET_BLIP_INFO_ID_VEHICLE_INDEX(int index)l
extern _native uint GET_BLIP_INFO_ID_PED_INDEX(int index)l
extern _native uint GET_BLIP_INFO_ID_OBJECT_INDEX(int index)l
extern _native uint GET_BLIP_INFO_ID_PICKUP_INDEX(int index)l
extern _native void ADD_BLIP_FOR_GANG_TERRITORY(float x0, float y0, float x1, float y1, int colour, int *blip)l
extern _native Blip ADD_BLIP_FOR_VEHICLE(Vehicle veh)l
extern _native Blip ADD_BLIP_FOR_PED(Ped ped)l
extern _native void ADD_BLIP_FOR_OBJECT(Object obj, Blip *pBlip)l
extern _native void ADD_BLIP_FOR_PICKUP(Pickup pickup, Blip *pBlip)l
extern _native void ADD_BLIP_FOR_COORD(float x, float y, float z, Blip *pBlip)l
extern _native void GET_BLIP_COORDS(Blip blip, vector3 *pVector)l
extern _native void SET_BLIP_COORDS(Blip blip, float x, float y, float z)l
extern _native void ADD_BLIP_FOR_CONTACT(float x, float y, float z, Blip *pBlip)l
extern _native void SET_BLIP_ROTATION(Blip blip, float rotation)l
extern _native void SHOW_BLIP_ROTATION(Blip blip, bool show)l
extern _native void SET_BLIP_SPRITE(Blip blip, ScriptAny sprite)l
extern _native ScriptAny GET_BLIP_SPRITE(Blip blip)l
extern _native void SET_BLIP_NAME_FROM_TEXT_FILE(Blip blip, char* text)l
extern _native void SET_BLIP_NAME_FROM_ASCII(Blip blip, char* text)l
extern _native void SET_BLIP_ALPHA(Blip blip, uint alpha)l
extern _native uint GET_BLIP_ALPHA(Blip blip)l
extern _native void SET_BLIP_COLOUR(Blip blip, ScriptAny color)l
extern _native ScriptAny GET_BLIP_COLOUR(Blip blip)l
extern _native bool IS_BLIP_SHORT_RANGE(Blip blip)l
extern _native void SET_BLIP_MARKER_LONG_DISTANCE(int blip, bool set)l
extern _native void SET_BLIP_FLASHES(Blip blip, bool set)l
extern _native void SET_BLIP_FLASHES_ALTERNATE(Blip blip, bool set)l
extern _native void SET_BLIP_AS_SHORT_RANGE(Blip blip, bool value)l
extern _native void SET_TERRITORY_BLIP_SCALE(Blip blip, float unk1, float unk2)l
extern _native void SET_BLIP_SCALE(Blip blip, float scale)l
extern _native void SET_BLIP_PRIORITY(Blip blip, int priority)l
extern _native void SET_BLIP_DISPLAY(Blip blip, ScriptAny display)l
extern _native void REMOVE_BLIP(Blip blip)l
extern _native void REMOVE_ALL_SCRIPTED_BLIPS(void)l
extern _native void SET_BLIP_AS_FRIENDLY(Blip blip, bool value)l
extern _native bool DOES_BLIP_EXIST(Blip blip)l
extern _native void SET_BLIP_DIM(Blip blip, uint dim)l
extern _native void HIDE_LOADING_ON_FADE_THIS_FRAME(void)l
extern _native void SET_RADAR_AS_INTERIOR_THIS_FRAME(void)l
extern _native void SET_WIDESCREEN_FORMAT(int wideformatid)l
extern _native void DISPLAY_AREA_NAME(bool display)l
extern _native void DISPLAY_FRONTEND_MAP_BLIPS(bool display)l
extern _native void SET_MULTIPLAYER_HUD_TIME(const char* str)l
extern _native void SET_MULTIPLAYER_HUD_CASH(uint cash)l
extern _native void SET_MULTIPLAYER_HUD_SCORE_STATS(ScriptAny unk1, ScriptAny unk2)l
extern _native void HIDE_HELP_TEXT_THIS_FRAME(void)l
extern _native void DISPLAY_HELP_TEXT_THIS_FRAME(const char* gxtkey, bool Unk636)l
extern _native void NETWORK_SET_RADIOHUD_IN_LOBBY_OFF(void)l
extern _native char* GET_FRONTEND_STATE_NAME(ScriptAny unk1, char* unk2)l
extern _native void SET_PLAYER_ICON_COLOUR(int colour)l
extern _native void SET_PICKUP_BLIP_SCALE(float scale)l
extern _native void SET_PICKUP_BLIP_PRIORITY(int priority)l
extern _native void SET_PICKUP_BLIP_DISPLAY(ScriptAny display)l
extern _native void SET_PICKUP_BLIP_COLOUR(int color)l
extern _native void SET_PICKUP_BLIP_SPRITE(ScriptAny sprite)l
extern _native void SET_MPBAG_OVERHEAD_PARAMS(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4, bool unk5, bool unk6, char* unk7)l
extern _native void SET_SPECIAL_MPITEM_BLIP_PARAMS(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, float unk4, ScriptAny unk5, ScriptAny unk6, ScriptAny unk7)l
extern _native void OVERRIDE_ALREADY_PRESENT_MPITEM_BLIPS_WITH_LAST_PARAMS(void)l
extern _native void SET_INTERACTION_VOLUME_BLIP_PARAMS(ScriptAny unk1, short unk2, ScriptAny unk3, float unk4, short unk5, ScriptAny unk6)l
extern _native void CREATE_LOADOUT_SCREEN(void)l
extern _native void DESTROY_LOADOUT_SCREEN(void)l
extern _native void ACTIVATE_LOADOUT_SCREEN(void)l
extern _native void PLACE_LOADOUT_TO_INVENTORY(void)l
extern _native void PLACE_LOADOUT_ITEMS_TO_INVENTORY(void)l
extern _native void SAVE_LOADOUT_TO_PROFILE(void)l
extern _native bool LOADOUT_CHANGED_DURING_GAME(void)l
extern _native void RESET_LOADOUT_CHANGED_DURING_GAME(void)l
extern _native void REPLENISH_LOADOUT_IN_INVENTORY(void)l
extern _native int GET_NUM_LOADOUT_SLOTS(void)l
extern _native bool IS_LOADOUT_SLOT_AVAILABLE(int slot)l
extern _native void GET_LOADOUT_SLOT_NAME(int slot, char* name)l
extern _native int GET_CURRENT_LOADOUT_SLOT(void)l
extern _native void SET_CURRENT_LOADOUT_SLOT(int slot)l
extern _native void ADD_BULLET_CAM_TEXT(char* text, float x, float y, ScriptAny unk1, ScriptAny unk2, float unk3, float unk4, ScriptAny unk5, ScriptAny unk6, ScriptAny unk7, float unk8, float unk9, float unk10, float unk11)l
extern _native void CREATE_ANIMATED_TEXT(char* text, float x, float y)l
extern _native void SET_ANIMATED_TEXT_SCALE(float scalex, float scaley)l
extern _native void SET_ANIMATED_TEXT_COLOR(uint r, uint g, uint b, uint a)l
extern _native void SET_ANIMATED_TEXT_ANIMATIONS(ScriptAny unk1, ScriptAny unk2, float unk3, float unk4, ScriptAny unk5, ScriptAny unk6, ScriptAny unk7, float unk8, float unk9)l
extern _native void SET_ANIMATED_TEXT_TWITCH(float unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native void SET_ANIMATED_TEXT_JUSTIFY(bool value)l
extern _native void DRAW_ANIMATED_TEXT(void)l
extern _native float GET_ANIMATED_TEXT_WIDTH(void)l
extern _native float GET_ANIMATED_TEXT_HEIGHT(void)l
extern _native void ENABLE_SNIPER_HUD(bool enable)l
extern _native void SET_SNIPER_HUD_ALPHA(uint alpha)l
extern _native void HUD_SET_PLAYER_HEALTH_TEXTURE(char* texture)l
extern _native void ENABLE_PLAYERHEALTH(bool enable)l
extern _native void ENABLE_BULLETTIMEMETER(bool enable)l
extern _native void ENABLE_WEAPONPICKUP(bool enable)l
extern _native void SET_USING_ALT_HEALTH(bool set)l
extern _native void SET_PLAYER_ALT_HEALTH(float health)l
extern _native void SET_PLAYER_ALT_MAX_HEALTH(float max)l
extern _native void ENABLE_EQUIPPEDWEAPON(bool enable)l
extern _native void ENABLE_INVENTORY(bool enable)l
extern _native void ENABLE_CROSSHAIR(bool enable)l
extern _native void ENABLE_AMMOPICKUP(bool enable)l
extern _native void ENABLE_DEATHHELPERTEXT(bool enable, bool unk1, ScriptAny unk2)l
extern _native void ENABLE_GRENADE_WARNING(bool enable)l
extern _native void ALLOW_BULLET_CAMERA_TUTORIAL_MSG(bool allow)l
extern _native void TOGGLE_SECONDARY_LIFE_BAR(bool toggle)l
extern _native void SET_SECONDARY_LIFE_BAR_NAME(char* name)l
extern _native void SET_SECONDARY_LIFE_BAR_PERCENT(float percent)l
extern _native float GET_SECONDARY_LIFE_BAR_PERCENT(void)l
extern _native void SET_SECONDARY_LIFE_BAR_START_FLASH_PERCENT(float percent)l
extern _native void TOGGLE_SECONDARY_LIFE_BAR_FLASH(bool toggle)l
extern _native void SET_PROGRESS_BAR_VISIBLE(bool visible)l
extern _native void SET_PROGRESS_BAR_NAME(char* name)l
extern _native void SET_PROGRESS_BAR_PERCENT(float percent)l
extern _native float GET_PROGRESS_BAR_PERCENT(void)l
extern _native void SET_PROGRESS_BAR_START_FLASH_PERCENT(float percent)l
extern _native void SET_PROGRESS_BAR_FLASH(bool set)l
extern _native void SET_PROGRESS_BAR_POSITION(float x, float y)l
extern _native void SET_PROGRESS_BAR_COLOURS(ScriptAny unk1, ScriptAny unk2)l
extern _native void HUD_SET_CURRENT_STREAK(bool unk1, char* unk2)l
extern _native bool UI_IS_TOOLTIP_SHOWING(void)l
extern _native bool ISTOASTANIMATING(void)l
extern _native void SET_HUD_TIMER(ScriptAny unk1)l
extern _native void SET_INFO_TIMER(char* timer)l
extern _native void HUD_SCOREBOARD_SHOW(bool show)l
extern _native void HUD_SCOREBOARD_SORT_BY(char* sort)l
extern _native void HUD_SCOREBOARD_SETPLAYERVALUES_TEAM(ScriptAny unk, ScriptAny team)l
extern _native void HUD_SCOREBOARD_SETPLAYERVALUES_KILLDEATH(ScriptAny unk, ScriptAny kills, ScriptAny deaths)l
extern _native void HUD_SCOREBOARD_SETPLAYERVALUES_POINTS(ScriptAny unk, ScriptAny points)l
extern _native void HUD_SCOREBOARD_SETPLAYERVALUES_LIVES(ScriptAny unk, ScriptAny lives)l
extern _native void HUD_SCOREBOARD_SETPLAYERVALUES_ASSISTS(ScriptAny unk, ScriptAny assists)l
extern _native void HUD_SCOREBOARD_SETPLAYERVALUES_XP2(ScriptAny unk, ScriptAny xp)l
extern _native void HUD_SCOREBOARD_SETPLAYERVALUES_FAKE_DEAD(ScriptAny unk1, bool fake)l
extern _native void HUD_SCOREBOARD_SETPLAYERVALUES_FAKE_ALIVE(ScriptAny unk, bool fake)l
extern _native void HUD_SCOREBOARD_SETPLAYERVALUES_VENDETTA(ScriptAny unk, bool vendetta)l
extern _native void HUD_SCOREBOARD_SETPLAYERVALUES_ROLE(ScriptAny unk1, char* unk2, ScriptAny unk3)l
extern _native void HUD_SCOREBOARD_RESETPLAYERXP(ScriptAny unk)l
extern _native void HUD_SCOREBOARD_SETPLAYERBASEXP(ScriptAny unk, ScriptAny xp)l
extern _native void HUD_SCOREBOARD_RESETALLPLAYERXP(char* unk)l
extern _native ScriptAny HUD_SCOREBOARD_GETPLAYERPOSITION(ScriptAny unk)l
extern _native void HUD_SCOREBOARD_SETPROGRESS(ScriptAny unk1, ScriptAny unk2, char* unk3)l
extern _native void HUD_SCOREBOARD_SETTEAMNAMES(char* unk1, char* unk2)l
extern _native void SET_SECONDARY_LIFE_BAR_COLOR(ScriptAny color)l
extern _native void SET_SECONDARY_LIFE_BACKGROUND_COLOR(ScriptAny color)l
extern _native void SET_SECONDARY_LIFE_TEXT_COLOR(ScriptAny color)l
extern _native void SET_SECONDARY_LIFE_BAR_COLOR32(uint r, uint g, uint b)l
extern _native void SET_SECONDARY_LIFE_BACKGROUND_COLOR32(uint r, uint g, uint b)l
extern _native void SET_SECONDARY_LIFE_TEXT_COLOR32(uint r, uint g, uint b)l
extern _native void SET_SECONDARY_LIFE_ICON(char* icon)l
extern _native void SET_SECONDARY_LIFE_ICON_COLOR(ScriptAny color)l
extern _native void SET_SECONDARY_LIFE_ICON_COLOR32(uint r, uint g, uint b)l
extern _native void ENABLE_HIT_DETECTION(bool enable)l
extern _native void SET_KILL_EFFECT_NAME(char* name)l
extern _native void SET_INTERACTIONTEXT_VISIBLE(bool visible)l
extern _native void FORCE_INTERACTIONTEXT_VISIBLE(bool force)l
extern _native void SET_INTERACTIONTEXT_BUTTON(ScriptAny button)l
extern _native void SET_INTERACTIONTEXT_TEXT(char* text)l
extern _native void SET_INTERACTIONTEXT_PULSE(bool set)l
extern _native void SET_INTERACTIONTEXT_PULSE_PERIOD(float period)l
extern _native void SET_INTERACTIONTEXT_AVAILABLE(bool set)l
extern _native void SET_INTERACTIONTEXT_BUTTON_VISIBLE(bool set)l
extern _native void ENABLE_OVERHEAT_ICON(bool enable, char* unk)l
extern _native void SET_OVERHEAT_AMOUNT(float amount)l
extern _native void SET_CROSSHAIR_BLINK(void)l
extern _native void SET_CROSSHAIR_PULSE(void)l
extern _native void SET_SECONDARY_LIFE_SCALE(float scalex, float scaley)l
extern _native void SET_SECONDARY_LIFE_BAR_ALPHA(uint alpha)l
extern _native void TOGGLE_DISPLAY_AMMO(bool toggle)l
extern _native void DRAW_BACKGROUND(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native void ENABLE_TUTORIAL_HUD(bool enable)l
extern _native void ENABLE_CHECKPOINT_ICON(void)l
extern _native void ENABLE_DUAL_WIELD_IN_INVENTORY(bool enable)l
extern _native bool IS_SNIPER_SCOPE_VISIBLE(void)l
extern _native bool IS_SP_LEVEL_REPLAY(void)l
extern _native void FORCE_PAUSEMENU_OPEN(void)l
extern _native void SET_DISABLE_CUTSCENE_CROSSHAIRS(bool set)l
extern _native void INIT_RINGICON_DATA(ScriptAny* unk)l
extern _native void SET_RINGICON_OBJECT(ScriptAny unk1, char* unk2)l
extern _native void SET_RINGICON_PLAYER(ScriptAny unk1, char* unk2)l
extern _native void SET_RINGICON_WORLD(float x, float y, float z, char* unk)l
extern _native void SET_RINGICON_OBJECT_PERCENT(ScriptAny unk, float percent)l
extern _native void SET_RINGICON_PLAYER_PERCENT(ScriptAny unk, float percent)l
extern _native void SET_RINGICON_WORLD_PERCENT(float x, float y, float z, float percent)l
extern _native void CLEAR_RINGICON_OBJECT(ScriptAny unk)l
extern _native void CLEAR_RINGICON_PLAYER(ScriptAny unk)l
extern _native void CLEAR_RINGICON_WORLD(float x, float y, float z)l
extern _native void CLEAR_ALL_RINGICON_WORLD(void)l
extern _native bool IS_MP_TUTORIAL_MESSAGES_SHOWN(void)l
extern _native void UI_START_QTE_MINIGAME(float x, float y, float z, ScriptAny unk)l
extern _native void UI_STOP_QTE_MINIGAME(void)l
extern _native bool UI_IS_QTE_MINIGAME_FINISHED(void)l
extern _native bool UI_IS_QTE_MINIGAME_IN_WINDOW(void)l
extern _native bool IS_QUIT_CONFIRMING(void)l
extern _native bool UI_IS_QTE_MINIGAME_SUCCESS(void)l
extern _native bool UI_IS_QTE_MINIGAME_FAILURE(void)l
extern _native void DISABLE_RESTART_CHECKPOINT(bool disable)l
extern _native bool IS_RESTARTCHECKPOINT_DISABLED_BY_SCRIPT(void)l
extern _native void FORCE_RED_RETICULE(bool force)l
extern _native bool IS_INTERACTIONTEXT_ONSCREEN(void)l
extern _native bool IS_INTERACTIONTEXT_AVAILABLE(void)l
extern _native void SET_END_OF_PART_ONE(void)l
extern _native bool WAS_SINGLE_PLAYER_TITLE_SCREEN_ENTERED(void)l
extern _native void SET_SINGLE_PLAYER_TITLE_SCREEN_ENTRY_HANDLED(void)l
extern _native void SET_CONTROL_CONFIG_OPTION_DISABLED(bool set)l
extern _native bool IS_WEAPON_PICKUP_VISIBLE(void)l
extern _native void GET_STREAK_TEXTURE_DLC(ScriptAny unk1, char* unk2)l
extern _native ScriptAny GET_WEAPON_HUD_TEXTURE_DLC(ScriptAny unk1, char* unk2)l
#pragma endregion
extern _native void HUD_SET_SCORETIMER(char* unk1, bool unk2)l
extern _native void HUD_SCOREBOARD_SETGWNODE(ScriptAny unk1, char* unk2)l
extern _native void HUD_SCOREBOARD_SETGW_TALLY_SCORES(char* unk)l
extern _native bool HUD_ARE_GANGWARS_ANIMS_COMPLETE(void)l
extern _native void SETUP_HUD_SCOREBOARD(ScriptAny unk)l
extern _native void ADD_GRIT_SEGMENT(float unk1, char* unk2)l
extern _native void MODIFY_GRIT_SEGMENTS(ScriptAny unk)l
extern _native void MODIFY_GRIT_VALUE(ScriptAny unk1, bool unk2)l
extern _native bool CAN_CONSUME_GRIT_SEGMENTS(ScriptAny unk)l
extern _native void SET_NUM_GRIT_SEGS(int segs)l
extern _native void RESET_GRIT(void)l
extern _native void CLEAR_ALL_GRIT_SEGMENTS(void)l
extern _native ScriptAny GET_FULL_GRIT_SEGMENTS(void)l
#pragma region GAME
extern _native void SET_RICH_PRESENCE(ScriptAny Unk971, ScriptAny Unk972, ScriptAny Unk973, ScriptAny Unk974, ScriptAny Unk975)l
extern _native ScriptAny GET_CURRENT_ARCADE_MODE(void)l
extern _native ScriptAny GET_CURRENT_LEVEL_START(void)l
extern _native ScriptAny GET_CURRENT_LEVEL_FINISH(void)l
extern _native bool IS_ARCADE_MODE_ACTIVE(void)l
extern _native bool IS_IN_SCORE_ATTACK_MODE(void)l
extern _native bool IS_IN_NYMINUTE_MODE(void)l
extern _native bool IS_IN_CPCHALLENGE_MODE(void)l
extern _native bool IS_IN_NYM_HARDCORE_MODE(void)l
extern _native bool IS_IN_STORY_MODE(void)l
extern _native void DISPLAY_ARCADE_MODE_LEVEL_END(char* unk)l
extern _native void SET_HIGHEST_ARCADE_LEVEL_UNLOCKED(ScriptAny unk)l
extern _native void UPDATE_ARCADE_CHECK_POINT(ScriptAny unk)l
extern _native void SET_SAFE_TO_KILL_PLAYER(bool set)l
extern _native bool IS_SAFE_TO_KILL_PLAYER(void)l
extern _native float GET_TIME_REMAINING(void)l
extern _native void GET_CURRENT_LEVEL_NAME(ScriptAny unk, char* name)l
extern _native bool GET_FORCE_TIMER(void)l
extern _native void SET_FORCE_TIMER(bool force)l
extern _native void ADD_SCRIPTED_MESSAGE(ScriptAny unk1, ScriptAny unk2, char* message)l
extern _native int GET_CHECKPOINT_STREAK(void)l
extern _native void SET_CHECKPOINT_STREAK(int streak)l
extern _native float GET_CHECKPOINT_TIME_REMAINING(void)l
extern _native void SET_CHECKPOINT_TIME_REMAINING(float time)l
extern _native int GET_CPC_TIME(void)l
extern _native int GET_CPC_COMP_COUNT(void)l
extern _native int GET_CPC_VALUE(void)l
extern _native void GET_CPC_NAME(ScriptAny unk1, char* name)l
extern _native ScriptAny GET_CPC_CURRENT_CP(void)l
extern _native void SET_CPC_FRAME_TIME(int time, char* unk1, bool unk2)l
extern _native void SET_CPC_FRAME_COND(ScriptAny unk1, ScriptAny unk2, char* unk3, ScriptAny unk4, bool unk5)l
extern _native void SET_CPC_TIMER_STOP(bool stop)l
extern _native void SET_CPC_SUCCESS(bool set)l
extern _native void DISPLAY_CPC_GO(void)l
extern _native bool GET_CPC_FAILED_CP(void)l
extern _native void SET_CPC_FAILED_CP(bool set)l
extern _native bool GET_CPC_CAN_COUNT_DOWN(void)l
extern _native void SET_CPC_CAN_COUNT_DOWN(bool set)l
extern _native void SET_CPC_GOAL_COUNTER(ScriptAny unk)l
extern _native bool IS_GOLDEN_GUN_FINISHED(char* gun)l
extern _native void FOUND_EXPLORATION_ITEM(char* item)l
extern _native bool HAS_EXPLORATION_ITEM_BEEN_FOUND(char* item)l
extern _native void SET_RANDOM_SEED(int seed)l
extern _native void SET_TIME_SCALE(float scale)l
extern _native float GET_TIME_SCALE(void)l
extern _native void SET_MISSION_FLAG(bool isMission)l
extern _native bool GET_MISSION_FLAG(void)l
extern _native void SET_HIGHEST_DIFFICULTY_BEAT(void)l
extern _native void SET_WEATHER_TYPE_PERSIST(char* unk)l
extern _native void SET_WEATHER_TRANSITION_IMMEDIATE(bool set)l
extern _native void SET_WEATHER_TYPE_NOW_PERSIST(char* unk)l
extern _native void SET_RANDOM_WEATHER_TYPE(void)l
extern _native void CLEAR_WEATHER_TYPE_PERSIST(void)l
extern _native void SET_WIND(float wind)l
extern _native void SET_WEATHER_TRANSITION_SPEED(float speed)l
extern _native void ADD_WIND_THERMAL(float unk1, float unk2, float unk3, float unk4, float unk5, float unk6, float unk7)l
extern _native void REMOVE_WIND_THERMAL(ScriptAny unk)l
extern _native int GET_REAL_TIME(void)l
extern _native int GET_GAME_TIMER(void)l
extern _native int GET_REAL_GAME_TIMER(void)l
extern _native float GET_FRAME_TIME(void)l
extern _native float GET_REAL_FRAME_TIME(void)l
extern _native int GET_GAME_IDLE_TIMER(void)l
extern _native void RESET_GAME_IDLE_TIMER(void)l
extern _native float GET_RANDOM_FLOAT_IN_RANGE(float min, float max)l
extern _native int GET_RANDOM_INT_IN_RANGE(int min, int max)l
extern _native ScriptAny GET_GROUND_Z_FOR_3D_COORD(float x, float y, float z, float *pGroundZ)l
extern _native float ASIN(float value)l
extern _native float ACOS(float Unk496)l
extern _native float TAN(float value)l
extern _native float ATAN(float value)l
extern _native float ATAN2(float Unk497, float Unk498)l
extern _native bool IS_AREA_OCCUPIED(float x1, float y1, float z1, float x2, float y2, float z2, bool unknownFalse1, bool unknownTrue, bool unknownFalse2, bool unknownFalse3, bool unknownFalse4)l
extern _native bool IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(float pX, float pY, float pZ, float sizeX, float sizeY, float sizeZ)l
extern _native void CLEAR_AREA(float x, float y, float z, float radius, bool unknown)l
extern _native void CLEAR_AREA_OF_VEHICLES(float x, float y, float z, float radius)l
extern _native void CLEAR_ANGLED_AREA_OF_VEHICLES(float x, float y, float z, float radius, float unk1, float unk2, float unk3)l
extern _native void CLEAR_AREA_OF_OBJECTS(float x, float y, float z, float radius)l
extern _native void CLEAR_AREA_OF_PEDS(float x, float y, float z, float radius)l
extern _native void CLEAR_AREA_OF_COPS(float x, float y, float z, float radius)l
extern _native void CLEAR_PROJECTILES(void)l
extern _native void CLEAR_AREA_OF_FIRES_AND_EXPLOSIONS(float x, float y, float z, float radius)l
extern _native void SET_NETWORK_SETTINGS_MENU(bool set)l
extern _native void SET_CREDITS_ACTIVE(bool set)l
extern _native bool ARE_CREDITS_ACTIVE(void)l
extern _native void TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(const char* name)l
extern _native void TERMINATE_ALL_SCRIPTS_FOR_NETWORK_GAME(void)l
extern _native void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME(void)l
extern _native void NETWORK_REMOVE_OLD_BLIPS_FROM_CLEANUP_LIST(void)l
extern _native void SET_SCRIPT_SHOULD_BE_SAVED(void)l
extern _native void SET_PLAYER_CONTROL_ON_IN_MISSION_CLEANUP(bool set)l
extern _native bool SET_ONE_TIME_ONLY_COMMANDS_TO_RUN(void)l
extern _native float GET_DISTANCE_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2)l
extern _native float GET_ANGLE_BETWEEN_2D_VECTORS(float x1, float y1, float x2, float y2)l
extern _native float GET_HEADING_FROM_VECTOR_2D(float x, float y)l
extern _native ScriptAny GET_SAVEGAME_LEVEL(void)l
extern _native ScriptAny GET_LAST_LEVEL_PLAYED(void)l
extern _native ScriptAny REQUEST_SAVE(void)l
extern _native int REQUEST_LOAD(void)l
extern _native bool HAS_LOAD_JUST_OCCURRED(void)l
extern _native bool HAS_SELECTED_RETRY_CHECKPOINT(void)l
extern _native bool ARE_UNIT_TESTS_RUNNING(void)l
extern _native void BROADCAST_UNIT_TEST_MESSAGE(void)l
extern _native float PROJECTED_DISTANCE(float unk1, float unk2, float unk3, float unk4, float unk5, float unk6, float unk7, float unk8, float unk9)l
extern _native bool GET_BEST_HEADING_IF_POSSIBLE(float unk1, float unk2, float unk3, float unk4, float unk5, float unk6, float unk7, float unk8, float unk9, float* heading)l
extern _native ScriptAny GET_REQUESTED_LEVEL(void)l
extern _native void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, ScriptAny unk1, bool unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native void RESERVE_BULLETS(int unk)l
extern _native void GET_MODEL_DIMENSIONS(uint model, vector3 *pMinVector, vector3 *pMaxVector)l
extern _native void SET_FAKE_WANTED_LEVEL(int lvl)l
extern _native bool IS_BIT_SET(int val, int bitnum)l
extern _native void SET_BIT(int *val, int bit)l
extern _native void CLEAR_BIT(int *val, int bit)l
extern _native uint GET_HASH_KEY(const char* value)l
extern _native void SET_MINIGAME_IN_PROGRESS(bool set)l
extern _native bool IS_MINIGAME_IN_PROGRESS(void)l
extern _native bool IS_THIS_A_MINIGAME_SCRIPT(void)l
extern _native bool IS_SNIPER_INVERTED(void)l
extern _native bool IS_JAPANESE_GAME(void)l
extern _native uint GET_CURRENT_LANGUAGE(void)l
extern _native int GET_GAME_DIFFICULTY(void)l
extern _native int GET_LOWEST_USED_GAME_DIFFICULTY(void)l
extern _native int GET_PROFILE_SETTING(int settingid)l
extern _native bool SET_PROFILE_SETTING(int settingid, int value)l
extern _native int GET_STRING_WIDTH(const char* gxtName)l
extern _native int GET_STRING_WIDTH_WITH_NUMBER(const char* gxtName, int number)l
extern _native float GET_STRING_WIDTH_WITH_STRING(const char* gxtName, const char* literalString)l
extern _native void GET_LOCALISED_STRING(char* unk1, char* unk2)l
extern _native void SPLIT_LOCALISED_STRING(char* unk1, ScriptAny unk2, char* unk3, ScriptAny unk4, char* unk5, ScriptAny unk6, char* unk7, ScriptAny unk8, char* unk9)l
extern _native bool ARE_STRINGS_EQUAL(char* str1, char* str2)l
extern _native float ABSI(float value)l
extern _native float ABSF(float value)l
extern _native ScriptAny IS_SNIPER_BULLET_IN_AREA(float x0, float y0, float z0, float x1, float y1, float z1)l
extern _native bool IS_PROJECTILE_IN_AREA(float x0, float y0, float z0, float x1, float y1, float z1)l
extern _native bool IS_PROJECTILE_TYPE_IN_AREA(float x0, float y0, float z0, float x1, float y1, float z1, int type)l
extern _native bool IS_BULLET_IN_AREA(float x, float y, float z, float radius, bool unknownTrue)l
extern _native bool IS_BULLET_IN_BOX(float x1, float y1, float z1, float x2, float y2, float z2, bool unknown)l
extern _native bool IS_XBOX360_VERSION(void)l
extern _native bool IS_GERMAN_VERSION(void)l
extern _native bool IS_AUSSIE_VERSION(void)l
extern _native void GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(Interior interior, float x, float y, float z, float *pOffset)l
extern _native void GET_INTERIOR_HEADING(Interior interior, float *pHeading)l
extern _native bool IS_STRING_NULL(const char* str)l
extern _native bool STRING_TO_INT(const char* str, int *intval)l
extern _native void SET_PHONE_HUD_ITEM(int id, const char* gxttext, int Unk800)l
extern _native void SET_OVERRIDE_NO_SPRINTING_ON_PHONE_IN_MULTIPLAYER(bool Unk969)l
extern _native void SET_MESSAGES_WAITING(bool set)l
extern _native void SET_SLEEP_MODE_ACTIVE(bool set)l
extern _native void SET_BITS_IN_RANGE(int * Unk506, int rangebegin, int rangeend, int val)l
extern _native int GET_BITS_IN_RANGE(int val, int rangebegin, int rangeend)l
extern _native bool IS_BULLET_TIME_ACTIVE(bool unk)l
extern _native void SET_GAME_PAUSED(bool set)l
extern _native void SET_THIS_SCRIPT_CAN_BE_PAUSED(bool set)l
extern _native void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(bool allow)l
extern _native void CLEAR_NEWS_SCROLLBAR(void)l
extern _native void ADD_STRING_TO_NEWS_SCROLLBAR(const char* str)l
extern _native void SET_CHEAT_ACTIVE(ScriptAny cheat)l
extern _native void OVERRIDE_FREEZE_FLAGS(bool Unk504)l
extern _native void SET_GLOBAL_INSTANCE_PRIORITY(int priority)l
extern _native void SET_DEFAULT_GLOBAL_INSTANCE_PRIORITY(void)l
extern _native void SET_XBOX_SCREEN_SAVER(bool set)l
extern _native void PROCESS_MISSION_DELETION_LIST(void)l
extern _native bool IS_FRONTEND_FADING(void)l
extern _native bool IS_INTERIOR_SCENE(void)l
extern _native void POPULATE_NOW(void)l
extern _native int GET_INDEX_OF_CURRENT_LEVEL(void)l
extern _native bool GET_NAME_OF_CURRENT_LEVEL(ScriptAny unk1, char* name)l
extern _native void SWITCH_TO_LEVEL(ScriptAny level)l
extern _native void SWITCH_TO_LEVEL_NAME(char* level)l
extern _native void RETURN_TO_TITLESCREEN(char* unk)l
extern _native void RETURN_TO_MP_LOBBY(char* unk)l
extern _native void REGISTER_PERSISTENT_GLOBAL_VARIABLES(char* unk1, ScriptAny unk2)l
extern _native void GAMEPLAY_HELPER_BOX_CREATE(ScriptAny unk1, char* unk2, float unk3, float unk4, float unk5, float unk6, float unk7, float unk8)l
extern _native void GAMEPLAY_HELPER_BOX_ANGLED_CREATE(ScriptAny unk1, char* unk2, float unk3, float unk4, float unk5, float unk6, float unk7, float unk8, float unk9, float unk10, float unk11, bool unk12)l
extern _native void GAMEPLAY_HELPER_BOX_ANGLED_CREATE_VER2(ScriptAny unk1, char* unk2, float unk3, float unk4, float unk5, float unk6, float unk7, float unk8, float unk9, float unk10, float unk11)l
extern _native void GAMEPLAY_HELPER_BOX_DESTROY(char* unk)l
extern _native void GAMEPLAY_HELPER_BOX_SET_ENABLED(char* unk1, bool unk2)l
extern _native vector3 GET_GAMEPLAY_HELPER_BOX_COORD(char* helper)l
extern _native void SET_GAMEPLAY_HELPER_BOX_COORD(char* helper, float x, float y, float z)l
extern _native void GAMEPLAY_HELPER_CYLINDER_CREATE(ScriptAny unk1, char* unk2, float unk3, float unk4, float unk5, float unk6, float unk7)l
extern _native float GET_GAMEPLAY_HELPER_CYLINDER_RADIUS(ScriptAny* gameplayHelper)l
extern _native void SET_GAMEPLAY_HELPER_CYLINDER_RADIUS(ScriptAny* gameplayHelper, float radius)l
extern _native float GET_GAMEPLAY_HELPER_CYLINDER_HEIGHT(ScriptAny* gameplayHelper)l
extern _native void SET_GAMEPLAY_HELPER_CYLINDER_HEIGHT(ScriptAny* gameplayHelper, float height)l
extern _native void GAMEPLAY_HELPER_VOLUME_DESTROY(ScriptAny* gameplayHelper)l
extern _native void GAMEPLAY_HELPER_VOLUME_SET_ENABLED(ScriptAny* gameplayHelper, bool enable)l
extern _native vector3 GET_GAMEPLAY_HELPER_VOLUME_COORD(ScriptAny* gameplayHelper)l
extern _native void SET_GAMEPLAY_HELPER_VOLUME_COORD(ScriptAny* gameplayHelper, vector3 coords)l
extern _native void SET_INTERACTION_VOLUME_STATIC_VARIABLES(float unk1, float unk2, ScriptAny unk3)l
extern _native void ATTACH_INTERACT_VOLUME_TO_PED(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4, float unk5, float unk6, float unk7, float unk8, float unk9, float unk10, ScriptAny unk11)l
extern _native void ATTACH_EXPLOSIVE_INTERACT_VOLUME_TO_PED(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4, float unk5, float unk6, float unk7, float unk8, float unk9, float unk10, ScriptAny unk11, float unk12)l
extern _native void BOOBY_TRAP_ALL_CORPSE_VOLUMES(float unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native void CREATE_COORD_INTERACTION_VOLUME(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, float unk4, float unk5, float unk6, float unk7, float unk8, ScriptAny unk9, bool unk10, ScriptAny unk11, bool unk12)l
extern _native void REMOVE_INTERACTION_VOLUME_IF_EXISTS(ScriptAny unk1)l
extern _native void REMOVE_ALL_INTERACTION_VOLUMES(void)l
extern _native bool IS_PLAYER_INTERACTING_WITH_VOLUME(ScriptAny unk1, ScriptAny unk2)l
extern _native bool IS_ANYONE_INTERACTING_WITH_VOLUME(ScriptAny volume)l
extern _native bool IS_LOCAL_PLAYER_READY_TO_INTERACT_WITH(ScriptAny unk1)l
extern _native bool GET_INTERACTION_VOLUME_POS(ScriptAny unk1)l
extern _native ScriptAny GET_CHECKPOINT_SELECTED(void)l
extern _native bool IS_ROBO_TESTING(void)l
extern _native bool IS_PC_BUILD(void)l
extern _native vector3 VECTOR_ROTATE_AXIS(float unk1, float unk2, float unk3, float unk4, ScriptAny* unk5)l
extern _native void RESET_LAST_MAN_STANDING(void)l
extern _native void STRING_FORMAT(char* buffer, char* fmt, char* unk1, ScriptAny unk2)l
extern _native void STRING_FORMAT_HASH(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native void STRING_APPEND(ScriptAny unk1, char* unk2, char* unk3, ScriptAny unk4)l
extern _native void STRING_STORE(char* unk1, char* unk2)l
extern _native void SET_KILL_HEIGHT(float height)l
extern _native void MANOGAMETESTER_ENABLE(void)l
extern _native void MANOGAMETESTER_DISABLE(void)l
extern _native int MANOGAMETESTER_DUMP_NOW(void)l
extern _native float GET_CURRENT_FPS(void)l
extern _native bool IS_MAGDEMO(void)l
extern _native bool IS_AMED_ENABLED(void)l
extern _native bool IS_SCRIPTEDFX_ENABLED(void)l
extern _native bool IS_COLLECTABLE_ENABLED(void)l
extern _native bool IS_DEATH_PANEL_WIPE_ALLOWED(void)l
extern _native void RESET_CHECKPOINT_ATTEMPTS(void)l
extern _native void INCREMENT_CHECKPOINT_ATTEMPT(void)l
extern _native void ADJUST_AMMO_ATTEMPTS(void)l
extern _native void ADJUST_PAIN_KILLERS_ATTEMPTS(void)l
extern _native void DISABLE_FADE_BETWEEN_SP_LEVELS(void)l
extern _native void HANDLE_CHECKPOINT_RESTART(void)l
extern _native void SET_ARCADEMODE_EVENT(int unk1, ScriptAny unk2)l
extern _native bool IS_IN_SOUTHPAW_MODE(void)l
extern _native void SET_CASH_CLAN_DISCOUNT(float discount)l
extern _native bool IS_TICKER_ACTIVITY_LOW(void)l
extern _native bool IS_TICKER_ACTIVITY_HIGH(void)l
extern _native void STORE_FRONTEND_TIMECYCLE_SETTINGS(void)l
extern _native bool IS_RESTARTING_FE_FOR_NEW_GAME(void)l
extern _native bool IS_NEW_GAME_REQUESTED(void)l
extern _native void SET_NEW_GAME_READY(void)l
extern _native void FORCE_SKIP_ATTRACT_SCREEN(bool force)l
extern _native bool IS_CUSTOM_PLAYER_VARIATION(void)l
extern _native ScriptAny GET_CUSTOM_PLAYER_VARIATION(void)l
extern _native void SAVE_STORY_DISC_SWAP(char* unk1)l
extern _native int GET_CURRENT_DISC(void)l
extern _native void SET_VOLUME_SUCCESS_ANIM_DICT(ScriptAny unk)l
extern _native void ADD_VOLUME_SUCCESS_ANIM(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native void ADD_VOLUME_SUCCESS_VFX(ScriptAny unk1, ScriptAny unk2, float unk3, float unk4, float unk5, float unk6, float unk7)l
extern _native void PAIR_INTERACTION_VOLUMES(ScriptAny unk1, ScriptAny unk2)l
extern _native void SET_GRIT_VOLUME_OHD_POS(ScriptAny unk1, float unk2, float unk3, float unk4)l
extern _native ScriptAny GET_LOCAL_PLAYER_READY_TO_INTERACT_WITH(void)l
#pragma endregion
#pragma region BUTTONS
extern _native bool IS_PICKUP_CONSUMED(ScriptAny pickup)l
extern _native void SET_ACTION_CONSUMED(int action, bool consumed)l
extern _native bool IS_ACTION_CONSUMED(int action)l
extern _native bool DOES_PAD_EXIST(int pad)l
extern _native bool IS_BUTTON_PRESSED(uint padIndex, uint button)l
extern _native bool IS_BUTTON_JUST_PRESSED(uint padIndex, uint button)l
extern _native bool IS_CONTROL_PRESSED(int Unk823, int controlid)l
extern _native bool IS_CONTROL_JUST_PRESSED(int Unk822, int controlid)l
extern _native void GET_POSITION_OF_ANALOGUE_STICKS(uint padIndex, int *pLeftX, int *pLeftY, int *pRightX, int *pRightY)l
extern _native bool IS_KEYBOARD_KEY_PRESSED(int key)l
extern _native bool IS_KEYBOARD_KEY_JUST_PRESSED(int key)l
extern _native bool IS_GAME_KEYBOARD_KEY_PRESSED(int key)l
extern _native bool IS_GAME_KEYBOARD_KEY_JUST_PRESSED(int key)l
extern _native bool IS_MARKETING_KEYBOARD_KEY_JUST_PRESSED(int key)l
extern _native void SET_PAD_SHAKE(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native bool IS_LOOK_INVERTED(void)l
extern _native void SET_LOOK_INVERT(ScriptAny unk)l
extern _native void SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(bool set)l
extern _native ScriptAny GET_CURRENT_CONTROL_CONFIG(void)l
extern _native bool GET_PAD_PITCH_ROLL(uint padIndex, float *pPitch, float *pRoll)l
extern _native bool HAS_RELOADED_WITH_MOTION_CONTROL(int ukn0, bool *ukn)l
extern _native void SET_ALL_MOTION_CONTROL_PREFERENCES(void)l
extern _native int GET_MOTION_CONTROL_PREFERENCE(void)l
extern _native bool IS_USING_CONTROLLER(void)l
extern _native void SET_LEFT_TRIGGER_HOLD_TIME(int time)l
extern _native void SET_RIGHT_TRIGGER_HOLD_TIME(int time)l
#pragma endregion
#pragma region PED
extern _native void CREATE_PED(ScriptAny unk1, ScriptAny unk2, float unk3, float unk4, float unk5, float unk6, bool unk7, bool unk8)l
extern _native void RELEASE_PED_ENTITY_SYNC_POINT(ScriptAny unk)l
extern _native void CREATE_PED_CORPSE(ScriptAny unk1, ScriptAny unk2)l
extern _native void DELETE_PED_CORPSE(Ped corpse)l
extern _native void DELETE_ALL_PED_CORPSES(void)l
extern _native bool DOES_CORPSE_EXIST(Ped corpse)l
extern _native vector3 GET_CORPSE_COORDS(Ped corpse)l
extern _native void DELETE_PED(Ped* ped)l
extern _native vector3 GET_PED_COORDS(Ped ped)l
extern _native void SET_PED_COORDS(Ped ped, vector3 coords, bool unk)l
extern _native void SET_DEAD_PED_COORDS(Ped corpse, vector3 coords)l
extern _native void SET_PED_GORE(Ped ped, bool gore)l
extern _native void SET_PED_GORE_FROM_PLAYER(Ped ped, bool gore)l
extern _native void SET_PED_GORE_FROM_NPC(Ped ped, bool gore)l
extern _native void SET_PED_GORE_AS_ALLY(Ped ped)l
extern _native void SET_PED_GORE_AS_DEFAULT(Ped ped)l
extern _native void RESET_PED_GORE(Ped ped)l
extern _native void SET_PED_BLOOD_SMEAR(Ped ped, ScriptAny smear)l
extern _native void RESET_PED_BLOOD_SMEAR(Ped ped)l
extern _native void SET_FORCE_PLAYER_GORE(bool force)l
extern _native void TRANSFER_PED_BLOOD_HANDLE(Ped ped, ScriptAny handle)l
extern _native void ADD_PED_CLONE(Ped ped, vector3 coords, float unk)l
extern _native void RESET_PED_CLONES(Ped ped)l
extern _native void IS_PED_IN_AREA(Ped ped, vector3 area, float unk1, float unk2, float unk3, bool unk4)l

extern _native void IS_PED_IN_ANGLED_AREA()l
extern _native void IS_PED_AT_COORD()l
extern _native void IS_PED_AT_PED()l
extern _native void IS_PED_AT_VEHICLE()l
extern _native void IS_PED_AT_OBJECT()l
extern _native void IS_PED_IN_VEHICLE()l
extern _native void IS_PED_IN_MODEL()l
extern _native void IS_PED_IN_ANY_VEHICLE()l
extern _native void IS_PED_IN_CROSSHAIR_CONE()l
extern _native void CAN_PED_SEE_OTHER_PED()l
extern _native void GET_TIME_SINCE_PED_MADE_NOISE()l
extern _native void IS_PED_DEAD()l
extern _native void IS_PED_INJURED()l
extern _native void IS_PED_FATALLY_INJURED()l
extern _native void IS_PLAYER_BEING_ARRESTED()l
extern _native void CREATE_PED_INSIDE_VEHICLE()l
extern _native void IS_PED_IN_ZONE()l
extern _native void GET_PED_HEADING()l
extern _native void SET_PED_HEADING()l
extern _native void GET_PED_DIRECTION()l
extern _native void SET_FREEZE_PED_AIM()l
extern _native void SET_PED_DESIRED_HEADING()l
extern _native void IS_PED_FACING_PED()l
extern _native void IS_PED_TOUCHING_OBJECT()l
extern _native void SET_PED_OBLIVIOUS_TO_DANGER()l
extern _native void IS_PED_IN_MELEE_COMBAT()l
extern _native void SET_PED_AS_NO_LONGER_NEEDED()l
extern _native void SET_PED_HEALTH_AS_BOOST()l
extern _native void SET_PED_HEALTH()l
extern _native void GET_PED_HEALTH()l
extern _native void GET_PED_MAX_HEALTH()l
extern _native void IS_PED_STOPPED()l
extern _native void SET_PED_ONLY_DAMAGED_BY_PLAYER()l
extern _native void SET_PED_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP()l
extern _native void SET_PED_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP()l
extern _native void SET_PED_PROOFS()l
extern _native void SET_PED_DAMAGED_BY_TEAR_GAS()l
extern _native void IS_PED_ON_SCREEN()l
extern _native void IS_PED_SHOOTING_IN_AREA()l
extern _native void IS_ANY_PED_SHOOTING_IN_AREA()l
extern _native void IS_PED_SHOOTING()l
extern _native void SET_PED_ACCURACY()l
extern _native void SET_PED_PERFECT_ACCURACY_OVERRIDE()l
extern _native void SET_PED_ENABLE_DISTANCE_INACCURACY()l
extern _native void SET_PED_ENABLE_SPAWN_INACCURACY()l
extern _native void IS_PED_MODEL()l
extern _native void EXPLODE_PED_HEAD()l
extern _native void SET_PED_VISIBLE()l
extern _native void IS_PED_VISIBLE()l
extern _native void SET_PED_VISIBLE_DURING_SEQUENCE()l
extern _native void REMOVE_PED_ELEGANTLY()l
extern _native void ADD_ARMOUR_TO_PED()l
extern _native void HAS_PED_CLEAR_LOS_TO_PED()l
extern _native void HAS_PED_CLEAR_LOS_TO_SPHERE()l
extern _native void IS_PED_LOS_CLEAR_TO_TARGET_PED()l
extern _native void SET_PED_INTO_VEHICLE()l
extern _native void SET_PED_OUT_OF_VEHICLE()l
extern _native void CAN_CREATE_RANDOM_PED()l
extern _native void CREATE_RANDOM_PED()l
extern _native void CREATE_RANDOM_MALE_PED()l
extern _native void CREATE_RANDOM_FEMALE_PED()l
extern _native void CREATE_RANDOM_PED_AS_DRIVER()l
extern _native void SET_PED_ANIM_SPEED()l
extern _native void SET_PED_ALL_ANIMS_SPEED()l
extern _native void SET_PED_MOVE_ANIMS_BLEND_OUT()l
extern _native void SET_PED_CAN_BE_DRAGGED_OUT()l
extern _native void IS_PED_MALE()l
extern _native void GET_VEHICLE_PED_IS_IN()l
extern _native void SET_PED_DENSITY_MULTIPLIER()l
extern _native void SET_SCENARIO_PED_DENSITY_MULTIPLIER()l
extern _native void GET_CURRENT_BASIC_COP_MODEL()l
extern _native void GET_CURRENT_COP_MODEL()l
extern _native void SET_SCRIPTED_CONVERSION_COORD()l
extern _native void CLEAR_SCRIPTED_CONVERSION_COORD()l
extern _native void SET_PED_NON_REMOVAL_AREA()l
extern _native void CLEAR_PED_NON_REMOVAL_AREA()l
extern _native void SET_PED_NON_CREATION_AREA()l
extern _native void CLEAR_PED_NON_CREATION_AREA()l
extern _native void SET_PED_SUFFERS_CRITICAL_HITS()l
extern _native void SET_PED_READY_TO_BE_STUNNED()l
extern _native void GET_PED_READY_TO_BE_STUNNED()l
extern _native void SET_PED_READY_TO_BE_EXECUTED()l
extern _native void GET_PED_READY_TO_BE_EXECUTED()l
extern _native void SET_PED_MELEE_ACTION_FLAG0()l
extern _native void GET_PED_MELEE_ACTION_FLAG0()l
extern _native void SET_PED_MELEE_ACTION_FLAG1()l
extern _native void GET_PED_MELEE_ACTION_FLAG1()l
extern _native void SET_PED_MELEE_MOVEMENT_CONSTRAINT_BOX()l
extern _native void IS_PED_SITTING_IN_VEHICLE()l
extern _native void IS_PED_SITTING_IN_ANY_VEHICLE()l
extern _native void IS_PED_ON_FOOT()l
extern _native void IS_PED_ON_ANY_BIKE()l
extern _native void GET_DEAD_PED_PICKUP_COORDS()l
extern _native void IS_PED_IN_ANY_BOAT()l
extern _native void IS_PED_IN_ANY_HELI()l
extern _native void IS_PED_IN_ANY_PLANE()l
extern _native void IS_PED_IN_WATER()l
extern _native void SET_PED_SWEAT()l
extern _native void GET_PED_SWEAT()l
extern _native void SET_SWEAT_ENABLED()l
extern _native void SET_PED_WETNESS()l
extern _native void GET_PED_WETNESS()l
extern _native void GET_PED_WET_HEIGHT()l
extern _native void GET_OFFSET_FROM_PED_IN_WORLD_COORDS()l
extern _native void IS_PED_IN_FLYING_VEHICLE()l
extern _native void FREEZE_PED_POSITION()l
extern _native void SET_PED_USES_DYING_ANIM()l
extern _native void SET_PED_DIES_IN_WATER()l
extern _native void SET_PED_DIES_IN_SINKING_VEHICLE()l
extern _native void GET_PED_ARMOUR()l
extern _native void IS_PED_WAITING_FOR_WORLD_COLLISION()l
extern _native void HAS_PED_BEEN_DAMAGED_BY_PED()l
extern _native void HAS_PED_BEEN_DAMAGED_BY_VEHICLE()l
extern _native void SET_PED_STAY_IN_VEHICLE_WHEN_JACKED()l
extern _native void IS_PED_TOUCHING_VEHICLE()l
extern _native void SET_PED_CAN_BE_SHOT_IN_VEHICLE()l
extern _native void CLEAR_PED_LAST_DAMAGE_ENTITY()l
extern _native void GET_PED_LAST_DAMAGE_BONE()l
extern _native void CLEAR_PED_LAST_DAMAGE_BONE()l
extern _native void SET_PED_CAN_BE_TARGETTED()l
extern _native void IS_PED_IN_ANY_POLICE_VEHICLE()l
extern _native void DOES_PED_EXIST()l
extern _native void FREEZE_PED_POSITION_AND_DONT_LOAD_COLLISION()l
extern _native void SET_LOAD_COLLISION_FOR_PED_FLAG()l
extern _native void SET_PED_DUCKING()l
extern _native void IS_PED_DUCKING()l
extern _native void IS_PED_IN_ANY_TAXI()l
extern _native void SET_PED_SENSE_RANGE()l
extern _native void SET_PED_ID_RANGE()l
extern _native void SET_PED_SEEING_RANGE()l
extern _native void SET_PED_HEARING_RANGE()l
extern _native void SET_PED_FIELD_OF_VIEW()l
extern _native void SET_PED_STEALTH_MOVEMENT()l
extern _native void GET_PED_STEALTH_MOVEMENT()l
extern _native void IS_PED_PLAYING_ANIM()l
extern _native void HAS_PED_ANIM_FINISHED()l
extern _native void PED_ANIM_EVENT_OLD()l
extern _native void PED_ANIM_EVENT()l
extern _native void GET_PED_ANIM_CURRENT_TIME()l
extern _native void SET_PED_ANIM_CURRENT_TIME()l
extern _native void SET_PED_COLLISION()l
extern _native void GET_PED_ANIM_TOTAL_TIME()l
extern _native void CREATE_GROUP()l
extern _native void SET_PED_AS_GROUP_LEADER()l
extern _native void SET_PED_AS_GROUP_MEMBER()l
extern _native void REMOVE_GROUP()l
extern _native void REMOVE_DECISION_MAKER()l
extern _native void GET_PED_MODEL()l
extern _native void GET_PED_SPEED()l
extern _native void REMOVE_PED_FROM_GROUP()l
extern _native void IS_PED_GROUP_MEMBER()l
extern _native void IS_PED_GROUP_LEADER()l
extern _native void SET_GROUP_SEPARATION_RANGE()l
extern _native void SET_GROUP_RATIO_FIRING_AT_VISIBLE()l
extern _native void SET_GROUP_RATIO_FIRING_AT_INVISIBLE()l
extern _native void SET_GROUP_MAX_NUMS_FIRING()l
extern _native void SET_GROUP_MAX_NUM_MOVING()l
extern _native void SET_GROUP_MAX_NUM_ADVANCING()l
extern _native void SET_GROUP_LAST_ALIVE_AS_LONE_WOLF()l
extern _native void CLEAR_PED_DECISION_MAKER_EVENT_RESPONSE()l
extern _native void ADD_PED_DECISION_MAKER_EVENT_RESPONSE()l
extern _native void COPY_PED_DECISION_MAKER()l
extern _native void COPY_GROUP_PED_DECISION_MAKER()l
extern _native void LOAD_PED_DECISION_MAKER()l
extern _native void SET_PED_DECISION_MAKER()l
extern _native void SET_PED_DECISION_MAKER_TO_DEFAULT()l
extern _native void SET_GROUP_PED_DECISION_MAKER()l
extern _native void IS_PED_RELOADING()l
extern _native void IS_PED_DUAL_WIELDING()l
extern _native void IS_PED_INVESTIGATING()l
extern _native void IS_PED_IN_COMBAT()l
extern _native void IS_PED_DOING_DRIVEBY()l
extern _native void IS_PED_JACKING()l
extern _native void IS_PED_BEING_JACKED()l
extern _native void IS_PED_RETREATING()l
extern _native void IS_PED_FLEEING()l
extern _native void IS_PED_IN_COVER()l
extern _native void SET_PED_PINNED_DOWN()l
extern _native void IS_PED_RUNNING_TASK()l
extern _native void GIVE_PED_PICKUP_OBJECT()l
extern _native void SET_PED_RELATIONSHIP_GROUP()l
extern _native void SET_GANG_RELATIONSHIPS_CAN_BE_CHANGED_BY_NEXT_COMMAND()l
extern _native void SET_RELATIONSHIP_BETWEEN_REL_GROUPS()l
extern _native void CLEAR_RELATIONSHIP_BETWEEN_REL_GROUPS()l
extern _native void SET_PED_RELATIONSHIP()l
extern _native void CLEAR_PED_RELATIONSHIP()l
extern _native void SET_PED_CAN_BE_TARGETED_WITHOUT_LOS()l
extern _native void SET_PED_TO_INFORM_RESPECTED_FRIENDS()l
extern _native void IS_PED_RESPONDING_TO_EVENT()l
extern _native void SET_PED_IS_TARGET_PRIORITY()l
extern _native void SET_PED_SHOOT_RATE()l
extern _native void GET_GROUP_SIZE()l
extern _native void DOES_GROUP_EXIST()l
extern _native void GET_PED_GROUP_INDEX()l
extern _native void IS_PED_IN_GROUP()l
extern _native void SET_GROUP_FORMATION()l
extern _native void SET_GROUP_FORMATION_SPACING()l
extern _native void SET_GROUP_FORMATION_WALK_ALONGSIDE_LEADER_WHEN_CLOSE()l
extern _native void SET_GROUP_FORMATION_MAX_MOVE_SPEED()l
extern _native void SET_GROUP_GRENADE_PARAMS()l
extern _native void GET_VEHICLE_PED_IS_USING()l
extern _native void IS_PED_IN_AIR()l
extern _native void GET_PED_HEIGHT_ABOVE_GROUND()l
extern _native void SET_PED_GRAVITY()l
extern _native void SET_PED_VELOCITY()l
extern _native void GET_PED_VELOCITY()l
extern _native void SET_PED_ROTATION()l
extern _native void APPLY_DAMAGE_TO_PED()l
extern _native void APPLY_DAMAGE_TO_PED_WITH_HASH()l
extern _native void SET_PED_ALLOWED_TO_DUCK()l
extern _native void SET_PED_ALLOWED_TO_STAND()l
extern _native void SET_PED_ALLOWED_TO_ATTACK_IF_SURRENDERED()l
extern _native void SET_PED_ALLOWED_TO_DESTROY_IF_SURRENDERED()l
extern _native void SET_PED_ALLOWED_TO_SURRENDER()l
extern _native void GET_PED_HAS_SURRENDERED()l
extern _native void SET_PED_ALLOWED_TO_KNEEL_AND_FIRE()l
extern _native void SET_PED_FORCE_KNEEL_AND_FIRE()l
extern _native void SET_PED_NEVER_LEAVES_GROUP()l
extern _native void SET_PED_FORCE_FIRE()l
extern _native void GET_DEAD_PED_COORDS()l
extern _native void GET_PED_TYPE()l
extern _native void SET_PED_MAX_HEALTH()l
extern _native void SET_PED_MAX_TIME_IN_WATER()l
extern _native void SET_PED_MAX_TIME_UNDERWATER()l
extern _native void SET_GROUP_PED_DUCKS_WHEN_AIMED_AT()l
extern _native void SET_PED_COMBAT_ADVANCE_DELAY_TIME()l
extern _native void SET_PED_CAN_BE_KNOCKED_OFF_BIKE()l
extern _native void KNOCK_PED_OFF_BIKE()l
extern _native void SET_PED_COORDS_NO_GANG()l
extern _native void GET_PED_AS_GROUP_MEMBER()l
extern _native void GET_PED_AS_GROUP_LEADER()l
extern _native void IS_PED_STUCK_UNDER_VEHICLE()l
extern _native void SET_PED_KEEP_TASK()l
extern _native void IS_PED_SWIMMING()l
extern _native void SET_PED_COORDS_NO_OFFSET()l
extern _native void SET_PED_DIES_IN_VEHICLE()l
extern _native void SET_CREATE_RANDOM_COPS()l
extern _native void CAN_CREATE_RANDOM_COPS()l
extern _native void SET_PED_DRUGGED_UP()l
extern _native void SET_PED_IN_CUTSCENE()l
extern _native void SET_PED_AS_ENEMY()l
extern _native void SET_PED_AS_PRIMARY_CHAR()l
extern _native void SET_PED_CAN_SMASH_GLASS()l
extern _native void IS_PED_IN_ANY_TRAIN()l
extern _native void SET_PED_WANTED_BY_POLICE()l
extern _native void IS_PED_GETTING_INTO_A_VEHICLE()l
extern _native void SET_PED_MAX_COVER_SEARCH_RADIUS()l
extern _native void IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE()l
extern _native void GET_PED_ALERTNESS()l
extern _native void SET_PED_ALERTNESS()l
extern _native void HAS_PED_CLEAR_LOS_TO_PED_IN_FRONT()l
extern _native void DOES_DECISION_MAKER_EXIST()l
extern _native void SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE()l
extern _native void SET_PED_CAN_REMAIN_ON_BOAT_AFTER_MISSION_ENDS()l
extern _native void IS_PED_TOUCHING_PED()l
extern _native void SET_PED_ANIM_GROUP()l
extern _native void GET_PED_ANIM_GROUP()l
extern _native void SET_PED_USES_DEAFULT_ANIM_GROUP_WHEN_FLEEING()l
extern _native void SET_PED_GESTURE_GROUP()l
extern _native void COPY_ANIMATIONS()l
extern _native void GET_PED_DRAWABLE_VARIATION()l
extern _native void GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS()l
extern _native void GET_PED_TEXTURE_VARIATION()l
extern _native void GET_NUMBER_OF_PED_TEXTURE_VARIATIONS()l
extern _native void GET_PED_PALETTE_VARIATION()l
extern _native void GET_PED_HAS_PALETTE_VARIATIONS()l
extern _native void SET_PERSISTENT_PED_VARIATION()l
extern _native void SET_PERSISTENT_PED_VARIATION_ENUM()l
extern _native void GET_SCENE_PED_MODEL()l
extern _native void SET_PED_DEFAULT_AI_ACTION_TREE_TYPE_INDEX()l
extern _native void SET_PERSISTENT_STREAM_PED_VARIATION()l
extern _native void SET_PERSISTENT_STREAM_PED_VARIATION_ENUM()l
extern _native void SET_STREAM_PED_CUSTOMISATION_DATA()l
extern _native void GET_STREAM_PED_PACK_ID()l
extern _native void SET_PED_COMPONENT_VARIATION()l
extern _native void SET_STREAM_PED_COMPONENT_VARIATION()l
extern _native void SET_STREAM_PED_PROP_VARIATION()l
extern _native void SET_PED_RANDOM_COMPONENT_VARIATION()l
extern _native void SET_PED_DEFAULT_COMPONENT_VARIATION()l
extern _native void PRELOAD_PLAYER_VARIATION()l
extern _native void APPLY_PLAYER_PRELOAD_VARIATION()l
extern _native void GET_PED_PROP_INDEX()l
extern _native void SET_PED_PROP_INDEX()l
extern _native void CLEAR_PED_PROP()l
extern _native void CLEAR_ALL_PED_PROPS()l
extern _native void PRELOAD_STREAM_COMPONENT()l
extern _native void RELEASE_PRELOADED_STREAM_COMPONENT()l
extern _native void APPLY_LOADOUT_ITEM()l
extern _native void SET_HELMET_KNOCK_OFF_HEALTH()l
extern _native void KNOCK_OFF_PROP_AT_ANCHOR_POINT()l
extern _native void GET_PED_PROP_POSITION()l
extern _native void GET_PEP_PROP_ROTATION()l
extern _native void GET_PED_PROJECTED_POSITION()l
extern _native void GIVE_PED_ARMOUR_MP_REWARD()l
extern _native void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS()l
extern _native void GET_BLOCKING_OF_NON_TEMPORARY_EVENTS()l
extern _native void SET_BLOCKING_OF_PED_TARGETTING()l
extern _native void GET_BLOCKING_OF_PED_TARGETTING()l
extern _native void REGISTER_TARGET()l
extern _native void REGISTER_HATED_TARGETS_IN_AREA()l
extern _native void REGISTER_HATED_TARGETS_AROUND_PED()l
extern _native void SET_LOCKED_TARGET()l
extern _native void CLEAR_LOCKED_TARGET()l
extern _native void SET_ROOM_FOR_PED_BY_NAME()l
extern _native void SET_ROOM_FOR_PED_BY_KEY()l
extern _native void CLEAR_ROOM_FOR_PED()l
extern _native void GET_KEY_FOR_PED_IN_ROOM()l
extern _native void GET_INTERIOR_FROM_PED()l
extern _native void GET_RANDOM_PED_AT_COORD()l
extern _native void GET_CLOSEST_PED()l
extern _native void GET_CLOSEST_ENEMY_PED()l
extern _native void GET_RANDOM_ENEMY_PED()l
extern _native void START_PED_SEARCH_CRITERIA()l
extern _native void STOP_PED_SEARCH_CRITERIA()l
extern _native void SEARCH_CRITERIA_CONSIDER_PEDS_WITH_FLAG_TRUE()l
extern _native void SEARCH_CRITERIA_REJECT_PEDS_WITH_FLAG_TRUE()l
extern _native void SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND()l
extern _native void APPLY_FORCE_TO_PED()l
extern _native void SET_PED_TO_RAGDOLL()l
extern _native void SET_PED_TO_RAGDOLL_WITH_FALL()l
extern _native void SET_PED_TO_RAGDOLL_WITH_EXPLOSION()l
extern _native void SET_PED_TO_ANIMATED()l
extern _native void IS_PED_RAGDOLL()l
extern _native void SET_PED_CAN_RAGDOLL()l
extern _native void SET_PED_AS_MISSION_PED()l
extern _native void SET_PED_ANGLED_DEFENSIVE_AREA()l
extern _native void SET_PED_SPHERE_DEFENSIVE_AREA()l
extern _native void SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED()l
extern _native void SET_PED_DEFENSIVE_AREA_DIRECTION()l
extern _native void REMOVE_PED_DEFENSIVE_AREA()l
extern _native void SET_PED_CAN_MOVE_WHEN_INJURED()l
extern _native void REVIVE_INJURED_PED()l
extern _native void SET_PED_NAME_DEBUG()l
extern _native void GET_PED_EXTRACTED_DISPLACEMENT()l
extern _native void SET_PED_DIES_WHEN_INJURED()l
extern _native void SET_PED_REQUIRE_HEADSHOT_TO_KILL()l
extern _native void ATTACH_PED_TO_VEHICLE()l
extern _native void ATTACH_PED_TO_VEHICLE_PHYSICALLY()l
extern _native void ATTACH_PED_TO_OBJECT()l
extern _native void ATTACH_PED_TO_OBJECT_PHYSICALLY()l
extern _native void ATTACH_PED_TO_WORLD_PHYSICALLY()l
extern _native void ATTACH_PED_TO_PED()l
extern _native void ATTACH_PED_TO_PED_PHYSICALLY()l
extern _native void DETACH_PED()l
extern _native void DETACH_PED_FROM_WITHIN_VEHICLE()l
extern _native void SET_HEADING_LIMIT_FOR_ATTACHED_PED()l
extern _native void SET_ATTACHED_PED_ROTATION()l
extern _native void IS_PED_ATTACHED_TO_ANY_VEHICLE()l
extern _native void IS_PED_ATTACHED_TO_OBJECT()l
extern _native void IS_PED_A_MISSION_PED()l
extern _native void APPLY_DAMAGE_TO_PED_BODY_PART()l
extern _native void GET_PED_BODY_PART_DAMAGE()l
extern _native void RESET_PED_VISIBLE_DAMAGE()l
extern _native void GET_PED_BONE_COORDS()l
extern _native void TOGGLE_NM_BINDPOSE_TASK()l
extern _native void CREATE_NM_MESSAGE()l
extern _native void GIVE_PED_NM_MESSAGE()l
extern _native void SET_NM_MESSAGE_FLOAT()l
extern _native void SET_NM_MESSAGE_INT()l
extern _native void SET_NM_MESSAGE_BOOL()l
extern _native void SET_NM_MESSAGE_VEC3()l
extern _native void SET_NM_MESSAGE_INSTANCE_INDEX()l
extern _native void SET_NM_MESSAGE_STRING()l
extern _native void SET_PED_NM_ANIM_POSE()l
extern _native void SET_PED_BLEND_FROM_NM_WITH_ANIM()l
extern _native void GET_PED_NM_FEEDBACK()l
extern _native void ADD_SCENARIO_BLOCKING_AREA()l
extern _native void REMOVE_SCENARIO_BLOCKING_AREAS()l
extern _native void SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA()l
extern _native void IS_PED_USING_SCENARIO()l
extern _native void IS_PED_USING_ANY_SCENARIO()l
extern _native void SET_PED_WITH_BRAIN_CAN_BE_CONVERTED_TO_DUMMY_PED()l
extern _native void IS_PED_GESTURING()l
extern _native void SET_PED_CAN_HEAD_IK()l
extern _native void SET_PED_CAN_PLAY_GESTURE_ANIMS()l
extern _native void SET_PED_CAN_PLAY_VISEME_ANIMS()l
extern _native void SET_PED_CAN_PLAY_AMBIENT_ANIMS()l
extern _native void SET_PED_ENABLE_HEADLOOK_CONTROLLER()l
extern _native void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT()l
extern _native void SET_PED_CAN_TRIGGER_BULLET_CAM()l
extern _native void GET_PED_CAN_TRIGGER_BULLET_CAM()l
extern _native void SET_PED_CAN_INITIATE_BULLET_CAM()l
extern _native void GET_PED_CAN_INITIATE_BULLET_CAM()l
extern _native void SET_PED_VALIDATE_BULLET_CAM_HIT()l
extern _native void SET_BULLET_CAM_PREF()l
extern _native void GET_BULLET_CAM_PREF()l
extern _native void SET_BULLET_CAM_ON_NEXT_PROJECTILE()l
extern _native void IS_PED_HEADTRACKING_PED()l
extern _native void SET_PED_PRIMARY_LOOKAT()l
extern _native void SET_COORD_PRIMARY_LOOKAT()l
extern _native void SET_PED_SECONDARY_LOOKAT()l
extern _native void CLEAR_PED_PRIMARY_LOOKAT()l
extern _native void CLEAR_PED_SECONDARY_LOOKAT()l
extern _native void SET_IK_ATTACH_TARGET_PED()l
extern _native void SET_IK_ATTACH_TARGET_OBJ()l
extern _native void SET_IK_ATTACH_TARGET_VEH()l
extern _native void CLEAR_IK_ATTACH_TARGET()l
extern _native void SET_PED_INVINCIBLE()l
extern _native void SET_PED_CAN_FLY_THROUGH_WINDSCREEN()l
extern _native void SET_PED_DONT_USE_VEHICLE_SPECIFIC_ANIMS()l
extern _native void SET_PED_GROUP_MEMBER_PASSENGER_INDEX()l
extern _native void SET_PED_IGNORE_LOS_CHECKS()l
extern _native void SET_PED_CAN_EVASIVE_DIVE()l
extern _native void SET_PED_SHOOTS_AT_COORD()l
extern _native void SET_PED_PROJECTILE_OVERRIDE_PARAMETERS()l
extern _native void SET_PED_MODEL_IS_SUPPRESSED()l
extern _native void STOP_ANY_PED_MODEL_BEING_SUPPRESSED()l
extern _native void SET_PED_CAN_BE_TARGETED_WHEN_INJURED()l
extern _native void SET_PED_GENERATES_DEAD_BODY_EVENTS()l
extern _native void SET_PED_WILL_ONLY_ATTACK_WANTED_PLAYER()l
extern _native void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT()l
extern _native void GIVE_PED_HELMET()l
extern _native void GIVE_PED_HELMET_WITH_OPTS()l
extern _native void REMOVE_PED_HELMET()l
extern _native void SET_PED_HELMET()l
extern _native void SET_PED_TO_LOAD_COVER()l
extern _native void SET_PED_CAN_COWER_IN_COVER()l
extern _native void SET_PED_CAN_PEEK_IN_COVER()l
extern _native void SET_PED_CAN_INTERACT_WITH_DOORS()l
extern _native void SET_ALLOW_DUMMY_CONVERSIONS()l
extern _native void SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE()l
extern _native void SET_PED_HEEDS_THE_EVERYONE_IGNORE_PLAYER_FLAG()l
extern _native void SET_PED_LEG_IK_MODE()l
extern _native void GIVE_PED_FAKE_NETWORK_NAME()l
extern _native void REMOVE_FAKE_NETWORK_NAME_FROM_PED()l
extern _native void ADD_PED_TO_MISSION_DELETION_LIST()l
extern _native void SET_PED_ALPHA()l
extern _native void SET_PED_CAN_SWITCH_WEAPON()l
extern _native void SET_PED_DIES_INSTANTLY_IN_WATER()l
extern _native void SET_PED_CLIMB_ANIM_RATE()l
extern _native void SET_PED_EDGE_COVER_BLINDFIRE_ARC_OVERRIDE()l
extern _native void IS_PED_IN_SPHERE_AREA_OF_ANY_ENEMY_PEDS()l
extern _native void STOP_PED_WEAPON_FIRING_WHEN_DROPPED()l
extern _native void STOP_PED_DOING_FALL_OFF_TESTS_WHEN_SHOT()l
extern _native void SET_SCRIPTED_ANIM_SEAT_OFFSET()l
extern _native void SET_PED_COMBAT_MOVEMENT()l
extern _native void GET_PED_COMBAT_MOVEMENT()l
extern _native void SET_PED_COMBAT_ABILITY()l
extern _native void GET_PED_COMBAT_ABILITY()l
extern _native void SET_PED_COMBAT_RANGE()l
extern _native void SET_PED_COMBAT_RANGE_MIN()l
extern _native void SET_PED_COMBAT_RANGE_MAX()l
extern _native void SET_PED_COMBAT_RANGE_HALF_HEIGHT()l
extern _native void GET_PED_COMBAT_RANGE_MIN()l
extern _native void GET_PED_COMBAT_RANGE_MAX()l
extern _native void GET_PED_COMBAT_RANGE_HALF_HEIGHT()l
extern _native void SET_PED_COMBAT_ATTRIBUTES()l
extern _native void SET_PED_EMOTION_STATE()l
extern _native void GET_PED_EMOTION_STATE()l
extern _native void SET_PED_AUTO_UPDATE_EMOTION_STATE()l
extern _native void SET_PED_STEALTH_ATTRIBUTES()l
extern _native void SET_PED_FLEE_ATTRIBUTES()l
extern _native void SET_PED_LOD_THRESHOLD()l
extern _native void SET_PED_SUPERLOD_THRESHOLD()l
extern _native void START_RECORDING_PED()l
extern _native void STOP_RECORDING_PEDS()l
extern _native void START_PLAYBACK_RECORDED_PED()l
extern _native void STOP_PLAYBACK_RECORDED_PED()l
extern _native void PAUSE_PLAYBACK_RECORDED_PED()l
extern _native void UNPAUSE_PLAYBACK_RECORDED_PED()l
extern _native void IS_PLAYBACK_GOING_ON_FOR_PED()l
extern _native void GET_CURRENT_PLAYBACK_NUMBER_FOR_PED()l
extern _native void IS_RECORDING_GOING_ON_FOR_PED()l
extern _native void SKIP_TIME_IN_PLAYBACK_RECORDED_PED()l
extern _native void REQUEST_PED_RECORDING()l
extern _native void HAS_PED_RECORDING_BEEN_LOADED()l
extern _native void REMOVE_PED_RECORDING()l
extern _native void SET_PED_RECORDING_PLAYBACK_SPEED()l
extern _native void STOP_RECORDING_PED()l
extern _native void GET_POSITION_IN_PED_RECORDING()l
extern _native void GET_TIME_POSITION_IN_PED_RECORDING()l
extern _native void SET_PED_STEERS_AROUND_PEDS()l
extern _native void GET_PED_STEERS_AROUND_PEDS()l
extern _native void SET_PED_STEERS_AROUND_OBJECTS()l
extern _native void GET_PED_STEERS_AROUND_OBJECTS()l
extern _native void GAMEPLAY_HELPER_BOX_CREATE_PED_ATTACHED()l
extern _native void SET_PED_TETHERING_ADD_BOX()l
extern _native void SET_PED_TETHERING_REMOVE_BOX()l
extern _native void RESET_PED_TETHERING()l
extern _native void SET_PED_TETHERING_OPTION()l
extern _native void SET_PED_FLEEZONE_ADD_BOX()l
extern _native void SET_PED_FLEEZONE_REMOVE_BOX()l
extern _native void RESET_PED_FLEEZONE()l
extern _native void SET_PED_FLEEZONE_OPTION()l
extern _native void SET_PED_SUGGESTED_COMBAT_AREA_ADD_BOX()l
extern _native void SET_PED_SUGGESTED_COMBAT_AREA_REMOVE_BOX()l
extern _native void RESET_PED_SUGGESTED_COMBAT_AREA()l
extern _native void IS_PED_IN_GAMEPLAY_HELPER_BOX()l
extern _native void IS_PED_IN_GAMEPLAY_HELPER_VOLUME()l
extern _native void SET_PED_SUGGESTED_COMBAT_AREA_STEP()l
extern _native void SET_GLOBAL_SUGGESTED_COMBAT_AREA_WEIGHT()l
extern _native void IS_PED_CLONED_EVERYWHERE()l
extern _native void PED_HACK_DISABLE_INAIR_EVENT()l
extern _native void ACTION_TREE_LOAD()l
extern _native void IS_ACTION_TREE_LOADED()l
extern _native void PED_ACTION_TREE_PLAY_NODE()l
extern _native void PED_ACTION_TREE_RESET_HELPER()l
extern _native void ACTION_TREE_UNLOAD()l
extern _native void ACTION_TREE_FORCE_UNLOAD()l
extern _native void PED_RESET_IK()l
extern _native void GET_PED_AWARENESS_STATE()l
extern _native void GET_PED_HAS_SEEN_DEAD_PED()l
extern _native void GET_PED_TOXICITY_LEVEL()l
extern _native void SET_TOXICITY_LEVEL_TIME()l
extern _native void GET_PED_REACHED_TARGETED_GRAVWELL_CENTER()l
extern _native void ENABLE_PED_JUMPING()l
extern _native void GET_TIME_SINCE_REMOTE_PED_MOVED()l
extern _native void REACT_TO_COLLISION()l
extern _native void PED_SET_ACTION_INTENTION()l
extern _native void PED_GET_ACTION_INTENTION_STATUS()l
extern _native void PED_FINISH_ACTION_INTENTION()l
extern _native void PED_SET_ACTION_DIRECTION()l
extern _native void PED_SET_STRING_INPUT_SIGNAL()l
extern _native void SET_PED_PANIC_RANGE_OVERRIDE()l
extern _native void OVERRIDE_MOVER_PHYSICS_ON_RAGDOLL_SLEEP()l
extern _native void SET_PED_AI_TEMPLATE()l
extern _native void SET_PED_DEFAULT_AIM_AT_PED()l
extern _native void SET_PED_DEFAULT_AIM_AT_COORD()l
extern _native void SET_PED_DEFAULT_AIM_AHEAD()l
extern _native void CLEAR_PED_DEFAULT_AIM()l
extern _native void SET_PED_CORPSE()l
extern _native void SET_PED_CORPSE_FROM_ANIM()l
extern _native void SET_PED_USES_ANIMATED_DEATH()l
extern _native void SET_PED_CHANCE_TO_SHOOT_AT_DESTRUCTIBLES()l
extern _native void SET_PED_CHANCE_TO_REACT_TO_IMMINENT_DANGER()l
extern _native void REMOVE_LOCAL_PLAYER_ARMOUR_AND_SPECIAL_ITEMS()l
extern _native void GET_PED_BULLETTIME_STATUS()l
extern _native void SET_PED_SYNC_POINT()l
extern _native void HAS_PED_TRIGGERED_MPM()l
extern _native void SET_COLLISION_BETWEEN_PEDS()l
extern _native void SET_NO_COLLISION_TO_PED()l
extern _native void SET_PED_SILHOUETTE_ENABLED()l
extern _native void SET_PED_SILHOUETTE_WHENVISIBLE_ENABLED()l
extern _native void SET_PED_SILHOUETTE_COLOUR()l
extern _native void SET_TIMEWARP_FIRE_SCALE()l
extern _native void SET_PED_FLAG_COMBAT_LEADER()l
extern _native void SET_PED_FLAG_AGGRESSIVE_CHARGER()l
extern _native void SET_PED_FLAG_SNIPE_MOVING_TARGETS_OVERRIDE()l
extern _native void SET_PED_FLAG_LOCK_TO_COVER()l
extern _native void SET_PED_FLAG_ALWAYS_HIDE_WHEN_IN_COVER()l
extern _native void SET_PED_FLAG_FORCE_BLINDFIRE_IN_COVER()l
extern _native void SET_PED_FLAG_FORCE_LEANFIRE_IN_COVER()l
extern _native void SET_PED_FLAG_FORCE_THROW_PROJECTILE_IN_COVER()l
extern _native void SET_PED_FLAG_FIRE_UNTIL_EMPTY_IN_COVER()l
extern _native void SET_PED_FLAG_BLOCK_GORE_REACTION()l
extern _native void SET_PED_FLAG_BLOCK_WOUNDED_MOVEMENT()l
extern _native void SET_PED_FLAG_BLOCK_BLINDFIRE_IN_COVER()l
extern _native void SET_PED_FLAG_BLOCK_LEANFIRE_IN_COVER()l
extern _native void SET_PED_FLAG_SCRIPTED_PROJECTILE_USE()l
extern _native void SET_PED_AIM_LOCKONABLE()l
extern _native void IS_PED_IN_CROSSHAIR_CYLINDER()l
extern _native void IS_PED_IN_CROSSHAIR_CYLINDER_OFFSET()l
extern _native void TRIGGER_PED_PORTAL_RESCAN()l
extern _native void SET_PED_CAN_MELEE()l
extern _native void SET_PED_CAN_BE_MELEED()l
extern _native void SET_PED_WEAPON_BLOCK_CHECK()l
extern _native void IS_PED_USING_MP3_COVER_TASK()l
extern _native void IS_PED_PEEKING_IN_COVER()l
extern _native void IS_PED_BLINDFIRING_IN_COVER()l
extern _native void IS_TARGET_IN_VALID_COVER_FROM_PED()l
extern _native void SET_PED_NUM_ADVANCERS_OVERRIDE()l
extern _native void SET_PED_ADVANCE_DELAY_OVERRIDE()l
extern _native void SET_PED_NUM_CHARGERS_OVERRIDE()l
extern _native void SET_PED_CHARGE_DELAY_OVERRIDE()l
extern _native void SET_PED_MELEE_TRIGGER_DIST_OVERRIDE()l
extern _native void SET_PED_FORCE_START_FIRING_FROM_COVER()l
extern _native void SET_PED_FORCE_STOP_FIRING_FROM_COVER()l
extern _native void SET_PED_START_SUPPRESSIVE_FIRE()l
extern _native void SET_PED_STOP_SUPPRESSIVE_FIRE()l
extern _native void SET_PED_COVER_REQUEST_PEEK()l
extern _native void SET_PED_COVER_REQUEST_BLINDFIRE()l
extern _native void SET_PED_COVER_TARGET_PED()l
extern _native void SET_PED_COVER_TARGET_COORD()l
extern _native void SET_PED_COVER_TARGET_PED_WITH_OFFSET()l
extern _native void SET_PED_COVER_TARGET_VEHICLE()l
extern _native void SET_PED_COVER_TARGET_PED_WITH_BONE_AND_OFFSET()l
extern _native void SET_PED_CLEAR_COVER_TARGET()l
extern _native void SET_PED_SUGGESTED_COVER_POINT()l
extern _native void IS_PED_HIDING_IN_COVER()l
extern _native void SET_PED_STAND_GROUND_ON_PLAYER_IMPACT()l
extern _native void SET_PED_REACT_TO_CAR_COLLISION()l
extern _native void SET_PED_FORCE_USE_MUZZLE_DIRECTION()l
extern _native void SET_PED_AS_ONE_SHOT_KILL()l
extern _native void Temporarily_Disable_Ped_Self_Collision()l
extern _native void SET_PED_CAN_AVOID_DEATH_ZONES()l
extern _native void SET_AI_SHOULD_ALWAYS_MISS_PED()l
extern _native void OVERRIDE_PED_FIRING_PATTERN()l
extern _native void STOP_OVERRIDING_PED_FIRING_PATTERN()l
extern _native void OVERRIDE_PED_FIRING_PATTERN_CUSTOM()l
extern _native void SET_PED_CUSTOM_FIRING_PATTERN_TIME_BETWEEN_BURSTS()l
extern _native void SET_PED_CUSTOM_FIRING_PATTERN_TIME_BETWEEN_SHOTS()l
extern _native void SET_PED_CUSTOM_FIRING_PATTERN_SHOTS_PER_BURST()l
extern _native void SET_PED_CAN_PUSH_PLAYER()l
extern _native void SET_PED_FORCED_TO_WALK()l
extern _native void GET_IS_PED_FORCED_TO_WALK()l
extern _native void SET_PED_FORCED_TO_RUN()l
extern _native void GET_IS_PED_FORCED_TO_RUN()l
extern _native void SET_PED_CAN_PLAY_LOCO_FLAVOR_STARTS()l
extern _native void GET_CAN_PED_PLAY_LOCO_FLAVOR_STARTS()l
extern _native void SET_PED_CAN_SLOW_DOWN_WHEN_TURNING()l
extern _native void GET_CAN_PED_CAN_SLOW_DOWN_WHEN_TURNING()l
extern _native void SET_PED_NO_RAGDOLL_TO_EXPLOSION_UNLESS_DEAD()l
extern _native void GET_ALLOWED_TO_FAIL_COVER_FOR_BLOCKING_LINE_OF_FIRE()l
extern _native void SET_ALLOWED_TO_FAIL_COVER_FOR_BLOCKING_LINE_OF_FIRE()l
extern _native void GET_PEDS_LAST_ATTACKER()l
extern _native void IS_PED_VAULTING()l
extern _native void SET_PED_RESIST_TO_OBJECT_COLLISION()l
extern _native void SET_CAN_AI_KICK_THROUGH_CORPSES()l
extern _native void SET_USE_ANIMATED_VELOCITY()l
extern _native void SET_CUFF_HANDS()l
extern _native void SET_APPLY_WATER_PHYSICS_TO_RAGDOLL()l
extern _native void SET_PED_FREEZE_ORIENTATION()l
extern _native void SET_DEAD_FORCE_WATER_DEPTH()l
extern _native void SET_DEAD_FORCE_WATER_DEPTH_TO_DEFAULT()l
extern _native void IS_PED_BEING_GRAPPLED()l
extern _native void SET_PED_FREEZE_PROCESSING()l
extern _native void IS_PED_PROCESSING_FROZEN()l
extern _native void SET_PED_FORCE_USE_RAGDOLL()l
extern _native void RELOAD_PED_WEAPONS()l
extern _native void SET_PED_NO_RAGDOLL_TO_BULLET_UNLESS_DEAD()l
extern _native void SET_PED_REDUCED_DAMAGE_IK()l
extern _native void SET_PED_CAN_PUT_PLAYER_INTO_LMS()l
extern _native void SET_PED_GIVE_POST_LMS_BREAK()l
extern _native void SET_FOOT_STEP_AUDIO_MOVEMENT()l
extern _native void SET_PED_MODEL_LOD_DISTANCES()l
extern _native void RESET_PED_MODEL_LOD_DISTANCES()l
extern _native void REGISTER_PED_SHOT_TUNING_SPECIAL01()l
extern _native void SET_PED_BLEND_TO_CROUCHING_FROM_NM()l
extern _native void RESET_LEVEL_ANIM_DICTIONARIES()l
extern _native void FORCE_PED_TO_USE_DEATH_SUGGESTION_WHEN_SHOT()l
extern _native void ADD_PED_IGNORE_COVER_ENTRY()l
extern _native void REMOVE_PED_IGNORE_COVER_ENTRY()l
extern _native void ADD_PED_USE_COVER_ENTRY()l
extern _native void REMOVE_PED_USE_COVER_ENTRY()l
extern _native void SET_PED_ONLY_COLLIDE_WITH_RAGDOLL_BOUNDS()l
extern _native void APPLY_UNIFORMLY_DISTRIBUTED_IMPULSE_TO_RAGDOLL()l
extern _native void SET_PED_BOSS_PECENT_DAMAGED()l
extern _native void SET_BOSS_PECENT_DAMAGE()l
extern _native void SET_PED_CAN_BE_SNAPPED_TO_GROUND()l
extern _native void SET_PED_BLOODSPRAY_ENABLE()l
extern _native void SET_PED_WEAPON_OBSTRUCTION_CHECK_DISTANCE()l
extern _native void SET_PED_GLOBAL_PERCENT_DODGE_CHANCE()l
extern _native void SET_PED_GLOBAL_KNEELING_ALLOWED()l
extern _native void SET_PED_FIRE_AT_COVER()l
extern _native void SET_GLOBAL_PHASE_OVERRIDE()l
extern _native void IS_PED_PICKING_UP_PICKUP()l
extern _native void PED_FORCE_TARGETABLE()l
extern _native void IS_PED_LOCAL()l
extern _native void GET_PED_OWNER_INDEX()l
extern _native void PED_TRANSFER_OWNERSHIP()l
extern _native void SET_PED_VICTIM()l
extern _native void ENABLE_MELEE_GRIND()l
extern _native void SET_PED_USE_RAGDOLL_REACTION_ON_MELEE_IN_MP()l
extern _native void PEDGROUPTASK_DESTROY()l
extern _native void PEDGROUPTASK_ADVANCE_CREATE()l
extern _native void PEDGROUPTASK_ADVANCE_ASSIGNPED()l
extern _native void PEDGROUPTASK_ADVANCE_SETPEDCANADVANCE()l
extern _native void PEDGROUPTASK_ADVANCE_SETTARGET_PED()l
extern _native void PEDGROUPTASK_ADVANCE_ADDTARGET_PED()l
extern _native void PEDGROUPTASK_ADVANCE_SETTARGET_POS()l
extern _native void PEDGROUPTASK_ADVANCE_TRIGGER_MOVE()l
extern _native void PEDGROUPTASK_ADVANCE_SETTIMETOHIDE()l
extern _native void PEDGROUPTASK_ADVANCE_SETTIMETOIDLE()l
extern _native void PEDGROUPTASK_ADVANCE_SETADVANCEDISTANCE()l
extern _native void PEDGROUPTASK_ADVANCE_SETCOVERSEARCHOFFSETFORWARD()l
extern _native void PEDGROUPTASK_ADVANCE_SETADVANCERELATIVETO()l
extern _native void PEDGROUPTASK_ADVANCE_SETTIMERANGEFORALLPEDSTOSTARTFIRING()l
extern _native void PEDGROUPTASK_ADVANCE_SETNUMPEDSTOADVANCE()l
extern _native void PEDGROUPTASK_COVERFIRE_CREATE()l
extern _native void PEDGROUPTASK_COVERFIRE_ASSIGNPED()l
extern _native void PEDGROUPTASK_COVERFIRE_SETTARGET_PED()l
extern _native void PEDGROUPTASK_COVERFIRE_SETTARGET_POS()l
extern _native void PEDGROUPTASK_COVERFIRE_TRIGGER_HIDE()l
extern _native void PEDGROUPTASK_COVERFIRE_TRIGGER_FIRE()l
extern _native void PEDGROUPTASK_COVERFIRE_STOP_FIRING()l
extern _native void PEDGROUPTASK_TACTICALCORNER_CREATE()l
extern _native void PEDGROUPTASK_TACTICALCORNER_ASSIGNPED()l
extern _native void PEDGROUPTASK_TACTICALCORNER_SETTARGET_PED()l
extern _native void PEDGROUPTASK_TACTICALCORNER_SETTARGET_POS()l
extern _native void PEDGROUPTASK_FLANK_CREATE()l
extern _native void PEDGROUPTASK_FLANK_TRIGGERVOLUME()l
extern _native void PEDGROUPTASK_FLANK_FLANKVOLUME()l
extern _native void PEDGROUPTASK_FLANK_ASSIGNPEDTOFLANK()l
extern _native void PEDGROUPTASK_FLANK_ASSIGNPEDTOCOVERFIRE()l
extern _native void PEDGROUPTASK_FLANK_TUNE_TIMEREADYTRIGGERMOVE()l
extern _native void PEDGROUPTASK_FLANK_TUNE_TIMETARGETINSIDETRIGGERVOLUMETOSTART()l
extern _native void PEDGROUPTASK_FLANK_TUNE_TARGETOUTSIDETRIGGERVOLUMETOCANCEL()l
extern _native void CREATE_PLAYER()l
extern _native void CREATE_PLAYER_WITH_MODEL()l
extern _native void CREATE_PLAYER_WITH_AVATAR()l
extern _native void GET_PLAYER_PED()l
extern _native void SET_PLAYER_MODEL()l
extern _native void NETWORK_PLAYER_HAS_PED()l
extern _native void NETWORK_GET_AVATAR_SLOT_SELECTED_SEX()l
extern _native void NETWORK_GET_PLAYER_AVATAR_SEX()l
extern _native void NETWORK_GET_PLAYER_AVATAR_SLOT_HASH()l
extern _native void NETWORK_GET_AVATAR_SELECTED_DEATHMATCH_SLOT_HASH()l
extern _native void NETWORK_PRELOAD_AVATAR()l
extern _native void NETWORK_RELEASE_PRELOADED_AVATAR()l
extern _native void NETWORK_ENABLE_AVATARS_AUTO_PRELOADING()l
extern _native void NETWORK_IS_AVATAR_PAYNEKILLER_CHARACTER()l
extern _native void GET_PLAYER_RGB_COLOUR()l
extern _native void SET_PLAYER_COLOUR()l
extern _native void GET_NUMBER_OF_PLAYERS()l
extern _native void GET_PLAYER_TEAM()l
extern _native void SET_PLAYER_TEAM()l
extern _native void GET_NUMBER_OF_PLAYERS_IN_TEAM()l
extern _native void GET_PLAYER_NAME()l
extern _native void SET_PLAYER_INFINTE_STAMINA()l
extern _native void ADD_PLAYER_SCORE()l
extern _native void IS_PLAYER_SCORE_GREATER()l
extern _native void GET_PLAYER_SCORE()l
extern _native void SET_PLAYER_WANTED_LEVEL()l
extern _native void SET_PLAYER_WANTED_LEVEL_NO_DROP()l
extern _native void SET_PLAYER_WANTED_LEVEL_NOW()l
extern _native void ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP()l
extern _native void ARE_PLAYER_STARS_GREYED_OUT()l
extern _native void SET_DISPATCH_COPS_FOR_PLAYER()l
extern _native void IS_PLAYER_WANTED_LEVEL_GREATER()l
extern _native void CLEAR_PLAYER_WANTED_LEVEL()l
extern _native void IS_PLAYER_DEAD()l
extern _native void IS_PLAYER_PRESSING_HORN()l
extern _native void SET_PLAYER_CONTROL()l
extern _native void SET_PLAYER_CONTROL_FOR_NETWORK()l
extern _native void REENABLE_PLAYER_INPUT()l
extern _native void GET_PLAYER_WANTED_LEVEL()l
extern _native void SET_MAX_WANTED_LEVEL()l
extern _native void SET_POLICE_RADAR_BLIPS()l
extern _native void SET_POLICE_IGNORE_PLAYER()l
extern _native void IS_PLAYER_PLAYING()l
extern _native void SET_EVERYONE_IGNORE_PLAYER()l
extern _native void SET_ALL_RANDOM_PEDS_FLEE()l
extern _native void SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS()l
extern _native void SET_WANTED_LEVEL_MULTIPLIER()l
extern _native void START_FIRING_AMNESTY()l
extern _native void CAN_PLAYER_START_MISSION()l
extern _native void SET_PLAYER_SAFE_FOR_CUTSCENE()l
extern _native void IS_PLAYER_READY_FOR_CUTSCENE()l
extern _native void IS_PLAYER_TARGETTING_PED()l
extern _native void IS_PLAYER_FREE_AIMING_AT_PED()l
extern _native void IS_PLAYER_PED_FREE_AIMING_AT_PED()l
extern _native void IS_PLAYER_TARGETTING_OBJECT()l
extern _native void SET_PLAYER_CAN_DO_DRIVE_BY()l
extern _native void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS()l
extern _native void SET_PLAYER_CAN_USE_COVER()l
extern _native void SET_PLAYER_USING_COVER()l
extern _native void SNAP_PLAYER_TO_COVER_COORDS()l
extern _native void SNAP_PLAYER_TO_COVERPOINT()l
extern _native void SNAP_PLAYER_TO_COVERLINE()l
extern _native void PLAYER_USE_COVERPOINT()l
extern _native void PLAYER_USE_COVERLINE()l
extern _native void SET_PLAYER_LOCKED_IN_COVER()l
extern _native void IS_PLAYER_LOCKED_IN_COVER()l
extern _native void IS_LOCAL_PLAYER_STILL_SCANNING_WORLD()l
extern _native void SET_PLAYER_CAN_USE_SHOOTDODGE()l
extern _native void SET_LOCAL_PLAYER_CAN_USE_SHOOTDODGE()l
extern _native void GET_MAX_WANTED_LEVEL()l
extern _native void IS_PLAYER_TARGETTING_ANYTHING()l
extern _native void GET_LOCAL_PLAYER_AGILITY()l
extern _native void IS_LOCAL_PLAYER_SPRINTING()l
extern _native void GET_LOCAL_PLAYER_SPRINT_METER()l
extern _native void SET_PLAYER_SPRINT()l
extern _native void SET_PLAYER_SPRINT_SP()l
extern _native void SET_PLAYER_PLAYER_TARGETTING()l
extern _native void GET_PLAYER_GROUP()l
extern _native void IS_2PLAYER_GAME_GOING_ON()l
extern _native void GET_PLAYER_MAX_ARMOUR()l
extern _native void IS_PLAYER_CONTROL_ON()l
extern _native void IS_PLAYER_SCRIPT_CONTROL_ON()l
extern _native void IS_PLAYER_CLIMBING()l
extern _native void GET_PLAYERS_LAST_VEHICLE()l
extern _native void GET_PLAYER_ID()l
extern _native void INT_TO_PLAYERINDEX()l
extern _native void IS_PLAYER_FREE_FOR_AMBIENT_TASK()l
extern _native void HAS_DEATHARREST_EXECUTED()l
extern _native void SET_FAKE_DEATHARREST()l
extern _native void IS_PLAYER_PISSED_OFF()l
extern _native void SET_PLAYER_MOOD_NORMAL()l
extern _native void SET_PLAYER_MOOD_PISSED_OFF()l
extern _native void SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE()l
extern _native void GIVE_ACHIEVEMENT_TO_PLAYER()l
extern _native void HAS_ACHIEVEMENT_BEEN_PASSED()l
extern _native void COMMIT_EXPERIENCE()l
extern _native void SET_EXPERIENCE_MULTIPLIER()l
extern _native void SET_LOCAL_EXPERIENCE_MULTIPLIER()l
extern _native void GET_PLAYER_RANK()l
extern _native void GET_PLAYER_EXPERIENCE()l
extern _native void GET_PLAYER_POINTS()l
extern _native void SET_PLAYER_POINTS()l
extern _native void GET_EXPERIENCE_FOR_RANK()l
extern _native void GET_EXPERIENCE_MAX_RANK()l
extern _native void GET_LOCAL_PLAYER_LEGEND_LEVEL()l
extern _native void GET_RECENT_WEAPON_LEVEL_UP()l
extern _native void GET_WEAPON_LEVEL()l
extern _native void IS_PLAYER_ONLINE()l
extern _native void IS_PLAYER_LOGGING_IN_NP()l
extern _native void IS_PLAYER_ONLINE_NP()l
extern _native void IS_PLAYER_ONLINE_GAMESPY()l
extern _native void DISPLAY_SYSTEM_SIGNIN_UI()l
extern _native void IS_SYSTEM_UI_BEING_DISPLAYED()l
extern _native void SET_PLAYER_KEEPS_WEAPONS_WHEN_RESPAWNED()l
extern _native void SET_PLAYER_INVINCIBLE()l
extern _native void SET_PLAYER_CAN_CARRY_NON_MISSION_OBJECTS()l
extern _native void REMOVE_PLAYER_HELMET()l
extern _native void GIVE_PLAYER_RAGDOLL_CONTROL()l
extern _native void SET_PLAYER_LOCKON()l
extern _native void SET_LOCKON_TO_FRIENDLY_PLAYERS()l
extern _native void GET_OBJECT_PLAYER_WILL_PICKUP()l
extern _native void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED()l
extern _native void HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED()l
extern _native void SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE()l
extern _native void GET_TRAIN_PLAYER_WOULD_ENTER()l
extern _native void DISPLAY_PLAYER_COMPONENT()l
extern _native void DOES_MAIN_PLAYER_EXIST()l
extern _native void ASSISTED_MOVEMENT_OPEN_ROUTE()l
extern _native void ASSISTED_MOVEMENT_CLOSE_ROUTE()l
extern _native void ASSISTED_MOVEMENT_FLUSH_ROUTE()l
extern _native void ASSISTED_MOVEMENT_ADD_POINT()l
extern _native void ASSISTED_MOVEMENT_SET_WIDTH()l
extern _native void ASSISTED_MOVEMENT_IS_ON_ANY_ROUTE()l
extern _native void ASSISTED_MOVEMENT_IS_ON_SCRIPTED_ROUTE()l
extern _native void SET_PLAYER_FORCED_AIM()l
extern _native void SET_PLAYER_FORCED_AIM_MAINTAIN_DIRECTION()l
extern _native void GET_TIME_SINCE_LAST_LMS_ACTIVATION()l
extern _native void SET_DAMAGE_TO_PLAYER_MULTIPLIER()l
extern _native void SET_DAMAGE_FROM_PLAYER_MULTIPLIER()l
extern _native void SET_POST_LMS_DAMAGE_TO_PLAYER_OVERRIDES()l
extern _native void ADD_ADRENALINE()l
extern _native void GET_ADRENALINE_AMT()l
extern _native void ADD_PAYNEKILLER()l
extern _native void GET_PAYNEKILLER_AMT()l
extern _native void SET_PAYNEKILLER_HEALTH_BOOST()l
extern _native void RESET_PAYNEKILLER_HEALTH_BOOST()l
extern _native void SET_PAYNEKILLER_RECHARGE_RATE()l
extern _native void RESET_PAYNEKILLER_RECHARGE_RATE()l
extern _native void SET_ADRENALINE_AMT()l
extern _native void SET_ADRENALINE_PAUSE()l
extern _native void SET_ADRENALINE_NOT_ALLOW()l
extern _native void SET_ADRENALINE_STREAKTIME()l
extern _native void GET_PLAYER_STREAK_ACTIVATION_LEVEL()l
extern _native void SET_PAYNEKILLER_AMT()l
extern _native void SET_PAYNEKILLER_BOTTLE_COUNT()l
extern _native void SET_PLAYER_CAN_ACTIVATE_BULLET_TIME()l
extern _native void ACTIVATE_BULLET_TIME()l
extern _native void ACTIVATE_BULLET_TIME_AS_PLAYER()l
extern _native void DEACTIVATE_BULLET_TIME()l
extern _native void DEACTIVATE_BULLET_TIME_AS_PLAYER()l
extern _native void DBG_ACTIVATE_BULLET_CAM_TIME()l
extern _native void DBG_DEACTIVATE_BULLET_CAM_TIME()l
extern _native void GET_BULLET_TIME_COUNT()l
extern _native void GET_BULLET_TIME_TEAM_COUNT()l
extern _native void ENABLE_LAST_MAN_STANDING()l
extern _native void ENABLE_MP_LAST_MAN_STANDING()l
extern _native void LAST_MAN_STANDING_RECOVER()l
extern _native void LAST_MAN_STANDING_REVIVE()l
extern _native void SET_MP_LAST_MAN_STANDING_DOWN_TIME()l
extern _native void SET_MP_LAST_MAN_STANDING_FLAGS()l
extern _native void PAUSE_MP_LAST_MAN_STANDING()l
extern _native void SET_MP_LAST_MAN_STANDING_INVINCIBLE_TIME()l
extern _native void START_PLAYER_SHOOTDODGE()l
extern _native void SET_PLAYER_SHOOTDODGE_GET_UP_STATE()l
extern _native void SET_PLAYER_CAN_CANCEL_SHOOTDODGE()l
extern _native void IS_PLAYER_SHOOTDODGING()l
extern _native void LOCAL_PLAYER_CAN_DO_MP_INTERACTIONS()l
extern _native void PLAYER_SET_AIM_MODE()l
extern _native void PLAYER_SET_WARP_FIRE_SCALE()l
extern _native void PLAYER_GET_TIMEWARP_MODIFIER()l
extern _native void PLAYER_HAS_MP_SPECIAL_ITEM()l
extern _native void GIVE_PLAYER_MP_SPECIAL_ITEM()l
extern _native void REMOVE_LOCAL_PLAYER_MP_SPECIAL_ITEM()l
extern _native void SET_PLAYER_COMBAT_TIMER_MODE()l
extern _native void SET_PLAYER_GLOBAL_COMBAT_TIMER_STATE()l
extern _native void IS_LAST_MAN_STANDING_ACTIVE()l
extern _native void DISABLE_PICKUPS_FOR_PLAYER()l
extern _native void SIMULATE_PLAYER_INPUT_GAIT()l
extern _native void RESET_PLAYER_INPUT_GAIT()l
extern _native void SET_PLAYER_CACHED_CAMERA_ORIENTATION()l
extern _native void PLAYER_ENABLE_COMPONENT()l
extern _native void ENABLE_PLAYER_TAUNT()l
extern _native void ENABLE_ADRENALINE()l
extern _native void ENABLE_ALL_ADRENALINE()l
extern _native void RESET_ADRENALINE_ENABLE()l
extern _native void SET_ADRENALINE_OVERRIDE()l
extern _native void RESET_ADRENALINE_OVERRIDES()l
extern _native void RESET_ADRENALINE_OVERRIDE()l
extern _native void IS_PLAYER_DOING_MELEE_GRAPPLE()l
extern _native void USE_ANIMATED_LAST_MAN_STANDING()l
extern _native void IS_USING_ANIMATED_LAST_MAN_STANDING()l
extern _native void HOLD_LAST_MAN_STAND_ANIMATED_RECOVERY()l
extern _native void IS_LAST_MAN_STAND_ANIMATED_RECOVERY_BEING_HELD()l
extern _native void BLOCK_PLAYER_COVER_MOVEMENT_TRANSITIONS()l
extern _native void ARE_PLAYER_COVER_MOVEMENT_TRANSITIONS_BLOCKED()l
extern _native void SET_SCRIPT_CONTROL_RESET_ON_PLAYER_DEATH()l
extern _native void NETWORK_IS_PLAYER_VISIBLE()l
extern _native void NETWORK_IS_PLAYER_VISIBLE_TO_TEAM()l
extern _native void SET_FORCED_AIM_INTENTION_DIRECTION()l
extern _native void RESET_FORCED_AIM_INTENTION_DIRECTION()l
extern _native void SET_FORCED_FORWARD_DIRECTION()l
extern _native void RESET_FORCED_FORWARD_DIRECTION()l
extern _native void SET_FREEZE_HEADING_BLEND()l
extern _native void SET_ALLOW_MOLOTOV_DAMAGE()l
extern _native void ENABLE_SHOOT_DODGE_HIGH_FALL_STAIRS_DETECTION()l
extern _native void UNLOCK()l
extern _native void MODIFY_UNLOCK()l
extern _native void GET_UNLOCK_EXISTS()l
extern _native void GET_IS_UNLOCKED()l
extern _native void GET_UNLOCK_IS_VISIBLE()l
extern _native void GET_UNLOCK_IS_NEW()l
extern _native void MARK_UNLOCK_AS_SEEN()l
extern _native void GET_EXISTS_IN_PLAYER_SAVE()l
extern _native void SET_ALLOW_PLAYER_REACT_TO_EXPLOSION()l
extern _native void SET_FAIL_PROMPT_BUTTON_AND_TEXT()l
extern _native void SET_CAN_ROLL_DODGE()l
extern _native void SET_CAN_ROLLING_PICKUP()l
extern _native void SET_USE_WEAPON_BOUND()l
extern _native void SET_PLAYER_THREAT_REACTION()l
extern _native void SET_MONITORED_STATS()l
extern _native void QUERY_MONITORED_STATS()l
extern _native void QUERY_MONITORED_STAT_ENTRY()l
extern _native void IS_PLAYER_GUN_RAISED()l
extern _native void GET_PLAYER_COVER_UID()l
extern _native void GET_PLAYER_COVER_SECTION_UID()l
extern _native void GET_PLAYER_COVER_FACING_LEFT()l
extern _native void SNAP_PLAYER_TO_COVERPOINT_FROM_UID()l
extern _native void SET_PLAYER_OXYGEN()l
extern _native void GET_PLAYER_OXYGEN()l
extern _native void SET_PLAYER_CAN_BE_PINNED_IN_COVER()l
extern _native void SET_PLAYER_FORCE_PAIN_KILLER()l
extern _native void SET_PLAYER_CAN_USE_FREEFORM_STRIKE()l
extern _native void SET_PLAYER_IN_BECKER_BOSS_FIGHT()l
extern _native void SET_ALLOW_PLAYER_DIE_FROM_SHOOT_DODGE()l
extern _native void REGISTER_DETACH_PLAYER_FOR_CUTSCENE()l
extern _native void SET_LOCAL_HANGOVER_STRENGTH()l
extern _native void SET_LOCAL_ONLY_PICKUP_STUNGUNS()l
extern _native void TASK_PAUSE()l
extern _native void TASK_STAND_STILL()l
extern _native void TASK_JUMP()l
extern _native void TASK_JUMP_FORWARD()l
extern _native void TASK_DODGE()l
extern _native void TASK_COWER()l
extern _native void TASK_HANDS_UP()l
extern _native void TASK_DUCK()l
extern _native void TASK_OPEN_VEHICLE_DOOR()l
extern _native void TASK_ENTER_VEHICLE()l
extern _native void TASK_LEAVE_VEHICLE()l
extern _native void TASK_LEAVE_VEHICLE_DONT_CLOSE_DOOR()l
extern _native void TASK_LEAVE_VEHICLE_IN_DIRECTION()l
extern _native void TASK_GET_OFF_BOAT()l
extern _native void TASK_GET_ON_CUSTOM_VEHICLE()l
extern _native void TASK_GET_ON_CUSTOM_BOAT()l
extern _native void TASK_GET_OFF_CUSTOM_BOAT()l
extern _native void TASK_NAVIGATE_THROUGH_TRAM_CARS()l
extern _native void TASK_LEAVE_VEHICLE_AND_FLEE()l
extern _native void TASK_VEHICLE_DRIVE_TO_COORD()l
extern _native void TASK_VEHICLE_DRIVE_TO_COORD_RUBBER_BAND()l
extern _native void TASK_VEHICLE_DRIVE_WANDER()l
extern _native void TASK_FOLLOW_TO_OFFSET_OF_PED()l
extern _native void TASK_SMART_FOLLOW_PED()l
extern _native void TASK_GO_STRAIGHT_TO_COORD()l
extern _native void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_VEHICLE()l
extern _native void TASK_ACHIEVE_HEADING()l
extern _native void TASK_FLUSH_ROUTE()l
extern _native void TASK_EXTEND_ROUTE()l
extern _native void TASK_FOLLOW_POINT_ROUTE()l
extern _native void TASK_GO_TO_PED()l
extern _native void TASK_SMART_FLEE_COORD()l
extern _native void TASK_SMART_FLEE_PED()l
extern _native void TASK_WANDER_STANDARD()l
extern _native void TASK_STATIONARY_STRAFE_ATTACK()l
extern _native void TASK_CAUTIOUS_ADVANCE()l
extern _native void TASK_FOLLOW_NAV_MESH_TO_COORD()l
extern _native void TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED()l
extern _native void SET_PED_PATH_CAN_USE_CLIMBOVERS()l
extern _native void SET_PED_PATH_CAN_USE_LADDERS()l
extern _native void SET_PED_PATH_CAN_DROP_FROM_HEIGHT()l
extern _native void SET_PED_PATH_CAN_ENTER_WATER()l
extern _native void SET_PED_PATH_CAN_AVOID_DYNAMIC_OBJECTS()l
extern _native void SET_PED_PATH_CAN_OPEN_CLOSED_DOORS()l
extern _native void SET_PED_PATH_CAN_AVOID_LINE_OF_FIRE()l
extern _native void SET_PED_PATH_VAULTING_USAGE()l
extern _native void GET_NAVMESH_ROUTE_DISTANCE_REMAINING()l
extern _native void TASK_GO_TO_COORD_ANY_MEANS()l
extern _native void TASK_PLAY_ANIM()l
extern _native void TASK_LOOK_AT_COORD()l
extern _native void TASK_LOOK_AT_PED()l
extern _native void TASK_LOOK_AT_VEHICLE()l
extern _native void TASK_LOOK_AT_OBJECT()l
extern _native void TASK_CLEAR_LOOK_AT()l
extern _native void OPEN_SEQUENCE_TASK()l
extern _native void CLOSE_SEQUENCE_TASK()l
extern _native void TASK_PERFORM_SEQUENCE()l
extern _native void TASK_PERFORM_SEQUENCE_LOCALLY()l
extern _native void CLEAR_SEQUENCE_TASK()l
extern _native void SET_SEQUENCE_TO_REPEAT()l
extern _native void GET_SEQUENCE_PROGRESS()l
extern _native void TASK_LEAVE_VEHICLE_IMMEDIATELY()l
extern _native void GET_SCRIPT_TASK_STATUS()l
extern _native void TASK_LEAVE_ANY_VEHICLE()l
extern _native void TASK_AIM_GUN_AT_PED()l
extern _native void TASK_GO_TO_COORD_WHILE_SHOOTING()l
extern _native void TASK_TURN_PED_TO_FACE_PED()l
extern _native void TASK_AIM_GUN_AT_COORD()l
extern _native void TASK_SHOOT_AT_COORD()l
extern _native void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT()l
extern _native void TASK_CHAT_WITH_PED()l
extern _native void CLEAR_PED_TASKS()l
extern _native void CLEAR_PED_SECONDARY_TASK()l
extern _native void TASK_EVERYONE_LEAVE_VEHICLE()l
extern _native void TASK_GOTO_PED_OFFSET()l
extern _native void TASK_SIT_DOWN()l
extern _native void TASK_SIT_DOWN_ON_SEAT()l
extern _native void TASK_SIT_DOWN_INSTANTLY()l
extern _native void TASK_SIT_DOWN_ON_OBJECT()l
extern _native void IS_PED_SITTING_IDLE()l
extern _native void SET_PED_SIT_IDLE_ANIM()l
extern _native void HAS_OVERRIDEN_SIT_IDLE_ANIM_FINISHED()l
extern _native void IS_SITTING_OBJECT_NEAR()l
extern _native void TASK_SIT_DOWN_ON_NEAREST_OBJECT()l
extern _native void TASK_TURN_PED_TO_FACE_COORD()l
extern _native void TASK_DRIVE_POINT_ROUTE()l
extern _native void TASK_VEHICLE_TEMP_ACTION()l
extern _native void TASK_VEHICLE_MISSION()l
extern _native void TASK_VEHICLE_MISSION_PED_TARGET()l
extern _native void TASK_VEHICLE_MISSION_COORS_TARGET()l
extern _native void TASK_HELI_MISSION()l
extern _native void TASK_GO_TO_OBJECT()l
extern _native void TASK_WEAPON_ROLL()l
extern _native void TASK_PICKUP_AND_CARRY_OBJECT()l
extern _native void SET_PED_DROPS_OBJECT()l
extern _native void TASK_DRIVE_BY()l
extern _native void TASK_DRIVER_COMBAT()l
extern _native void TASK_USE_MOBILE_PHONE()l
extern _native void TASK_USE_MOBILE_PHONE_TIMED()l
extern _native void TASK_USE_WALKIE_TALKIE()l
extern _native void TASK_CHAT_TO_PED()l
extern _native void ADD_FOLLOW_NAVMESH_TO_PHONE_TASK()l
extern _native void GET_MOBILE_PHONE_TASK_SUB_TASK()l
extern _native void TASK_WARP_PED_INTO_VEHICLE()l
extern _native void TASK_SHOOT_AT_PED()l
extern _native void TASK_SHOOT_AT_VEHICLE()l
extern _native void TASK_AIM_GUN_AT_VEHICLE()l
extern _native void TASK_GOTO_VEHICLE()l
extern _native void CLEAR_PED_TASKS_IMMEDIATELY()l
extern _native void TASK_PERFORM_SEQUENCE_FROM_PROGRESS()l
extern _native void SET_NEXT_DESIRED_MOVE_STATE()l
extern _native void SET_CURRENT_PED_MOVE_STATE()l
extern _native void TASK_GOTO_PED_AIMING()l
extern _native void TASK_SET_PED_DECISION_MAKER()l
extern _native void TASK_PED_SLIDE_TO_COORD()l
extern _native void TASK_PED_SLIDE_TO_COORD_AND_PLAY_ANIM()l
extern _native void TASK_PED_SLIDE_TO_COORD_AND_PLAY_ANIM_HDG_RATE()l
extern _native void TASK_PED_SLIDE_TO_COORD_HDG_RATE()l
extern _native void TASK_DRIVE_POINT_ROUTE_ADVANCED()l
extern _native void TASK_FOLLOW_PATROL_ROUTE()l
extern _native void TASK_COMBAT_PED()l
extern _native void TASK_COMBAT_PED_TIMED()l
extern _native void TASK_COMBAT_MOVE_TO_COVER()l
extern _native void TASK_COMBAT_MOVE_TO_COVER_COORDS()l
extern _native void TASK_COMBAT_SNAP_TO_COVER()l
extern _native void TASK_COMBAT_SNAP_TO_COVER_COORDS()l
extern _native void TASK_COMBAT_SNAP_TO_COVER_AMBUSH()l
extern _native void TASK_COMBAT_SNAP_TO_COVER_AMBUSH_COORDS()l
extern _native void TASK_COMBAT_MOVE_TO_COVER_TACTICAL()l
extern _native void TASK_COMBAT_MOVE_TO_COVER_TACTICAL_COORDS()l
extern _native void TASK_COMBAT_SNAP_TO_COVER_TACTICAL()l
extern _native void TASK_COMBAT_SNAP_TO_COVER_TACTICAL_COORDS()l
extern _native void ADD_SPATIALDATA_COVER_POINT()l
extern _native void REMOVE_SPATIALDATA_COVER_POINT()l
extern _native void DOES_SPATIALDATA_COVER_POINT_EXIST()l
extern _native void TASK_TOGGLE_DUCK()l
extern _native void TASK_GUARD_CURRENT_POSITION()l
extern _native void TASK_GUARD_ASSIGNED_DEFENSIVE_AREA()l
extern _native void TASK_GUARD_ANGLED_DEFENSIVE_AREA()l
extern _native void TASK_GUARD_SPHERE_DEFENSIVE_AREA()l
extern _native void TASK_STAND_GUARD()l
extern _native void SET_DRIVE_TASK_CRUISE_SPEED()l
extern _native void ADD_COVER_BLOCKING_AREA()l
extern _native void REMOVE_ALL_COVER_BLOCKING_AREAS()l
extern _native void TASK_START_SCENARIO_IN_PLACE()l
extern _native void TASK_START_SCENARIO_AT_POSITION()l
extern _native void TASK_USE_NEAREST_SCENARIO_TO_COORD()l
extern _native void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP()l
extern _native void DOES_SCENARIO_EXIST_IN_AREA()l
extern _native void TASK_COMBAT_HATED_TARGETS_IN_AREA()l
extern _native void TASK_COMBAT_HATED_TARGETS_AROUND_PED()l
extern _native void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED()l
extern _native void TASK_SELECT_WEAPON_TO_HAND()l
extern _native void TASK_SWAP_WEAPON()l
extern _native void TASK_DROP_WEAPON()l
extern _native void TASK_COMBAT_ROLL()l
extern _native void TASK_MOBILE_CONVERSATION()l
extern _native void IS_PED_GETTING_UP()l
extern _native void TASK_USE_DPV()l
extern _native void TASK_GO_TO_COORD_DPV()l
extern _native void OPEN_PATROL_ROUTE()l
extern _native void CLOSE_PATROL_ROUTE()l
extern _native void ADD_PATROL_ROUTE_NODE()l
extern _native void ADD_PATROL_ROUTE_LINK()l
extern _native void CREATE_PATROL_ROUTE()l
extern _native void DELETE_PATROL_ROUTE()l
extern _native void GET_PATROL_TASK_INFO()l
extern _native void TASK_PATROL()l
extern _native void ADD_VEHICLE_SUBTASK_ATTACK_COORD()l
extern _native void ADD_VEHICLE_SUBTASK_ATTACK_PED()l
extern _native void ADD_VEHICLE_SUBTASK_STRAFE_COORDS()l
extern _native void TASK_VEHICLE_SHOOT_AT_PED()l
extern _native void TASK_VEHICLE_SHOOT_AT_COORD()l
extern _native void TASK_HANG_GLIDER()l
extern _native void SET_HANG_GLIDER_AIR_SPEED()l
extern _native void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD()l
extern _native void TASK_GO_TO_COORD_WHILE_AIMING_AT_PED()l
extern _native void TASK_GO_TO_COORD_WHILE_AIMING_AT_VEHICLE()l
extern _native void TASK_GO_TO_COORD_WHILE_AIMING_AT_OBJECT()l
extern _native void TASK_GO_TO_PED_WHILE_AIMING_AT_COORD()l
extern _native void TASK_GO_TO_PED_WHILE_AIMING_AT_PED()l
extern _native void TASK_GO_TO_PED_WHILE_AIMING_AT_VEHICLE()l
extern _native void TASK_GO_TO_PED_WHILE_AIMING_AT_OBJECT()l
extern _native void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS()l
extern _native void TASK_SET_BLOCKING_OF_PED_TARGETTING()l
extern _native void TASK_SET_PLAYER_CONTROL()l
extern _native void TASK_CAUTIOUS_MOVETO()l
extern _native void TASK_ATTACK_MOVE()l
extern _native void TASK_ATTACK_MOVE_WHILE_AIMING_AT_PED()l
extern _native void TASK_ATTACK_MOVE_WHILE_AIMING_AT_COORD()l
extern _native void TASK_USE_NEAREST_MOUNTED_WEAPON()l
extern _native void TASK_DEFAULT_AIM_AT_PED()l
extern _native void TASK_DEFAULT_AIM_AT_COORD()l
extern _native void TASK_DEFAULT_AIM_AHEAD()l
extern _native void TASK_CLEAR_DEFAULT_AIM()l
extern _native void TASK_SURRENDER()l
extern _native void TASK_MELEE_LITE()l
extern _native void SET_AI_PROJECTILE_THROW_USE_ACTION_TREE()l
extern _native void SET_PROJECTILE_THROW_USE_DAMPING_COMPENSATION()l
extern _native void SET_AI_PROJECTILE_THROW_ENABLED()l
extern _native void TASK_REACT_INITIAL()l
extern _native void TASK_SEARCH_FOR_UNSEEN_ENEMY()l
extern _native void TASK_SEARCH_FOR_PED_AT_COVER_POINT()l
extern _native void TASK_MELEE_GRAPPLE()l
extern _native void SET_MELEE_GRAPPLE_FAIL()l
extern _native void SET_MELEE_GRAPPLE_SUCCESS()l
extern _native void GET_MELEE_GRAPPLE_FAIL_CHECK_ON()l
extern _native void TASK_SET_ACTION_INTENTION()l
extern _native void TASK_SHOOTDODGE()l
extern _native void SET_LOCAL_MAX_MOVE_BLEND_RATIO()l
extern _native void SET_VEHICLE_AS_ENTITY_SYNC_POINT()l
extern _native void SET_TRAFFIC_SYSTEM()l
extern _native void CREATE_VEHICLE()l
extern _native void DELETE_VEHICLE()l
extern _native void REMOVE_VEHICLE_FROM_PARKED_VEHICLES_BUDGET()l
extern _native void SET_VEHICLE_IN_CUTSCENE()l
extern _native void GET_VEHICLE_COORDS()l
extern _native void GET_DEAD_VEHICLE_COORDS()l
extern _native void SET_VEHICLE_COORDS()l
extern _native void GET_VEHICLE_BONE_INDEX()l
extern _native void IS_VEHICLE_IN_AREA()l
extern _native void IS_VEHICLE_DEAD()l
extern _native void IS_VEHICLE_MODEL()l
extern _native void CREATE_SCRIPT_VEHICLE_GENERATOR()l
extern _native void DELETE_SCRIPT_VEHICLE_GENERATOR()l
extern _native void SET_SCRIPT_VEHICLE_GENERATOR()l
extern _native void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA()l
extern _native void SET_ALL_VEHICLE_GENERATORS_ACTIVE()l
extern _native void SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE()l
extern _native void NETWORK_SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_WITH_HELI_ACTIVE()l
extern _native void GET_VEHICLE_HEADING()l
extern _native void SET_VEHICLE_HEADING()l
extern _native void SET_VEHICLE_ON_GROUND_PROPERLY()l
extern _native void IS_VEHICLE_STUCK_ON_ROOF()l
extern _native void ADD_VEHICLE_UPSIDEDOWN_CHECK()l
extern _native void REMOVE_VEHICLE_UPSIDEDOWN_CHECK()l
extern _native void IS_VEHICLE_AT_COORD()l
extern _native void IS_VEHICLE_STOPPED()l
extern _native void SET_VEHICLE_AS_NO_LONGER_NEEDED()l
extern _native void GET_VEHICLE_NUMBER_OF_PASSENGERS()l
extern _native void GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS()l
extern _native void SET_VEHICLE_DENSITY_MULTIPLIER()l
extern _native void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER()l
extern _native void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER()l
extern _native void SET_NUMBER_OF_PARKED_VEHICLES()l
extern _native void IS_VEHICLE_IN_AIR_PROPER()l
extern _native void IS_VEHICLE_UPSIDEDOWN()l
extern _native void SET_VEHICLE_DOORS_LOCKED()l
extern _native void EXPLODE_VEHICLE()l
extern _native void IS_VEHICLE_UPRIGHT()l
extern _native void SET_TAXI_LIGHTS()l
extern _native void IS_TAXI_LIGHT_ON()l
extern _native void SET_VEHICLE_HEALTH()l
extern _native void GET_VEHICLE_HEALTH()l
extern _native void SET_VEHICLE_COLOURS()l
extern _native void SET_CAN_RESPRAY_VEHICLE()l
extern _native void SET_VEHICLE_ONLY_DAMAGED_BY_PLAYER()l
extern _native void SET_VEHICLE_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP()l
extern _native void SET_VEHICLE_PROOFS()l
extern _native void IS_VEHICLE_IN_WATER()l
extern _native void IS_VEHICLE_ON_SCREEN()l
extern _native void GET_VEHICLE_SPEED()l
extern _native void GET_VEHICLE_FORWARD_X()l
extern _native void GET_VEHICLE_FORWARD_Y()l
extern _native void SET_BOAT_ANCHOR()l
extern _native void SET_VEHICLE_VISIBLE()l
extern _native void SET_VEHICLE_SIREN()l
extern _native void GET_VEHICLE_SIREN_HEALTH()l
extern _native void IS_VEHICLE_SIREN_ON()l
extern _native void SET_VEHICLE_TURNS_TO_FACE_COORD()l
extern _native void SET_VEHICLE_STRONG()l
extern _native void ADD_VEHICLE_STUCK_CHECK()l
extern _native void REMOVE_VEHICLE_STUCK_CHECK()l
extern _native void GET_VEHICLE_COLOURS()l
extern _native void SET_ALL_VEHICLES_CAN_BE_DAMAGED()l
extern _native void SET_VEHICLE_CAN_BE_DAMAGED()l
extern _native void SET_VEHICLE_ENGINE_CAN_BE_DAMAGED()l
extern _native void SET_VEHICLE_ONLY_EXPLODES_WHEN_HIT_BY_MULTIPLE_EXPLOSIONS()l
extern _native void GET_OFFSET_FROM_VEHICLE_IN_WORLD_COORDS()l
extern _native void GET_OFFSET_FROM_VEHICLE_GIVEN_WORLD_COORDS()l
extern _native void IS_VEHICLE_SEAT_FREE()l
extern _native void GET_PED_IN_VEHICLE_SEAT()l
extern _native void GET_VEHICLE_MODEL()l
extern _native void SET_VEHICLE_RANDOM_ROUTE_SEED()l
extern _native void IS_VEHICLE_ON_FIRE()l
extern _native void STOP_VEHICLE_FIRE()l
extern _native void IS_VEHICLE_TYRE_BURST()l
extern _native void SET_VEHICLE_FORWARD_SPEED()l
extern _native void SET_VEHICLE_AS_CONVOY_VEHICLE()l
extern _native void SET_VEHICLE_CONTROL_TO_PLAYER()l
extern _native void SET_CAR_BOOT_OPEN()l
extern _native void IS_VEHICLE_WAITING_FOR_WORLD_COLLISION()l
extern _native void SET_VEHICLE_TYRE_BURST()l
extern _native void SET_VEHICLE_DOORS_SHUT()l
extern _native void FREEZE_VEHICLE_POSITION()l
extern _native void SET_VEHICLE_NOT_EXPLODABLE()l
extern _native void HAS_VEHICLE_BEEN_DAMAGED_BY_PED()l
extern _native void HAS_VEHICLE_BEEN_DAMAGED_BY_VEHICLE()l
extern _native void GET_RANDOM_VEHICLE_OF_TYPE_IN_AREA()l
extern _native void SET_VEHICLE_TYRES_CAN_BURST()l
extern _native void CLEAR_VEHICLE_LAST_DAMAGE_ENTITY()l
extern _native void DOES_VEHICLE_EXIST()l
extern _native void FREEZE_VEHICLE_POSITION_AND_DONT_LOAD_COLLISION()l
extern _native void SET_LOAD_COLLISION_FOR_VEHICLE_FLAG()l
extern _native void START_RECORDING_VEHICLE()l
extern _native void START_RECORDING_VEHICLE_TRANSITION_FROM_PLAYBACK()l
extern _native void STOP_RECORDING_ALL_VEHICLES()l
extern _native void START_PLAYBACK_RECORDED_VEHICLE_USING_AI()l
extern _native void REQUEST_VEHICLE_RECORDING()l
extern _native void REMOVE_VEHICLE_RECORDING()l
extern _native void START_PLAYBACK_RECORDED_VEHICLE()l
extern _native void STOP_PLAYBACK_RECORDED_VEHICLE()l
extern _native void PAUSE_PLAYBACK_RECORDED_VEHICLE()l
extern _native void UNPAUSE_PLAYBACK_RECORDED_VEHICLE()l
extern _native void SET_PLAYBACK_SPEED()l
extern _native void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE()l
extern _native void IS_PLAYBACK_GOING_ON_FOR_VEHICLE()l
extern _native void IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE()l
extern _native void GET_CURRENT_PLAYBACK_NUMBER_FOR_VEHICLE()l
extern _native void GET_POSITION_IN_RECORDING()l
extern _native void GET_TIME_POSITION_IN_RECORDING()l
extern _native void GET_TIME_POSITION_IN_RECORDED_RECORDING()l
extern _native void GET_TOTAL_DURATION_OF_VEHICLE_RECORDING()l
extern _native void SET_VEHICLE_DOOR_OPEN()l
extern _native void REMOVE_VEHICLE_WINDOW()l
extern _native void SMASH_VEHICLE_WINDOW()l
extern _native void SET_VEHICLE_LIGHTS()l
extern _native void SET_VEHICLE_ALARM()l
extern _native void START_VEHICLE_ALARM()l
extern _native void SET_VEHICLE_INTERIORLIGHT()l
extern _native void SET_VEHICLE_LIGHT_MULTIPLIER()l
extern _native void ARE_VEHICLE_HEADLIGHTS_BROKEN()l
extern _native void IS_LEFT_VEHICLE_HEADLIGHT_BROKEN()l
extern _native void IS_RIGHT_VEHICLE_HEADLIGHT_BROKEN()l
extern _native void ATTACH_VEHICLE_TO_VEHICLE()l
extern _native void ATTACH_VEHICLE_TO_VEHICLE_PHYSICALLY()l
extern _native void ATTACH_VEHICLE_TO_OBJECT()l
extern _native void DETACH_VEHICLE()l
extern _native void IS_VEHICLE_ATTACHED()l
extern _native void SET_VEHICLE_TYRE_FIXED()l
extern _native void GET_VEHICLE_SPEED_VECTOR()l
extern _native void GET_VEHICLE_FORWARD_VECTOR()l
extern _native void IS_RECORDING_GOING_ON_FOR_VEHICLE()l
extern _native void GET_VEHICLE_ROLL()l
extern _native void SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE()l
extern _native void SET_RANDOM_TRAINS()l
extern _native void CREATE_MISSION_TRAIN()l
extern _native void SET_MISSION_TRAINS_AS_NO_LONGER_NEEDED()l
extern _native void DELETE_ALL_TRAINS()l
extern _native void SET_TRAIN_SPEED()l
extern _native void SET_TRAIN_CRUISE_SPEED()l
extern _native void GET_TRAIN_CABOOSE()l
extern _native void SET_TRAIN_STOPS_FOR_STATIONS()l
extern _native void SET_TRAIN_IS_STOPPED_AT_STATION()l
extern _native void SET_TRAIN_LEAVES_STATION()l
extern _native void SET_RANDOM_BOATS()l
extern _native void SET_GARBAGE_TRUCKS()l
extern _native void DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK()l
extern _native void EXPLODE_VEHICLE_IN_CUTSCENE()l
extern _native void ADD_VEHICLE_STUCK_CHECK_WITH_WARP()l
extern _native void SET_VEHICLE_MODEL_IS_SUPPRESSED()l
extern _native void GET_RANDOM_VEHICLE_IN_SPHERE()l
extern _native void GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE()l
extern _native void GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE()l
extern _native void GET_CLOSEST_VEHICLE()l
extern _native void STOP_RECORDING_VEHICLE()l
extern _native void SET_VEHICLE_AS_MISSION_VEHICLE()l
extern _native void GET_VEHICLE_PITCH()l
extern _native void GET_TRAIN_CARRIAGE()l
extern _native void SET_HELI_SPEED_CHEAT()l
extern _native void DELETE_MISSION_TRAIN()l
extern _native void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED()l
extern _native void HAS_VEHICLE_RECORDING_BEEN_LOADED()l
extern _native void DISPLAY_PLAYBACK_RECORDED_VEHICLE()l
extern _native void GET_VEHICLE_QUATERNION()l
extern _native void SET_VEHICLE_QUATERNION()l
extern _native void SET_MISSION_TRAIN_COORDS()l
extern _native void APPLY_FORCE_TO_VEHICLE()l
extern _native void IS_THIS_MODEL_A_BOAT()l
extern _native void IS_THIS_MODEL_A_PLANE()l
extern _native void IS_THIS_MODEL_A_HELI()l
extern _native void IS_THIS_MODEL_A_CAR()l
extern _native void IS_THIS_MODEL_A_TRAIN()l
extern _native void IS_THIS_MODEL_A_BIKE()l
extern _native void SET_HELI_BLADES_FULL_SPEED()l
extern _native void GET_VEHICLE_UPRIGHT_VALUE()l
extern _native void SET_VEHICLE_CAN_BE_TARGETTED()l
extern _native void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED()l
extern _native void GET_VEHICLE_DIRT_LEVEL()l
extern _native void SET_VEHICLE_DIRT_LEVEL()l
extern _native void SET_VEHICLE_COORDS_NO_OFFSET()l
extern _native void IS_VEHICLE_DOOR_FULLY_OPEN()l
extern _native void SET_FREEBIES_IN_VEHICLE()l
extern _native void SET_ROCKET_LAUNCHER_FREEBIE_IN_HELI()l
extern _native void SET_VEHICLE_ENGINE_ON()l
extern _native void SET_VEHICLE_PROVIDES_COVER()l
extern _native void SET_VEHICLE_DOOR_CONTROL()l
extern _native void SET_VEHICLE_DOOR_LATCHED()l
extern _native void GET_VEHICLE_DOOR_ANGLE_RATIO()l
extern _native void SET_VEHICLE_DOOR_SHUT()l
extern _native void SET_VEHICLE_DOOR_BROKEN()l
extern _native void SET_VEHICLE_CAN_BREAK()l
extern _native void DOES_VEHICLE_HAVE_ROOF()l
extern _native void IS_BIG_VEHICLE()l
extern _native void GET_NUMBER_OF_VEHICLE_COLOURS()l
extern _native void SET_VEHICLE_COLOUR_COMBINATION()l
extern _native void SET_VEHICLE_COLLISION()l
extern _native void SET_PLAYBACK_TO_USE_AI()l
extern _native void SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER()l
extern _native void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER()l
extern _native void GET_RANDOM_VEHICLE_MODEL_IN_MEMORY()l
extern _native void GET_CURRENT_BASIC_POLICE_VEHICLE_MODEL()l
extern _native void GET_CURRENT_POLICE_VEHICLE_MODEL()l
extern _native void GET_CURRENT_TAXI_VEHICLE_MODEL()l
extern _native void GET_VEHICLE_DOOR_LOCK_STATUS()l
extern _native void IS_VEHICLE_DOOR_DAMAGED()l
extern _native void IS_COP_VEHICLE_IN_AREA_3D()l
extern _native void IS_VEHICLE_TOUCHING_VEHICLE()l
extern _native void SET_TRAIN_FORCED_TO_SLOW_DOWN()l
extern _native void IS_VEHICLE_ON_ALL_WHEELS()l
extern _native void GET_VEHICLE_MODEL_VALUE()l
extern _native void GET_TRAIN_DIRECTION()l
extern _native void SKIP_TO_NEXT_ALLOWED_STATION()l
extern _native void GET_NEXT_STATION_FOR_TRAIN()l
extern _native void GET_CURRENT_STATION_FOR_TRAIN()l
extern _native void GET_TIME_TIL_NEXT_STATION()l
extern _native void SET_RENDER_TRAIN_AS_DERAILED()l
extern _native void GET_STATION_NAME()l
extern _native void SET_WAITING_AT_STATION_TIME()l
extern _native void FORCE_TRAIN_DOOR_OPEN_CLOSE()l
extern _native void SET_TRAIN_SHAKE()l
extern _native void SET_VEHICLE_EXTRA_COLOURS()l
extern _native void GET_VEHICLE_EXTRA_COLOURS()l
extern _native void HAS_VEHICLE_BEEN_RESPRAYED()l
extern _native void SET_VEHICLE_FIXED()l
extern _native void SET_ROOM_FOR_VEHICLE_BY_NAME()l
extern _native void SET_ROOM_FOR_VEHICLE_BY_KEY()l
extern _native void CLEAR_ROOM_FOR_VEHICLE()l
extern _native void GET_KEY_FOR_VEHICLE_IN_ROOM()l
extern _native void GET_INTERIOR_FROM_VEHICLE()l
extern _native void GET_HEIGHT_OF_VEHICLE()l
extern _native void SET_MAD_DRIVERS()l
extern _native void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA()l
extern _native void SET_VEHICLE_STEER_BIAS()l
extern _native void HAS_VEHICLE_STOPPED_BECAUSE_OF_LIGHT()l
extern _native void GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME()l
extern _native void IS_VEHICLE_EXTRA_TURNED_ON()l
extern _native void SET_VEHICLE_EXTRA()l
extern _native void SET_CONVERTIBLE_ROOF()l
extern _native void SET_GANG_VEHICLE()l
extern _native void IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS()l
extern _native void SET_VEHICLE_DAMAGE()l
extern _native void GET_VEHICLE_ENGINE_HEALTH()l
extern _native void SET_VEHICLE_ENGINE_HEALTH()l
extern _native void GET_VEHICLE_PETROL_TANK_HEALTH()l
extern _native void SET_VEHICLE_PETROL_TANK_HEALTH()l
extern _native void SET_VEHICLE_BLOWUP_ON_NEXT_COLLISION()l
extern _native void SET_BOAT_PETROLTANK_BURN_RATE()l
extern _native void SET_PETROLTANK_BURN_RATE()l
extern _native void SET_BOAT_WILL_SINK()l
extern _native void IS_VEHICLE_A_MISSION_VEHICLE()l
extern _native void IS_VEHICLE_STUCK_TIMER_UP()l
extern _native void RESET_VEHICLE_STUCK_TIMER()l
extern _native void IS_VEHICLE_DRIVEABLE()l
extern _native void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER()l
extern _native void SET_VEHICLE_NEEDS_TO_BE_HOTWIRED()l
extern _native void SET_VEHICLE_BLIP_THROTTLE_RANDOMLY()l
extern _native void SET_POLICE_FOCUS_WILL_TRACK_VEHICLE()l
extern _native void START_VEHICLE_HORN()l
extern _native void SET_VEHICLE_HAS_STRONG_AXLES()l
extern _native void GET_DISPLAY_NAME_FROM_VEHICLE_MODEL()l
extern _native void GET_VEHICLE_DEFORMATION_AT_POS()l
extern _native void ADD_VEHICLE_TO_MISSION_DELETION_LIST()l
extern _native void SET_VEHICLE_ALPHA()l
extern _native void SET_VEHICLE_LIVERY()l
extern _native void IS_VEHICLE_WINDOW_INTACT()l
extern _native void RESET_VEHICLE_WHEELS()l
extern _native void SET_ALL_VEHICLES_HIGH_LOD()l
extern _native void IS_HELI_PART_BROKEN()l
extern _native void GET_NEAREST_CABLE_CAR()l
extern _native void SET_VEHICLE_NAME_DEBUG()l
extern _native void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE()l
extern _native void SET_VEHICLE_EXPLODES_ONLY_FROM_PROJECTILE_EXPLOSIONS()l
extern _native void IS_PED_INSIDE_TRAIN()l
extern _native void SET_BOAT_OUT_OF_CONTROL_AND_BLOW_UP_WHEN_DRIVER_DEAD()l
extern _native void SET_CAR_OUT_OF_CONTROL_AND_BLOW_UP_WHEN_DRIVER_DEAD()l
extern _native void SET_VEHICLE_DRIVE_FORCE_IN_AIR()l
extern _native void IS_DAMAGE_BY_PROJECTILE()l
extern _native void SET_DAMAGE_BY_PROJECTILE()l
extern _native void SET_BOAT_TILT_IN_AIR()l
extern _native void SET_VEHICLE_CAN_TRIGGER_BULLET_CAM()l
extern _native void SET_VEHICLE_BULLET_CAM_PREF()l
extern _native void SET_VEHICLE_BULLET_CAMERA_ON_NEXT_HIT()l
extern _native void SET_VEHICLE_FIXED_WEAPON_DAMAGE()l
extern _native void GET_VEHICLE_FIXED_WEAPON_DAMAGE()l
extern _native void SET_VEHICLE_FIXED_WEAPON_ACCURACY()l
extern _native void GET_VEHICLE_FIXED_WEAPON_ACCURACY()l
extern _native void SET_VEHICLE_FIXED_WEAPON_FIRING_PATTERN_SET()l
extern _native void SET_VEHICLE_FIXED_WEAPON_FIRING_PATTERN_MODE()l
extern _native void GET_VEHICLE_FIXED_WEAPON_FIRING_PATTERN_MODE()l
extern _native void HELI_SPOTLIGHT_TRACK_PED()l
extern _native void ALLOCATE_VEHICLE_INST_LIGHT_TUNE_DATA()l
extern _native void FREE_VEHICLE_INST_LIGHT_TUNE_DATA()l
extern _native void SET_VEHICLE_INST_LIGHT_TUNE_VALUES()l
extern _native void SET_VEHICLE_FREEZE_AFTER_BLOWING_UP()l
extern _native void GAMEPLAY_HELPER_BOX_CREATE_VEHICLE_ATTACHED()l
extern _native void SET_VEHICLE_REACT_TO_EXPLOSION()l
extern _native void PLAY_VEHICLE_ANIM()l
extern _native void DELETE_VEHICLE_ANIMATOR()l
extern _native void CREATE_OBJECT()l
extern _native void CREATE_OBJECT_NO_OFFSET()l
extern _native void CREATE_OBJECT_MOVER()l
extern _native void DELETE_OBJECT()l
extern _native void GET_OBJECT_HEADING()l
extern _native void SET_OBJECT_HEADING()l
extern _native void GET_OBJECT_COORDS()l
extern _native void SET_OBJECT_COORDS()l
extern _native void GET_OBJECT_MASS()l
extern _native void SET_OBJECT_AS_NO_LONGER_NEEDED()l
extern _native void GET_SAFE_PLACEMENT_COORDS()l
extern _native void GET_PICKUP_TYPE_FROM_WEAPON_TYPE()l
extern _native void CREATE_PLACEMENT()l
extern _native void CREATE_PLACEMENT_ROTATE()l
extern _native void CREATE_AMMOBAG_PLACEMENT()l
extern _native void CREATE_AMMOBAG_PLACEMENT_ROTATE()l
extern _native void SET_AMMOBAG_AMMO_AMOUNT()l
extern _native void SET_AMMOBAG_ENABLED()l
extern _native void SET_AMMOBAG_REGEN_TIME()l
extern _native void SET_AMMOBAG_REGEN_RANGE()l
extern _native void SET_PICKUP_LIMIT_ANGLE()l
extern _native void GET_PLACEMENT_COORDS()l
extern _native void REMOVE_ALL_PICKUPS_AND_PLACEMENTS_OF_TYPE()l
extern _native void REMOVE_ALL_PICKUPS()l
extern _native void REMOVE_ALL_PLACEMENTS()l
extern _native void SET_PICKUP_REMOVAL_TIMES()l
extern _native void SET_AUTODESTROY_MPITEMS_WHEN_PICKED_BY_AN_ENEMY()l
extern _native void GET_NUMBER_OF_PICKUPS_AND_PLACEMENTS_OF_TYPE()l
extern _native void HAS_PLACEMENT_BEEN_COLLECTED()l
extern _native void REMOVE_PLACEMENT()l
extern _native void GET_PICKUP_FROM_PLACEMENT()l
extern _native void ENABLE_PICKUP_ATTACHMENT()l
extern _native void TOGGLE_PICKUP_ATTACHMENT()l
extern _native void IS_PICKUP_ATTACHMENT_ENABLED()l
extern _native void IS_PICKUP_ATTACHMENT_TOGGLED()l
extern _native void SET_PICKUP_LASER_SIGHT_ATTACHMENT()l
extern _native void GET_PICKUP_LASER_SIGHT_ATTACHMENT()l
extern _native void SET_PICKUP_WEAPON_DATA_FROM_WEAPON()l
extern _native void SET_PICKUP_AMMO()l
extern _native void GET_PICKUP_AMMO()l
extern _native void REMOVE_PICKUP()l
extern _native void REMOVE_PICKUPS_OF_TYPE_IN_GAMEPLAY_HELPER_BOX()l
extern _native void SET_DEAD_PEDS_DROP_WEAPONS()l
extern _native void SET_PLAYERS_DROP_MONEY_IN_NETWORK_GAME()l
extern _native void IS_OBJECT_ON_SCREEN()l
extern _native void ROTATE_OBJECT()l
extern _native void SLIDE_OBJECT()l
extern _native void SET_OBJECT_TARGETTABLE()l
extern _native void SET_VISIBILITY_OF_CLOSEST_OBJECT_OF_TYPE()l
extern _native void HAS_OBJECT_BEEN_DAMAGED()l
extern _native void SET_OBJECT_INITIAL_VELOCITY()l
extern _native void SET_OBJECT_COLLISION()l
extern _native void SET_OBJECT_DYNAMIC()l
extern _native void SET_NETWORK_OBJECT_TERRITORY_EFFECT()l
extern _native void CLEAR_NETWORK_OBJECT_TERRITORY_EFFECT()l
extern _native void DOES_OBJECT_EXIST()l
extern _native void GET_OFFSET_FROM_OBJECT_IN_WORLD_COORDS()l
extern _native void SET_OBJECT_ROTATION()l
extern _native void GET_OBJECT_ROTATION()l
extern _native void SET_OBJECT_RECORDS_COLLISIONS()l
extern _native void HAS_OBJECT_COLLIDED_WITH_ANYTHING()l
extern _native void SET_OBJECT_REFLECTS()l
extern _native void GET_OBJECT_REFLECTS()l
extern _native void IS_OBJECT_AT_COORD()l
extern _native void IS_OBJECT_IN_WATER()l
extern _native void IS_OBJECT_IN_AREA()l
extern _native void IS_OBJECT_IN_CROSSHAIR_CYLINDER()l
extern _native void FREEZE_OBJECT_POSITION()l
extern _native void ADD_OBJECT_TO_EXPLOSION_OCCLUSION_TESTS()l
extern _native void GET_OBJECT_VELOCITY()l
extern _native void IS_OBJECT_STATIC()l
extern _native void IS_OBJECT_FIXED_WAITING_FOR_COLLISION()l
extern _native void GET_OBJECT_ROTATION_VELOCITY()l
extern _native void GET_OBJECT_SPEED()l
extern _native void ATTACH_OBJECT_TO_VEHICLE()l
extern _native void ATTACH_OBJECT_TO_VEHICLE_PHYSICALLY()l
extern _native void ATTACH_OBJECT_TO_OBJECT()l
extern _native void ATTACH_OBJECT_TO_OBJECT_PHYSICALLY()l
extern _native void ATTACH_OBJECT_TO_PED()l
extern _native void DETACH_OBJECT()l
extern _native void IS_OBJECT_ATTACHED()l
extern _native void GET_VEHICLE_OBJECT_IS_ATTACHED_TO()l
extern _native void GET_PED_OBJECT_IS_ATTACHED_TO()l
extern _native void IS_CLOSEST_OBJECT_OF_TYPE_SMASHED_OR_DAMAGED()l
extern _native void SMASH_GLASS_IN_RADIUS()l
extern _native void DAMAGE_GLASS_IN_RADIUS()l
extern _native void IS_GLASS_BROKEN_IN_RADIUS()l
extern _native void IS_GLASS_BROKEN_ON_OBJECT()l
extern _native void GET_OBJECT_HEALTH()l
extern _native void SET_OBJECT_HEALTH()l
extern _native void SET_OBJECT_VISIBLE()l
extern _native void PLAY_OBJECT_ANIM()l
extern _native void OBJECT_ANIM_EVENT_OLD()l
extern _native void OBJECT_ANIM_EVENT()l
extern _native void GET_OBJECT_ANIM_CURRENT_TIME()l
extern _native void SET_OBJECT_ANIM_CURRENT_TIME()l
extern _native void SET_OBJECT_ANIM_SPEED()l
extern _native void IS_OBJECT_PLAYING_ANIM()l
extern _native void FORCE_UPDATE_OBJECT_PHYSICAL_STATE()l
extern _native void GET_OBJECT_BONE_INDEX()l
extern _native void GET_OBJECT_BONE_COORDS()l
extern _native void GET_OBJECT_BONE_ORIENTATION()l
extern _native void GET_OBJECT_QUATERNION()l
extern _native void SET_OBJECT_QUATERNION()l
extern _native void SET_OBJECT_ONLY_DAMAGED_BY_PLAYER()l
extern _native void SET_USES_COLLISION_OF_CLOSEST_OBJECT_OF_TYPE()l
extern _native void FREEZE_POSITION_OF_CLOSEST_OBJECT_OF_TYPE()l
extern _native void SET_HEADING_OF_CLOSEST_OBJECT_OF_TYPE()l
extern _native void SET_STATE_OF_CLOSEST_DOOR_OF_TYPE()l
extern _native void GET_STATE_OF_CLOSEST_DOOR_OF_TYPE()l
extern _native void DOOR_GET_AUTO_CLOSE()l
extern _native void DOOR_GET_CLOSE()l
extern _native void DOOR_GET_LATCH()l
extern _native void DOOR_GET_LIMIT_MIN()l
extern _native void DOOR_GET_LIMIT_MAX()l
extern _native void DOOR_GET_IS_AFFECTED_BY_BULLETS()l
extern _native void DOOR_SET_AUTO_CLOSE()l
extern _native void DOOR_SET_CLOSE()l
extern _native void DOOR_SET_LATCH()l
extern _native void DOOR_SET_LIMIT()l
extern _native void DOOR_SET_LIMIT_MIN()l
extern _native void DOOR_SET_LIMIT_MAX()l
extern _native void DOOR_ACTIVATE_SPATIAL_DATA()l
extern _native void DOOR_SET_IS_AFFECTED_BY_BULLETS()l
extern _native void DOOR_FIND_CLOSEST_GET_AUTO_CLOSE()l
extern _native void DOOR_FIND_CLOSEST_GET_CLOSE()l
extern _native void DOOR_FIND_CLOSEST_GET_LATCH()l
extern _native void DOOR_FIND_CLOSEST_GET_LIMIT_MIN()l
extern _native void DOOR_FIND_CLOSEST_GET_LIMIT_MAX()l
extern _native void DOOR_FIND_CLOSEST()l
extern _native void DOOR_FIND_CLOSEST_SET_AUTO_CLOSE()l
extern _native void DOOR_FIND_CLOSEST_SET_CLOSE()l
extern _native void DOOR_FIND_CLOSEST_SET_LATCH()l
extern _native void DOOR_FIND_CLOSEST_SET_LIMIT()l
extern _native void DOOR_FIND_CLOSEST_SET_LIMIT_MIN()l
extern _native void DOOR_FIND_CLOSEST_SET_LIMIT_MAX()l
extern _native void DOOR_FIND_CLOSEST_ACTIVATE_SPATIAL_DATA()l
extern _native void DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS()l
extern _native void IS_OBJECT_IN_ANGLED_AREA()l
extern _native void IS_OBJECT_IN_GAMEPLAY_HELPER_BOX()l
extern _native void SET_OBJECT_AS_STEALABLE()l
extern _native void HAS_OBJECT_BEEN_UPROOTED()l
extern _native void GET_OBJECT_MODEL()l
extern _native void SET_OBJECT_PROOFS()l
extern _native void DOES_PLACEMENT_EXIST()l
extern _native void DOES_PICKUP_EXIST()l
extern _native void GET_NEAREST_COLLECTABLE_BIN_BAGS()l
extern _native void GET_INFO_ABOUT_NEARBY_ENTITY_WITH_SPECIAL_ATTRIBUTE()l
extern _native void GET_NEARBY_OBJECT_WITH_SPECIAL_ATTRIBUTE()l
extern _native void SWAP_NEAREST_BUILDING_MODEL()l
extern _native void GET_INTERIOR_AT_COORDS()l
extern _native void GET_ROOM_AT_COORDS()l
extern _native void GET_INTERIOR_FROM_NAME()l
extern _native void ADD_OBJECT_TO_INTERIOR_ROOM_BY_NAME()l
extern _native void ADD_OBJECT_TO_INTERIOR_ROOM_BY_KEY()l
extern _native void CLEAR_ROOM_FOR_OBJECT()l
extern _native void GET_ROOM_KEY_FROM_OBJECT()l
extern _native void ADD_PLACEMENT_TO_INTERIOR_ROOM_BY_NAME()l
extern _native void GET_ROOM_KEY_FROM_PLACEMENT()l
extern _native void APPLY_FORCE_TO_OBJECT()l
extern _native void IS_OBJECT_UPRIGHT()l
extern _native void SET_OBJECT_PHYSICS_PARAMS()l
extern _native void GET_OBJECT_FRAGMENT_DAMAGE_HEALTH()l
extern _native void HAS_FRAGMENT_ANY_OF_OBJECT_BEEN_DAMAGED()l
extern _native void HAS_FRAGMENT_ROOT_OF_OBJECT_BEEN_DAMAGED()l
extern _native void HAS_FRAGMENT_ROOT_OF_CLOSEST_OBJECT_OF_TYPE_BEEN_DAMAGED()l
extern _native void HAS_OBJECT_BEEN_DAMAGED_BY_PED()l
extern _native void HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_DAMAGED_BY_PED()l
extern _native void HAS_OBJECT_BEEN_DAMAGED_BY_VEHICLE()l
extern _native void CLEAR_OBJECT_LAST_DAMAGE_ENTITY()l
extern _native void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN()l
extern _native void SET_ACTIVATE_FRAG_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN()l
extern _native void SET_OBJECT_INVINCIBLE()l
extern _native void SMASH_GLASS_ON_OBJECT()l
extern _native void IS_NON_FRAG_OBJECT_SMASHED()l
extern _native void SET_OBJECT_LIGHTS()l
extern _native void SET_OBJECT_ALPHA()l
extern _native void SET_MULTIPLE_DRIVEBY_PICKUPS()l
extern _native void PICKUPS_PASS_TIME()l
extern _native void SET_ARROW_ABOVE_BLIPPED_PICKUPS()l
extern _native void SET_OBJECT_ANCHOR()l
extern _native void DOES_OBJECT_HAVE_PHYSICS()l
extern _native void SET_MOVER_SPEED()l
extern _native void SET_MOVER_ACTIVE()l
extern _native void GET_OBJECT_MATRIX_VECTOR()l
extern _native void GET_OBJECT_MATRIX()l
extern _native void SET_OBJECT_CAN_TRIGGER_BULLET_CAM()l
extern _native void GET_OBJECT_CAN_TRIGGER_BULLET_CAM()l
extern _native void SET_OBJECT_BULLET_CAM_PREF()l
extern _native void DESTROY_FRAGMENT_OBJECT()l
extern _native void SET_OBJECT_AS_PATH_OBSTACLE()l
extern _native void SET_OBJECT_AS_NON_PATH_OBSTACLE()l
extern _native void SET_OBJECT_AS_FLIPPABLE_TABLE()l
extern _native void GENERATE_OBJECT_CRUSH_IMMINENT_EVENT()l
extern _native void SYNC_FRAGMENT_OBJECTS()l
extern _native void SET_OBJECT_SILHOUETTE_ENABLED()l
extern _native void SET_OBJECT_SILHOUETTE_COLOUR()l
extern _native void DAMAGE_ALL_GROUPS_ON_OBJECT()l
extern _native void WAKE_RESTING_OBJECTS_AROUND()l
extern _native void FIND_OBJECT_AT_POSITION()l
extern _native void SET_PLACEMENT_CAN_BE_COLLECTED()l
extern _native void DOOR_FIND_CLOSEST_SET_FORCE_CLOSE()l
extern _native void SET_OBJECT_COLLIDE_WITH_NON_PLAYER_CHARACTER()l
extern _native void SET_OBJECT_USE_WATER_PARTICLES()l
extern _native void FORCE_REMOVE_AND_ADD_OBJECT()l
extern _native void SET_OBJECT_COLLIDE_WITH_OTHER_OBJECTS()l
extern _native void CREATE_SIMPLE_PED()l
extern _native void DELETE_SIMPLE_PED()l
extern _native void PLAY_SIMPLE_PED_ANIM()l
extern _native void MOVE_MAP_OBJECT_TO_EXTERIOR()l
extern _native void REQUEST_SCRIPT()l
extern _native void SET_SCRIPT_AS_NO_LONGER_NEEDED()l
extern _native void HAS_SCRIPT_LOADED()l
extern _native void DOES_SCRIPT_EXIST()l
extern _native void TERMINATE_THREAD()l
extern _native void SET_EXITFLAG_FOR_SCRIPT()l
extern _native void IS_EXITFLAG_SET()l
extern _native void SET_EXITFLAG_RESPONSE()l
extern _native void IS_THREAD_ACTIVE()l
extern _native void IS_THIS_THREAD_ISOLATED()l
extern _native void IS_THIS_THREAD_CONNECTED()l
extern _native void GET_THIS_THREAD_FRIENDLY_NAME()l
extern _native void GET_ID_OF_THIS_THREAD()l
extern _native void TERMINATE_THIS_THREAD()l
extern _native void GET_NUMBER_OF_THREADS_RUNNING_THIS_SCRIPT()l
extern _native void COMPARE_AND_SWAP()l
extern _native void CHECKPOINT_STORAGE_SAVE()l
extern _native void CHECKPOINT_STORAGE_LOAD()l
extern _native void SET_LEVEL_COMPLETION()l
extern _native void GET_LEVEL_COMPLETION()l
extern _native void CLEAR_LEVEL_COMPLETION()l
extern _native void IS_TUTORIAL_COMPLETE()l
extern _native void SET_TUTORIAL_COMPLETE()l
extern _native void IS_LMS_TUTORIAL_COMPLETE()l
extern _native void SET_LMS_TUTORIAL_COMPLETE()l
extern _native void CLEAR_TUTORIAL_COMPLETE()l
extern _native void SAVE_PICKUPS()l
extern _native void RESTORE_PICKUPS()l
extern _native void EXISTS_SCRIPT_TUNABLE_VARIABLE_BOOL()l
extern _native void GET_SCRIPT_TUNABLE_VARIABLE_BOOL()l
extern _native void REGISTER_SCRIPT_TUNABLE_VARIABLE_INT()l
extern _native void REGISTER_SCRIPT_TUNABLE_VARIABLE_FLOAT()l
extern _native void ADD_SCRIPT_TUNABLE_BOOL()l
extern _native void ADD_SCRIPT_TUNABLE_INT()l
extern _native void ADD_SCRIPT_TUNABLE_FLOAT()l
extern _native void EXISTS_SCRIPT_TUNABLE_VARIABLE_CRC_BOOL()l
extern _native void GET_SCRIPT_TUNABLE_VARIABLE_CRC_BOOL()l
extern _native void REGISTER_SCRIPT_TUNABLE_VARIABLE_CRC_INT()l
extern _native void REGISTER_SCRIPT_TUNABLE_VARIABLE_CRC_FLOAT()l
extern _native void ADD_SCRIPT_TUNABLE_CRC_BOOL()l
extern _native void ADD_SCRIPT_TUNABLE_CRC_INT()l
extern _native void ADD_SCRIPT_TUNABLE_CRC_FLOAT()l
extern _native void PROFILER_DUMP_VALUES()l
extern _native void FLUSH_DISCARDABLE_MEMORY()l
extern _native void FLUSH_STREAM_MEMORY()l
extern _native void STAT_HASH_INCREMENT_INT()l
extern _native void STAT_HASH_DECREMENT_INT()l
extern _native void STAT_HASH_INCREMENT_FLOAT()l
extern _native void STAT_HASH_DECREMENT_FLOAT()l
extern _native void STAT_HASH_SET_INT()l
extern _native void STAT_HASH_SET_FLOAT()l
extern _native void STAT_INCREMENT_INT()l
extern _native void STAT_DECREMENT_INT()l
extern _native void STAT_INCREMENT_FLOAT()l
extern _native void STAT_DECREMENT_FLOAT()l
extern _native void STAT_SET_INT()l
extern _native void STAT_SET_FLOAT()l
extern _native void SCRIPT_VAR_HASH_SET_INT()l
extern _native void SCRIPT_VAR_HASH_SET_FLOAT()l
extern _native void SCRIPT_VAR_SET_INT()l
extern _native void SCRIPT_VAR_SET_FLOAT()l
extern _native void INCREMENT_STREAK_STAT()l
extern _native void CLEAR_KILL_STREAK_RECORDS()l
extern _native void CLEAR_COLLECTABLE_STATS()l
extern _native void IS_STAT_FLOAT()l
extern _native void IS_STAT_HASH_FLOAT()l
extern _native void STAT_GET_INT()l
extern _native void STAT_GET_FLOAT()l
extern _native void STAT_HASH_GET_INT()l
extern _native void STAT_HASH_GET_FLOAT()l
extern _native void SCRIPT_VAR_HASH_GET_INT()l
extern _native void SCRIPT_VAR_HASH_GET_FLOAT()l
extern _native void SCRIPT_VAR_GET_INT()l
extern _native void SCRIPT_VAR_GET_FLOAT()l
extern _native void STAT_HASH_WAIT_FOR_CHANGE_INT()l
extern _native void STAT_HASH_WAIT_FOR_CHANGE_FLOAT()l
extern _native void STAT_WAIT_FOR_CHANGE_INT()l
extern _native void STAT_WAIT_FOR_CHANGE_FLOAT()l
extern _native void STAT_WAIT()l
extern _native void STAT_WAIT_UNTIL_EXIST()l
extern _native void SCRIPT_VAR_HASH_WAIT_FOR_CHANGE_INT()l
extern _native void SCRIPT_VAR_HASH_WAIT_FOR_CHANGE_FLOAT()l
extern _native void SCRIPT_VAR_WAIT_FOR_CHANGE_INT()l
extern _native void SCRIPT_VAR_WAIT_FOR_CHANGE_FLOAT()l
extern _native void SCRIPT_VAR_WAIT()l
extern _native void SCRIPT_VAR_WAIT_UNTIL_EXIST()l
extern _native void STAT_HASH_EXISTS()l
extern _native void STAT_HASH_ADD_INT()l
extern _native void STAT_HASH_ADD_FLOAT()l
extern _native void STAT_EXISTS()l
extern _native void STAT_ADD_INT()l
extern _native void STAT_ADD_FLOAT()l
extern _native void SCRIPT_VAR_HASH_EXISTS()l
extern _native void SCRIPT_VAR_HASH_ADD_INT()l
extern _native void SCRIPT_VAR_HASH_ADD_FLOAT()l
extern _native void SCRIPT_VAR_EXISTS()l
extern _native void SCRIPT_VAR_ADD_INT()l
extern _native void SCRIPT_VAR_ADD_FLOAT()l
extern _native void ARE_SP_STATS_LOADED()l
extern _native void ARE_MP_STATS_LOADED()l
extern _native void LEADERBOARDS_GET_NUMBER_OF_COLUMNS()l
extern _native void LEADERBOARDS_GET_COLUMN_ID()l
extern _native void LEADERBOARDS_WRITE_PLAYER_DATA()l
extern _native void LEADERBOARDS_WRITE_GROUP_DATA()l
extern _native void LEADERBOARDS_WRITE__ROS__PLAYER_DATA()l
extern _native void LEADERBOARDS_WRITE_FLUSH()l
extern _native void LEADERBOARDS_READ_BY_GAMER()l
extern _native void LEADERBOARDS_READ_BY_COMMUNITY()l
extern _native void LEADERBOARDS_READ_BY_RANK_EX()l
extern _native void LEADERBOARDS_READ_BY_RADIUS_EX()l
extern _native void LEADERBOARDS_READ_FOR_LOCAL_GAMER_EX()l
extern _native void LEADERBOARDS_READ__ROS__FOR_LOCAL_GAMER()l
extern _native void LEADERBOARDS_READ_PENDING()l
extern _native void LEADERBOARDS_READ_FINISHED_AND_SUCCEEDED()l
extern _native void LEADERBOARDS_READ_GET_NUM_ROWS_EX()l
extern _native void LEADERBOARDS_READ_GET_ROW_DATA_EX()l
extern _native void LEADERBOARDS_READ_GET_ROW_DATA_FOR_LOCAL_GAMER_EX()l
extern _native void LEADERBOARDS_READ_RELEASE_DATA()l
extern _native void START_CONTEXT_HASH()l
extern _native void END_CONTEXT_HASH()l
extern _native void START_CONTEXT()l
extern _native void END_CONTEXT()l
extern _native void BG_SCRIPT_ADJUST_BY_UNIT()l
extern _native void GET_BG_SCRIPT_UNIT()l
extern _native void GET_ICON_TEXTURE_FOR_BG_SCRIPT()l
extern _native void GET_ICON_TEXTURE_DICTIONARY_FOR_BG_SCRIPT()l
extern _native void GET_BG_TEXTURE_FOR_BG_SCRIPT()l
extern _native void GET_UI_NAME_FOR_BG_SCRIPT()l
extern _native void GET_UI_DESCRIPTION_FOR_BG_SCRIPT()l
extern _native void DEBUG_GET_BG_SCRIPT_NAME()l
extern _native void GET_GRIND_PROGRESS()l
extern _native void SET_GRIND_PROGRESS()l
extern _native void GET_GRIND_GOAL()l
extern _native void GET_COMPLETED_GRIND_GOAL()l
extern _native void IS_GRIND_COMPLETE()l
extern _native void GET_GRIND_LEVEL()l
extern _native void GET_CHALLENGE_PROGRESS()l
extern _native void SET_CHALLENGE_PROGRESS()l
extern _native void GET_CHALLENGE_FAILED_STATE()l
extern _native void SET_CHALLENGE_FAILED_STATE()l
extern _native void DID_PLAYER_QUIT_LEVEL()l
extern _native void GET_BG_SCRIPT_LEADERBOARD_NAME()l
extern _native void HAS_ACHIEVEMENT_HASH()l
extern _native void GET_ACHIEVEMENT_HASH()l
extern _native void DOES_LAUNCH_PARAM_EXIST()l
extern _native void GET_LAUNCH_PARAM_VALUE()l
extern _native void GET_LAUNCH_PARAM_HASH()l
extern _native void COMPARE_AGAINST_SCORE_PARAM()l
extern _native void GET_SCRIPT_ID_FROM_NAME_HASH()l
extern _native void GIVE_BG_SCRIPT_AWARD()l
extern _native void SET_SUBTRACT_GRIND_XP_FROM_LEADERBOARDS()l
extern _native void LOAD_ALL_OBJECTS_NOW()l
extern _native void LOAD_SCENE()l
extern _native void NETWORK_START_LOAD_SCENE()l
extern _native void NETWORK_UPDATE_LOAD_SCENE()l
extern _native void LOAD_SCENE_FOR_ROOM_BY_KEY()l
extern _native void MARK_INTERIOR_COLLISION_REQUIRED()l
extern _native void CLEAR_INTERIOR_COLLISION_REQUIRED()l
extern _native void SET_INTERIOR_ACTIVE()l
extern _native void SET_INTERIOR_FORCE_INSTANTIATION()l
extern _native void REQUEST_MODEL()l
extern _native void HAS_MODEL_LOADED()l
extern _native void GET_MODEL_NAME()l
extern _native void REQUEST_WEAPON()l
extern _native void HAS_WEAPON_LOADED()l
extern _native void REQUEST_INTERIOR_MODELS()l
extern _native void SET_MODEL_AS_NO_LONGER_NEEDED()l
extern _native void SET_WEAPON_AS_NO_LONGER_NEEDED()l
extern _native void IS_MODEL_IN_CDIMAGE()l
extern _native void GET_PED_MODEL_FROM_INDEX()l
extern _native void GET_VEHICLE_MODEL_FROM_INDEX()l
extern _native void IS_MODEL_A_PED()l
extern _native void IS_MODEL_A_VEHICLE()l
extern _native void SET_STREAMING_POINT_OF_INTEREST()l
extern _native void RESET_STREAMING_POINT_OF_INTEREST()l
extern _native void FORCE_ALL_STREAMING_HELPERS_ACTIVE()l
extern _native void SET_STREAMING_HELPERS_AFFECTED_BY_NPCS()l
extern _native void REQUEST_COLLISION_AT_COORD()l
extern _native void REQUEST_ROOM_MINIMAL_COLLISION_MESH_BY_KEY()l
extern _native void REQUEST_COLLISION_FOR_MODEL()l
extern _native void HAS_COLLISION_FOR_MODEL_LOADED()l
extern _native void REQUEST_ANIM_DICT()l
extern _native void HAS_ANIM_DICT_LOADED()l
extern _native void REMOVE_ANIM_DICT()l
extern _native void REQUEST_IPL()l
extern _native void REMOVE_IPL()l
extern _native void SYNC_FRAGMENT_OBJECTS_IN_IPL()l
extern _native void SET_ROOM_FOR_OBJECTS_IN_IPL()l
extern _native void SET_IPL_ALWAYS_SEES_EXPLOSION()l
extern _native void SET_NEXT_STREAMING_REQUEST_A_PRIORITY()l
extern _native void SET_STREAMING()l
extern _native void SET_SCENE_STREAMING()l
extern _native void RESERVE_STREAMING_MEMORY()l
extern _native void RELEASE_STREAMING_MEMORY()l
extern _native void FORCE_WEAPON_LOAD()l
extern _native void SET_OBJECTS_AT_COORD_NOT_REMOVED_BY_STREAMING()l
extern _native void SET_GAME_PAUSES_FOR_STREAMING()l
extern _native void SET_REDUCE_PED_MODEL_BUDGET()l
extern _native void SET_REDUCE_VEHICLE_MODEL_BUDGET()l
extern _native void SET_DITCH_POLICE_MODELS()l
extern _native void GET_STABLE_NUM_OF_STREAMING_REQUESTS()l
extern _native void GET_STABLE_NUM_OF_PRIORITY_REQUESTS()l
extern _native void GET_NUMBER_OF_STREAMING_REQUESTS()l
extern _native void IS_STREAMING_PRIORITY_REQUESTS()l
extern _native void HAS_STREAMPED_LOADED()l
extern _native void STREAM_HELPERS_INIT()l
extern _native void SET_HELPER_TRACKING_MODE()l
extern _native void SET_HELPER_ENABLED()l
extern _native void STREAM_HELPERS_REQUEST_AT_LOC()l
extern _native void STREAM_HELPERS_DEACTIVATE()l
extern _native void STREAM_HELPERS_REACTIVATE()l
extern _native void SET_BULLETCAM_STREAMHELPERS_ENABLED()l
extern _native void SET_ROADS_IN_AREA()l
extern _native void SET_PED_PATHS_IN_AREA()l
extern _native void GET_SAFE_COORD_FOR_PED()l
extern _native void GET_CLOSEST_VEHICLE_NODE()l
extern _native void GET_CLOSEST_MAJOR_VEHICLE_NODE()l
extern _native void GET_CLOSEST_VEHICLE_NODE_WITH_HEADING()l
extern _native void GET_NTH_CLOSEST_VEHICLE_NODE()l
extern _native void GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING()l
extern _native void GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING_ON_ISLAND()l
extern _native void GET_NEXT_CLOSEST_VEHICLE_NODE_WITH_HEADING_ON_ISLAND()l
extern _native void GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION()l
extern _native void GET_CLOSEST_ROAD()l
extern _native void LOAD_PATH_NODES_IN_AREA()l
extern _native void RELEASE_PATH_NODES()l
extern _native void LOAD_ALL_PATH_NODES()l
extern _native void SET_ROADS_BACK_TO_ORIGINAL()l
extern _native void SET_PED_PATHS_BACK_TO_ORIGINAL()l
extern _native void GET_CLOSEST_NETWORK_RESTART_NODE()l
extern _native void GET_RANDOM_NETWORK_RESTART_NODE()l
extern _native void GET_RANDOM_NETWORK_RESTART_NODE_USING_GROUP_LIST()l
extern _native void GET_SORTED_NETWORK_RESTART_NODE()l
extern _native void GET_SORTED_NETWORK_RESTART_NODE_USING_GROUP_LIST()l
extern _native void CLEAR_NETWORK_RESTART_NODE_GROUP_LIST()l
extern _native void ADD_GROUP_TO_NETWORK_RESTART_NODE_GROUP_LIST()l
extern _native void REGISTER_PLAYER_RESPAWN_COORDS()l
extern _native void ADD_SPAWN_BLOCKING_AREA()l
extern _native void CLEAR_ALL_SPAWN_BLOCKING_AREAS()l
extern _native void GET_COORDS_FOR_NETWORK_RESTART_NODE()l
extern _native void GET_RANDOM_VEHICLE_NODE()l
extern _native void GET_RANDOM_VEHICLE_NODE_INCLUDE_SWITCHED_OFF_NODES()l
extern _native void GET_RANDOM_WATER_NODE()l
extern _native void GET_SPAWN_COORDS_FOR_VEHICLE_NODE()l
extern _native void GET_STREET_NAME_AT_COORD()l
extern _native void ARE_ALL_NAVMESH_REGIONS_LOADED()l
extern _native void CREATE_DIRECTIONS_TO_COORD()l
extern _native void CREATE_DYNAMIC_PATH_OBSTRUCTION()l
extern _native void DESTROY_DYNAMIC_PATH_OBSTRUCTION()l
extern _native void GET_WEAPON_NAME()l
extern _native void GET_WEAPON_HUD_TEXTURE()l
extern _native void GET_WEAPONTYPE_AMMO()l
extern _native void GET_WEAPON_GUNTYPE()l
extern _native void IS_THROWN_WEAPON()l
extern _native void SPAWN_GRENADE()l
extern _native void GET_WEAPONTYPE_MODEL()l
extern _native void SET_CURRENT_PED_WEAPON()l
extern _native void GET_CURRENT_PED_WEAPON()l
extern _native void IS_PED_ARMED()l
extern _native void SELECT_WEAPON_TO_HAND()l
extern _native void GET_WEAPON_FROM_HAND()l
extern _native void GET_WEAPON_FROM_HOLSTER()l
extern _native void GET_DOES_WEAPON_EXIST()l
extern _native void GET_WEAPON_AMMO()l
extern _native void SET_WEAPON_AMMO()l
extern _native void GET_WEAPON_AMMO_IN_CLIP()l
extern _native void SET_WEAPON_AMMO_IN_CLIP()l
extern _native void SET_PED_CONSUMING_AMMO()l
extern _native void GET_WEAPON_TYPE()l
extern _native void HAS_PED_GOT_WEAPON()l
extern _native void HAS_PED_GOT_SPECIFIC_WEAPON()l
extern _native void GET_AMMO_IN_PED_WEAPON()l
extern _native void ADD_AMMO_TO_PED()l
extern _native void SET_PED_AMMO()l
extern _native void SET_WEAPON_SLOT()l
extern _native void GET_WEAPON_FROM_SLOT()l
extern _native void GIVE_WEAPON_TO_PED_HAND()l
extern _native void GIVE_WEAPON_TO_PED_HOLSTER()l
extern _native void GIVE_WEAPON_TO_PED()l
extern _native void GIVE_DELAYED_WEAPON_TO_PED()l
extern _native void REMOVE_ALL_PED_WEAPONS()l
extern _native void REMOVE_ALL_LOCAL_PLAYER_WEAPONS_KEEPING_MPITEMS()l
extern _native void REMOVE_WEAPON_FROM_PED()l
extern _native void REMOVE_PED_WEAPON()l
extern _native void ENABLE_WEAPON_ATTACHMENT()l
extern _native void FORCE_WEAPON_SCOPE()l
extern _native void TOGGLE_WEAPON_ATTACHMENT()l
extern _native void IS_WEAPON_ATTACHMENT_ENABLED()l
extern _native void IS_WEAPON_ATTACHMENT_TOGGLED()l
extern _native void SET_MAX_SUPPRESSOR_DAMAGE_LEVEL()l
extern _native void SET_SUPPRESSOR_DAMAGE_LEVEL()l
extern _native void GET_SUPPRESSOR_DAMAGE_LEVEL()l
extern _native void SET_WEAPON_LIGHT_DATA()l
extern _native void SET_WEAPON_LIGHT_DATA_BY_NAME()l
extern _native void SET_WEAPON_SPAWNS_PICKUP()l
extern _native void GET_WEAPON_SPAWNS_PICKUP()l
extern _native void SET_LASER_SIGHT_ATTACHMENT()l
extern _native void GET_LASER_SIGHT_ATTACHMENT()l
extern _native void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE()l
extern _native void SET_PED_CURRENT_WEAPON_VISIBLE()l
extern _native void SET_PED_DROPS_WEAPONS_WHEN_DEAD()l
extern _native void HAS_PED_BEEN_DAMAGED_BY_WEAPON()l
extern _native void GET_PED_DAMAGE_WEAPON_TYPE()l
extern _native void CLEAR_PED_LAST_WEAPON_DAMAGE()l
extern _native void PED_HAS_VALID_THROW_TRAJECTORY_TO_POS()l
extern _native void HAS_VEHICLE_BEEN_DAMAGED_BY_WEAPON()l
extern _native void CLEAR_VEHICLE_LAST_WEAPON_DAMAGE()l
extern _native void SET_PED_DROPS_WEAPON()l
extern _native void GET_MAX_AMMO_IN_CLIP()l
extern _native void GET_MAX_AMMO_IN_HAND_CLIP_MP()l
extern _native void GET_AMMO_IN_CLIP()l
extern _native void SET_AMMO_IN_CLIP()l
extern _native void GET_MAX_AMMO()l
extern _native void SET_MAX_AMMO_CAP()l
extern _native void REMOVE_PED_AMMO()l
extern _native void IS_ANY_GRENADE_IN_HELPER_BOX()l
extern _native void GET_PED_LAST_WEAPON_IMPACT_COORD()l
extern _native void GET_IS_PED_LISTENING_TO_PED()l
extern _native void GET_IS_PED_PHOTOGRAPHING_COORD()l
extern _native void SET_PED_GADGET()l
extern _native void GET_SELECTED_PED_GADGET()l
extern _native void EXPLODE_PROJECTILES()l
extern _native void ACTIVATE_DETONATOR()l
extern _native void GET_IS_DETONATOR_FIRED()l
extern _native void HAS_VEHICLE_GOT_PROJECTILE_ATTACHED()l
extern _native void SET_SHELL_LOD_DIST_ENTITY()l
extern _native void SET_SHELL_LOD_DIST_MESHFX()l
extern _native void ATTACH_WEAPON_TO_VEHICLE()l
extern _native void REMOVE_ATTACHED_WEAPONS_FROM_VEHICLE()l
extern _native void OVERRIDE_WEAPON_VELOCITY()l
extern _native void SET_BULLET_VELOCITY_MODIFIER()l
extern _native void ADD_SCRIPTED_WEAPON_MODIFIER()l
extern _native void REMOVE_SCRIPTED_WEAPON_MODIFIER()l
extern _native void REMOVE_ALL_SCRIPTED_WEAPON_MODIFIER()l
extern _native void HAS_SHOT_BEEN_FIRED_IN_AREA()l
extern _native void HAS_SOMETHING_EXPLODED_IN_AREA()l
extern _native void HAS_BULLET_IMPACTED_IN_AREA()l
extern _native void GET_BULLET_IMPACT_AREA()l
extern _native void SET_ENABLE_BULLET_IMPACT_WATER()l
extern _native void THROW_MOLOTOV()l
extern _native void TOGGLE_TRACER()l
extern _native void SET_INSTANT_FIRE_FORCED()l
extern _native void SET_WEAPON_VISIBLE()l
extern _native void SET_HOLSTER_VISIBLE()l
extern _native void SET_GENERATE_BULLET_SHELLS()l
extern _native void SET_WEAPON_CHANCE_TO_FIRE_BLANKS()l
extern _native void IS_ROCKET_IN_FLIGHT()l
extern _native void FINALE_GRENADE_LAUNCHER_SETTINGS()l
extern _native void FINALE_GRENADE_EXPLODE_ON_IMPACT()l
extern _native void START_SCRIPT_FIRE()l
extern _native void REMOVE_SCRIPT_FIRE()l
extern _native void START_PED_FIRE()l
extern _native void STOP_PED_FIRE()l
extern _native void IS_PED_ON_FIRE()l
extern _native void IS_OBJECT_ON_FIRE()l
extern _native void GET_NUMBER_OF_FIRES_IN_RANGE()l
extern _native void STOP_FIRE_IN_RANGE()l
extern _native void ADD_EXPLOSION()l
extern _native void ADD_EXPLOSION_WITH_CAUSE()l
extern _native void EXPLODE_OBJECT()l
extern _native void IS_EXPLOSION_IN_AREA()l
extern _native void IS_EXPLOSION_IN_SPHERE()l
extern _native void SET_ZONE_POPULATION_TYPE()l
extern _native void SET_ZONE_SCUMMINESS()l
extern _native void GET_NAME_OF_ZONE()l
extern _native void GET_NAME_OF_INFO_ZONE()l
extern _native void SET_ZONE_COPS_ACTIVE()l
extern _native void GET_MAP_AREA_FROM_COORDS()l
extern _native void GET_PRIMARY_POPULATION_ZONE_GROUP()l
extern _native void SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE()l
extern _native void DRAW_LINE()l
extern _native void DRAW_DEBUG_LINE()l
extern _native void DRAW_DEBUG_LINE_WITH_TWO_COLOURS()l
extern _native void DRAW_DEBUG_POLY()l
extern _native void DRAW_DEBUG_POLY_WITH_THREE_COLOURS()l
extern _native void DRAW_DEBUG_SPHERE()l
extern _native void DRAW_DEBUG_BOX()l
extern _native void DRAW_DEBUG_CROSS()l
extern _native void DRAW_DEBUG_TEXT()l
extern _native void DRAW_DEBUG_TEXT_WITH_OFFSET()l
extern _native void DEBUGDRAW_GETSCREENSPACETEXTHEIGHT()l
extern _native void DRAW_DEBUG_LINE_2D()l
extern _native void DRAW_DEBUG_LINE_2D_WITH_TWO_COLOURS()l
extern _native void DRAW_DEBUG_POLY_2D()l
extern _native void DRAW_DEBUG_POLY_2D_WITH_THREE_COLOURS()l
extern _native void DRAW_DEBUG_TEXT_2D()l
extern _native void DRAW_VECTOR_MAP_LINE()l
extern _native void DRAW_VECTOR_MAP_LINE_THICK()l
extern _native void DRAW_VECTOR_MAP_CIRCLE()l
extern _native void DRAW_VECTOR_MAP_POLY()l
extern _native void DRAW_VECTOR_MAP_RECTANGLE()l
extern _native void DRAW_VECTOR_MAP_WEDGE()l
extern _native void DRAW_VECTOR_MAP_MARKER()l
extern _native void DRAW_VECTOR_MAP_VEHICLE()l
extern _native void DRAW_VECTOR_MAP_PED()l
extern _native void DRAW_VECTOR_MAP_LOCAL_PLAYER_CAM()l
extern _native void DRAW_VECTOR_MAP_EVENT_RIPPLE()l
extern _native void DRAW_VECTOR_MAP_TEXT()l
extern _native void CREATE_GLINT()l
extern _native void DOES_GLINT_EXIST()l
extern _native void REMOVE_GLINT()l
extern _native void REMOVE_ALL_GLINTS()l
extern _native void ENABLE_GLINT()l
extern _native void DRAW_SPOT_LIGHT()l
extern _native void DRAW_POINT_LIGHT()l
extern _native void DRAW_SPHERE()l
extern _native void DRAW_COLOURED_CYLINDER()l
extern _native void ADD_TRACKER_SPOT_LIGHT()l
extern _native void ADD_TRACKER_PROP()l
extern _native void CONFIGURE_TRACKER_SPOT_LIGHT()l
extern _native void SET_TRACKER_SPOT_LIGHT_TARGET()l
extern _native void CONFIGURE_TRACKER_INTERIOR_TARGET()l
extern _native void CONFIGURE_TRACKER_FAKEINTERIOR()l
extern _native void CREATE_CHECKPOINT()l
extern _native void DELETE_CHECKPOINT()l
extern _native void DRAW_CHECKPOINT()l
extern _native void DRAW_CHECKPOINT_WITH_ALPHA()l
extern _native void LOAD_TEXTURE_DICT()l
extern _native void REMOVE_TEXTURE_DICT()l
extern _native void GET_GAME_TEXTURE_DICT()l
extern _native void GET_TEXTURE()l
extern _native void RELEASE_TEXTURE()l
extern _native void REQUEST_STREAMED_TEXTURE_DICT()l
extern _native void HAS_STREAMED_TEXTURE_DICT_LOADED()l
extern _native void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED()l
extern _native void GET_TEXTURE_FROM_STREAMED_TEXTURE_DICT()l
extern _native void SET_MASK_ACTIVE()l
extern _native void SET_MASK_ATTRIBUTES()l
extern _native void DRAW_RECT()l
extern _native void SET_SPRITES_DRAW_BEFORE_FADE()l
extern _native void DRAW_SPRITE()l
extern _native void PRELOAD_MOVIE()l
extern _native void PLAY_MOVIE()l
extern _native void STOP_MOVIE()l
extern _native void RELEASE_MOVIE()l
extern _native void DRAW_MOVIE()l
extern _native void SET_MOVIE_TIME()l
extern _native void SET_MOVIE_VOLUME()l
extern _native void SET_MOVIE_TINT()l
extern _native void SET_MOVIE_LOOP()l
extern _native void SET_TRANSITION_MOVIE_SKIPPABLE()l
extern _native void IS_TRANSITION_MOVIE_PLAYING()l
extern _native void IS_SCRIPT_MOVIE_PLAYING()l
extern _native void GET_TRANSITION_MOVIE_FRAMES_REMAINING()l
extern _native void GET_SCRIPT_MOVIE_FRAMES_REMAINING()l
extern _native void SET_MOVIE_FRAME()l
extern _native void IS_INTRO_MOVIE_CANCELLED()l
extern _native void DRAW_CURVED_WINDOW()l
extern _native void GET_SCREEN_RESOLUTION()l
extern _native void GET_IS_WIDESCREEN()l
extern _native void GET_IS_HIDEF()l
extern _native void DISPLAY_LOADING_SCREEN_NOW()l
extern _native void SET_NIGHTVISION()l
extern _native void SET_NOISEOVERIDE()l
extern _native void SET_NOISINESSOVERIDE()l
extern _native void RESET_ALL_PTFX()l
extern _native void START_PARTICLE_FX_NON_LOOPED_AT_COORD()l
extern _native void START_PARTICLE_FX_NON_LOOPED_AT_COORD_WITH_GROUND_PLANE()l
extern _native void START_PARTICLE_FX_NON_LOOPED_AT_COORD_WITH_OFFSET_GROUND_PLANE()l
extern _native void START_PARTICLE_FX_NON_LOOPED_AT_COORD_WITH_NEARBY_COLLISION()l
extern _native void START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE()l
extern _native void START_PARTICLE_FX_NON_LOOPED_ON_VEHICLE()l
extern _native void START_PARTICLE_FX_NON_LOOPED_ON_OBJECT()l
extern _native void START_PARTICLE_FX_LOOPED_AT_COORD()l
extern _native void START_PARTICLE_FX_LOOPED_ON_PED_BONE()l
extern _native void START_PARTICLE_FX_LOOPED_ON_VEHICLE()l
extern _native void START_PARTICLE_FX_LOOPED_ON_OBJECT()l
extern _native void START_PARTICLE_FX_LOOPED_ON_OBJECT_BONE()l
extern _native void STOP_PARTICLE_FX_LOOPED()l
extern _native void SET_PARTICLE_FX_LOOPED_OFFSETS()l
extern _native void SET_PARTICLE_FX_LOOPED_EVOLUTION()l
extern _native void SET_PARTICLE_FX_CAM_INSIDE_VEHICLE()l
extern _native void REMOVE_PARTICLE_FX_FROM_PED()l
extern _native void REMOVE_PARTICLE_FX_FROM_VEHICLE()l
extern _native void REMOVE_PARTICLE_FX_FROM_OBJECT()l
extern _native void REMOVE_PARTICLE_FX()l
extern _native void ADD_GROUND_PLANE_COLLISION_TO_PARTICLE_FX()l
extern _native void ADD_NEARBY_COLLISION_TO_PARTICLE_FX()l
extern _native void CREATE_LASER()l
extern _native void FIND_LASER()l
extern _native void DESTROY_LASER()l
extern _native void ATTACH_LASER_TO_OBJECT()l
extern _native void ATTACH_LASER_TO_OBJECT_BONE()l
extern _native void SET_LASER_SPREAD()l
extern _native void SET_LASER_WIDTH()l
extern _native void SET_LASER_COLOR()l
extern _native void WASH_PROJTEX_FROM_VEHICLE()l
extern _native void REMOVE_PROJTEX_IN_RANGE()l
extern _native void REMOVE_PROJTEX_FROM_OBJECT()l
extern _native void SET_TIMECYCLE_MODIFIER()l
extern _native void CLEAR_TIMECYCLE_MODIFIER()l
extern _native void RESET_BLOOD_EFFECTS()l
extern _native void REMOVE_ALL_ENVIRONMENT_BLOOD()l
extern _native void REMOVE_ALL_ENVIRONMENT_BLOOD_AT_COORD()l
extern _native void BLOOD_DECAL_ON_PED_BONE()l
extern _native void DAMAGE_DECAL_ON_PED_BONE()l
extern _native void DAMAGE_DECALS_ON_PED()l
extern _native void ADD_BLOOD_POOL()l
extern _native void SET_SILHOUETTE_ACTIVE()l
extern _native void SET_SILHOUETTE_DISTANCE_FALLOFF()l
extern _native void SET_SILHOUETTE_RENDER_SETTINGS()l
extern _native void START_POSTFX_BLENDER()l
extern _native void END_POSTFX_BLENDER()l
extern _native void ADD_SPECIAL_FX_MODIFIER()l
extern _native void DEACTIVATE_SPECIAL_FX_MODIFIER()l
extern _native void UPDATE_SPECIAL_FX_MODIFIER_STRENGTH()l
extern _native void SET_TIMECYCLE_MODIFIER_OVERRIDE()l
extern _native void CLEAR_TIMECYCLE_MODIFIER_OVERRIDE()l
extern _native void ADJUST_TIMECYCLE_MODIFIER_OVERRIDE()l
extern _native void SET_DEATH_EFFECT_ENABLED()l
extern _native void SET_TEAR_GAS_EFFECT_AUTO_END()l
extern _native void PULSE_CROSSHAIR()l
extern _native void SET_DISABLE_FADE()l
extern _native void SET_SMALL_BOATS_PTFX_MAX_SPEED_EVO()l
extern _native void SET_MEDIUM_BOATS_PTFX_MAX_SPEED_EVO()l
extern _native void SET_PAYNE_BOAT_PTFX_MAX_SPEED_EVO()l
extern _native void SET_BIG_BOATS_PTFX_MAX_SPEED_EVO()l
extern _native void SET_SMALL_BOATS_PROPELLOR_PTFX_MAX_SPEED_EVO()l
extern _native void SET_MEDIUM_BOATS_PROPELLOR_PTFX_MAX_SPEED_EVO()l
extern _native void SET_PAYNE_BOAT_PROPELLOR_PTFX_MAX_SPEED_EVO()l
extern _native void SET_BIG_BOATS_PROPELLOR_PTFX_MAX_SPEED_EVO()l
extern _native void SET_PAYNE_BOAT_PTFX_SKIP()l
extern _native void SET_ALL_BOATS_WAKES_MAX_SPEED_EVO()l
extern _native void SET_PAYNE_BOAT_PTFX_CUTSCENE_EFFECT()l
extern _native void SET_SMALL_BOAT_PTFX_CUTSCENE_EFFECT()l
extern _native void SET_PAYNE_BOAT_PTFX_CUTSCENE_PROPELLOR_EFFECT()l
extern _native void SET_SMALL_BOAT_PTFX_CUTSCENE_PROPELLOR_EFFECT()l
extern _native void REGISTER_BOAT_WAKE()l
extern _native void SET_WAKES_SECTION()l
extern _native void SET_PED_PTFX_SPLASH_OUT_SPECIAL_EFFECT()l
extern _native void PLAY_IMAGEFX()l
extern _native void STOP_IMAGEFX()l
extern _native void STOP_ALL_IMAGEFX()l
extern _native void SET_IMAGEFX_ENABLED()l
extern _native void SET_TIME_CYCLE_MODIFIERS_ENABLED()l
extern _native void ENABLE_DIRECTIONAL_SHADOWS()l
extern _native void DISABLE_DIRECTIONAL_LIGHT()l
extern _native void SKIP_ROTOR_SHADOW()l
extern _native void NET_GET_GAMER_NAME_WITH_GANG_TAG()l
extern _native void NET_GET_PLAYER_GANG_TAG_UI()l
extern _native void NET_GET_PLAYER_GANG_TAG()l
extern _native void NET_GET_PLAYER_GANG_NAME()l
extern _native void NET_GET_PLAYER_GANG_ID()l
extern _native void NET_IS_GANG_INFO_VALID()l
extern _native void NET_GET_PLAYER_GANG_RANK()l
extern _native void NET_ARE_PLAYERS_IN_SAME_GANG()l
extern _native void NET_IS_PLAYER_IN_GANG()l
extern _native void NET_ARE_PLAYERS_IN_SAME_PARTY()l
extern _native void NET_PARTY_GET_LEADER_PLAYER()l
extern _native void PRE_STREAM_SEAMLESS_CUTSCENE()l
extern _native void PRE_STREAM_SEAMLESS_CUTSCENE_AT_COORD()l
extern _native void START_SEAMLESS_CUTSCENE()l
extern _native void START_SEAMLESS_CUTSCENE_AT_COORDS()l
extern _native void START_CUTSCENE_WITH_FADES()l
extern _native void GET_CUTSCENE_TIME()l
extern _native void GET_CUTSCENE_TIME_MS()l
extern _native void WAS_CUTSCENE_SKIPPED()l
extern _native void HAS_CUTSCENE_FINISHED()l
extern _native void HAS_CUTSCENE_UNLOADED()l
extern _native void CLEAR_NAMED_CUTSCENE()l
extern _native void HAS_CUTSCENE_LOADED()l
extern _native void GET_CUTSCENE_SECTION_PLAYING()l
extern _native void GET_CUTSCENE_PED_COORD()l
extern _native void SET_CUTSCENE_EXTRA_ROOM_POS()l
extern _native void GET_REGISTERED_PED_INDEX_POST_CUTSCENE()l
extern _native void REGISTER_PED_PRE_SEAMLESS_CUTSCENE()l
extern _native void REGISTER_PED_POST_SEAMLESS_CUTSCENE()l
extern _native void SET_PRE_CUTSCENE_PED_NO_LONGER_NEEDED()l
extern _native void GET_REGISTERED_VEHICLE_INDEX_POST_CUTSCENE()l
extern _native void REGISTER_VEHICLE_PRE_SEAMLESS_CUTSCENE()l
extern _native void REGISTER_VEHICLE_POST_SEAMLESS_CUTSCENE()l
extern _native void SET_PRE_CUTSCENE_VEHICLE_NO_LONGER_NEEDED()l
extern _native void REGISTER_HIDE_ENTITY_AT_POSITION()l
extern _native void GET_REGISTERED_OBJECT_INDEX_POST_CUTSCENE()l
extern _native void REGISTER_OBJECT_PRE_SEAMLESS_CUTSCENE()l
extern _native void REGISTER_OBJECT_POST_SEAMLESS_CUTSCENE()l
extern _native void SET_PRE_CUTSCENE_OBJECT_NO_LONGER_NEEDED()l
extern _native void DISPLAY_SEAMLESS_CUTSCENE_TRIGGER_AREA()l
extern _native void SET_SEAMLESS_CUTSCENE_TRIGGER_AREA()l
extern _native void IS_PED_IN_SEAMLESS_TRIGGER_AREA()l
extern _native void SET_SEAMLESS_CUTSCENE_COORDS()l
extern _native void CAN_SET_ENTER_STATE_FOR_CUTSCENE_PED()l
extern _native void CAN_SET_EXIT_STATE_FOR_CUTSCENE_PED()l
extern _native void CUTSCENE_EXIST()l
extern _native void CUTSCENE_REGISTER_INTERACTIVE_SEQUENCE()l
extern _native void CUTSCENE_REGISTER_ISEQ()l
extern _native void CUTSCENE_REGISTER_PED_TELEPORT()l
extern _native void CUTSCENE_REGISTER_ACTION_TREE_PLAY_NODE()l
extern _native void CUTSCENE_REGISTER_SET_PLAYER_IN_COVER()l
extern _native void CUTSCENE_SET_COVER_CAMERA_DIRECTION()l
extern _native void CUTSCENE_REGISTER_PED_ATTACH_TO_VEHICLE()l
extern _native void CUTSCENE_REGISTER_PED_WEAPON_HAND()l
extern _native void GET_REGISTERED_WEAPON_INDEX_POST_CUTSCENE()l
extern _native void REGISTER_WEAPON_PRE_SEAMLESS_CUTSCENE()l
extern _native void REGISTER_WEAPON_POST_SEAMLESS_CUTSCENE()l
extern _native void SET_PRE_CUTSCENE_WEAPON_NO_LONGER_NEEDED()l
extern _native void START_CUTSCENE_CAPTURE()l
extern _native void STOP_CUTSCENE_CAPTURE()l
extern _native void GET_CUTSCENE_CAPTURE_REQUEST()l
extern _native void CUTSCENE_DISABLE_FADE_IN_GAME_AT_END()l
extern _native void CUTSCENE_SET_OVERLAY_TYPE()l
extern _native void CUTSCENE_OBJECT_OVERRIDE_VISIBILITY()l
extern _native void CUTSCENE_MODEL_NO_LONGER_NEEDED()l
extern _native void CUTSCENE_IS_LOADED()l
extern _native void CUTSCENE_NAMED_IS_LOADING()l
extern _native void CUTSCENE_IS_LOADING()l
extern _native void CUTSCENE_REGISTER_SWITCH_TO_LEVEL()l
extern _native void CUTSCENE_REGISTER_SWITCH_TO_LEVEL_NAME()l
extern _native void CUTSCENE_REGISTER_PED_ACTION_INTENTION()l
extern _native void CUTSCENE_SHOW_UNAPPROVED()l
extern _native void CUTSCENE_SET_IS_UNAPPROVED()l
extern _native void CUTSCENE_REGISTER_STREAM_HELPER()l
extern _native void CUTSCENE_REGISTER_OBJECT_ANIM()l
extern _native void REGISTER_SCENE_PED_SEAMLESS_CUTSCENE()l
extern _native void CUTSCENE_DISABLE_CROSSHAIR()l
extern _native void CUTSCENE_FORCE_GAMEPLAY_HEADING_PITCH_UPDATE()l
extern _native void CUTSCENE_SET_WAIT_FOR_MOVIE()l
extern _native void CUTSCENE_IS_WAITING_FOR_MOVIE()l
extern _native void CUTSCENE_ENABLE_SKIP()l
extern _native void CUTSCENE_FORCE_PLAYER_INVISIBLE()l
extern _native void CUTSCENE_REGISTER_SET_PED_IN_COVER()l
extern _native void CUTSCENE_REGISTER_VEHICLE_COPY()l
extern _native void SET_TIME_ONE_DAY_FORWARD()l
extern _native void SET_TIME_ONE_DAY_BACK()l
extern _native void GET_TIME_OF_DAY()l
extern _native void GET_HOURS_OF_DAY()l
extern _native void GET_MINUTES_OF_DAY()l
extern _native void SET_TIME_OF_DAY()l
extern _native void SKIP_FORWARD_TO_TIME_OF_DAY()l
extern _native void GET_MINUTES_TO_TIME_OF_DAY()l
extern _native void GET_CURRENT_DAY_OF_WEEK()l
extern _native void GET_CURRENT_DATE()l
extern _native void GET_DIFFERENCE_IN_DAYS_BETWEEN_DATES()l
extern _native void FREEZE_TIME_OF_DAY()l
extern _native void RELEASE_TIME_OF_DAY()l
extern _native void IS_TIME_OF_DAY_FROZEN()l
extern _native void GET_SELECTED_GRIT_LB()l
extern _native void GET_GRIT_AVATAR_SLOT_HASH()l
extern _native void NETWORK_IS_GAME_IN_PROGRESS()l
extern _native void NETWORK_IS_ENABLED()l
extern _native void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT()l
extern _native void NETWORK_IS_PLAYER_ACTIVE()l
extern _native void NETWORK_IS_PLAYER_VALID()l
extern _native void NETWORK_IS_PLAYER_PHYSICAL()l
extern _native void NETWORK_IS_HOST()l
extern _native void NETWORK_IS_HOST_OF_SCRIPT()l
extern _native void NETWORK_IS_HOST_OF_THIS_SCRIPT()l
extern _native void NETWORK_CREATE_PICKUP_FROM_WEAPONS()l
extern _native void NETWORK_CREATE_PED_CORPSE()l
extern _native void NETWORK_RESURRECT_PLAYER()l
extern _native void NETWORK_GET_TIME_PLAYER_HAS_BEEN_DEAD_FOR()l
extern _native void NETWORK_HAS_PLAYER_HAS_DIED_RECENTLY()l
extern _native void NETWORK_GET_KILLER_OF_PLAYER()l
extern _native void NETWORK_HAS_PLAYER_COLLECTED_PICKUP()l
extern _native void NETWORK_SET_NETWORK_PLAYER_AS_VIP()l
extern _native void NETWORK_GET_TEAM_RGB_COLOUR()l
extern _native void NETWORK_SET_TEAM_COLOUR()l
extern _native void NETWORK_GET_FRIEND_COUNT()l
extern _native void NETWORK_GET_FRIEND_NAME()l
extern _native void NETWORK_IS_FRIEND_ONLINE()l
extern _native void NETWORK_IS_FRIEND_IN_SAME_TITLE()l
extern _native void NETWORK_SHOW_FRIEND_PROFILE_UI()l
extern _native void NETWORK_SHOW_PLAYER_PROFILE_UI()l
extern _native void NETWORK_GET_NUM_PLAYERS_MET()l
extern _native void NETWORK_GET_MET_PLAYER_NAME()l
extern _native void NETWORK_SHOW_MET_PLAYER_PROFILE_UI()l
extern _native void NETWORK_SHOW_MET_PLAYER_FEEDBACK_UI()l
extern _native void NETWORK_IS_SESSION_INVITABLE()l
extern _native void NETWORK_INVITE_FRIEND()l
extern _native void NETWORK_DID_INVITE_FRIEND()l
extern _native void NETWORK_CHECK_INVITE_ARRIVAL()l
extern _native void NETWORK_CLEAR_INVITE_ARRIVAL()l
extern _native void NETWORK_GET_NUM_UNACCEPTED_INVITES()l
extern _native void NETWORK_GET_UNACCEPTED_INVITER_NAME()l
extern _native void NETWORK_GET_UNACCEPTED_INVITE_GAME_MODE()l
extern _native void NETWORK_ACCEPT_INVITE()l
extern _native void NETWORK_HAVE_ACCEPTED_INVITE()l
extern _native void NETWORK_IS_INVITEE_ONLINE()l
extern _native void NETWORK_HAVE_SUMMONS()l
extern _native void NETWORK_CLEAR_SUMMONS()l
extern _native void NETWORK_IS_PLAYER_TALKING()l
extern _native void NETWORK_PLAYER_HAS_HEADSET()l
extern _native void NETWORK_SET_PLAYER_MUTED()l
extern _native void NETWORK_IS_PLAYER_MUTED_BY_ME()l
extern _native void NETWORK_AM_I_MUTED_BY_PLAYER()l
extern _native void NETWORK_IS_PLAYER_BLOCKED_BY_ME()l
extern _native void NETWORK_AM_I_BLOCKED_BY_PLAYER()l
extern _native void NETWORK_SET_TALKER_FOCUS()l
extern _native void NETWORK_SET_TALKER_PROXIMITY()l
extern _native void NETWORK_SET_TEAM_ONLY_CHAT()l
extern _native void NETWORK_HAVE_ONLINE_PRIVILEGES()l
extern _native void NETWORK_FIND_GAME_PENDING()l
extern _native void NETWORK_GET_NUMBER_OF_GAMES()l
extern _native void NETWORK_HOST_GAME()l
extern _native void NETWORK_IS_OPERATION_PENDING()l
extern _native void NETWORK_JOIN_SUMMONS()l
extern _native void NETWORK_READY_FOR_JIP()l
extern _native void NETWORK_SET_SESSION_VISIBLE()l
extern _native void NETWORK_KICK_PLAYER()l
extern _native void NETWORK_STORE_SINGLE_PLAYER_GAME()l
extern _native void SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME()l
extern _native void SHUTDOWN_AND_LAUNCH_NETWORK_GAME()l
extern _native void IS_NETWORK_SESSION()l
extern _native void NETWORK_CHANGE_GAME_MODE()l
extern _native void NETWORK_CHANGE_GAME_MODE_PENDING()l
extern _native void NETWORK_CHANGE_GAME_MODE_SUCCEEDED()l
extern _native void NETWORK_GET_GAME_MODE()l
extern _native void NETWORK_GET_MAX_SLOTS()l
extern _native void NETWORK_GET_MAX_PRIVATE_SLOTS()l
extern _native void NETWORK_SET_FRIENDLY_FIRE_OPTION()l
extern _native void NETWORK_SET_HEALTH_RETICULE_OPTION()l
extern _native void NETWORK_IS_GAME_RANKED()l
extern _native void NETWORK_SET_RICH_PRESENCE()l
extern _native void NETWORK_GET_COUNTOF_RICH_PRESENCE()l
extern _native void NETWORK_GET_RICH_PRESENCE_IS_VALID()l
extern _native void NETWORK_GET_RICH_PRESENCE_ID()l
extern _native void NETWORK_GET_RICH_PRESENCE_LABEL()l
extern _native void NETWORK_GET_RICH_PRESENCE_FIELD_INDEX()l
extern _native void NETWORK_GET_RICH_PRESENCE_ID_FROM_INDEX()l
extern _native void NETWORK_GET_PLAYER_STREAK_ACTIVE()l
extern _native void NETWORK_DOES_PLAYER_HAVE_ANY_STREAK_ACTIVE()l
extern _native void NETWORK_GET_PLAYER_ACTIVE_STREAK()l
extern _native void NETWORK_GET_PLAYER_ACTIVE_STREAK_LEVEL()l
extern _native void NETWORK_RESET_PLAYER_STREAKS()l
extern _native void NETWORK_CLEAR_PLAYER_STREAK()l
extern _native void NETWORK_GET_PLAYER_STREAK_EFFECT()l
extern _native void NETWORK_SET_PLAYER_STREAK_EFFECT()l
extern _native void NETWORK_SET_PLAYER_STREAK_BLOCKED()l
extern _native void NETWORK_GET_PLAYER_STREAK_BLOCKED()l
extern _native void NETWORK_SET_PLAYER_STREAK_IN_SLOT()l
extern _native void NETWORK_GET_PLAYER_STREAK_IN_SLOT()l
extern _native void NETWORK_GET_STREAK_TEXTURE()l
extern _native void NETWORK_GET_STREAK_NAME()l
extern _native void NETWORK_ADD_PLAYER_EXPERIENCE()l
extern _native void NETWORK_ADD_PLAYER_EXPERIENCE_POS()l
extern _native void NETWORK_ADD_PLAYER_EXPERIENCE_PLAYER()l
extern _native void NETWORK_ADD_INWORLD_TEXT()l
extern _native void NETWORK_ADD_INWORLD_TEXT_POS()l
extern _native void NETWORK_ADD_INWORLD_TEXT_PLAYER()l
extern _native void NETWORK_ADD_INWORLD_TEXT_PED()l
extern _native void NETWORK_ADD_INWORLD_TEXT_OBJECT()l
extern _native void NETWORK_ADD_PLAYER_CASH()l
extern _native void NETWORK_ADD_PLAYER_CASH_POS()l
extern _native void NETWORK_ADD_PLAYER_CASH_PLAYER()l
extern _native void NETWORK_GET_PLAYER_CASH()l
extern _native void NETWORK_SET_TEAM_KILL_EXPERIENCE()l
extern _native void NETWORK_JOINING_IN_PROGRESS_GAME()l
extern _native void SET_THIS_MACHINE_RUNNING_SERVER_SCRIPT()l
extern _native void IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE()l
extern _native void GET_NETWORK_TIMER()l
extern _native void SET_SYNC_WEATHER_AND_GAME_TIME()l
extern _native void NETWORK_SET_WEATHER()l
extern _native void SET_IN_SPECTATOR_MODE()l
extern _native void IS_IN_SPECTATOR_MODE()l
extern _native void SET_IN_MP_TUTORIAL()l
extern _native void DISPLAY_PLAYER_NAMES()l
extern _native void NETWORK_PLAYER_FORCE_COLOR()l
extern _native void SET_MSG_FOR_LOADING_SCREEN()l
extern _native void INVOKE_SPECTATOR_CAM()l
extern _native void RESET_GAMEPLAY_CAM()l
extern _native void ADD_KILLXP_RULE()l
extern _native void ADD_KILLXP_RULE_ANYKILLER()l
extern _native void ADD_KILLXP_RULE_ANYVICTIM()l
extern _native void CLEAR_KILLXP_RULES()l
extern _native void REGISTER_KILL_IN_MULTIPLAYER_GAME()l
extern _native void GET_IS_PLAYER_IN_BULLET_TIME()l
extern _native void GET_PLAYER_BULLET_TIME_STATE()l
extern _native void GET_IS_PLAYER_SHOOT_DODGING()l
extern _native void GET_IS_PLAYER_IN_AIR()l
extern _native void GET_IS_PLAYER_IN_LAST_STAND()l
extern _native void GET_LOCAL_PLAYER_XP()l
extern _native void GET_NETWORK_PLAYER_XP()l
extern _native void GET_PLAYER_KILLER()l
extern _native void GET_PLAYER_KILLER_NAME()l
extern _native void GET_PLAYER_KILLER_WEAPON()l
extern _native void GET_PLAYER_CAUSE_OF_DEATH()l
extern _native void SET_MP_GAME_DIFFICULTY()l
extern _native void SET_PLAYER_HEALTH_REGENERATION()l
extern _native void SET_PLAYER_HEALTH_REGENERATION_RATE()l
extern _native void SET_PLAYER_HEALTH_REGENERATION_MAX()l
extern _native void IS_OBJECT_REASSIGNMENT_IN_PROGRESS()l
extern _native void SAVE_SCRIPT_ARRAY_IN_SCRATCHPAD()l
extern _native void RESTORE_SCRIPT_ARRAY_FROM_SCRATCHPAD()l
extern _native void CLEAR_SCRIPT_ARRAY_FROM_SCRATCHPAD()l
extern _native void NETWORK_PARAM_ALLOW_WIN_BUTTON()l
extern _native void NETWORK_PARAM_JUST_RESPAWN()l
extern _native void NETWORK_GET_PARAM_NETTEST()l
extern _native void NETWORK_GET_PARAM_NETTEST_HOST()l
extern _native void NET_DEBUG()l
extern _native void NET_DEBUG_INT()l
extern _native void NET_DEBUG_FLOAT()l
extern _native void NET_DEBUG_VECTOR()l
extern _native void NET_DEBUG_STRING()l
extern _native void NET_WARNING()l
extern _native void NET_WARNING_INT()l
extern _native void NET_WARNING_FLOAT()l
extern _native void NET_WARNING_VECTOR()l
extern _native void NET_WARNING_STRING()l
extern _native void NET_ERROR()l
extern _native void NET_ERROR_INT()l
extern _native void NET_ERROR_FLOAT()l
extern _native void NET_ERROR_VECTOR()l
extern _native void NET_ERROR_STRING()l
extern _native void ENABLE_FIRST_TIME_LOCK()l
extern _native void ENABLE_SOFT_TARGETING()l
extern _native void ENABLE_AIM_ASSIST()l
extern _native void NETWORK_SET_PROFILESTATINTERVAL()l
extern _native void NETWORK_SET_BOT_PLAYER()l
extern _native void BOT_UPDATE_INPUT()l
extern _native void BOT_SET_INPUT()l
extern _native void NETWORK_SET_PLAYER_TRACER_COLOUR()l
extern _native void NET_PLAYSTATS_GAMETYPE_STARTED()l
extern _native void NET_PLAYSTATS_GAMETYPE_ENDED()l
extern _native void NET_PLAYSTATS_CLAN_FEUD()l
extern _native void NET_PLAYSTATS_JOIN_TEAM()l
extern _native void NET_PLAYSTATS_GAMETYPE_OBJECTIVE()l
extern _native void NET_PLAYSTATS_PLAYER_SELECTED()l
extern _native void NET_PLAYSTATS_POST_MATCH_BLOB()l
extern _native void NET_PLAYSTATS_NEW_PT_HIGH_SCORE()l
extern _native void DISALLOW_JOINERS()l
extern _native void NET_SHOW_GAMER_TAGS()l
extern _native void IS_LOCAL_PLAYER_IN_SOCIAL_CLUB()l
extern _native void NET_GET_INT_ROS_GAMER_DATA()l
extern _native void NET_GET_BOOL_ROS_GAMER_DATA()l
extern _native void NET_GET_FLOAT_ROS_GAMER_DATA()l
extern _native void NET_GET_GAMER_ROS_XP_BONUS()l
extern _native void NET_GET_IS_ROS_CHEATER()l
extern _native void NET_GET_IS_ROCKSTAR_DEV()l
extern _native void SET_GRIT_SPECTATOR_CAM_IN_INTERIOR()l
extern _native void ATTACH_GRIT_SPEC_CAM_TO_HELI()l
extern _native void NET_IS_PLAYER_MY_FRIEND()l
extern _native void ADD_SCRIPT_TO_RANDOM_PED()l
extern _native void ADD_SCRIPT_TO_OBJECT()l
extern _native void IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE()l
extern _native void REGISTER_WORLD_POINT_SCRIPT_BRAIN()l
extern _native void IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE()l
extern _native void REGISTER_BRAIN_WITH_MISSION_OBJECT()l
extern _native void IS_LOADOUT_VALID()l
extern _native void DOES_LOADOUT_SLOT_HAVE_CUSTOM_NAME()l
extern _native void GET_WATER_HEIGHT()l
extern _native void GET_WATER_HEIGHT_NO_WAVES()l
extern _native void SYNCH_RECORDING_WITH_WATER()l
extern _native void SET_PUDDLES()l
extern _native void OVERRIDE_WATER_SETTINGS()l
extern _native void USE_DEFAULT_WATER_SETTINGS()l
extern _native void RESET_WATER_SIMULATION()l
extern _native void LOAD_XML_FILE()l
extern _native void DELETE_XML_FILE()l
extern _native void GET_NUMBER_OF_XML_NODES()l
extern _native void GET_NEXT_XML_NODE()l
extern _native void GET_XML_NODE_NAME()l
extern _native void GET_NUMBER_OF_XML_NODE_ATTRIBUTES()l
extern _native void GET_XML_NODE_ATTRIBUTE_NAME()l
extern _native void GET_INT_FROM_XML_NODE_ATTRIBUTE()l
extern _native void GET_FLOAT_FROM_XML_NODE_ATTRIBUTE()l
extern _native void GET_BOOL_FROM_XML_NODE_ATTRIBUTE()l
extern _native void GET_STRING_FROM_XML_NODE_ATTRIBUTE()l
extern _native void GET_XML_NAMED_NODE()l
extern _native void LOBBY_HAS_MATCH_STARTED()l
extern _native void LOBBY_GET_NUM_GAME_MODES()l
extern _native void LOBBY_GET_GAME_MODE_NAME()l
extern _native void LOBBY_GET_SELECTED_GAME_MODE()l
extern _native void LOBBY_GET_NUM_ACTIVE_OPTIONS()l
extern _native void LOBBY_GET_NUM_OPTIONS()l
extern _native void LOBBY_GET_OPTION_NAME()l
extern _native void LOBBY_GET_OPTION_VALUE()l
extern _native void LOBBY_GET_NUM_SUB_OPTIONS()l
extern _native void LOBBY_GET_SUB_OPTION_NAME()l
extern _native void LOBBY_GET_OPTION_IS_ACTIVE()l
extern _native void LOBBY_GET_OPTION_IS_DEACTIVE()l
extern _native void LOBBY_GET_OPTION_IS_DISABLE()l
extern _native void LOBBY_GET_OPTION_IS_NUMBERS()l
extern _native void LOBBY_GET_OPTION_IS_LIST()l
extern _native void LOBBY_GET_OPTION_IS_KICK_LIST()l
extern _native void LOBBY_GET_OPTION_IS_MODEL()l
extern _native void LOBBY_GET_OPTION_EXISTS()l
extern _native void LOBBY_GET_MIN_PLAYERS()l
extern _native void GET_LAUNCH_SCRIPT()l
extern _native void SEV_IS_PRIMARY()l
extern _native void SEV_THREAD_THIS()l
extern _native void SEV_ISOLATE()l
extern _native void SEV_ISOLATE_OFF()l
extern _native void SEV_ISOLATED_ONLY()l
extern _native void SEV_CONNECTED_ONLY()l
extern _native void SEV_BINDC()l
extern _native void SEV_UNBIND()l
extern _native void SEV_UNBIND_CATEGORY()l
extern _native void SEV_UNBIND_HANDLER()l
extern _native void SEV_ONCE_ONLY()l
extern _native void SEV_UNBIND_ALL_FOR_PED()l
extern _native void SEV_CONDITION()l
extern _native void SEV_WAIT_FOR()l
extern _native void SEV_NEXT_EVENT()l
extern _native void SEV_CURRENT_EVENT()l
extern _native void SEV_ID_TO_INDEX()l
extern _native void SEV_INDEX_TO_ID()l
extern _native void SEV_YIELD()l
extern _native void SEV_INVALID_EVENT_ID()l
extern _native void SEV_CONSTRUCT_EVENT()l
extern _native void SEV_INDUCE_EVENT()l
extern _native void SEV_INDUCE_GATHER_EVENT()l
extern _native void SEV_INDUCE_EVENT_ARGS()l
extern _native void SEV_INDUCE_LOCAL_EVENT()l
extern _native void SEV_INDUCE_LOCAL_EVENT_ARGS()l
extern _native void SEV_OBSERVE_INT()l
extern _native void SEV_OBSERVE_FLOAT()l
extern _native void SEV_WATCHER_TO_INT()l
extern _native void SEV_INT_TO_WATCHER()l
extern _native void SEV_CREATE_PED()l
extern _native void SEV_CREATE_VEHICLE()l
extern _native void SEV_CREATE_OBJECT()l
extern _native void SEV_DELETE_OBJECT()l
extern _native void SEV_CREATE_PICKUP()l
extern _native void SEV_PLAYER_INDEX_TO_SLOT()l
extern _native void SEV_PLAYER_SLOT_TO_INDEX()l
extern _native void SEV_PLAYER_IS_VALID_SLOT()l
extern _native void SEV_GET_MY_PLAYER()l
extern _native void SEV_MAP_PLAYER_PED()l
extern _native void SEV_SET_PLAYER_MODEL()l
extern _native void SEV_SET_PLAYER_MODEL_DEFAULT_VARIATION()l
extern _native void SEV_SET_PLAYER_AVATAR()l
extern _native void SEV_GET_UNIQUE_PLAYER_MODEL_VARIATION()l
extern _native void SEV_RESET_UNIQUE_PLAYER_MODEL_VARIATIONS()l
extern _native void SEV_RESURRECT_PLAYER()l
extern _native void SEV_RESURRECT_PLAYER_FINISH()l
extern _native void SEV_SET_PLAYER_FRIENDLY_FIRE()l
extern _native void SEV_GET_PLAYER_FRIENDLY_FIRE()l
extern _native void SEV_IS_SPHERE_VISIBLE_TO_OTHER_TEAM_PLAYERS()l
extern _native void SEV_IS_SPHERE_VISIBLE_TO_PLAYER_LIST()l
extern _native void SEV_IS_POINT_VISIBLE_TO_POSITION_LIST()l
extern _native void SEV_ON_TIMER()l
extern _native void SEV_ON_HOST_SYNC()l
extern _native void SEV_ON_ANY_PED_CREATED()l
extern _native void SEV_ON_PED_CREATED()l
extern _native void SEV_ON_PED_INJURED()l
extern _native void SEV_ON_PED_RANK_UP()l
extern _native void SEV_ON_PED_ASSIST()l
extern _native void SEV_ON_PED_USE_STREAK()l
extern _native void SEV_ON_ANY_PED_DIED()l
extern _native void SEV_ON_PED_DIED()l
extern _native void SEV_ON_ANY_PED_DELETED()l
extern _native void SEV_ON_PED_DELETED()l
extern _native void SEV_ON_PED_TRIGGER_ENTERED()l
extern _native void SEV_ON_PED_TRIGGER_LEFT()l
extern _native void SEV_ON_PED_TRIGGER_LIST_ENTERED()l
extern _native void SEV_ON_PED_TRIGGER_LIST_LEFT()l
extern _native void SEV_ON_PED_LOOK_TRIGGER_START()l
extern _native void SEV_ON_PED_LOOK_TRIGGER_END()l
extern _native void SEV_ON_PED_TASK_STARTED()l
extern _native void SEV_ON_PED_TASK_FINISHED()l
extern _native void SEV_ON_ANY_PED_JOINED_NETGAME()l
extern _native void SEV_ON_ANY_PED_LEFT_NETGAME()l
extern _native void SEV_ON_ANY_PED_CHANGEOWNER_NETGAME()l
extern _native void SEV_ON_PED_ENTERED_VEHICLE()l
extern _native void SEV_ON_PED_LEFT_VEHICLE()l
extern _native void SEV_ON_PED_LMS_ACTIVATED()l
extern _native void SEV_ON_PED_LMS_DEACTIVATED()l
extern _native void SEV_ON_ANY_VEHICLE_CREATED()l
extern _native void SEV_ON_VEHICLE_CREATED()l
extern _native void SEV_ON_VEHICLE_DAMAGED()l
extern _native void SEV_ON_ANY_VEHICLE_DESTROYED()l
extern _native void SEV_ON_VEHICLE_DESTROYED()l
extern _native void SEV_ON_ANY_VEHICLE_DELETED()l
extern _native void SEV_ON_VEHICLE_DELETED()l
extern _native void SEV_ON_OBJECT_DAMAGED()l
extern _native void SEV_ON_TIN_CAN_COLLISION()l
extern _native void SEV_ON_MP_ITEM_PICKUP_ACTION()l
extern _native void SEV_ON_MP_INTERACTION_SUCCEEDED()l
extern _native void SEV_ON_HOST_STATS_TABLE_VALID()l
extern _native void I_SEQUENCE_LOAD_DATA()l
extern _native void I_SEQUENCE_SETUP()l
extern _native void I_SEQUENCE_START()l
extern _native void I_SEQUENCE_INTERRUPT()l
extern _native void I_SEQUENCE_TERMINATE()l
extern _native void I_SEQUENCE_QUERY_STATE()l
extern _native void I_SEQUENCE_QUERY_ENTITY_STATE()l
extern _native void I_SEQUENCE_IS_LOADED()l
extern _native void I_SEQUENCE_REGISTER_ENTITY()l
extern _native void I_SEQUENCE_UNREGISTER_ENTITY()l
extern _native void I_SEQUENCE_PURGE_ALL()l
extern _native void ISEQ_REQUEST()l
extern _native void ISEQ_START()l
extern _native void ISEQ_INTERRUPT()l
extern _native void ISEQ_TERMINATE()l
extern _native void ISEQ_QUERY_STATE()l
extern _native void ISEQ_GET_STATE()l
extern _native void ISEQ_QUERY_ENTITY_STATE()l
extern _native void ISEQ_QUERY_ENTITY_ANIMATION_PHASE()l
extern _native void ISEQ_IS_LOADED()l
extern _native void ISEQ_REGISTER_ENTITY()l
extern _native void ISEQ_UNREGISTER_ENTITY()l
extern _native void ISEQ_GET_NAME()l
extern _native void I_SEQUENCE_DOES_EXIST()l
extern _native void ISEQ_DOES_EXIST()l
extern _native void ENABLE_GRAVITY_WELL()l
extern _native void ENABLE_NORMAL_LINE()l
extern _native void ENABLE_NORMAL_LINE_BY_HASH()l
extern _native void ENABLE_COVERPOINTMP3()l
extern _native void ENABLE_COVERPOINTMP3_GROUP()l
extern _native void ENABLE_COVERPOINTMP3_GROUP_FROM_LINE()l
extern _native void MARK_COVERPOINTMP3_SEARCHABLE()l
extern _native void MARK_COVEREDGEMP3_FORCE_FACE_LEFT_ON_ENTRY()l
extern _native void MARK_COVEREDGEMP3_FORCE_FACE_RIGHT_ON_ENTRY()l
extern _native void RESET_DESTROYED_COVER()l
extern _native void BIND_SCRIPT_DATABASE()l
extern _native void UNBIND_SCRIPT_DATABASE()l
extern _native void IS_SCRIPT_DATABASE_BOUND()l
extern _native void DB_INSERT_INT()l
extern _native void DB_INSERT_FLOAT()l
extern _native void DB_INSERT_BOOL()l
extern _native void DB_DELETE_INT()l
extern _native void DB_DELETE_FLOAT()l
extern _native void DB_DELETE_BOOL()l
extern _native void DB_SET_INT()l
extern _native void DB_SET_FLOAT()l
extern _native void DB_SET_BOOL()l
extern _native void DB_GET_INT()l
extern _native void DB_GET_FLOAT()l
extern _native void DB_GET_BOOL()l
extern _native void DB_IS_INT_VALID()l
extern _native void DB_IS_FLOAT_VALID()l
extern _native void DB_IS_BOOL_VALID()l
extern _native void ADD_ROPE()l
extern _native void DELETE_ROPE()l
extern _native void BREAK_ROPE()l
extern _native void PIN_ROPE_VERTEX()l
extern _native void UNPIN_ROPE_VERTEX()l
extern _native void GET_ROPE_VERTEX_COUNT()l
extern _native void ATTACH_OBJECTS_TO_ROPE()l
extern _native void ATTACH_OBJECT_VEHICLE_TO_ROPE()l
extern _native void ATTACH_VEHICLES_TO_ROPE()l
extern _native void ATTACH_ROPE_TO_OBJECT()l
extern _native void DETACH_ROPE_FROM_OBJECT()l
extern _native void ROPE_SET_COLLISION_FLAGS()l
extern _native void SET_HIGH_RAGDOLL_LOD_LIMIT()l
extern _native void SET_HIGH_RAGDOLL_LOD_LIMIT_TO_DEFAULT()l
extern _native void NETWORK_ENABLE_ASSIST_XP()l
extern _native void DEATHRECORD_GET_NUM_KILLERS()l
extern _native void DEATHRECORD_GET_SUB_KILLER_NAME()l
extern _native void DEATHRECORD_GET_SUB_KILLER_PLAYER_INDEX()l
extern _native void DEATHRECORD_GET_SUB_KILLER_PRIMARY()l
extern _native void DEATHRECORD_GET_SUB_KILLER_SECONDARY()l
extern _native void DEATHRECORD_GET_SUB_KILLER_PERCENT()l
extern _native void DEATHRECORD_GET_SUB_KILLER_RANK()l
extern _native void DEATHRECORD_ENABLE_ASSIST_XP()l
extern _native void DEATHRECORD_CLEAR()l
extern _native void DEATHRECORD_CLEAR_ALL()l
extern _native void DEATHRECORD_GET_NUM_SHOTS()l
extern _native void DEATHRECORD_GET_SHOT_INJURER()l
extern _native void DEATHRECORD_GET_SHOT_COMPONENT()l
extern _native void DEATHRECORD_GET_SHOT_WEAPON()l
extern _native void DEATHRECORD_GET_SHOT_DAMAGE()l
extern _native void DEATHRECORD_GET_SHOT_BULLETCOUNT()l
extern _native void DEATHRECORD_GET_SHOT_TIME()l
extern _native void DEATHRECORD_GET_SHOT_FROM()l
extern _native void DEATHRECORD_GET_SHOT_FLAGS()l
extern _native void DEATHRECORD_GET_SHOT_IS_CURRENT_LIFE()l
extern _native void DEATHRECORD_GET_NUM_RECORDS()l
extern _native void DEATHRECORD_GET_RECORD_INJURER()l
extern _native void DEATHRECORD_GET_RECORD_COMPONENT()l
extern _native void DEATHRECORD_GET_RECORD_WEAPON()l
extern _native void DEATHRECORD_GET_RECORD_DAMAGE()l
extern _native void DEATHRECORD_GET_RECORD_BULLETCOUNT()l
extern _native void DEATHRECORD_GET_RECORD_TIME()l
extern _native void DEATHRECORD_GET_RECORD_FROM()l
extern _native void DEATHRECORD_GET_RECORD_FLAGS()l
extern _native void DEATHRECORD_GET_RECORD_IS_CURRENT_LIFE()l
extern _native void EXPERIENCE_SET_XP_PER_INJURY()l
extern _native void EXPERIENCE_CLEAR_XP_PER_INJURY()l
extern _native void EXPERIENCE_SET_POINT_PER_INJURY()l
extern _native void EXPERIENCE_CLEAR_POINT_PER_INJURY()l
extern _native void GET_LAST_SHOT_BY_PLAYER()l
extern _native void GET_LAST_SHOT_TO_PLAYER()l
extern _native void DEATHRECORDS_GET_PLAYERDETAILS_NAME()l
extern _native void DEATHRECORDS_GET_PLAYERDETAILS_CLANTAG()l
extern _native void DEATHRECORDS_GET_PLAYERDETAILS_TITLE()l
extern _native void DEATHRECORDS_CLEAR_KILLSHOTDATA()l
extern _native void DEATHRECORD_LOCAL_HAS_DAMAGED_WITH()l
extern _native void NETWORK_REQUIRE_LEVEL_DATA()l
extern _native void NETWORK_DUMP_LEVEL_DATA()l
extern _native void NETWORK_LEVEL_DATA_GET_NUM_NODES()l
extern _native void NETWORK_LEVEL_DATA_GET_NODE()l
extern _native void NETWORK_LEVEL_DATA_GET_NODE_FROM_NODE()l
extern _native void NETWORK_LEVEL_DATA_GET_NUM_NODES_FROM_NODE()l
extern _native void NETWORK_LEVEL_DATA_GET_SIBLING_COUNT_AFTER_NODE()l
extern _native void NETWORK_LEVEL_DATA_GET_HASH()l
extern _native void NETWORK_LEVEL_DATA_GET_HASH_FROM_NODE()l
extern _native void NETWORK_LEVEL_DATA_GET_STRING()l
extern _native void NETWORK_LEVEL_DATA_GET_STRING_FROM_NODE()l
extern _native void NETWORK_LEVEL_DATA_GET_INT()l
extern _native void NETWORK_LEVEL_DATA_GET_INT_FROM_NODE()l
extern _native void NETWORK_LEVEL_DATA_GET_FLOAT()l
extern _native void NETWORK_LEVEL_DATA_GET_FLOAT_FROM_NODE()l
extern _native void NETWORK_LEVEL_DATA_GET_VECTOR()l
extern _native void NETWORK_LEVEL_DATA_GET_VECTOR_FROM_NODE()l
extern _native void NETWORK_LEVEL_DATA_GET_BOOL()l
extern _native void NETWORK_LEVEL_DATA_GET_BOOL_FROM_NODE()l
extern _native void NETWORK_REQUIRE_STORED_QUERIES()l
extern _native void NETWORK_DUMP_STORED_QUERIES()l
extern _native void NETWORK_LEVEL_DATA_RUN_STORED_QUERY_NODE()l
extern _native void NETWORK_LEVEL_DATA_RUN_STORED_QUERY_COUNT()l
extern _native void NETWORK_LEVEL_DATA_RUN_STORED_QUERY_STRING()l
extern _native void NETWORK_LEVEL_DATA_RUN_STORED_QUERY_VECTOR()l
extern _native void NETWORK_LEVEL_DATA_RUN_STORED_QUERY_FLOAT()l
extern _native void NETWORK_LEVEL_DATA_RUN_STORED_QUERY_INT()l
extern _native void NETWORK_LEVEL_DATA_RUN_STORED_QUERY_HASH()l
extern _native void NETWORK_LEVEL_DATA_RUN_STORED_QUERY_BOOL()l

