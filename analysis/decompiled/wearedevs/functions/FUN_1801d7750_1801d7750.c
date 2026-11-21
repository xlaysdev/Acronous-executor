/* FUN_1801d7750 @ 1801d7750 */

undefined8 * FUN_1801d7750(undefined8 *param_1)

{
  undefined8 *puVar1;
  DWORD DVar2;
  DWORD DVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  WCHAR *lpBuffer;
  WCHAR local_4a0 [512];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong local_80;
  LPWSTR local_78;
  ulonglong local_70;
  undefined8 *local_68;
  ulonglong local_60;
  LPWSTR local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = 0;
  local_58 = (LPWSTR)0x2;
  local_50 = 0;
  uVar6 = 0x200;
  local_78 = (LPWSTR)0x2;
  local_70 = 0;
  uVar5 = 0;
  uVar4 = 0;
  local_68 = param_1;
LAB_1801d77ef:
  local_80 = 0x200;
  uVar7 = uVar6;
  lpBuffer = local_4a0;
  do {
    SetLastError(0);
    DVar2 = GetCurrentDirectoryW((DWORD)uVar7,lpBuffer);
    if ((DVar2 == 0) && (DVar3 = GetLastError(), DVar3 != 0)) {
      DVar2 = GetLastError();
      local_68[1] = (ulonglong)DVar2 << 0x20 | 2;
      *local_68 = 0x8000000000000000;
      puVar1 = local_68;
joined_r0x0001801d799f:
      if (local_60 != 0) {
        local_68 = puVar1;
        thunk_FUN_1801d3330(local_58,local_60 * 2,2);
      }
      return puVar1;
    }
    uVar6 = (ulonglong)DVar2;
    if (uVar7 == uVar6) {
      DVar2 = GetLastError();
      if (DVar2 != 0x7a) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("internal error: entered unreachable code",0x28,
                      &PTR_s_library_std_src_sys_pal_windows__18028f7c8);
      }
      uVar6 = uVar7 * 2;
      if (0xfffffffe < uVar6) {
        uVar6 = 0xffffffff;
      }
    }
    else if (uVar6 <= uVar7) {
      if (local_80 < uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(0,uVar6,local_80,&PTR_s_library_std_src_sys_pal_windows__18028f7b0);
      }
      FUN_1801ecc30(&local_a0,lpBuffer);
      local_68[2] = local_90;
      local_68[3] = uStack_88;
      *(undefined4 *)local_68 = local_a0;
      *(undefined4 *)((longlong)local_68 + 4) = uStack_9c;
      *(undefined4 *)(local_68 + 1) = uStack_98;
      *(undefined4 *)((longlong)local_68 + 0xc) = uStack_94;
      puVar1 = local_68;
      goto joined_r0x0001801d799f;
    }
    if (uVar6 < 0x201) goto LAB_1801d77ef;
    if (uVar5 - uVar4 < uVar6 - uVar4) {
      FUN_180200f70(&local_60,uVar4,uVar6 - uVar4,2,2);
      local_70 = local_60;
      local_78 = local_58;
    }
    uVar4 = 0xffffffff;
    if (local_70 < 0xffffffff) {
      uVar4 = local_70;
    }
    uVar5 = local_70;
    uVar7 = uVar4;
    lpBuffer = local_78;
    local_80 = uVar4;
    local_50 = uVar4;
  } while( true );
}


