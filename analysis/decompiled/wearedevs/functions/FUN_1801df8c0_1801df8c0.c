/* FUN_1801df8c0 @ 1801df8c0 */

void FUN_1801df8c0(void)

{
  BOOL BVar1;
  DWORD DVar2;
  ulonglong local_20;
  LARGE_INTEGER local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18.QuadPart = 0;
  BVar1 = QueryPerformanceCounter(&local_18);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    local_20 = (ulonglong)DVar2 << 0x20 | 2;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_20,&PTR_FUN_180290b58,
                  &PTR_s_library_std_src_sys_pal_windows__18028f938);
  }
  FUN_1801db110(local_18.QuadPart);
  return;
}


