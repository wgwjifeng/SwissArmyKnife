#pragma once

duint DbgGetCurrentModule();
bool OpenSelectionDialog(const char *Title, const char *Filter, bool Save, bool(*Callback)(char *, duint));
void StringReplace(std::string& Subject, const std::string& Search, const std::string& Replace);