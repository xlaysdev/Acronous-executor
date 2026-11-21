/* FUN_1801d7ad0 @ 1801d7ad0 */

longlong * FUN_1801d7ad0(longlong *param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  LPWSTR lpBuffer;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  longlong local_4b8;
  LPCWSTR local_4b0;
  longlong local_b8;
  ulonglong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_88;
  ulonglong local_80;
  LPWSTR local_78;
  ulonglong local_70;
  longlong local_68;
  LPCWSTR local_60;
  longlong *local_58;
  LPWSTR local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_1801db5d0(&local_4b8);
  if (SBORROW8(0,local_4b8)) {
    if (((uint)local_4b0 & 3) == 1) {
      local_68 = (longlong)local_4b0 + -1;
      local_60 = *(LPCWSTR *)((longlong)local_4b0 + -1);
      local_50 = *(LPWSTR *)((longlong)local_4b0 + 7);
      if (*(code **)local_50 != (code *)0x0) {
        (**(code **)local_50)(local_60);
      }
      if (*(longlong *)((longlong)local_50 + 8) != 0) {
        thunk_FUN_1801d3330(local_60,*(longlong *)((longlong)local_50 + 8),
                            *(undefined8 *)((longlong)local_50 + 0x10));
      }
      thunk_FUN_1801d3330(local_68,0x18,8);
    }
    *param_1 = -0x8000000000000000;
    return param_1;
  }
  local_68 = local_4b8;
  local_60 = local_4b0;
  local_80 = 0;
  local_78 = (LPWSTR)0x2;
  local_70 = 0;
  uVar6 = 0x200;
  local_50 = (LPWSTR)0x2;
  uVar4 = 0;
  uVar5 = 0;
  uVar8 = 0;
  local_58 = param_1;
LAB_1801d7c0f:
  lpBuffer = (LPWSTR)&local_4b8;
  uVar9 = 0x200;
  do {
    SetLastError(0);
    DVar1 = GetEnvironmentVariableW(local_60,lpBuffer,(DWORD)uVar6);
    if ((DVar1 == 0) && (DVar2 = GetLastError(), DVar2 != 0)) {
      DVar1 = GetLastError();
      local_b0 = (ulonglong)DVar1 << 0x20 | 2;
      if (local_80 == 0) {
        plVar3 = local_58;
      }
      else {
        local_b8 = -0x8000000000000000;
LAB_1801d7d7c:
        plVar3 = local_58;
        thunk_FUN_1801d3330(local_78,local_80 * 2,2);
joined_r0x0001801d7d97:
        if (!SBORROW8(0,local_b8)) {
          *(undefined4 *)(plVar3 + 2) = local_98;
          *(undefined4 *)((longlong)plVar3 + 0x14) = uStack_94;
          *(undefined4 *)(plVar3 + 3) = uStack_90;
          *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_8c;
          *plVar3 = local_b8;
          plVar3[1] = local_b0;
          goto joined_r0x0001801d7e82;
        }
      }
      *plVar3 = -0x8000000000000000;
      if (((uint)local_b0 & 3) == 1) {
        local_88 = local_b0 - 1;
        local_50 = *(LPWSTR *)(local_b0 - 1);
        local_58 = *(longlong **)(local_b0 + 7);
        if ((code *)*local_58 != (code *)0x0) {
          (*(code *)*local_58)(local_50);
        }
        if (local_58[1] != 0) {
          thunk_FUN_1801d3330(local_50,local_58[1],local_58[2]);
        }
        thunk_FUN_1801d3330(local_88,0x18,8);
      }
joined_r0x0001801d7e82:
      if (local_68 == 0) {
        return plVar3;
      }
      thunk_FUN_1801d3330(local_60,local_68 * 2,2);
      return plVar3;
    }
    uVar7 = (ulonglong)DVar1;
    bVar10 = uVar7 <= uVar6;
    if (uVar6 == uVar7) {
      DVar1 = GetLastError();
      if (DVar1 != 0x7a) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("internal error: entered unreachable code",0x28,
                      &PTR_s_library_std_src_sys_pal_windows__18028f7c8);
      }
      uVar6 = uVar6 * 2;
      if (0xfffffffe < uVar6) {
        uVar6 = 0xffffffff;
      }
    }
    else {
      uVar6 = uVar7;
      if (bVar10) {
        if (uVar9 < uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,uVar7,uVar9,&PTR_s_library_std_src_sys_pal_windows__18028f7b0);
        }
        FUN_1801ecc30(&local_b8,lpBuffer);
        local_98 = local_a8;
        uStack_94 = uStack_a4;
        uStack_90 = uStack_a0;
        uStack_8c = uStack_9c;
        plVar3 = local_58;
        if (local_80 != 0) goto LAB_1801d7d7c;
        goto joined_r0x0001801d7d97;
      }
    }
    if (uVar6 < 0x201) goto LAB_1801d7c0f;
    if (uVar5 - uVar8 < uVar6 - uVar8) {
      FUN_180200f70(&local_80,uVar8,uVar6 - uVar8,2,2);
      local_50 = local_78;
      uVar4 = local_80;
    }
    uVar6 = 0xffffffff;
    if (uVar4 < 0xffffffff) {
      uVar6 = uVar4;
    }
    uVar5 = uVar4;
    lpBuffer = local_50;
    uVar8 = uVar6;
    uVar9 = uVar6;
    local_70 = uVar6;
  } while( true );
}


