/* FUN_180029230 @ 180029230 */

undefined8 * FUN_180029230(undefined8 *param_1,longlong param_2,uint param_3)

{
  DWORD DVar1;
  HMODULE pHVar2;
  undefined4 uVar3;
  HMODULE pHVar4;
  undefined8 uVar5;
  undefined8 local_a0 [4];
  longlong local_80;
  longlong local_78;
  undefined2 local_70;
  undefined4 local_68;
  longlong local_60;
  LPCWSTR local_58;
  int local_44;
  undefined4 local_40;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  pHVar4 = (HMODULE)(ulonglong)param_3;
  local_80 = *(longlong *)(param_2 + 8);
  local_78 = *(longlong *)(param_2 + 0x10) + local_80;
  local_70 = 0;
  local_68 = 1;
  uVar3 = SUB84(&local_80,0);
  FUN_18002f4e0(&local_60);
  local_39 = 1;
  local_44 = FUN_1801b4440();
  local_40 = uVar3;
  pHVar2 = LoadLibraryExW(local_58,(HANDLE)0x0,param_3);
  if (pHVar2 == (HMODULE)0x0) {
    DVar1 = GetLastError();
    uVar5 = 0x8000000000000007;
    local_a0[0] = 0x8000000000000007;
    if (DVar1 != 0) {
      FUN_180029630(local_a0);
      uVar5 = 0x8000000000000006;
      pHVar4 = (HMODULE)((ulonglong)DVar1 << 0x20 | 2);
    }
  }
  else {
    uVar5 = 0x8000000000000011;
    pHVar4 = pHVar2;
  }
  if (local_60 != 0) {
    thunk_FUN_1801d3330(local_58,local_60 * 2,2);
  }
  *param_1 = uVar5;
  param_1[1] = pHVar4;
  if (local_44 != 0) {
    local_39 = 0;
    FUN_1801b48d0(&local_40);
  }
  return param_1;
}


