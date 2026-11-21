/* FUN_1801bbc00 @ 1801bbc00 */

undefined8 *
FUN_1801bbc00(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
             ulonglong param_5,undefined8 *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  BOOL BVar4;
  HANDLE hProcess;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  LPFILETIME lpCreationTime;
  ulonglong uVar8;
  longlong lVar9;
  _FILETIME _Var10;
  _FILETIME local_78;
  HANDLE local_70;
  _FILETIME local_68;
  undefined8 local_60;
  longlong lStack_58;
  HANDLE local_50;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    lVar9 = 0;
    uVar6 = 0;
    puVar5 = (undefined8 *)0x0;
  }
  else {
    uVar7 = 0;
    hProcess = OpenProcess(0x410,0,(DWORD)param_2);
    if (0xfffffffffffffffd < (longlong)hProcess - 1U) {
      lStack_58 = FUN_1801c9650();
      local_50 = (HANDLE)CONCAT44(local_50._4_4_,uVar7);
      local_60 = 1;
      if (lStack_58 != 0) {
        FUN_180111960(&lStack_58);
      }
      uVar7 = 0;
      hProcess = OpenProcess(0x1000,0,(DWORD)param_2);
      if (0xfffffffffffffffd < (longlong)hProcess - 1U) {
        lStack_58 = FUN_1801c9650();
        local_50 = (HANDLE)CONCAT44(local_50._4_4_,uVar7);
        local_60 = 1;
        if (lStack_58 != 0) {
          FUN_180111960();
        }
        lVar9 = 0;
        uVar6 = 0;
        puVar5 = (undefined8 *)0x0;
        goto LAB_1801bbda6;
      }
    }
    local_68.dwLowDateTime = 0;
    local_68.dwHighDateTime = 0;
    local_78.dwLowDateTime = 0;
    local_78.dwHighDateTime = 0;
    lpCreationTime = &local_68;
    local_70 = hProcess;
    BVar4 = GetProcessTimes(hProcess,lpCreationTime,&local_78,&local_78,&local_78);
    uVar7 = SUB84(lpCreationTime,0);
    if (BVar4 == 0) {
      local_41 = 1;
      lStack_58 = FUN_1801c9650();
      _Var10 = local_68;
      local_50 = (HANDLE)CONCAT44(local_50._4_4_,uVar7);
      local_60 = 1;
      if (lStack_58 != 0) {
        local_41 = 1;
        FUN_180111960(&lStack_58);
      }
    }
    else {
      _Var10 = local_68;
    }
    local_60 = 1;
    lStack_58 = 1;
    local_50 = hProcess;
    FUN_180027490();
    puVar5 = (undefined8 *)thunk_FUN_1801d32d0(0x18,8);
    if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x18);
    }
    uVar6 = (ulonglong)_Var10 / 10000000 - 0x2b6109100;
    uVar8 = 0;
    if (uVar6 <= param_5) {
      uVar8 = uVar6;
    }
    lVar9 = param_5 - uVar8;
    puVar5[2] = local_50;
    *puVar5 = local_60;
    puVar5[1] = lStack_58;
  }
LAB_1801bbda6:
  uVar1 = *param_6;
  uVar2 = param_6[1];
  uVar3 = param_6[3];
  param_1[4] = param_6[2];
  param_1[5] = uVar3;
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  param_1[6] = 0;
  param_1[7] = 8;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0x8000000000000000;
  param_1[0x1c] = param_2;
  param_1[0x10] = 0x8000000000000000;
  param_1[10] = 8;
  param_1[0xb] = 0;
  param_1[0x13] = 0x8000000000000000;
  param_1[0x17] = 0x8000000000000000;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *param_1 = param_3;
  param_1[1] = param_4;
  *(undefined4 *)(param_1 + 0x1b) = 1;
  param_1[0x1f] = puVar5;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x24] = uVar6;
  param_1[0x25] = lVar9;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x154) = 1;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  return param_1;
}


