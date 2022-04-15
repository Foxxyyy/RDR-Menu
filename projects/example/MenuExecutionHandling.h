#pragma once

#include "MenuUiHandling.h"

void InitMenuExecution();
void LoopedExecutionEntry();
void ExecutionEntry(void* param);
bool WasLastmenuDirectionForward();
int GetMenuSlotId();
void SetHeader(const char* HeaderText);
void AddItem(const char* ItemText, void(*Callback)(void*), void(*AlternateExecute)(void*));
void AddItemInt(const char* ItemText, bool ExecuteOnChange, int MinValue, int MaxValue, int* StartIndex, int incAmount, void(*Callback)(void*), void(*AlternateExecute)(void*));
void AddItemChar(const char* ItemText, bool ExecuteOnChange, char** strings, int ArraySize, int* StartIndex, void(*Callback)(void*), void(*AlternateExecute)(void*));
void AddItemFloat(const char* ItemText, bool ExecuteOnChange, float MinValue, float MaxValue, float* StartIndex, float incAmount, float Precision, void(*Callback)(void*), void(*AlternateExecute)(void*));
void AddItemBool(const char* ItemText, int* StartIndex, byte Bit, void(*Callback)(void*), void(*AlternateExecute)(void*));
void AddItemMenu(const char* ItemText, void(*Callback)(void*), void(*AlternateExecute)(void*));
void AddItemWithParamAlt(const char* ItemText, int Param, void(*Callback)(void*), void(*AlternateExecute)(void*));
void AddItemPlayer(int PlayerId, void(*Callback)(void*));