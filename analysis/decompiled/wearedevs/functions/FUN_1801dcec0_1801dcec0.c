/* FUN_1801dcec0 @ 1801dcec0 */

void FUN_1801dcec0(HANDLE param_1)

{
  DWORD DVar1;
  ulonglong *local_38;
  code *local_30;
  HANDLE local_28;
  ulonglong local_20 [2];
  
  local_20[1] = 0xfffffffffffffffe;
  DVar1 = WaitForSingleObject(param_1,0xffffffff);
  if (DVar1 == 0xffffffff) {
    local_28 = param_1;
    DVar1 = GetLastError();
    local_20[0] = (ulonglong)DVar1 << 0x20 | 2;
    local_38 = local_20;
    local_30 = FUN_1801e3c90;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_18028ff76,&local_38,&PTR_s_library_std_src_sys_thread_windo_18028ff98);
  }
                    /* WARNING: Could not recover jumptable at 0x0001801dceef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseHandle(param_1);
  return;
}


