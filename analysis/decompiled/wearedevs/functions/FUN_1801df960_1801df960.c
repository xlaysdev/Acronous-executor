/* FUN_1801df960 @ 1801df960 */

undefined8 FUN_1801df960(undefined8 *param_1,undefined4 param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulonglong local_30;
  undefined4 local_28;
  LARGE_INTEGER local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20.QuadPart = 0;
  local_28 = param_2;
  BVar1 = QueryPerformanceCounter(&local_20);
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    local_30 = (ulonglong)DVar2 << 0x20 | 2;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_30,&PTR_FUN_180290b58,
                  &PTR_s_library_std_src_sys_pal_windows__18028f938);
  }
  local_30 = FUN_1801db110(local_20.QuadPart);
  uVar4 = *param_1;
  uVar3 = FUN_1801df6b0(&local_30,uVar4,*(undefined4 *)(param_1 + 1));
  if ((int)uVar4 == 1000000000) {
    uVar3 = 0;
  }
  return uVar3;
}


