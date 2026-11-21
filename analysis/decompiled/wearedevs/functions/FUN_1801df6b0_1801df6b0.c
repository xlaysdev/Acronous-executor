/* FUN_1801df6b0 @ 1801df6b0 */

ulonglong FUN_1801df6b0(ulonglong *param_1,ulonglong param_2,uint param_3)

{
  bool bVar1;
  ulonglong uVar2;
  BOOL BVar3;
  DWORD DVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong local_38;
  LARGE_INTEGER local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (DAT_1802fd800 == 0) {
    local_30.QuadPart = 0;
    BVar3 = QueryPerformanceFrequency(&local_30);
    if (BVar3 == 0) {
      DVar4 = GetLastError();
      local_38 = (ulonglong)DVar4 << 0x20 | 2;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_38,&PTR_FUN_180290b58,
                    &PTR_s_library_std_src_sys_pal_windows__18028f950);
    }
    DAT_1802fd800 = local_30.QuadPart;
    if (local_30.QuadPart == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201c20(&PTR_s_library_std_src_sys_pal_windows__18028f920);
    }
  }
  if (DAT_1802fd800 < 0x3b9aca01) {
    uVar6 = (uint)(1000000000 / (DAT_1802fd800 & 0xffffffff));
  }
  else {
    uVar6 = 0;
  }
  uVar7 = uVar6 + 0xc4653600;
  if (DAT_1802fd800 >= 2) {
    uVar7 = uVar6;
  }
  uVar5 = *param_1;
  uVar6 = (uint)param_1[1];
  bVar1 = uVar5 < param_2;
  if (param_2 == uVar5) {
    bVar1 = uVar6 < param_3;
  }
  if (bVar1) {
    uVar8 = param_2 - uVar5;
    if (param_2 < uVar5) {
LAB_1801df82c:
                    /* WARNING: Subroutine does not return */
      FUN_180201b60("overflow when subtracting durations",0x23,
                    &PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_18028f9d8);
    }
    if (param_3 < uVar6) {
      if (uVar8 == 0) goto LAB_1801df82c;
      uVar8 = uVar8 - 1;
      uVar9 = (param_3 + 1000000000) - uVar6;
    }
    else {
      uVar9 = param_3 - uVar6;
    }
    if (999999999 < uVar9) {
      if (uVar8 == 0xffffffffffffffff) goto LAB_1801df814;
      uVar8 = uVar8 + 1;
      uVar9 = uVar9 + 0xc4653600;
    }
    uVar2 = (ulonglong)(DAT_1802fd800 < 2);
    bVar1 = uVar8 <= uVar2;
    if (uVar8 == uVar2) {
      bVar1 = uVar9 <= uVar7;
    }
    if (bVar1) {
      return 0;
    }
  }
  if (param_2 <= uVar5) {
    uVar5 = uVar5 - param_2;
    if (uVar6 < param_3) {
      if (uVar5 == 0) {
        return 0;
      }
      uVar5 = uVar5 - 1;
      uVar6 = uVar6 + 1000000000;
    }
    if (999999999 < uVar6 - param_3) {
      if (uVar5 == 0xffffffffffffffff) {
LAB_1801df814:
                    /* WARNING: Subroutine does not return */
        FUN_180201b60("overflow in Duration::new",0x19,
                      &PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_180290a38);
      }
      uVar5 = uVar5 + 1;
    }
  }
  return uVar5;
}


