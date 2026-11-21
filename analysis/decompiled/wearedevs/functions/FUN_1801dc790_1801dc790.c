/* FUN_1801dc790 @ 1801dc790 */

undefined8 FUN_1801dc790(DWORD param_1,byte *param_2,ulonglong param_3,byte *param_4)

{
  byte bVar1;
  BOOL BVar2;
  UINT UVar3;
  HANDLE hConsoleHandle;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_90 [8];
  ulonglong local_88;
  HANDLE local_80;
  undefined1 local_78 [8];
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (param_3 == 0) {
    return 0;
  }
  hConsoleHandle = GetStdHandle(param_1);
  if (hConsoleHandle == (HANDLE)0x0) {
    return 1;
  }
  if (hConsoleHandle == (HANDLE)0xffffffffffffffff) {
    GetLastError();
    return 1;
  }
  local_48 = (HANDLE)((ulonglong)local_48._4_4_ << 0x20);
  BVar2 = GetConsoleMode(hConsoleHandle,(LPDWORD)&local_48);
  if ((BVar2 == 0) || (UVar3 = GetConsoleOutputCP(), UVar3 == 0xfde9)) {
    local_80 = hConsoleHandle;
    local_48 = hConsoleHandle;
    uVar4 = FUN_1801db350(&local_48,param_2,param_3,0);
    return uVar4;
  }
  bVar1 = param_4[4];
  if ((ulonglong)bVar1 == 0) {
    uVar7 = 0x1000;
    if (param_3 < 0x1000) {
      uVar7 = param_3;
    }
    FUN_1801f2ab0(&local_60,param_2,uVar7);
    if ((int)local_60 == 1) {
      if (local_58 == 0) {
        if (param_3 < (byte)(&DAT_18028fc78)[*param_2]) {
          *param_4 = *param_2;
          param_4[4] = 1;
          return 0;
        }
        return 1;
      }
      if (param_3 < local_58) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(0,local_58,param_3,&PTR_s_library_std_src_sys_stdio_window_18028fc60);
      }
      FUN_1801f2ab0(&local_48,param_2);
      if ((DWORD)local_48 == 1) {
        uStack_70 = uStack_38;
        uStack_6c = uStack_34;
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,local_78,&DAT_180290bc8,
                      &PTR_s_library_std_src_sys_stdio_window_18028fc48);
      }
      local_58 = CONCAT44(uStack_3c,local_40);
      local_50 = CONCAT44(uStack_34,uStack_38);
    }
    uVar4 = FUN_1801dc540(hConsoleHandle,local_58,local_50);
    return uVar4;
  }
  if (3 < bVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("Unexpected number of bytes for incomplete UTF-8 codepoint.",0x75,
                  &PTR_s_library_std_src_sys_stdio_window_18028fe20);
  }
  if (-0x41 < (char)*param_2) {
    param_4[4] = 0;
    return 1;
  }
  param_4[bVar1] = *param_2;
  bVar1 = param_4[4] + 1;
  param_4[4] = bVar1;
  uVar7 = (ulonglong)(byte)(&DAT_18028fc78)[*param_4];
  if ((byte)(&DAT_18028fc78)[*param_4] <= bVar1) {
    local_88 = uVar7;
    if (4 < bVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,bVar1,4,&PTR_s_library_std_src_sys_stdio_window_18028fe68);
    }
    FUN_1801f2ab0(&local_48);
    param_4[4] = 0;
    if ((char)local_48 != '\0') {
      return 1;
    }
    uVar6 = CONCAT44(uStack_3c,local_40);
    if (CONCAT44(uStack_34,uStack_38) != uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_180201c9f(0,&local_88,local_90,0);
    }
    uVar5 = FUN_1801dc540(hConsoleHandle,uVar6,uVar7);
    if ((uVar5 & 1) != 0) {
      return 1;
    }
    if (uVar7 != uVar6) {
      local_60 = uVar7;
                    /* WARNING: Subroutine does not return */
      FUN_180201c9f(0,local_78,&local_60,0);
    }
  }
  return 0;
}


