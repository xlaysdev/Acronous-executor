/* FUN_18010d290 @ 18010d290 */

undefined8 *
FUN_18010d290(undefined8 *param_1,undefined8 *param_2,longlong param_3,longlong param_4)

{
  undefined8 *puVar1;
  HKEY hKey;
  uint uVar2;
  uint uVar3;
  HKEY local_68;
  longlong local_60;
  longlong local_58;
  undefined2 local_50;
  undefined4 local_48;
  longlong local_40;
  LPCWSTR local_38;
  
  local_68 = (HKEY)0x0;
  puVar1 = (undefined8 *)param_2[1];
  local_58 = param_4 + param_3;
  hKey = *(HKEY *)*param_2;
  local_60 = param_3;
  if (puVar1 == (undefined8 *)0x0) {
    if (*(char *)(param_2 + 3) == '\0') {
      local_50 = 0;
      local_48 = 1;
      FUN_1801020a0(&local_40,&local_60);
      uVar2 = RegOpenKeyExW(hKey,local_38,0,*(REGSAM *)(param_2 + 2),&local_68);
    }
    else {
      local_50 = 0;
      local_48 = 1;
      FUN_1801020a0(&local_40,&local_60);
      uVar2 = RegCreateKeyExW(hKey,local_38,0,(LPWSTR)0x0,*(DWORD *)((longlong)param_2 + 0x14),
                              *(REGSAM *)(param_2 + 2),(LPSECURITY_ATTRIBUTES)0x0,&local_68,
                              (LPDWORD)0x0);
    }
  }
  else if (*(char *)(param_2 + 3) == '\0') {
    local_50 = 0;
    local_48 = 1;
    FUN_1801020a0(&local_40,&local_60);
    uVar2 = RegOpenKeyTransactedW
                      (hKey,local_38,0,*(REGSAM *)(param_2 + 2),&local_68,(HANDLE)*puVar1,(PVOID)0x0
                      );
  }
  else {
    local_50 = 0;
    local_48 = 1;
    FUN_1801020a0(&local_40,&local_60);
    uVar2 = RegCreateKeyTransactedW
                      (hKey,local_38,0,(LPWSTR)0x0,*(DWORD *)((longlong)param_2 + 0x14),
                       *(REGSAM *)(param_2 + 2),(LPSECURITY_ATTRIBUTES)0x0,&local_68,(LPDWORD)0x0,
                       (HANDLE)*puVar1,(PVOID)0x0);
  }
  if (local_40 != 0) {
    thunk_FUN_1801d3330(local_38,local_40 * 2,2);
  }
  if (uVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = uVar2 & 0xffff | 0x80070000;
    if ((int)uVar2 < 1) {
      uVar3 = uVar2;
    }
    local_68 = (HKEY)0x0;
  }
  *param_1 = local_68;
  *(uint *)(param_1 + 1) = uVar3;
  return param_1;
}


