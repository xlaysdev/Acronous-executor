/* FUN_1801db110 @ 1801db110 */

ulonglong FUN_1801db110(ulonglong param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  ulonglong uVar3;
  ulonglong local_28;
  LARGE_INTEGER local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (DAT_1802fd800 == 0) {
    local_20.QuadPart = 0;
    BVar1 = QueryPerformanceFrequency(&local_20);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      local_28 = (ulonglong)DVar2 << 0x20 | 2;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_28,&PTR_FUN_180290b58,
                    &PTR_s_library_std_src_sys_pal_windows__18028f950);
    }
    DAT_1802fd800 = local_20.QuadPart;
    if (local_20.QuadPart == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201c20(&PTR_s_library_std_src_sys_common_mod_r_18028ea38);
    }
  }
  if ((param_1 | DAT_1802fd800) >> 0x20 == 0) {
    uVar3 = (param_1 & 0xffffffff) / (DAT_1802fd800 & 0xffffffff);
    param_1 = (param_1 & 0xffffffff) % (DAT_1802fd800 & 0xffffffff);
  }
  else {
    uVar3 = param_1 / DAT_1802fd800;
    param_1 = param_1 % DAT_1802fd800;
  }
  param_1 = param_1 * 1000000000;
  if ((param_1 | DAT_1802fd800) >> 0x20 == 0) {
    param_1 = (param_1 & 0xffffffff) / (DAT_1802fd800 & 0xffffffff);
  }
  else {
    param_1 = param_1 / DAT_1802fd800;
  }
  return (param_1 + uVar3 * 1000000000) / 1000000000;
}


