/* FUN_1801d9ad0 @ 1801d9ad0 */

void FUN_1801d9ad0(undefined8 *param_1,HANDLE param_2)

{
  DWORD DVar1;
  DWORD DVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  WCHAR *lpszFilePath;
  ulonglong uVar8;
  bool bVar9;
  WCHAR local_498 [512];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  HANDLE local_78;
  LPWSTR local_70;
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
  local_70 = (LPWSTR)0x2;
  uVar5 = 0;
  uVar3 = 0;
  uVar8 = 0;
  local_78 = param_2;
  local_68 = param_1;
LAB_1801d9b5f:
  lpszFilePath = local_498;
  uVar4 = 0x200;
  do {
    SetLastError(0);
    DVar1 = GetFinalPathNameByHandleW(local_78,lpszFilePath,(DWORD)uVar6,0);
    if ((DVar1 == 0) && (DVar2 = GetLastError(), DVar2 != 0)) {
      DVar1 = GetLastError();
      local_68[1] = (ulonglong)DVar1 << 0x20 | 2;
      *local_68 = 0x8000000000000000;
joined_r0x0001801d9ceb:
      if (local_60 != 0) {
        thunk_FUN_1801d3330(local_58,local_60 * 2,2);
      }
      return;
    }
    uVar7 = (ulonglong)DVar1;
    bVar9 = uVar7 <= uVar6;
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
      if (bVar9) {
        if (uVar4 < uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,uVar7,uVar4,&PTR_s_library_std_src_sys_pal_windows__18028f7b0);
        }
        FUN_1801ecc30(&local_98,lpszFilePath);
        local_68[2] = local_88;
        local_68[3] = uStack_80;
        *(undefined4 *)local_68 = local_98;
        *(undefined4 *)((longlong)local_68 + 4) = uStack_94;
        *(undefined4 *)(local_68 + 1) = uStack_90;
        *(undefined4 *)((longlong)local_68 + 0xc) = uStack_8c;
        goto joined_r0x0001801d9ceb;
      }
    }
    if (uVar6 < 0x201) goto LAB_1801d9b5f;
    uVar4 = uVar3 - uVar8;
    uVar3 = uVar5;
    if (uVar4 < uVar6 - uVar8) {
      FUN_180200f70(&local_60,uVar8,uVar6 - uVar8,2,2);
      local_70 = local_58;
      uVar3 = local_60;
    }
    uVar6 = 0xffffffff;
    if (uVar3 < 0xffffffff) {
      uVar6 = uVar3;
    }
    uVar5 = uVar3;
    lpszFilePath = local_70;
    uVar8 = uVar6;
    uVar4 = uVar6;
    local_50 = uVar6;
  } while( true );
}


