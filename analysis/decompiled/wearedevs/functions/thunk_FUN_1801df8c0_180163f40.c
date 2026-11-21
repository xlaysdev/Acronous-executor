/* thunk_FUN_1801df8c0 @ 180163f40 */

void thunk_FUN_1801df8c0(void)

{
  BOOL BVar1;
  DWORD DVar2;
  ulonglong uStack_20;
  LARGE_INTEGER LStack_18;
  undefined8 uStack_10;
  
  uStack_10 = 0xfffffffffffffffe;
  LStack_18.QuadPart = 0;
  BVar1 = QueryPerformanceCounter(&LStack_18);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    uStack_20 = (ulonglong)DVar2 << 0x20 | 2;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&uStack_20,&PTR_FUN_180290b58,
                  &PTR_s_library_std_src_sys_pal_windows__18028f938);
  }
  FUN_1801db110(LStack_18.QuadPart);
  return;
}


