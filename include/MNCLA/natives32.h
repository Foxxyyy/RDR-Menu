/*H**********************************************************************
* FILENAME :	natives32.h					START DATE :	10 Sept 16
*
* DESCRIPTION :
*		Native functions to be used with all Midnight Club LA targets and platforms of SC-CL.
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
extern _native void SETTIMERA(uint value)l
extern _native void SETTIMERB(uint value)l
extern _native float TIMESTEP(void)l
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
extern _native int FLOOR(float value)l
extern _native int CEIL(float value)l
extern _native int ROUND(float value)l
extern _native float TO_FLOAT(uint value)l
extern _native void CLEAR_TEXT_LABEL(const char* label)l
extern _native int GET_LATEST_CONSOLE_COMMAND(void)l
extern _native void RESET_LATEST_CONSOLE_COMMAND(void)l
extern _native int GET_CONSOLE_COMMAND_TOKEN(void)l
extern _native int GET_NUM_CONSOLE_COMMAND_TOKENS(void)l
#pragma endregion
extern _native void Notify(int unk)l
extern _native void RAND_RESET(void)l
extern _native void RAND_SET_SEED(int seed)l
extern _native int RAND_INT_RANGE(int min, int max)l
extern _native float RAND_FLOAT_RANGE(float min, float max)l
extern _native int RAND_INT_RANGE_DIFFERENT(int unk1, int unk2, int unk3)l
extern _native float RAND_FLOAT_GAUSSIAN(float unk1, float unk2)l
extern _native float SubtractAngleShorter(float unk1, float unk2)l
extern _native float VFlatDist(vector3* vec1, vector3* vec2)l
extern _native bool StringCompare(char* str1, const char* str2)l
extern _native bool StringCaseCompare(char* str1, char* str2)l
extern _native bool StringCaseContains(char* str1, char* str2)l
extern _native void StringCat(char* str1, char* str2)l
extern _native void SetPlayerControlType(int unk1, int unk2)l
extern _native void SetPlayerPadIndex(int index, int unk)l
#pragma region LocalOptions
extern _native ScriptAny LocalOptions_LookupVehicleProfile(char* unk)l
extern _native ScriptAny LocalOptions_AddVehicleToPlayer(ScriptAny vehicle)l
extern _native ScriptAny LocalOptions_AddConfigToPlayer(ScriptAny config)l
extern _native void LocalOptions_RemoveVehicleFromPlayer(ScriptAny vehicle)l
extern _native ScriptAny LocalOptions_GetCurrentVehicleProfileIndex(void)l
extern _native void LocalOptions_SetCurrentVehicleProfileIndex(ScriptAny unk)l
extern _native ScriptAny LocalOptions_GetVehicleProfile(int unk)l
extern _native void LocalOptions_SetVehicleProfile(int unk1, ScriptAny unk2)l
extern _native void LocalOptions_GetShowroomProfile(int unk1, ScriptAny unk2)l
extern _native ScriptAny LocalOptions_GetNumValidVehicleProfiles(void)l
extern _native int LocalOptions_LookupGarageCar(char* unk)l
extern _native bool LocalOptions_IsCheating(void)l
extern _native int LocalOptions_SaveCollectables(int unk)l
extern _native ScriptAny LocalOptions_IsCollected(int unk)l
#pragma endregion
extern _native char* CarConfig_GetVehicleTypeName(int unk)l
extern _native bool IsChildFinished(int scriptid)l
extern _native void ThrowRecursiveScript(int scriptid, int unk)l
extern _native void ThrowRecursive(int unk)l
extern _native void SetExceptionMask(int mask)l
extern _native void SetExceptionPassthroughMask(int mask)l
extern _native bool IsExitFlagSet(void)l
extern _native void SetExitFlag(int scriptid)l
extern _native ScriptAny GetChildThread(void)l
extern _native ScriptAny GetNextChildThread(int scriptid)l
extern _native void LayerPlayer_LoadPlayer(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, float unk4)l
extern _native void LayerPlayer_KillPlayer(int player)l
extern _native void LayerPlayer_LoadRemotePlayer(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, float unk4, ScriptAny unk5, ScriptAny unk6)l
extern _native void LayerCity_LoadCity(ScriptAny city)l
extern _native void LayerCity_UnloadCity(void)l
extern _native void LayerAmbients_LoadAmbients(int unk1)l
extern _native void LayerAmbients_UnloadAmbients(void)l
extern _native void City_SetFixedStreamingCam(vector3* unk1, bool unk2, bool unk3)l
extern _native void City_SetFixedStreamingCamLookat(vector3* unk1, vector3* unk2, bool unk3, bool unk4)l
extern _native float City_SetMaxStreamingDistance(float distance)l
extern _native float City_SetMaxHilodDrawDistance(float distance)l
extern _native void City_SetHighLodEnable(bool enable)l
extern _native void City_SetCrossFadeEnabled(bool enable)l
extern _native bool City_DoneStreaming(float distcheck)l
extern _native void City_SetSnapLODFade(void)l
extern _native void Game_SetCamera(vector3* unk1, vector3* unk2, float unk3, bool unk4, float unk5, float unk6)l
extern _native bool Game_IsPaused(void)l
extern _native void Game_SetLoadingDone(void)l
extern _native void Game_FadeLoadscreenLogo(bool unk)l
extern _native bool Game_GetLoadingDone(void)l
extern _native void Game_LoadScreenShutdown(void)l
extern _native bool IS_BUTTON_DOWN(int padindex, int button)l
extern _native bool IS_PAD_BUTTON_DOWN(int index, int button)l
extern _native float GET_CONTROLLER_LEFTX(int padindex)l
extern _native void Garage_TransitionIntoRateMyRide(void)l
extern _native void Garage_TransitionOutOfRateMyRide(void)l
extern _native void Garage_TransitionIntoGarage(void)l
extern _native void Garage_TransitionOutOfGarage(void)l
extern _native void Garage_TransitionToTestDrive(void)l
extern _native void Garage_TransitionOutOfTestDrive(void)l
extern _native void Garage_TransitionOutOfTestDriveShort(void)l
extern _native void Garage_SetDebugPlayerRelativeCamera(int unk1, float unk2, float unk3, float unk4, float unk5, float unk6)l
extern _native bool Garage_IsTestDriving(void)l
extern _native void Garage_WarpTo(void)l
extern _native char* GetCurrentCity(void)l
extern _native int LookupCity(const char* city)l
extern _native int LookupCar(char* car)l
extern _native char* LookupCarName(char* car)l
extern _native void CityDescription_GetDefaultStartPosition(ScriptAny unk1, vector3* unk2, float* unk3)l
extern _native ScriptAny CityDescription_LookupRace(ScriptAny unk1, char* unk2)l
extern _native ScriptAny CityDescription_LookupRaceByIndex(ScriptAny unk1, int index)l
extern _native ScriptAny CityDescription_FindRaceByRacerPosition(ScriptAny unk1, ScriptAny unk2, float unk3)l
extern _native int CityDescription_GetRaceIndexByName(ScriptAny unk1, char* name)l
extern _native char* CityDescription_GetRaceNameByIndex(ScriptAny unk1, int index)l
extern _native short RaceDescription_GetNumGridPositions(ScriptAny unk1)l
extern _native void RaceDescription_GetGridPosition(ScriptAny unk1, ScriptAny unk2, vector3* position, ScriptAny unk4)l
extern _native void RaceDescription_GetStartBeaconPosition(ScriptAny unk1, vector3* position)l
extern _native float RaceDescription_GetFFAOuterRadius(ScriptAny unk)l
extern _native float RaceDescription_GetFFAInnerRadius(ScriptAny unk)l
extern _native int RaceDescription_GetTargetTime(ScriptAny unk1, int unk2)l
extern _native int RaceDescription_GetTargetDamage(ScriptAny unk)l
extern _native int RaceDescription_GetDefaultNumLaps(ScriptAny unk)l
extern _native int RaceDescription_GetRaceType(ScriptAny unk)l
extern _native int RaceDescription_GetRaceSubType(ScriptAny unk)l
extern _native int RaceDescription_GetNumCopZones(ScriptAny unk)l
extern _native int RaceDescription_GetRaceGridType(ScriptAny unk)l
extern _native char* RaceDescription_GetCarConfigName(ScriptAny unk)l
extern _native char* RaceDescription_GetEasyRaceName(ScriptAny unk)l
extern _native bool RaceDescription_AllowRaceStarter(ScriptAny unk)l
extern _native bool RaceDescription_UseSafetyCam(ScriptAny unk)l
extern _native mcArray* mcRaceArray_Create(void)l
extern _native void mcRaceArray_Destroy(mcArray* array)l
extern _native short mcRaceArray_Fill(mcArray* array, int unk1, int unk2, int unk3)l
extern _native void mcRaceArray_Reset(mcArray* array)l
extern _native void mcRaceArray_SortByDistance(mcArray* array, ScriptAny unk)l
extern _native ScriptAny mcRaceArray_FindNextRaceIndex(mcArray* array)l
extern _native ScriptAny mcRaceArray_FindBeatMeThereRaceIndex(mcArray* array, ScriptAny unk1, ScriptAny unk2, float unk3)l
extern _native void mcRaceArray_LocalHookmanFilter(mcArray* array, ScriptAny unk1, int unk2)l
extern _native ScriptAny mcRaceArray_GetRaceIndex(mcArray* array, int index)l
extern _native bool mcRaceArray_IsUsed(mcArray* array, int index)l
extern _native void mcRaceArray_SetUsed(mcArray* array, int index, bool used)l
extern _native ScriptAny mcRaceArray_GetRandomRaceIndex(mcArray* array)l
extern _native short mcRaceArray_GetCount(mcArray* array)l
extern _native void mcRaceArray_AddRace(mcArray* array, char* race, int index)l
extern _native char* GetCityCommandLine(ScriptAny* unk)l
extern _native char* GetCarCommandLine(ScriptAny* unk)l
extern _native char* GetExtraCarCommandLine(ScriptAny* unk)l
extern _native byte GetNoScriptsCommandLine(void)l
extern _native char* GetScriptCommandLine(ScriptAny* unk)l
extern _native char* GetRaceNameCommandLine(ScriptAny* unk)l
extern _native int GetNumOpponentCommandLine(void)l
extern _native int GetNumLapsCommandLine(void)l
extern _native ScriptAny GetPowerUpsCommandLine(void)l
extern _native ScriptAny GetOpponentCarCommandLine(ScriptAny* unk1, int unk2)l
extern _native ScriptAny GetOpponentModValueCommandLine(void)l
extern _native ScriptAny GetOpponentDifficultyCommandLine(void)l
extern _native ScriptAny GetOpponentDamageCommandLine(void)l
extern _native ScriptAny GetCutsceneForcedIndex(void)l
extern _native byte GetCopCommandLine(void)l
extern _native byte GetRaceCopChaseCommandLine(ScriptAny unk)l
extern _native byte GetDemoCommandLine(void)l
extern _native byte GetNetDemoCommandLine(void)l
extern _native ScriptAny GetLayoutmodeCommandLine(void)l
extern _native byte GetNoPropCommandLine(void)l
extern _native void StartLogMemory(void)l
extern _native void StopLogMemory(void)l
extern _native void DebugReplay(void)l
extern _native ScriptAny Particles_CreateParticleEffect(ScriptAny particle, vector3* coords)l
extern _native void Particles_DestroyParticleEffect(ScriptAny particle)l
extern _native void mcGame_ThrowEvent(const char* event)l
#pragma region GRAPHICS
extern _native void Graphics_WarpToTimeOfDay(float unk1, float unk2)l
extern _native float Graphics_GetTimeOfDay(void)l
extern _native bool Graphics_GetAndSetAutoUpdateTimeOfDay(bool enable)l
extern _native void Graphics_SetShadowDisable(bool disable)l
extern _native void Graphics_SetMainShadowedRenderPass(void)l
extern _native void Graphics_ChangeRenderPassMask(bool unk1, int mask)l
extern _native void Graphics_SetMovieRenderingMode(bool unk)l
extern _native void Graphics_PictureInPictureGrabImage(ScriptAny unk)l
extern _native void Graphics_PictureInPictureGrabImageSequence(ScriptAny unk1, ScriptAny unk2)l
extern _native void Graphics_SetCopCamera(bool enable)l
extern _native void Graphics_GetCopTimeString(char* string)l
extern _native void Graphics_UseGarageLighting(bool garagelighting)l
#pragma endregion
#pragma region AUDIO_MANAGER
extern _native void AudioManager_StartLoadingMusic(void)l
extern _native void AudioManager_StopLoadingMusic(void)l
extern _native void AudioManager_PlayFrontendSound(const char* sound)l
extern _native void AudioManager_EnterHangoutState(char* unk)l
extern _native void AudioManager_ExitHangoutState(void)l
extern _native void AudioManager_InitHangout(char* unk1, char* unk2, vector3* unk3)l
extern _native void AudioManager_DestroyHangout(char* unk)l
extern _native void AudioManager_SuspendHangout(char* unk1, bool unk2)l
extern _native void AudioManager_SetHangoutHiddenId(int id)l
extern _native void AudioManager_TransitionIntoGarage(void)l
extern _native void AudioManager_TransitionOutOfGarage(void)l
extern _native void AudioManager_SetActiveEndRace(bool unk1, bool unk2)l
extern _native void AudioManager_SetActiveTimeSlow(bool timeslow)l
extern _native void AudioManager_SetActiveSlowMotionForm(bool slowmotion)l
extern _native void AudioManager_SetActivePreRaceRevs(bool preracerevs)l
extern _native float AudioManager_GetActualTime(void)l
#pragma endregion
#pragma region MC_EVENT
extern _native void mcEvent_PostEventStr(const char* event, const char* value)l
extern _native void mcEvent_PostEventInt(char* event, int value)l
extern _native void mcEvent_PostEventFloat(char* event, float value)l
extern _native void mcEvent_PostEventRaceResults(char* event, ScriptAny unk)l
extern _native void mcEvent_PostEventRaceAbort(char* event, char* unk)l
#pragma endregion
#pragma region PLAYER
extern _native ScriptAny Player_FindObject(int player)l
extern _native ScriptAny Player_FindRacerObject(int racer)l
extern _native ScriptAny Player_GetRacer(ScriptAny unk)l
extern _native void Player_ChangeCameraInterest(void)l
extern _native bool Player_FlashingHighbeams(int player)l
extern _native bool Player_IsInIdleCam(int player)l
#pragma endregion
#pragma region PLAYER_MANAGER
extern _native int PlayerManager_GetNumPlayers(void)l
extern _native int PlayerManager_GetNumDeadPlayers(void)l
extern _native bool PlayerManager_IsPlayerValid(int player)l
extern _native bool PlayerManager_IsLocalPlayer(int player)l
#pragma endregion
#pragma region OPPONENT
extern _native ScriptAny Opponent_GetRacer(ScriptAny opponent)l
extern _native void Opponent_ToggleDeleteOnEviction(ScriptAny opponent, bool toggle)l
extern _native void Opponent_ToggleResetOnEviction(ScriptAny opponent, bool toggle)l
extern _native bool Opponent_ShouldResetOnEviction(ScriptAny opponent)l
#pragma endregion
#pragma region OPPONENT_MANAGER
extern _native ScriptAny OpponentManager_CreateOpponent(void)l
extern _native void OpponentManager_LoadOpponent(ScriptAny unk1, ScriptAny unk2, vector3* unk3, float unk4)l
extern _native void OpponentManager_LoadOpponentByCarConfig(ScriptAny unk1, ScriptAny unk2, vector3* unk3, float unk4)l
extern _native void OpponentManager_AddOpponentToWorld(ScriptAny opponent)l
extern _native void OpponentManager_RemoveOpponentFromWorld(void)l
extern _native void OpponentManager_DeleteOpponent(ScriptAny opponent)l
extern _native ScriptAny OpponentManager_FindFromUID(ScriptAny unk)l
extern _native void OpponentManager_CleanupOpponentArray(void)l
extern _native bool OpponentManager_StillStreamingOut(void)l
extern _native ScriptAny OpponentManager_FindCharacterConfigData(ScriptAny unk)l
extern _native ScriptAny OpponentManager_FindRandomAvailableCharacter(void)l
extern _native ScriptAny OpponentManager_FindRandomAvailableCharacterByVehicleName(char* vehicle)l
extern _native void OpponentManager_MarkCharacterAsUsed(ScriptAny unk)l
extern _native void OpponentManager_ClearUsedCharacters(void)l
extern _native ScriptAny OpponentManager_GetCharacterNameParams(void)l
extern _native void OpponentManager_HideOpponents(void)l
extern _native bool OpponentManager_AreDeleteRequestsClean(void)l
#pragma endregion
#pragma region RUBBERBAND_MGR
extern _native void RubberBandMgr_SetupRace(ScriptAny unk1, bool unk2, bool unk3)l
extern _native void RubberBandMgr_ShutdownRace(void)l
extern _native void RubberBandMgr_EnableRubberBanding(bool enable)l
extern _native void RubberBandMgr_SetDifficulty(void)l
extern _native void RubberBandMgr_LoadTuning(void)l
#pragma endregion
#pragma region REPLAY_MGR
extern _native void ReplayMgr_Begin(bool begin)l
extern _native void ReplayMgr_End(bool end)l
extern _native void ReplayMgr_SetFinishedRace(void)l
extern _native ScriptAny ReplayMgr_GetFinishedRace(void)l
extern _native ScriptAny ReplayMgr_GetFinishedWatchingReplay(void)l
#pragma endregion
#pragma region POLICE_MANAGER
extern _native ScriptAny PoliceManager_CreatePolice(ScriptAny unk1, bool unk2, vector3* unk3)l
extern _native bool PoliceManager_DestroyPolice(ScriptAny police)l
extern _native bool PoliceManager_DestroyAllPolice(void)l
extern _native void PoliceManager_ResetAllPolice(void)l
extern _native ScriptAny PoliceManager_FindFromUID(int uid)l
extern _native ScriptAny PoliceManager_GetRacer(ScriptAny unk)l
extern _native ScriptAny PoliceManager_GetLastPullOverPolice(void)l
extern _native bool PoliceManager_IsStreamedIn(ScriptAny police)l
extern _native bool PoliceManager_IsAllStreamedIn(void)l
extern _native bool PoliceManager_IsStreamedOut(ScriptAny police)l
extern _native bool PoliceManager_IsAllStreamedOut(void)l
extern _native void PoliceManager_SetAllPoliceStreamLockedIn(void)l
extern _native void PoliceManager_SetAllPoliceStreamLockedOut(void)l
extern _native void PoliceManager_SetAllPoliceStreamUnlocked(void)l
extern _native void PoliceManager_SetAllPoliceUnderground(bool unk1, bool unk2)l
extern _native void PoliceManager_SetPoliceActive(ScriptAny police, bool active)l
extern _native void PoliceManager_SetAllPoliceActive(bool active)l
extern _native void PoliceManager_SetPoliceAllowToCheckLawBreaking(ScriptAny police, bool allow)l
extern _native void PoliceManager_SetAllPoliceAllowToCheckLawBreaking(bool allow)l
extern _native void PoliceManager_SetPoliceAllowToPatrol(ScriptAny police, bool allow)l
extern _native void PoliceManager_SetAllPoliceAllowToPatrol(bool allow)l
extern _native void PoliceManager_SetChaseProperties(bool unk1, bool unk2, bool unk3)l
extern _native void PoliceManager_StartPursuit(ScriptAny unk1, ScriptAny unk2, bool unk3, bool unk4, bool unk5)l
extern _native void PoliceManager_SuspectFleeing(ScriptAny unk)l
extern _native ScriptAny PoliceManager_GetTacticResult(void)l
extern _native int PoliceManager_GetNumCopsInLatestTactic(void)l
extern _native void PoliceManager_CreateCopZones(ScriptAny unk)l
extern _native void PoliceManager_DestroyCopZones(void)l
extern _native void PoliceManager_SetCopZone(ScriptAny unk1, vector3* unk2, float unk3)l
extern _native void PoliceManager_EvaluateCopZones(void)l
extern _native void PoliceManager_CurrentRaceLapChanged(int lap)l
extern _native void PoliceManager_SetRaceChaseTarget(ScriptAny unk1, ScriptAny unk2)l
extern _native void PoliceManager_SetCopCamCutSceneOnScreen(void)l
extern _native bool PoliceManager_GetCopCamCutSceneOnScreen(void)l
extern _native void PoliceManager_SetTicketCutSceneOnScreen(void)l
extern _native bool PoliceManager_GetTicketCutSceneOnScreen(void)l
extern _native void PoliceManager_SetArrestCutSceneOnScreen(void)l
extern _native bool PoliceManager_GetArrestCutSceneOnScreen(void)l
extern _native bool PoliceManager_PlayWipedOutBikerScene(void)l
extern _native void PoliceManager_CutSceneDone(void)l
extern _native void PoliceManager_PrepareAudioStreamForTicketForm(ScriptAny unk)l
extern _native void PoliceManager_PrepareAudioStreamForArrestForm(ScriptAny unk)l
extern _native void PoliceManager_EndTacticOnPlayer(bool endtatic)l
extern _native void PoliceManager_StopAllPolice(bool stop)l
extern _native bool PoliceManager_IsAnyPoliceCloseToPlayer(float distance)l
extern _native bool PoliceManager_CanAnyPoliceDetectTarget(ScriptAny unk)l
extern _native bool PoliceManager_IsPullingRacerOver(ScriptAny racer)l
extern _native bool PoliceManager_IsRacerPursued(ScriptAny racer)l
extern _native float PoliceManager_SetPullOverFleeDelayTime(void)l
extern _native int PoliceManager_CheckPoliceActivity(bool unk)l
#pragma endregion
#pragma region BRAIN_FRACTORY
extern _native ScriptAny BrainFactory_CreateBrainAnimated(ScriptAny unk)l
extern _native ScriptAny BrainFactory_CreateBrainRacing(ScriptAny unk)l
extern _native ScriptAny BrainFactory_CreateBrainCruising(ScriptAny unk)l
extern _native brain BrainFactory_GetBrainAnimated(ScriptAny brain)l
extern _native brain BrainFactory_GetBrainRacing(ScriptAny brain)l
extern _native brain BrainFactory_GetBrainCruising(ScriptAny brain)l
extern _native void BrainFactory_DeleteBrain(ScriptAny brain)l
#pragma endregion
#pragma region BRAIN_RACING
extern _native void BrainRacing_Reset(brain brain)l
extern _native void BrainRacing_AppendGoal(brain brain, vector3* coords, float unk)l
extern _native void BrainRacing_SetupRace(brain brain, ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native void BrainRacing_SetFinalHeading(brain brain, vector3* heading)l
extern _native void BrainRacing_SetFinalHeadingDegrees(brain brain, float heading)l
extern _native void BrainRacing_SetFinalSpeed(brain brain, float speed)l
extern _native void BrainRacing_SetMaxSpeed(brain brain, float speed)l
extern _native void BrainRacing_SetAllowNitro(brain brain, bool allow)l
extern _native bool BrainRacing_HasReachedGoal(brain brain)l
extern _native void BrainRacing_SetDisableNitroTimer(brain brain, float timer)l
extern _native void BrainRacing_SetBufferZone(brain brain, float buffer)l
extern _native void BrainRacing_BeginRace(void)l
extern _native void BrainRacing_RecordTime(void)l
extern _native void BrainRacing_EndRace(void)l
extern _native void BrainRacing_SetRevvingEnabled(brain brain, bool reving)l
extern _native void BrainRacing_SetRevvingHandbrake(brain brain, bool revinghandbrake)l
extern _native void BrainRacing_SetHoldStill(brain brain, bool holdstill)l
extern _native void BrainRacing_SetLooping(brain brain, bool looping)l
extern _native void BrainRacing_SetAvoidHandbrakeTurns(brain brain, bool avoid)l
#pragma endregion
#pragma region BRAIN_CRUISING
extern _native void BrainCruising_DriveToNearestRail(brain brain)l
extern _native void BrainCruising_AttachToNearestRail(brain brain)l
extern _native void BrainCruising_TeleportToNearestRail(brain brain)l
extern _native void BrainCruising_RemoveFromTraffic(brain brain)l
extern _native void BrainCruising_SetCurrentDest(brain brain, vector3* dest)l
extern _native bool BrainCruising_HasReachedGoal(brain brain)l
extern _native void BrainCruising_SetOffset(brain brain, vector3* offset)l
extern _native void BrainCruising_SetSpeed(brain brain, float speed)l
extern _native void BrainCruising_SetDestSpeed(brain brain, float speed)l
extern _native void BrainCruising_AppendDest(brain brain, vector3* dest)l
extern _native void BrainCruising_SetLooping(brain brain, bool looping)l
extern _native int BrainCruising_GetCurrentDestinationIndex(brain brain)l
extern _native void BrainCruising_TeleportToNextDestination(brain brain)l
#pragma endregion
#pragma region MC_RACER_MANAGER
extern _native bool mcRacerManager_AreStreamStatesResolved(void)l
extern _native void mcRacerManager_ToggleRacerFlashedFlag(bool toggle)l
extern _native bool mcRacerManager_HasRacerBeenFlashed(void)l
extern _native int mcRacerManager_GetNumRacersAllowedForPolice(void)l
#pragma endregion
#pragma region RACER
extern _native racer Racer_FindObject(ScriptAny unk)l
extern _native racer Racer_FindFromUID(int uid)l
extern _native void Racer_SetUID(racer racer, int uid)l
extern _native int Racer_GetUID(racer racer)l
extern _native char* Racer_GetName(racer racer)l
extern _native char* Racer_GetVehicleDriverName(racer racer)l
extern _native void Racer_SetUIDAndCharacterName(racer racer, int uid, char* name)l
extern _native void Racer_SetCharacterName(racer racer, char* name)l
extern _native void Racer_SetVehicleDriverEnable(racer racer, bool enable)l
extern _native void Racer_SetForceHiresTextures(racer racer, bool force)l
extern _native bool Racer_IsSimStreamed(racer racer)l
extern _native bool Racer_IsCarStreamed(racer racer)l
extern _native bool Racer_IsVinylStreamed(racer racer)l
extern _native bool Racer_IsMotorcycle(racer racer)l
extern _native void Racer_InitializeResetPosition(ScriptAny unk, short racer, vector3* position)l
extern _native void Racer_SetResetPositionFromRecoveryMatrix(racer racer)l
extern _native void Racer_Reset(racer racer)l
extern _native void Racer_ResetWithDamageIntact(racer racer)l
extern _native void Racer_Activate(racer racer)l
extern _native void Racer_Deactivate(racer racer)l
extern _native void Racer_SetCarDrivableState(racer racer, int state)l
extern _native void Racer_ZeroVelocity(racer racer)l
extern _native void Racer_PreRaceBurnout(racer racer)l
extern _native bool Racer_IsActive(racer racer)l
extern _native bool Racer_IsDriveable(racer racer)l
extern _native bool Racer_IsPlayer(racer racer)l
extern _native bool Racer_IsLocalPlayer(racer racer)l
extern _native bool Racer_IsBurningOut(racer racer)l
extern _native bool Racer_IsAccelerating(racer racer)l
extern _native float Racer_GetAngleY(racer racer)l
extern _native void Racer_GetMatrixC(racer racer, vector3* matrix)l
extern _native float Racer_DistanceBetween(racer racer, vector3* xyz1, vector3* xyz2)l
extern _native float Racer_AngleBetweenInDegrees(racer racer, vector3* unk)l
extern _native bool Racer_CanFlashHookman(racer racer, ScriptAny unk1, float unk2)l
extern _native float Racer_DistanceToPoint(racer racer, vector3* point)l
extern _native void Racer_SwapCars(racer racer, ScriptAny unk)l
extern _native void Racer_ApplyGameCamera(racer racer)l
extern _native void Racer_SetScrambleInputFlags(racer racer, int flags)l
extern _native void Racer_GetPosition(racer racer, vector3* position)l
extern _native void Racer_SetStreamingLockedIn(racer racer)l
extern _native void Racer_SetStreamingLockedOut(racer racer)l
extern _native void Racer_SetStreamingUnlocked(racer racer)l
extern _native void Racer_SetStreamLockState(racer racer, int state)l
extern _native int Racer_GetStreamLockState(racer racer)l
extern _native int Racer_GetLoadState(racer racer)l
extern _native bool Racer_IsBrainValid(racer racer)l
extern _native void Racer_SetModValue(racer racer, int value)l
extern _native int Racer_GetModValue(racer racer)l
extern _native int Racer_GetEstimatedModValue(racer racer)l
extern _native int Racer_GetPerformanceValue(racer racer)l
extern _native int Racer_GetCarTypeIndex(racer racer)l
extern _native void Racer_ChangeCar(racer racer, ScriptAny car)l
extern _native void Racer_ChangeCarByConfig(racer racer, ScriptAny car)l
extern _native ScriptAny Racer_GetCarConfig(racer racer)l
extern _native int Racer_GetRank(racer racer)l
extern _native int Racer_GetTeam(racer racer)l
extern _native void Racer_ResetNitros(racer racer)l
extern _native void Racer_SetHeadlights(racer racer, bool headlights)l
extern _native void Racer_SetExhaust(racer racer, bool exhaust)l
extern _native float Racer_GetDamageValue(racer racer)l
extern _native float Racer_GetMaxDamageValue(racer racer)l
extern _native void Racer_SetDamageMultiplierFlag(racer racer, int flag)l
extern _native void Racer_SetDifficultyDamageFactor(racer racer, float factor)l
extern _native void Racer_SetDamageInflictedFactor(racer racer, float factor)l
extern _native bool Racer_IsDamagedOut(racer racer)l
extern _native void Racer_SetDamagePercent(racer racer, float percent)l
extern _native bool Racer_CheckDamageTimer(racer racer)l
extern _native void Racer_SetInvincible(racer racer, bool set)l
extern _native void Racer_SetDefaultSteerDirection(racer racer, float direction)l
extern _native ScriptAny Racer_GetCurrentDistrict(racer racer)l
extern _native float Racer_GetTurboLevel(racer racer)l
extern _native void Racer_LockFeature(racer racer, ScriptAny feature, bool lock)l
extern _native ScriptAny Racer_GetVehicleClass(racer racer)l
extern _native void Racer_SetFatalBlow(racer racer, float blow)l
extern _native float Racer_GetFatalBlow(racer racer)l
extern _native float Racer_GetImpactThreshold(racer racer)l
extern _native ScriptAny Racer_GetPerformanceClass(racer racer)l
extern _native void Racer_EvictCar(racer racer)l
extern _native void Racer_ReloadCar(racer racer)l
extern _native ScriptAny Racer_GetActiveAbility(racer racer)l
extern _native bool Racer_AreHydraulicsInstalled(racer racer)l
extern _native bool Racer_IsObserverMode(racer racer)l
extern _native void Racer_EnterObserverMode(racer racer)l
extern _native void Racer_ExitObserverMode(racer racer)l
extern _native void Racer_ScoreUpdated(racer racer, ScriptAny unk)l
extern _native void Racer_PlayIgnition(racer racer)l
extern _native void Racer_PlayHorn(racer racer)l
extern _native void Racer_PlayGestureMild(racer racer)l
extern _native void Racer_EnableMusic(racer racer)l
extern _native void Racer_DisableMusic(racer racer)l
extern _native float Racer_GetSpeed(racer racer)l
extern _native void Racer_SetPreviousRaceTime(racer racer, int time)l
extern _native int Racer_GetPreviousRaceTime(racer racer)l
extern _native void Racer_ChangeDriverCharacter(racer racer, ScriptAny unk)l
extern _native void Racer_QuickFix(racer racer)l
extern _native bool Racer_HasFlag(racer racer)l
extern _native bool Racer_HasBomb(racer racer)l
extern _native int Racer_GetImmuneTimer(racer racer)l
extern _native void Racer_Teleport(racer racer, vector3* coords, float unk1, float unk2)l
extern _native void Racer_SetIconType(racer racer, ScriptAny icontype)l
extern _native void Racer_SetIconColor(racer racer, FloatRGB* color)l
extern _native void Racer_SetIconColorByDifficulty(racer racer, ScriptAny unk)l
extern _native ScriptAny Racer_SetIconColorByRacer(racer racer)l
extern _native void Racer_HideIcon(racer racer, bool hide)l
extern _native ScriptAny Racer_GetIconType(racer racer)l
#pragma endregion
#pragma region RACE_LAYOUT
extern _native racelayout RaceLayout_Create(void)l
extern _native void RaceLayout_Mount(racelayout layout, ScriptAny unk)l
extern _native void RaceLayout_Unmount(void)l
extern _native bool RaceLayout_IsMounted(racelayout layout)l
extern _native ScriptAny RaceLayout_Get_CheckpointListData(racelayout layout)l
extern _native int RaceLayout_Get_NumLaps(racelayout layout)l
#pragma endregion
#pragma region FLASH_HELPER
extern _native bool FlashHelper_GetGlobalString(ScriptAny unk1, const char* global, char* value)l
extern _native bool FlashHelper_GetGlobalInt(ScriptAny unk1, const char* global, int* value)l
extern _native void FlashHelper_SetGlobalString(ScriptAny unk1, const char* global, char* value)l
extern _native void FlashHelper_SetGlobalInt(ScriptAny unk1, const char* global, int value)l
extern _native void FlashHelper_SetGlobalStringArray(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native void FlashHelper_SetGlobalIntArray(ScriptAny unk1, const char* unk2, int unk3, int unk4)l
extern _native void FlashHelper_SetMovieEnabled(ScriptAny unk1, bool enable)l
extern _native void FlashHelper_SetGlobalFloat(ScriptAny unk1, const char* global, float value)l
extern _native void FlashHelper_SetGlobalFloatArray(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, float unk4)l
#pragma endregion
#pragma region UI_MANAGER
extern _native void UIManager_LoadHUD(void)l
extern _native void UIManager_UnloadHUD(void)l
extern _native void UIManager_LoadStates(void)l
extern _native ScriptAny UIManager_LoadMovie(ScriptAny unk1, ScriptAny unk2, short unk3, short unk4, ScriptAny unk5, bool unk6)l
extern _native ScriptAny UIManager_PrependMovie(ScriptAny unk1, ScriptAny unk2, short unk3, short unk4, ScriptAny unk5, bool unk6)l
extern _native void UIManager_UnloadMovie(ScriptAny unk1)l
extern _native ScriptAny UIManager_FindMovie(const char* movie)l
extern _native void UIManager_StreamMovie(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4, ScriptAny unk5, bool unk6, bool unk7)l
extern _native bool UIManager_IsSaving(void)l
extern _native char* UIManager_GetStringBuf(int index)l
extern _native void UIManager_AddRaceResult(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native void UIManager_SendEvent(const char* event)l
extern _native void UIManager_SendEventTo(ScriptAny unk1, ScriptAny unk2)l
extern _native void UIManager_ReplaceDelayedEvent(ScriptAny unk1, float unk2)l
extern _native ScriptAny UIManager_FindState(ScriptAny unk)l
extern _native ScriptAny UIManager_GetState(const char* state)l
extern _native void UIManager_RecycleAllSubstates(ScriptAny unk)l
extern _native void UIManager_AddNewRecycledSubstate(ScriptAny unk1, ScriptAny unk2)l
extern _native void UIManager_SortSubstates(ScriptAny unk1, ScriptAny unk2, bool unk3)l
extern _native void UIManager_SetStateDataString(ScriptAny unk1, ScriptAny unk2, char* value)l
extern _native void UIManager_SetStateDataInt(ScriptAny unk1, ScriptAny unk2, int value)l
extern _native void UIManager_SetStateDataFloat(ScriptAny unk1, ScriptAny unk2, float value)l
extern _native void UIManager_FormatRaceClock(ScriptAny unk1, ScriptAny unk2)l
extern _native void UIManager_QueueDisplay(const char* unk1, float unk2)l
extern _native void UIManager_SetCurrentMission(ScriptAny mission)l
extern _native bool UIManager_IsDisplayingMenu(void)l
extern _native void UIManager_TransitionFrom(ScriptAny unk)l
extern _native void UIManager_TransitionTo(ScriptAny unk)l
extern _native ScriptAny UIManager_GetRebootReason(ScriptAny unk)l
extern _native bool LoadingScreen_IsDoneLoading(void)l
extern _native bool FlashNavigator_IsTransitioning(void)l
#pragma endregion
#pragma region MC_UI_NAV_MAP
extern _native bool mcUINavMap_IsTargetSelected(void)l
extern _native void mcUINavMap_SetTargetByUID(int uid)l
extern _native void mcUINavMap_DisableExitTransition(void)l
#pragma endregion
#pragma region MC_HUD_MAP_SERVER
extern _native element mcHudMapServer_CreateElement(void)l
extern _native element mcHudMapServer_CreateElementEx(ScriptAny unk)l
extern _native void mcHudMapServer_DeleteElement(element element)l
extern _native void mcHudMapServer_AddElement(element element)l
extern _native bool mcHudMapServer_HasElement(element element)l
extern _native void mcHudMapServer_SetElement(element element, ScriptAny unk1, ScriptAny unk2, vector3* unk3, float unk4)l
extern _native void mcHudMapServer_SetVehicleElement(element element, ScriptAny unk1, ScriptAny unk2)l
extern _native void mcHudMapServer_SetRacerElement(element element, ScriptAny unk)l
extern _native element mcHudMapServer_GetVehicleElement(ScriptAny unk)l
extern _native void mcHudMapServer_Clear(void)l
extern _native void mcHudMapServer_SetPulsate(ScriptAny unk1, bool pulsate)l
extern _native void mcHudMapServer_SetSubType(ScriptAny unk1, ScriptAny unk2)l
extern _native void mcHudMapServer_ClearSubType(ScriptAny unk1, ScriptAny unk2)l
extern _native void mcHudMapServer_SetMutExSubtype(ScriptAny unk1, int unk2)l
extern _native void mcHudMapServer_SetIconType(ScriptAny unk1, ScriptAny unk2)l
extern _native void mcHudMapServer_RemoveElement(element element)l
extern _native void mcHudMapServer_SetSelected(ScriptAny unk1, bool selected)l
extern _native void mcHudMapServer_SetIsHideInMap(ScriptAny unk1, bool set)l
extern _native void mcHudMapServer_SetColor(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4, ScriptAny unk5)l
extern _native void mcHudMapServer_SetColorByDifficulty(ScriptAny unk1, ScriptAny unk2)l
extern _native void mcHudMapElement_GetPosition(element element, vector3* position)l
#pragma endregion
#pragma region SPLASH_MANAGER
extern _native void SplashManager_Splash(int unk1, int unk2, const char* unk3, float unk4, bool unk5, int unk6)l
extern _native void SplashManager_SplashRaw(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, float unk4, bool unk5, ScriptAny unk6)l
extern _native void SplashManager_SplashDynamicString(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4, ScriptAny unk5, float unk6, ScriptAny unk7)l
extern _native void SplashManager_SplashDynamicInt(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4, ScriptAny unk5, float unk6, ScriptAny unk7)l
extern _native void SplashManager_Cleanup(void)l
extern _native void SplashManager_DeleteQueuedItems(ScriptAny unk)l
#pragma endregion
#pragma region REGISTRY
extern _native void Registry_SetValueFloat(const char* registry, float value)l
extern _native void Registry_SetValueInt(const char* registry, int value)l
extern _native void Registry_SetValueString(const char* registry, char* value)l
extern _native void Registry_SetValueBool(const char* registry, bool value)l
extern _native void Registry_GetValueFloat(const char* registry, float* value)l
extern _native void Registry_GetValueInt(const char* registry, int* value)l
extern _native void Registry_GetValueString(const char* registry, char* value)l
extern _native const char* Registry_GetValueConstString(const char* registry)l
extern _native bool Registry_GetValueBool(const char* registry)l
#pragma endregion
extern _native void HudChat_Display(ScriptAny unk1, ScriptAny unk2)l
#pragma region UI_LOGIC
extern _native void UILogic_SetGPSDestination(int unk, vector3* dest)l
extern _native void UILogic_RemoveGPSDestination(int unk)l
extern _native ScriptAny UILogic_GetNextArcadeRace(void)l
extern _native void UILogic_SetPrompt(ScriptAny unk)l
extern _native void UILogic_GetCameraPos(ScriptAny unk, vector3* pos)l
extern _native void UILogic_GetCameraLookat(ScriptAny unk, vector3* lookat)l
extern _native void UILogic_GetCameraFovy(ScriptAny unk, float* y)l
extern _native void UILogic_SetCameraControl(bool control)l
extern _native void UILogic_ReleaseCamera(void)l
extern _native void UILogic_SaveCarDamage(void)l
extern _native void UILogic_RevertCarDamage(void)l
extern _native void Ctrl_SetVisible(ScriptAny ctrl, bool visible)l
extern _native void Ctrl_SetText(ScriptAny ctrl, char* text)l
extern _native ScriptAny Ctrl_GetChild(ScriptAny ctrl, int index)l
extern _native ScriptAny HUD_GetHUDCtrl(int unk)l
extern _native ScriptAny Form_GetForm(short unk)l
extern _native void Form_ShowForm(ScriptAny unk1, ScriptAny form)l
extern _native void Form_CloseForm(ScriptAny form)l
extern _native void Form_SetText(ScriptAny form, char* text)l
extern _native void Form_SetTextRaw(ScriptAny form, char* text)l
extern _native ScriptAny Form_GetFormResult(ScriptAny form)l
extern _native bool Form_GetFormVisible(ScriptAny form)l
extern _native ScriptAny Form_GetTopMost(void)l
extern _native ScriptAny Form_ToCtrl(ScriptAny form)l
extern _native void SimpleListForm_SetListText(ScriptAny form, int index1, int index2, char* text)l
extern _native int SimpleListForm_GetSelectedIndex(ScriptAny form)l
extern _native void SimpleListForm_SetVisible(ScriptAny form, int index, bool visible)l
extern _native void SimpleListForm_SetEnabled(ScriptAny form, int index, bool enabled)l
extern _native ScriptAny SimpleListForm_GetItem(ScriptAny form, int index)l
extern _native ScriptAny NumericUpDownItem_GetValue(ScriptAny item)l
extern _native int ComboBoxItem_GetSelectedIndex(ScriptAny item)l
extern _native void PerspectiveForm_SetCameraIndex(ScriptAny form, int index)l
extern _native int PerspectiveForm_GetCameraIndex(ScriptAny form)l
extern _native void PerspectiveForm_SetSlowMotion(ScriptAny form, float unk1, float unk2, bool unk3, bool unk4, float unk5)l
extern _native void PerspectiveForm_SetDescription(ScriptAny form, char* description)l
extern _native void PerspectiveForm_SetDescriptionRaw(ScriptAny form, char* description)l
extern _native void UILogic_PreLoad(void)l
extern _native void UILogic_PostLoad(void)l
extern _native void UILogic_PauseGame(void)l
extern _native void UILogic_ResumeGame(void)l
extern _native void UILogic_FullFix(void)l
extern _native void MessageBox_ShowMessageBox(ScriptAny box, ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, bool unk4)l
extern _native bool MessageBox_GetMessageBoxVisible(void)l
extern _native ScriptAny MessageBox_GetMessageBoxResult(void)l
extern _native void MessageBox_ShowLoadingBox(ScriptAny box)l
extern _native void MessageBox_HideLoadingBox(ScriptAny box)l
extern _native bool UILogic_GetIsTelephoneChallenge(void)l
extern _native bool UILogic_IsShowingDialog(void)l
extern _native void PrestreamManager_UnlockAll(void)l
extern _native bool UILogic_IsPressed(int unk1, int unk2)l
extern _native void UILogic_FireButtonPressedEvent(ScriptAny unk)l
extern _native void Warper_Warp(const char* warp)l
extern _native void Warper_WarpUsing(ScriptAny unk)l
extern _native void Warper_TerminateWarp(void)l
extern _native void Warper_TransitionTo(ScriptAny unk1, ScriptAny unk2, vector3* unk3, vector3* unk4, vector3* unk5)l
extern _native void Warper_SetDestinationMatrix(vector3* unk1, vector3* unk2, vector3* unk3)l
extern _native bool Warper_IsReadyToLoadStuff(void)l
extern _native bool Warper_IsWarping(void)l
extern _native void Warper_SetIsWarpingToCutscene(bool warping)l
extern _native void Warper_SetPauseAtEndOfCut(bool pause)l
extern _native void Warper_UseWarp(void)l
extern _native void Warper_SetIsEnterOnly(bool set)l
extern _native void Warper_SetStoryLocationCut(bool set)l
extern _native void Warper_SetWarping(bool set)l
extern _native void Warper_SetUseCinematicWarp(bool set)l
extern _native void UILogic_PauseCamera(void)l
extern _native void UILogic_UnPauseCamera(void)l
extern _native bool UILogic_IsCameraPaused(void)l
extern _native ScriptAny UILogic_FindMapElementByUID(int uid)l
extern _native void Warper_SetPauseCameraAtEndOfWarp(void)l
extern _native void Navmap_GetCityCenterPoint(vector3* unk1, vector3* unk2)l
extern _native void Map_SetCheckpointStrobe(bool set)l
extern _native void Map_SetMaxMinimapCheckpoints(ScriptAny unk)l
extern _native ScriptAny Map_GetMaxMinimapCheckpoints(void)l
extern _native void PropertyCtrl_SetPropertyBool(ScriptAny unk1, int unk2, bool value)l
extern _native bool PropertyCtrl_GetPropertyBool(ScriptAny unk1, ScriptAny unk2)l
extern _native void PropertyCtrl_SetPropertyInt(ScriptAny unk1, int unk2, int value)l
extern _native int PropertyCtrl_GetPropertyInt(ScriptAny unk1, ScriptAny unk2)l
extern _native void PropertyCtrl_SetPropertyFloat(ScriptAny unk1, ScriptAny unk2, float value)l
extern _native float PropertyCtrl_GetPropertyFloat(ScriptAny unk1, ScriptAny unk2)l
extern _native void PropertyCtrl_SetPropertyString(ScriptAny unk1, ScriptAny unk2, char* value)l
extern _native void PropertyCtrl_GetPropertyString(ScriptAny unk1, ScriptAny unk2, char* value)l
extern _native void Sidekick_Interrupt(void)l
extern _native void Sidekick_Clean(bool clean)l
extern _native void Sidekick_AppendData(ScriptAny unk1, ScriptAny unk2, int unk3, ScriptAny unk4, float unk5, const char* unk6, ScriptAny unk7, const char* unk8, int unk9, ScriptAny unk10, bool unk11, ScriptAny unk12, const char* unk13, const char* unk14)l
extern _native void Sidekick_RemoveData(ScriptAny unk)l
extern _native bool Sidekick_HasDataBeenAnnounced(ScriptAny unk)l
extern _native bool Sidekick_IsDataBeingAnnounced(void)l
extern _native bool Sidekick_IsDataDirty(ScriptAny unk)l
extern _native void Sidekick_Delay(bool delay)l
extern _native void Sidekick_IgnoreSelect(bool ignore)l
extern _native bool Sidekick_IsVisible(void)l
extern _native ScriptAny Sidekick_GetTypeCount(int unk)l
extern _native bool Sidekick_SidekickIsWaitForScriptFlagSet(void)l
extern _native void Sidekick_SidekickToggleWaitForScriptFlag(bool toggle)l
extern _native void mcMainState_EnableGpsButton(bool enable)l
extern _native void UILogic_EnableCarInput(void)l
extern _native void UILogic_DisableCarInput(void)l
extern _native void UILogic_DisableCameraInput(void)l
extern _native void UILogic_LockStreaming(vector3* unk1, vector3* unk2, vector3* unk3)l
extern _native void UILogic_LockStreamingPosHeading(vector3* unk1, float unk2)l
extern _native void UILogic_SetIsGPSJumping(bool jumping)l
extern _native void UILogic_RestartRace(void)l
#pragma endregion
#pragma region STRING_TABLE
extern _native void StringTable_SetString(ScriptAny table, char* value)l
extern _native void StringTable_SetInt(ScriptAny table, int value)l
extern _native char* StringTable_GetString(ScriptAny table)l
#pragma endregion
#pragma region PROP_MANAGER
extern _native ScriptAny PropManager_InitRaceProps(ScriptAny unk1, ScriptAny unk2)l
extern _native void PropManager_AddRaceProp(ScriptAny prop, vector3* unk1, vector3* unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native void PropManager_RemoveRaceProp(ScriptAny prop, ScriptAny unk1)l
extern _native ScriptAny PropManager_CreateRaceProp(ScriptAny prop, vector3* unk1, vector3* unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native void PropManager_AttachRaceProp(ScriptAny prop)l
extern _native void PropManager_DetachRaceProp(ScriptAny prop)l
extern _native void PropManager_SetPropPhysicsTypeFlags(ScriptAny prop, int flags)l
extern _native void PropManager_ShutdownRaceProps(ScriptAny unk)l
extern _native ScriptAny PropManager_GetFirstBrokenRaceProp(ScriptAny unk)l
extern _native void PropManager_ResetProps(void)l
extern _native void PropManager_GetRandomBreakablePropLocation(vector3* location)l
#pragma endregion
#pragma region INGAME_EDITOR
extern _native void InGameEditor_AddCollectablePosition(vector3* unk1, int index)l
extern _native bool InGameEditor_InEditorMode(void)l
#pragma endregion
#pragma region RACE
extern _native race Race_Create(void)l
extern _native void Race_Destroy(race race)l
extern _native void Race_Reset(race race)l
extern _native void Race_SetCurrentRace(race race)l
extern _native race Race_GetCurrentRace(void)l
extern _native void Race_ResetCurrentRace(void)l
extern _native bool Race_HasCurrentRace(void)l
extern _native bool Race_IsTeamGame(race race)l
extern _native void Race_SetRaceData(race race, ScriptAny data)l
extern _native void Race_GetRaceData(race race, ScriptAny* data)l
extern _native ScriptAny Race_GetCheckpointList(race race)l
extern _native ScriptAny Race_GetRaceGrid(race race, ScriptAny unk)l
extern _native void Race_LoadAmbientPathArray(race race, ScriptAny unk)l
extern _native void Race_UnloadAmbientPathArray(race race)l
extern _native void Race_EnableRaceTimer(race race, bool enable)l
extern _native bool Race_IsRaceTimerEnabled(race race)l
extern _native void Race_SetTimer(race race, int milliseconds)l
extern _native void Race_SetTimerSeconds(race race, float seconds)l
extern _native int Race_GetTimer(race race)l
extern _native int Race_GetTimerHuman(race race, float unk)l
extern _native int Race_GetTimerAI(race race, float unk)l
extern _native void Race_SetWinningTime(race race, int time)l
extern _native int Race_GetWinningTime(race race)l
extern _native int Race_GetTargetTime(race race)l
extern _native ScriptAny Race_GetRaceType(race race)l
extern _native void Race_SetTargetTime(race race, int time)l
extern _native void Race_ToggleDamagedOut(race race, bool toggle)l
extern _native bool Race_IsDamagedOut(race race)l
extern _native void Race_SetTargetDamage(race race, int damage)l
extern _native int Race_GetTargetDamage(race race)l
extern _native void Race_ToggleStarterCinematic(race race, bool toggle)l
extern _native bool Race_ShouldPlayStarterCinematic(race race)l
extern _native bool Race_IsReadyForCountdown(race race, float unk)l
extern _native bool Race_IsFinished(race race)l
extern _native void Race_Finish(race race)l
extern _native bool Race_HasBeenArrested(race race)l
extern _native bool Race_IsInEditor(void)l
#pragma endregion
#pragma region CHECKPOINT
extern _native checkpoint Checkpoint_Create(void)l
extern _native void Checkpoint_Destroy(checkpoint checkpoint)l
extern _native void Checkpoint_SetPosition(checkpoint checkpoint, vector3* position)l
extern _native void Checkpoint_SetPositionSecond(checkpoint checkpoint, vector3* position)l
extern _native void Checkpoint_SetHeight(checkpoint checkpoint, float height)l
extern _native void Checkpoint_SetActivationHeight(checkpoint checkpoint, float height)l
extern _native void Checkpoint_SetActivationRadius(checkpoint checkpoint, float radius)l
extern _native void Checkpoint_SetMaxSpeed(checkpoint checkpoint, float speed)l
extern _native void Checkpoint_IsLineCheckpoint(checkpoint checkpoint, bool line)l
extern _native void Checkpoint_SetDrawPosLine(checkpoint checkpoint, float draw)l
extern _native void Checkpoint_GetPosition(checkpoint checkpoint, vector3* position)l
extern _native void Checkpoint_SetTypeFlagPickup(checkpoint checkpoint, int flag)l
extern _native void Checkpoint_SetTypeFlagDropoff(checkpoint checkpoint, int flag)l
extern _native void Checkpoint_SetType(checkpoint checkpoint, int index, ScriptAny type)l
extern _native bool Checkpoint_IsFullyOpen(checkpoint checkpoint, ScriptAny unk)l
extern _native void Checkpoint_SetArrowLookatPosition(checkpoint checkpoint, float unk1, float unk2)l
#pragma endregion
#pragma region CHECKPOINT_LIST
extern _native ScriptAny CheckpointList_Create(void)l
extern _native void CheckpointList_Destroy(ScriptAny list)l
extern _native void CheckpointManager_SetActiveCheckpointList(ScriptAny list)l
extern _native void CheckpointManager_ClearActiveCheckpointList(void)l
extern _native void CheckpointManager_ActivateSingleCheckpoint(ScriptAny list, int unk1, int unk2)l
extern _native void CheckpointManager_DeactivateSingleCheckpoint(int list, int unk)l
extern _native checkpoint CheckpointManager_GetWhichHitCheckpoint(ScriptAny list, ScriptAny unk)l
extern _native bool CheckpointManager_HasHitCheckpoint(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native checkpoint CheckpointManager_GetCheckpoint(ScriptAny unk)l
extern _native checkpoint CheckpointManager_FindClosestOpenCheckpoint(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native ScriptAny CheckpointManager_CalculateRankOrdered(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native ScriptAny CheckpointManager_CalculateRankUnordered(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native void CheckpointList_ReserveList(ScriptAny list, ScriptAny unk)l
extern _native void CheckpointList_ResizeList(ScriptAny list, int unk)l
extern _native void CheckpointList_ReserveAltPaths(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native void CheckpointList_ResizeAltPaths(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native void CheckpointList_Reset(ScriptAny list)l
extern _native ScriptAny CheckpointList_AppendCheckpoint(ScriptAny unk)l
extern _native void CheckpointList_DeleteCheckpoint(ScriptAny list, ScriptAny unk)l
extern _native int CheckpointList_GetListCount(ScriptAny list)l
extern _native checkpoint CheckpointList_GetCheckpoint(ScriptAny list, int unk)l
extern _native void CheckpointList_SetAltPathBeforeCheckpoint(ScriptAny list, ScriptAny unk1, ScriptAny unk2)l
extern _native void CheckpointList_SetAltPathWeight(ScriptAny list, ScriptAny unk1, float unk2)l
extern _native void CheckpointList_SetAltPathFirstAltCheckpoint(ScriptAny list, ScriptAny unk1, ScriptAny unk2)l
extern _native void CheckpointList_SetAltPathNumAltCheckpoints(ScriptAny list, ScriptAny unk1, ScriptAny unk2)l
extern _native void CheckpointList_SetAltPathOpponentMask(ScriptAny list, ScriptAny unk1, ScriptAny unk2)l
extern _native void CheckpointList_SetAltPathUseMask(ScriptAny list, int index, bool unk1, bool unk2)l
extern _native int CheckpointList_GetNumberOfAltPaths(ScriptAny list)l
extern _native void CheckpointList_SetAltPathSkipCheckpoints(ScriptAny list, ScriptAny unk1, ScriptAny unk2)l
extern _native void CheckpointList_SetAltCPPosition(ScriptAny list, int index, vector3* position)l
extern _native void CheckpointList_GetAltCPPosition(ScriptAny list, int index, vector3* position)l
extern _native void CheckpointList_SetAltCPMaxSpeed(ScriptAny list, int index, float speed)l
extern _native float CheckpointList_GetAltCPMaxSpeed(ScriptAny list, int index)l
extern _native void CheckpointList_SetAltCPActivationRadius(ScriptAny list, int index, float radius)l
extern _native float CheckpointList_GetAltCPActivationRadius(ScriptAny list, int index)l
extern _native int CheckpointList_GetNumberOfAltCPs(ScriptAny list)l
#pragma endregion
#pragma region RACE_GRID
extern _native void RaceGrid_SetPosition(ScriptAny unk1, ScriptAny unk2, vector3* position, float unk3)l
extern _native void RaceGrid_GetPosition(ScriptAny unk1, ScriptAny unk2, vector3* position, float unk3)l
#pragma endregion
#pragma region CINE_SCRIPT
extern _native void CineScript_BeginDescription(void)l
extern _native void CineScript_EndDescriptionAndStartClock(void)l
extern _native void CineScript_SetSceneCoordSysBinding(ScriptAny unk)l
extern _native void CineScript_SetSceneReadyForGame(void)l
extern _native bool CineScript_IsGameReadyForScene(void)l
extern _native bool CineScript_IsGameReadyForReplay(void)l
extern _native bool CineScript_IsScenePending(void)l
extern _native bool CineScript_IsScenePlayingNotPending(void)l
extern _native bool CineScript_IsScenePlaying(void)l
extern _native bool CineScript_IsSpeechScenarioPending(void)l
extern _native bool CineScript_IsSpeechScenarioPrepared(void)l
extern _native void CineScript_RequestPreraceTauntScenarioAudio(ScriptAny unk)l
extern _native void CineScript_PrepareSpeechScenarioForNextCutscene(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, bool unk4)l
extern _native bool CineScript_IsEarlyOut(void)l
extern _native float CineScript_GetSceneDuration(void)l
extern _native float CineScript_GetTimeToRacestart(void)l
extern _native void CineScript_KillScene(void)l
extern _native void CineScript_FinishScene(void)l
extern _native void CineScript_SetGameCoordSysBindingCopyRacer(ScriptAny unk1, ScriptAny unk2)l
extern _native void CineScript_SetGameCoordSysBinding(ScriptAny unk)l
extern _native void CineScript_GetGameCoordSysBinding(ScriptAny unk)l
extern _native void CineScript_SetFixedFrameTime(bool set)l
extern _native void CineScript_SetRestartTimeOffset(float time)l
extern _native void CineScript_SetSceneName(char* name)l
extern _native char* CineScript_GetSceneName(void)l
extern _native void CineScript_UseRacerNativeCharacter(ScriptAny unk)l
extern _native void CineScript_PushKillBuffer(ScriptAny unk1, ScriptAny unk2)l
extern _native void CineScript_PopKillBuffer(ScriptAny unk)l
extern _native bool CineScript_IsSafeToKillBuffer(void)l
extern _native int CineScript_GetKillBufferCount(ScriptAny unk)l
extern _native ScriptAny CineScript_PickRacestartCutsceneFromGridEnum(ScriptAny unk)l
extern _native ScriptAny CineScript_PickRacestartCutsceneOrTauntFromGridEnum(ScriptAny unk1, bool unk2, bool unk3, ScriptAny unk4)l
extern _native ScriptAny CineScript_PickRacestartSafetyCutscene(void)l
extern _native ScriptAny CineScript_GetFirstRacestartCutsceneFromGridEnum(ScriptAny unk)l
extern _native bool CineScript_FindClosestSceneSafezone(ScriptAny unk1, vector3* unk2)l
extern _native bool CineScript_DoesAnimPackExist(ScriptAny unk)l
extern _native bool CineScript_DoesCutsceneAnimPackExist(void)l
extern _native bool CineScript_StartLoadCutsceneAnimPack(void)l
extern _native bool CineScript_StartLoadHangoutAnimPack(ScriptAny unk)l
extern _native ScriptAny CineScript_StartLoadAuxiliaryAnimPack(ScriptAny unk)l
extern _native bool CineScript_IsLoadedHangoutAnimPack(void)l
extern _native bool CineScript_IsLoadingHangoutAnimPack(void)l
extern _native bool CineScript_IsLoadedAuxiliaryAnimPack(void)l
extern _native bool CineScript_IsLoadedCutsceneAnimPack(void)l
extern _native void CineScript_ReleaseHangoutAnimPack(void)l
extern _native void CineScript_ReleaseAuxiliaryAnimPack(void)l
extern _native bool CineScript_Camera_LoadAnimation(ScriptAny unk1, ScriptAny unk2)l
extern _native void CineScript_Camera_Launch(ScriptAny unk1, ScriptAny unk2)l
extern _native void CineScript_Camera_LaunchEvent(ScriptAny unk1, ScriptAny unk2, float unk3)l
extern _native void CineScript_Camera_LaunchEventLCS(ScriptAny unk1, ScriptAny unk2, float unk3, ScriptAny unk4)l
extern _native void CineScript_Camera_LaunchEventTrimmed(ScriptAny unk1, ScriptAny unk2, float unk3, float unk4, float unk5)l
extern _native void CineScript_Camera_LaunchEvent_FixedCam(ScriptAny unk1, float unk2, float unk3, float unk4)l
extern _native void CineScript_Camera_Kill(void)l
extern _native float CineScript_Camera_GetTimeRemaining(void)l
extern _native float CineScript_Camera_GetTimeElapsed(void)l
extern _native void CineScript_Camera_GetPosition(float unk1, vector3* position)l
extern _native void CineScript_Camera_BypassCutsceneCameraToGameCamera(void)l
extern _native bool CineScript_Characters_LoadType(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native bool CineScript_Characters_LoadAnimation(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native bool CineScript_Characters_LoadAnimationWithFace(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native bool CineScript_Characters_LoadAnimationWithFaceXX(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native bool CineScript_Characters_LaunchAnimAt(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native ScriptAny CineScript_Characters_LaunchAnimWithFaceAt(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4, ScriptAny unk5, ScriptAny unk6)l
extern _native ScriptAny CineScript_Characters_LaunchAnimWithFaceAtXX(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4, ScriptAny unk5, ScriptAny unk6, ScriptAny unk7)l
extern _native ScriptAny CineScript_Characters_LaunchAnimAtLCS(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4, ScriptAny unk5, ScriptAny unk6)l
extern _native ScriptAny CineScript_Characters_LaunchAnimEvent(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4, float unk5, ScriptAny unk6)l
extern _native ScriptAny CineScript_Characters_LaunchAnimEventLCS(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4, float unk5, ScriptAny unk6, ScriptAny unk7)l
extern _native ScriptAny CineScript_Characters_LaunchAnimEventWithFace(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4, ScriptAny unk5, float unk6, ScriptAny unk7)l
extern _native ScriptAny CineScript_Characters_LaunchAnimEventWithFaceLCS(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4, ScriptAny unk5, float unk6, ScriptAny unk7, ScriptAny unk8)l
extern _native float CineScript_Characters_GetTimeRemainingForId(ScriptAny unk)l
extern _native bool CineScript_Characters_ReAnimateId(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native bool CineScript_Characters_ReAnimateSlot(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native void CineScript_Characters_RegisterDriverMappings(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4, ScriptAny unk5, ScriptAny unk6, ScriptAny unk7, ScriptAny unk8, ScriptAny unk9, ScriptAny unk10, ScriptAny unk11, ScriptAny unk12, ScriptAny unk13)l
extern _native void CineScript_Characters_RegisterDriverMappings2(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4, ScriptAny unk5)l
extern _native void CineScript_Characters_AssignBoyToSlot(ScriptAny boy)l
extern _native void CineScript_Characters_AssignGirlToSlot(ScriptAny girl)l
extern _native void CineScript_Characters_AssignCopToSlot(ScriptAny cop)l
extern _native void CineScript_Characters_AssignNameToSlot(ScriptAny unk1, ScriptAny unk2)l
extern _native void CineScript_Characters_SetSlotToUseUnscaledCharacter(ScriptAny unk)l
extern _native ScriptAny CineScript_Characters_ReadSlotPath(ScriptAny unk)l
extern _native ScriptAny CineScript_Characters_ReadSlotName(ScriptAny unk)l
extern _native ScriptAny CineScript_Characters_GetSlotToUseUnscaledCharacter(ScriptAny unk)l
extern _native ScriptAny CineScript_Characters_LookupDriverToCutscenePath(ScriptAny unk1, ScriptAny unk2)l
extern _native ScriptAny CineScript_Characters_LookupDriverToCutsceneName(ScriptAny unk1, bool unk2)l
extern _native bool CineScript_IsCinematicLighting(void)l
extern _native ScriptAny CineScript_SetForceCutsceneLighting(bool force)l
extern _native void CineScript_SetRaceStarterLighting(bool set)l
extern _native bool CineScript_Prop_LoadSetDressing(const char* prop, bool unk2)l
extern _native void CineScript_Prop_UnloadSetDressing(void)l
extern _native bool CineScript_Prop_IsSetDressingLoading(void)l
extern _native bool CineScript_Cars_RegisterRacer(ScriptAny unk1, ScriptAny unk2)l
extern _native bool CineScript_Cars_LoadMoverAnimation(ScriptAny unk1, ScriptAny unk2)l
extern _native ScriptAny CineScript_Cars_LaunchEvent(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, float unk4)l
extern _native ScriptAny CineScript_Cars_LaunchLCS(ScriptAny unk1, ScriptAny unk2)l
extern _native ScriptAny CineScript_Cars_LaunchGameDriven(ScriptAny unk)l
extern _native bool CineScript_Cars_RollDriversWindowDown(ScriptAny unk)l
extern _native bool CineScript_Cars_RollDriversWindowUp(ScriptAny unk)l
extern _native bool CineScript_Cars_PlayGestureRight(ScriptAny unk)l
extern _native bool CineScript_Cars_PlayGestureLeft(ScriptAny unk)l
extern _native bool CineScript_Cars_PlayGestureNeutral(ScriptAny unk)l
extern _native bool CineScript_Cars_GetCoordSysBinding(ScriptAny unk1, ScriptAny unk2)l
extern _native ScriptAny CineScript_Cars_GetCoordSysBindingFromRacer(ScriptAny unk1, ScriptAny unk2)l
extern _native void CineScript_Cars_AssignIdToSlot(ScriptAny unk1, ScriptAny unk2)l
extern _native ScriptAny CineScript_Cars_ReadSlotId(int slot)l
extern _native int CineScript_Cars_GenerateId(void)l
extern _native void CineScript_Events_LaunchEvent(ScriptAny unk1, float unk2, float unk3, float unk4)l
extern _native void CineScript_Events_LaunchEventOnRacerName(ScriptAny unk1, ScriptAny unk2, float unk3, float unk4, float unk5)l
extern _native void CineScript_Events_LaunchEventOnRacerSlot(ScriptAny unk1, ScriptAny unk2, float unk3, float unk4, float unk5)l
extern _native bool CineScript_Audio_PrepareStream(ScriptAny unk)l
extern _native bool CineScript_Audio_PrepareStreamSecondary(ScriptAny unk)l
extern _native bool CineScript_Audio_IsStreamPrepared(void)l
extern _native bool CineScript_Audio_PlayStream(void)l
extern _native bool CineScript_Audio_PlayStreamSecondary(void)l
extern _native void CineScript_Audio_StopStreamPrimary(void)l
extern _native void CineScript_Audio_StopStreamSecondary(void)l
extern _native void CineScript_SKIPPING_CUTSCENE(void)l
extern _native void CineScript_HiThere(void)l
extern _native bool CineScript_Special_GetPlayerCoordSysBinding(ScriptAny unk)l
extern _native bool CineScript_Special_GetPlayerCoordSysBindingBaked(ScriptAny unk)l
extern _native bool CineScript_Special_NoHangoutPeds(void)l
extern _native void CineScript_GetCoordSysBindingTEST(ScriptAny unk)l
extern _native void CineScript_SetCoordSysBindingTEST(ScriptAny unk)l
extern _native ScriptAny CineScript_Next(void)l
extern _native bool GetNoCutscenesCommandLine(void)l
#pragma endregion
#pragma region MC_CAREER
extern _native void mcCareer_RegisterHookmanCharacterSet(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native ScriptAny mcCareer_GetHookmanCharacterSet(char* unk)l
extern _native ScriptAny mcCareer_GetHookmanFlashId(ScriptAny unk)l
extern _native ScriptAny mcCareer_FindAvailableHookman(void)l
extern _native ScriptAny mcCareer_FindHookman(ScriptAny unk)l
extern _native ScriptAny mcCareer_GetHookman(short hookman)l
extern _native int mcCareer_StartNewScript(const char* script, int stackSize)l
extern _native int mcCareer_StartNewScript_SC(const char* script, int stackSize)l
extern _native bool GetNoCareerCommandLine(void)l
extern _native ScriptAny GetMissionCommandLine(ScriptAny unk)l
extern _native bool GetNoTutorialCommandLine(void)l
extern _native bool GetUnlockCareerCommandLine(void)l
extern _native bool mcCareer_ShouldAutoWin(void)l
extern _native void mcCareer_SendEvent(ScriptAny unk)l
extern _native int mcCareer_GetLocationId(ScriptAny unk)l
extern _native int mcCareer_GetDescriptionId(ScriptAny unk)l
extern _native void mcCareer_RegisterLocation(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native int mcCareer_GetNumPinkSlipProfiles(ScriptAny unk)l
extern _native ScriptAny mcCareer_GetPinkSlipProfile(ScriptAny unk1, ScriptAny unk2)l
extern _native ScriptAny mcCareer_AddPinkSlipProfile(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native ScriptAny mcCareer_LoadPinkSlipProfile(short unk1, const char* unk2, int unk3)l
extern _native void mcCareer_RemovePinkSlipProfile(ScriptAny unk1, ScriptAny unk2)l
extern _native ScriptAny mcCareer_GetPinkSlipProfileType(ScriptAny unk1, ScriptAny unk2)l
extern _native ScriptAny mcCareer_GetPinkSlipUID(ScriptAny unk1, ScriptAny unk2)l
extern _native ScriptAny mcCareer_GetPinkSlipProfileName(ScriptAny unk1, ScriptAny unk2)l
extern _native void mcCareer_TogglePinkslipHangoutDirty(short unk1, bool toggle)l
extern _native ScriptAny mcCareer_IsPinkslipHangoutDirty(ScriptAny unk)l
extern _native void mcCareer_SetAltHookmanVisibility(short hookman, bool visible)l
extern _native bool mcCareer_GetAltHookmanVisibility(ScriptAny hookman)l
extern _native void mcCareer_SetTournamentWinStatus(ScriptAny unk, bool win)l
extern _native void mcCareer_SetTimeTrialWinStatus(ScriptAny unk, bool win)l
extern _native int mcCareer_GetTimeTrialTargetTime(int index, ScriptAny unk)l
extern _native void mcCareer_SetTimeTrialTargetTime(int index, ScriptAny unk1, ScriptAny unk2, int time)l
extern _native void mcCareer_EvaluateCurrentTargetTime(int unk1, int unk2, int unk3)l
extern _native void mcCareer_UnlockAbilities(void)l
extern _native void mcCareer_UnlockRace(race race)l
extern _native void mcCareer_UnlockDistrictRaces(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native bool mcCareer_IsRaceUnlocked(race race)l
extern _native bool mcCareer_IsTimeTrialUnlocked(void)l
extern _native void mcCareer_UnlockTimeTrial(ScriptAny unk)l
extern _native bool mcCareer_IsPoliceUnlocked(void)l
extern _native void mcCareer_UnlockPolice(void)l
extern _native void mcCareer_AddRaceToHistory(race race)l
extern _native ScriptAny mcCareer_GetDifficultyPlayerVsRacer(ScriptAny unk)l
extern _native bool mcCareer_IsInGasStation(void)l
extern _native bool mcCareer_ActivateGasMenu(void)l
extern _native int mcCareer_GetGasStationIDX(void)l
extern _native void mcCareer_SetIsInGasStation(bool set)l
extern _native void mcCareer_RefillOneNitro(void)l
extern _native int mcCareer_GetCurrentHeapSize(void)l
#pragma endregion
#pragma region MC_MISSION_MANAGER
extern _native ScriptAny mcMissionManager_GetMission(const char* mission)l
extern _native void mcMissionManager_SetReminderCountdown(float time)l
extern _native bool mcMissionManager_DoesUIDHaveActiveMission(ScriptAny unk)l
extern _native int mcMissionManager_GetNumMissions(ScriptAny unk)l
#pragma endregion
#pragma region MC_MISSION
extern _native ScriptAny mcMission_GetState(ScriptAny mission)l
extern _native void mcMission_ChangeState(ScriptAny mission, int unk1, bool unk2)l
extern _native void mcMission_Ready(ScriptAny mission, bool ready)l
extern _native void mcMission_Start(ScriptAny mission, bool unk)l
extern _native void mcMission_Reset(ScriptAny mission)l
extern _native void mcMission_Hide(ScriptAny mission, bool hide)l
extern _native ScriptAny mcMission_GetPrerequisite(ScriptAny mission, int index)l
extern _native ScriptAny mcMission_GetObjective(ScriptAny mission, int index)l
extern _native ScriptAny mcMission_GetDistrict(ScriptAny mission)l
extern _native int mcMission_GetHookmanNameId(ScriptAny hookman)l
extern _native void mcMission_SetHookmanNameId(ScriptAny hookman, int id)l
extern _native int mcMission_GetId(ScriptAny mission)l
#pragma endregion
#pragma region MC_REQUIREMENT
extern _native void mcRequirement_Satisfy(ScriptAny requirement, bool satisfy)l
extern _native void mcRequirement_SetTarget(ScriptAny requirement, ScriptAny target)l
extern _native void mcRequirement_AlwaysHide(ScriptAny requirement, bool hide)l
extern _native bool mcRequirement_IsSatisfied(ScriptAny requirement)l
extern _native int mcRequirement_GetTargetId(ScriptAny requirement)l
extern _native void mcRequirement_Hide(ScriptAny requirement, bool hide)l
extern _native bool mcRequirement_IsHidden(ScriptAny requirement)l
#pragma endregion
#pragma region MC_HOOKMAN
extern _native ScriptAny mcHookman_SetMission(ScriptAny hookman, const char* mission)l
extern _native ScriptAny mcHookman_GetMission(ScriptAny hookman)l
extern _native void mcHookman_SetState(ScriptAny hookman, int state)l
extern _native ScriptAny mcHookman_GetState(ScriptAny hookman)l
extern _native bool mcHookman_IsHidden(ScriptAny hookman)l
extern _native void mcHookman_Hide(ScriptAny hookman, bool hide)l
extern _native void mcHookman_SetName(ScriptAny hookman, char* name)l
extern _native char* mcHookman_GetName(ScriptAny hookman)l
extern _native void mcHookman_SetType(ScriptAny hookman, ScriptAny type)l
extern _native ScriptAny mcHookman_GetType(ScriptAny hookman)l
extern _native void mcHookman_SetDifficulty(ScriptAny hookman, ScriptAny difficulty)l
extern _native ScriptAny mcHookman_GetDifficulty(ScriptAny hookman)l
extern _native void mcHookman_SetId(ScriptAny hookman, int id)l
extern _native int mcHookman_GetId(ScriptAny hookman)l
extern _native void mcHookman_SetCarConfigName(ScriptAny hookman, char* name)l
extern _native char* mcHookman_GetCarConfigName(ScriptAny hookman)l
extern _native void mcHookman_SetModValue(ScriptAny hookman, ScriptAny modvalue)l
extern _native ScriptAny mcHookman_GetModValue(ScriptAny hookman)l
extern _native char* mcHookman_GetCoreScriptName(ScriptAny hookman)l
extern _native void mcHookman_Reset(ScriptAny hookman)l
extern _native void mcHookman_SetDistrict(ScriptAny hookman, ScriptAny district)l
extern _native ScriptAny mcHookman_GetDistrict(ScriptAny hookman)l
#pragma endregion
#pragma region MC_TARGET_MANAGER
extern _native void mcTargetManager_RegisterPlayer(ScriptAny target, ScriptAny player)l
extern _native void mcTargetManager_RegisterRacer(ScriptAny target, racer racer)l
extern _native void mcTargetManager_RegisterLocation(ScriptAny target, vector3* location)l
extern _native void mcTargetManager_UnRegisterTarget(ScriptAny target)l
extern _native void mcTargetManager_HideTarget(ScriptAny target, bool hide)l
extern _native bool mcTargetManager_IsTargetHidden(ScriptAny target)l
extern _native void mcTargetManager_ToggleMapVisibiliy(ScriptAny target, bool visible)l
#pragma endregion
#pragma region MC_SLOT_SYSTEM
extern _native void mcSlotSystem_HideDistrict(int district, bool hide)l
extern _native void mcSlotSystem_UnlockDistrict(int disctrict, bool unlock)l
extern _native void mcSlotSystem_UnlockSlot(ScriptAny slot)l
extern _native void mcSlotSystem_ClearAllDistricts(void)l
extern _native bool mcSlotSystem_AreDistrictsClean(void)l
extern _native void mcSlotSystem_EvaluateAllDistricts(void)l
extern _native ScriptAny mcSlotSystem_RequestSlot(int unk1, const char* unk2, int unk3, int unk4, const char* unk5, int unk6, bool unk7, const char* unk8)l
extern _native void mcSlotSystem_RequestSlotRemoval(ScriptAny hookman, bool unk)l
extern _native ScriptAny mcSlotSystem_FindRandomAvailableCharacter(int unk)l
extern _native ScriptAny mcSlotSystem_FindCharacterConfigData(ScriptAny unk1, ScriptAny unk2)l
extern _native void mcSlotSystem_ToggleCharacterUsed(int unk1, ScriptAny unk2, bool toggle)l
extern _native bool mcSlotSystem_IsCharacterUsed(int unk1, ScriptAny unk2)l
extern _native bool mcSlotSystem_IsDistrictLocked(int district)l
#pragma endregion
#pragma region MC_EXPERIENCE_MANAGER
extern _native ScriptAny mcExperienceManager_LookupSystem(ScriptAny system)l
extern _native int mcExperienceManager_LookupSystemIndex(ScriptAny system)l
extern _native ScriptAny mcExperienceManager_LookupSystemByName(char* name)l
extern _native ScriptAny mcExperienceManager_LookupLabelSystemByName(char* name)l
extern _native int mcExperienceManager_GetMoney(void)l
extern _native float mcExperienceManager_CalculateRaceMoney(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native void mcExperienceManager_AddMoney(float money)l
extern _native void mcExperienceManager_SpendMoney(ScriptAny unk)l
extern _native bool mcExperienceManager_CanSpendMoney(ScriptAny unk)l
#pragma endregion
#pragma region MC_REWARD_MANAGER
extern _native ScriptAny mcRewardManager_BuildRewardExperience(ScriptAny unk1, ScriptAny unk2, bool unk3, bool unk4)l
extern _native ScriptAny mcRewardManager_BuildRewardPart(ScriptAny unk1, bool unk2, bool unk3)l
extern _native ScriptAny mcRewardManager_BuildRewardPartUnlock(ScriptAny unk1, bool unk2, bool unk3)l
extern _native ScriptAny mcRewardManager_BuildRewardPartLevel(ScriptAny unk1, bool unk2, bool unk3)l
extern _native ScriptAny mcRewardManager_BuildRewardCarA(ScriptAny unk1, bool unk2, bool unk3)l
extern _native ScriptAny mcRewardManager_BuildRewardCarB(ScriptAny unk1, ScriptAny unk2, bool unk3, bool unk4)l
extern _native ScriptAny mcRewardManager_BuildRewardMoney(ScriptAny unk1, bool unk2, bool unk3)l
extern _native ScriptAny mcRewardManager_BuildRewardAchievement(ScriptAny unk1, bool unk2, bool unk3)l
extern _native ScriptAny mcRewardManager_BuildRewardMission(ScriptAny unk1, ScriptAny unk2, bool unk3, bool unk4, bool unk5)l
extern _native ScriptAny mcRewardManager_BuildRewardScript(ScriptAny unk1, bool unk2, bool unk3)l
extern _native ScriptAny mcRewardManager_BuildRewardAbilityLevel(ScriptAny unk1, ScriptAny unk2, bool unk3, bool unk4)l
extern _native ScriptAny mcRewardManager_BuildRewardPerformanceevel(ScriptAny unk1, bool unk2, bool unk3)l
extern _native ScriptAny mcRewardManager_BuildRewardDynamicExperience(ScriptAny unk1, bool unk2, bool unk3)l
extern _native ScriptAny mcRewardManager_BuildRewardDynamicMoney(ScriptAny unk1, bool unk2, bool unk3)l
extern _native ScriptAny mcRewardManager_BuildRewardUserInterface(ScriptAny unk1, ScriptAny unk2, bool unk3, bool unk4)l
extern _native void mcRewardManager_DeleteReward(ScriptAny unk)l
extern _native void mcRewardManager_AddReward(void)l
#pragma endregion
#pragma region MATH
extern _native void Math_ScalarPrint(void)l
extern _native float Math_Cosine(float value)l
extern _native float Math_Sine(float value)l
extern _native float Math_Tangent(float value)l
extern _native float Math_ArcCosine(float value)l
extern _native float Math_ArcSine(float value)l
extern _native float Math_ArcTangent(float x, float y)l
extern _native void Math_VectorPrint(vector3* vector)l
extern _native void Math_VecRotateX(vector3* out, vector3* in, float rotate)l
extern _native void Math_VecRotateY(vector3* out, vector3* in, float rotate)l
extern _native void Math_VecRotateZ(vector3* out, vector3* in, float rotate)l
extern _native float Math_VecDot(vector3* v1, vector3* v2)l
#pragma endregion
#pragma region NET
extern _native bool Net_RaceRequested(race race)l
extern _native void Net_ClearRaceRequest(void)l
extern _native int Net_NumRacers(void)l
extern _native int Net_GetRacerGridIndex(ScriptAny racer)l
extern _native ScriptAny Net_GetRacerTeamColor(ScriptAny racer)l
extern _native int Net_GetHostDataAsInt(ScriptAny unk)l
extern _native bool Net_IsHostDataFieldValid(ScriptAny unk)l
extern _native void Net_ClearRaceResults(void)l
extern _native void Net_SetRaceFinishTime(race race, int time)l
extern _native bool Net_GetRaceFinishTime(race race, int* time)l
extern _native void Net_SetRacerTimeout(ScriptAny racer)l
extern _native void Net_SetRacerDisconnect(ScriptAny racer)l
extern _native void Net_SetRacerFinished(ScriptAny racer)l
extern _native void Net_SetRacerEliminated(ScriptAny racer)l
extern _native void Net_LockRacerList(void)l
extern _native void Net_UnlockRacerList(void)l
extern _native ScriptAny Net_GetRacerFromList(ScriptAny unk)l
extern _native bool Net_IsLocalPlayerInRace(void)l
extern _native void Net_StartSession(void)l
extern _native bool Net_IsSessionStarted(void)l
extern _native bool Net_IsRaceFinished(void)l
extern _native void Net_WriteStats(ScriptAny unk)l
extern _native bool Net_EveryoneDoneWritingStats(void)l
extern _native bool Net_IsPostRaceDone(void)l
extern _native void Net_PostRaceCleanup(void)l
extern _native void Net_EndSession(void)l
extern _native bool Net_IsPlayerActiveParticipant(ScriptAny player)l
extern _native bool Net_IsDeadGamer(ScriptAny gamer)l
extern _native void Net_EditorRaceCreateCheckpoints(ScriptAny unk)l
extern _native void Net_EditorPopulateGrid(ScriptAny unk1, ScriptAny unk2)l
extern _native int Net_GetLapCount(void)l
extern _native void Net_MovePlayerToLobby(ScriptAny player)l
extern _native void Net_MovePlayerToCar(ScriptAny player)l
extern _native int Net_GetParticipantCount(void)l
extern _native bool Net_IsArbiterLocal(void)l
extern _native bool Net_IsHost(void)l
extern _native void Net_SetRacerToEliminate(ScriptAny racer)l
extern _native ScriptAny Net_GetRacerToEliminate(void)l
extern _native void Net_SendRacerToEliminate(ScriptAny racer)l
extern _native ScriptAny Net_CreateOptions(void)l
extern _native void Net_SetEliminationTimer(int timer)l
extern _native int Net_GetEliminationTimer(void)l
extern _native void Net_SendEliminationTimer(ScriptAny unk)l
extern _native void Net_DestroyOptions(ScriptAny options)l
extern _native bool Net_IsNetworked(void)l
extern _native ScriptAny Net_GetJoinWishPad(void)l
extern _native float Net_GetSyncedTime(void)l
extern _native int Net_GetSyncedTimeInMs(void)l
extern _native bool Net_IsCruiseMode(void)l
extern _native bool Net_IsRankedMode(void)l
extern _native bool Net_IsPlayerDisconnected(ScriptAny player)l
extern _native bool Net_IsPlayerInvalid(ScriptAny player)l
extern _native bool Net_IsConnecting(void)l
extern _native ScriptAny Net_GetRaceLayout(void)l
extern _native void Net_ResetLocalPlayer(void)l
extern _native ScriptAny Net_GetAchievementSetupStatus(void)l
extern _native void Net_EnableSearchQos(void)l
#pragma endregion
#pragma region AMBIENT_MGR
extern _native void AmbientMgr_DisableTraffic(bool disable)l
extern _native bool AmbientMgr_GetTrafficEnable(void)l
extern _native void AmbientMgr_SetTrafficEnable(bool enable)l
extern _native bool AmbientMgr_GetPedsEnable(void)l
extern _native void AmbientMgr_SetPedsEnable(bool enable)l
extern _native bool AmbientMgr_GetHangoutMode(void)l
extern _native void AmbientMgr_SetHangoutMode(bool set)l
extern _native bool AmbientMgr_GetParkedCarsEnable(void)l
extern _native void AmbientMgr_SetParkedCarsEnable(bool enable)l
extern _native ScriptAny AmbientMgr_AddAmbientToLayout(ScriptAny ambient, vector3* unk2)l
extern _native ScriptAny AmbientMgr_AddRandomCarToLayout(ScriptAny car, vector3* unk2)l
extern _native ScriptAny AmbientMgr_AddRandomPedToLayout(vector3* unk)l
extern _native void AmbientMgr_RemoveAmbientFromLayout(ScriptAny ambient)l
extern _native void AmbientMgr_SetRoadDensity(vector3* unk1, ScriptAny unk2)l
extern _native void AmbientMgr_Reset(void)l
extern _native void AmbientMgr_FullReset(void)l
extern _native bool AmbientMgr_GetCutscene(void)l
extern _native void AmbientMgr_SetCutscene(bool set)l
extern _native bool AmbientMgr_GetFrontEnd(void)l
extern _native void AmbientMgr_SetFrontEnd(bool set, float unk1, float unk2, float unk3, float unk4, ScriptAny unk5)l
#pragma endregion
#pragma region VHSM_STATE
extern _native void vhsmState_EmptyDynamicList(ScriptAny unk)l
extern _native ScriptAny vhsmState_EnableDynamicChild(ScriptAny unk)l
extern _native ScriptAny vhsmState_GetChild(ScriptAny unk1, ScriptAny unk2)l
extern _native void vhsmState_SetText(ScriptAny unk, char* text)l
extern _native void vhsmState_SetDataString(ScriptAny unk1, char* string)l
extern _native void vhsmState_SetDataInt(ScriptAny unk1, int data)l
extern _native int vhsmState_GetDataInt(ScriptAny unk)l
extern _native void vhsmState_Enable(ScriptAny unk)l
extern _native void vhsmState_Disable(ScriptAny unk)l
extern _native void vhsmState_Activate(ScriptAny unk)l
extern _native bool vhsmState_IsListener(ScriptAny unk)l
extern _native bool vhsmState_IsActive(ScriptAny state)l
#pragma endregion
#pragma region TRIGGER_MANAGER
extern _native ScriptAny TriggerManager_CreateTriggerArray(ScriptAny unk)l
extern _native void TriggerManager_DestroyTriggerArray(ScriptAny triggerArray)l
extern _native void TriggerManager_ResetTriggers(void)l
extern _native void TriggerManager_RacerLapChanged(ScriptAny unk1, ScriptAny unk2)l
#pragma endregion
#pragma region TRIGGER
extern _native ScriptAny TriggerArray_AddTriggerLine(ScriptAny triggerLine)l
extern _native ScriptAny TriggerArray_AddTriggerRadius(ScriptAny triggerRadius)l
extern _native ScriptAny TriggerArray_AddTriggerTimer(ScriptAny triggerTimer)l
extern _native ScriptAny TriggerArray_AddTriggerSpeed(ScriptAny triggerSpeed)l
extern _native ScriptAny Trigger_AddEventAmbient(ScriptAny eventAmbient)l
extern _native ScriptAny Trigger_AddEventNitro(ScriptAny eventNitro)l
extern _native ScriptAny Trigger_AddEventRoadDensity(ScriptAny eventRoadDensity)l
extern _native ScriptAny Trigger_AddEventSound(ScriptAny eventSound)l
extern _native ScriptAny Trigger_AddEvent(ScriptAny unk1, ScriptAny unk2)l
extern _native ScriptAny Trigger_SetValueInt(ScriptAny unk1, ScriptAny unk2, int value)l
extern _native void Trigger_SetValueFloat(ScriptAny unk1, ScriptAny unk2, float value)l
extern _native void Trigger_SetValueBool(ScriptAny unk1, ScriptAny unk2, bool value)l
extern _native void Trigger_SetValueVector(ScriptAny unk1, ScriptAny unk2, vector3* value)l
extern _native bool Trigger_CheckTrigger(ScriptAny unk1, ScriptAny unk2)l
extern _native void TriggerEvent_SetValueInt(ScriptAny unk1, ScriptAny unk2, int value)l
extern _native void TriggerEvent_SetValueFloat(ScriptAny unk1, ScriptAny unk2, float value)l
extern _native void TriggerEvent_SetValueBool(ScriptAny unk1, ScriptAny unk2, bool value)l
extern _native void TriggerEvent_SetValueVector(ScriptAny unk1, ScriptAny unk2, vector3* value)l
extern _native void TriggerEvent_SetValueString(ScriptAny unk1, ScriptAny unk2, char* value)l
#pragma endregion
#pragma region PICKUP_MANAGER
extern _native ScriptAny PickUpManager_CreatePowerUpSourcesFromCheckPoints(ScriptAny unk1, bool unk2)l
extern _native ScriptAny PickUpManager_CreatePowerUpSources(ScriptAny unk)l
extern _native void PickUpManager_AddPowerUpSource(ScriptAny powerup, vector3* unk2, float unk3, vector3* unk4)l
extern _native void PickUpManager_DeletePowerUpSources(ScriptAny powerup)l
extern _native void PickUpManager_PowerUpSourcePostInit(ScriptAny unk)l
extern _native void PickUpManager_OnRaceReset(void)l
#pragma endregion
#pragma region MC_CAR_ARRAY
extern _native void mcCarArrayData_EvaluateModValue(ScriptAny array, ScriptAny unk2, ScriptAny unk3)l
extern _native ScriptAny mcCarArrayData_GetModValue(ScriptAny array)l
extern _native char* mcCarArrayData_GetName(ScriptAny array)l
extern _native ScriptAny mcCarArray_Create(void)l
extern _native void mcCarArray_Destroy(ScriptAny array)l
extern _native int mcCarArray_GetCount(ScriptAny array)l
extern _native ScriptAny mcCarArray_Fill(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4, ScriptAny unk5, ScriptAny unk6)l
extern _native ScriptAny mcCarArray_GetCarArrayData(ScriptAny array, int index)l
extern _native ScriptAny mcCarArray_GetRandomCarArrayData(ScriptAny array)l
#pragma endregion
#pragma region MC_CONFIG
extern _native ScriptAny mcCharacterConfigData_GetCarConfigData(ScriptAny unk1, ScriptAny unk2, int unk3, short unk4, bool unk5)l
extern _native ScriptAny mcCharacterConfigData_GetCarConfigDataByVehicleName(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4, ScriptAny unk5, bool unk6)l
extern _native char* mcCharacterConfigData_GetName(ScriptAny data)l
extern _native char* mcConfigData_GetName(ScriptAny data)l
extern _native ScriptAny mcCarConfigData_GetRandomConfigData(ScriptAny unk)l
extern _native ScriptAny mcCarConfigData_GetModValue(ScriptAny data)l
extern _native ScriptAny mcCarConfig_Create(ScriptAny unk)l
extern _native ScriptAny mcCarConfig_Destroy(ScriptAny config)l
extern _native bool mcCarConfig_Load(ScriptAny unk1, ScriptAny unk2)l
extern _native void mcCarConfig_Copy(ScriptAny unk1, ScriptAny unk2)l
extern _native char* mcCarConfig_GetVehicleTypeName(ScriptAny unk)l
extern _native char* mcCarConfig_GetVehicleProfileName(ScriptAny unk)l
#pragma endregion
#pragma region CTF
extern _native ScriptAny Ctf_Create(ScriptAny unk)l
extern _native void Ctf_Destroy(ScriptAny ctf)l
extern _native void Ctf_Reset(ScriptAny ctf)l
extern _native ScriptAny Ctf_GetCurrentCtf(void)l
extern _native void Ctf_SetCurrentCtf(ScriptAny ctf)l
extern _native ScriptAny Ctf_GetMap(ScriptAny ctf)l
extern _native race Ctf_GetRace(ScriptAny ctf)l
extern _native ScriptAny Ctf_ActivateDrop(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native void Ctf_ActivateDropInRange(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native void Ctf_AttemptPickupFlag(ScriptAny unk1, ScriptAny unk2)l
extern _native void Ctf_AttemptResetFlagToSpawnPosition(ScriptAny unk1, ScriptAny unk2)l
extern _native void Ctf_AttemptReturnFlags(ScriptAny unk1, ScriptAny unk2)l
extern _native void Ctf_DeactivateDrop(ScriptAny unk1, ScriptAny unk2)l
extern _native ScriptAny Ctf_GetDropColor(ScriptAny unk1, ScriptAny unk2)l
extern _native void Ctf_GetDropPosition(ScriptAny unk1, ScriptAny unk2, vector3* position)l
extern _native ScriptAny Ctf_GetFlagColor(ScriptAny flag, int index)l
extern _native int Ctf_GetFlagDroppedElapsedTimeMs(ScriptAny flag, int index)l
extern _native void Ctf_GetFlagPosition(ScriptAny flag, int index, vector3* position)l
extern _native ScriptAny Ctf_GetFlagHolder(ScriptAny flag, int index)l
extern _native int Ctf_GetMaxActiveFlags(void)l
extern _native int Ctf_GetMaxActiveDrops(void)l
extern _native int Ctf_GetNearestActiveDropIndex(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native int Ctf_GetNearestActiveFlagIndex(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native int Ctf_GetRacerHeldFlagIndex(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native bool Ctf_HasHitDrop(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native bool Ctf_HasHitFlag(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native bool Ctf_IsDropActive(ScriptAny drop, int index)l
extern _native bool Ctf_IsFlagActive(ScriptAny flag, int index)l
extern _native bool Ctf_IsFlagAtHomePosition(ScriptAny flag, int index)l
extern _native int Ctf_GetFlagHomeBaseDropIndex(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native ScriptAny Ctf_SpawnFlag(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4, ScriptAny unk5)l
extern _native ScriptAny Ctf_SpawnFlagInRange(ScriptAny unk1, ScriptAny unk2, vector3* unk3, float unk4, float unk5, ScriptAny unk6, ScriptAny unk7, ScriptAny unk8)l
extern _native ScriptAny Ctf_GetTeamScore(ScriptAny unk1, ScriptAny unk2)l
extern _native void Ctf_SetFlagHeldTime(ScriptAny unk)l
extern _native int Ctf_GetFlagHeldTime(ScriptAny unk)l
extern _native void Ctf_AddFlagHeldTime(ScriptAny unk)l
extern _native void Ctf_SetFlagPickUpTime(ScriptAny unk)l
extern _native int Ctf_GetFlagPickUpTime(ScriptAny unk)l
extern _native ScriptAny Ctf_GetDropIcon(ScriptAny unk, int index)l
extern _native ScriptAny Ctf_GetFlagIcon(ScriptAny unk, int index)l
extern _native void Ctf_ClearEvents(ScriptAny unk)l
extern _native bool Ctf_PopEvent(ScriptAny unk1, ScriptAny unk2)l
#pragma endregion
#pragma region CTF_MAP
extern _native void CtfMap_Init(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native void CtfMap_AddItemSpawn(ScriptAny unk1, vector3* unk2, ScriptAny unk3)l
extern _native void CtfMap_AddItemDrop(ScriptAny unk1, vector3* unk2, ScriptAny unk3)l
extern _native void CtfMap_AddItem(ScriptAny unk1, ScriptAny unk2, vector3* unk3, ScriptAny unk4)l
extern _native void CtfMap_ComputeBaseLocations(ScriptAny unk)l
extern _native void CtfMap_GetFlagSpawnPosition(ScriptAny unk1, int index, vector3* unk2)l
extern _native void CtfMap_GetFlagDropPosition(ScriptAny unk1, int index, vector3* unk2)l
#pragma endregion
#pragma region MOVIE_PLAYER
extern _native ScriptAny MoviePlayer_StartMovie(ScriptAny movie)l
extern _native void MoviePlayer_StopMovie(void)l
extern _native bool MoviePlayer_IsMoviePlaying(void)l
extern _native void MoviePlayer_SetTintColor(FloatRGBA color)l
#pragma endregion
#pragma region RN_ROAD_AMBIENT
extern _native void RnRoadAmbient_SetGlobalRoadDensity(ScriptAny density)l
extern _native ScriptAny RnRoadAmbient_GetGlobalRoadDensity(void)l
#pragma endregion
#pragma region RN_INTERSECTION_AMBIENT
extern _native bool RnIntersectionAmbient_GetRedLightRace(void)l
extern _native void RnIntersectionAmbient_SetRedLightRace(bool set)l
extern _native void RnIntersectionAmbient_SetIntersectionRed(vector3* unk)l
extern _native void RnIntersectionAmbient_SetIntersectionGreen(vector3* unk1, vector3* unk2)l
#pragma endregion
#pragma region EVENT_OPTIONS
extern _native void EventOptions_DestroyOptions(ScriptAny options)l
extern _native bool EventOptions_IsNitro(ScriptAny options)l
extern _native bool EventOptions_IsIce(ScriptAny options)l
extern _native bool EventOptions_IsReverse(ScriptAny options)l
extern _native bool EventOptions_IsStealth(ScriptAny options)l
extern _native bool EventOptions_IsDisrupter(ScriptAny options)l
extern _native bool EventOptions_IsShield(ScriptAny options)l
extern _native bool EventOptions_IsStop(ScriptAny options)l
extern _native bool EventOptions_IsPulse(ScriptAny options)l
extern _native bool EventOptions_IsMirror(ScriptAny options)l
extern _native bool EventOptions_IsAgro(ScriptAny options)l
extern _native int EventOptions_GetFlagLimit(ScriptAny options)l
extern _native int EventOptions_GetTimeLimit(ScriptAny options)l
extern _native bool EventOptions_IsHeavyFlag(ScriptAny options)l
extern _native bool EventOptions_IsFlagTransfer(ScriptAny options)l
extern _native bool EventOptions_IsLastManOut(ScriptAny options)l
extern _native bool EventOptions_IsPowerUps(ScriptAny options)l
extern _native ScriptAny EventOptions_GetTrafficLevel(ScriptAny options)l
#pragma endregion
extern _native void mcRaceScriptParam_Clear(ScriptAny unk)l
extern _native ScriptAny mcRaceScriptData_GetRandomOpponent(ScriptAny unk)l
#pragma region STATS_MANAGER
extern _native int StatsManager_GetIntValue(const char* stat, int unk2)l
extern _native float StatsManager_GetFloatValue(ScriptAny unk1, ScriptAny unk2)l
extern _native bool StatsManager_IsStatPresent(ScriptAny unk1, ScriptAny unk2)l
extern _native void StatsManager_UpdateStatInt(const char* stat, int unk2, int unk3, int value)l
extern _native void StatsManager_UpdateStatFloat(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, float value)l
extern _native void StatsManager_SetUpdateFrequency(float unk1, bool unk2)l
#pragma endregion
#pragma region MC_CAREER_SPEECH
extern _native bool mcCareerSpeech_PlayScenario(ScriptAny unk1, char* unk2, const char* unk3)l
extern _native ScriptAny mcCareerSpeech_PlayNamedScenario(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native ScriptAny mcCareerSpeech_PlayRacerScenario(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native bool mcCareerSpeech_IsScenarioPlaying(ScriptAny unk)l
extern _native void mcCareerSpeech_Stop(void)l
extern _native ScriptAny mcCareerSpeech_PrepareScenario(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native ScriptAny mcCareerSpeech_PrepareRacerScenario(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native ScriptAny mcCareerSpeech_EnqueueNamedScenario(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3)l
extern _native bool mcCareerSpeech_IsScenarioPrepared(ScriptAny unk)l
extern _native void mcCareerSpeech_PlayPreparedScenario(void)l
extern _native ScriptAny mcCareerSpeech_FindScenario(const char* speech)l
extern _native void mcCareerSpeech_SetEmitters(ScriptAny unk1, ScriptAny unk2)l
extern _native ScriptAny mcCareerSpeech_PlayTauntInRace(ScriptAny unk1, ScriptAny unk2, ScriptAny unk3, ScriptAny unk4)l
extern _native ScriptAny mcCareerSpeech_PlayTauntpostRace(ScriptAny unk1, ScriptAny unk2, bool unk3)l
#pragma endregion
#pragma region MC_MUSIC_MANAGER
extern _native void mcMusicManager_Play(ScriptAny unk)l
extern _native void mcMusicManager_PlaySilently(void)l
extern _native void mcMusicManager_Stop(void)l
extern _native void mcMusicManager_Pause(void)l
extern _native void mcMusicManager_Next(void)l
extern _native void mcMusicManager_Prev(void)l
extern _native void mcMusicManager_SetStartOffset(ScriptAny offset)l
extern _native void mcMusicManager_SuspendUserState(ScriptAny unk)l
extern _native void mcMusicManager_ResumeUserState(void)l
extern _native void mcMusicManager_GotoAllGenreSong(ScriptAny unk)l
extern _native void mcMusicManager_PlayCustomMusic(ScriptAny unk)l
extern _native void mcMusicManager_StopCustomMusic(void)l
extern _native void mcMusicManager_SetAllowBackgroundPlay(bool allow)l
extern _native void mcMusicManager_TriggerDynmixerSuspend(bool suspend)l
#pragma endregion
extern _native bool mcCtrl_IsVisible(ScriptAny ctrl)l
#pragma region SPEECH_SYSTEM
extern _native bool SpeechSystem_IsInUse(void)l
extern _native bool SpeechSystem_IsPlaying(void)l
extern _native void SpeechSystem_StopEverything(void)l
#pragma endregion
#pragma region WEATHER
extern _native void Weather_SetCurrentWeather(ScriptAny unk1, bool unk2)l
extern _native ScriptAny Weather_GetCurrentWeather(void)l
extern _native bool Weather_GetAndSetAutoWeatherChange(bool set)l
#pragma endregion
#pragma region POST_PROCESSING
extern _native void PostProcessing_SetCutsceneDofNear(float near)l
extern _native void PostProcessing_SetCutsceneDofFar(float far)l
extern _native void PostProcessing_SetCutsceneDof(void)l
extern _native void PostProcessing_SetGarageDof(void)l
extern _native void PostProcessing_SetGameDof(void)l
extern _native void PostProcessing_SetDofTransitionTime(float time)l
extern _native void PostProcessing_SetFogNearFar(float unk1, float unk2)l
extern _native float PostProcessing_GetFogNear(void)l
extern _native float PostProcessing_GetFogFar(void)l
#pragma endregion
#pragma region MC_PLAYER_AUDIO_ENTITY
extern _native void mcPlayerAudioEntity_PlayEndRaceSpeechWin(void)l
extern _native void mcPlayerAudioEntity_PlayEndRaceSpeechLose(void)l
extern _native void mcPlayerAudioEntity_PlayEndRaceSpeechClose(void)l
#pragma endregion
extern _native void LightingManager_EnableCutsceneLighting(bool enable)l
extern _native void DYNAMICMIXER_TriggerState(ScriptAny unk)l
extern _native void DYNAMICMIXER_DeTriggerState(ScriptAny unk)l
