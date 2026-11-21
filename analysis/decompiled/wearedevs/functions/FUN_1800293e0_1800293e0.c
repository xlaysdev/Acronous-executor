/* FUN_1800293e0 @ 1800293e0 */

longlong *
FUN_1800293e0(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  DWORD DVar1;
  FARPROC pFVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_78;
  longlong local_70;
  LPCSTR local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  LPCSTR local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_1801b4480(&local_78,param_3,param_4);
  if (local_78 == -0x7fffffffffffffef) {
    pFVar2 = GetProcAddress((HMODULE)*param_2,local_68);
    if (pFVar2 == (FARPROC)0x0) {
      DVar1 = GetLastError();
      uVar4 = (ulonglong)DVar1;
      lVar3 = -0x7ffffffffffffff5;
      local_78 = -0x7ffffffffffffff5;
      if (DVar1 != 0) {
        local_58 = local_70;
        local_48 = local_68;
        local_50 = local_60;
        FUN_180029630(&local_78);
        uVar4 = uVar4 << 0x20 | 2;
        lVar3 = -0x7ffffffffffffff6;
        local_70 = local_58;
        local_60 = local_50;
        local_68 = local_48;
      }
      *param_1 = lVar3;
      param_1[1] = uVar4;
    }
    else {
      param_1[1] = (longlong)pFVar2;
      *param_1 = -0x7fffffffffffffef;
    }
    if ((local_70 != 0) && (*local_68 = '\0', local_60 != 0)) {
      thunk_FUN_1801d3330(local_68,local_60,1);
    }
  }
  else {
    *param_1 = local_78;
    param_1[1] = local_70;
    param_1[2] = (longlong)local_68;
    param_1[3] = local_60;
  }
  return param_1;
}


