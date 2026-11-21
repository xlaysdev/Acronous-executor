/* FUN_18016c1f0 @ 18016c1f0 */

void FUN_18016c1f0(longlong *param_1)

{
  longlong lVar1;
  longlong local_28 [2];
  
  local_28[1] = 0xfffffffffffffffe;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0xb8) != '\x01') {
    if (*(char *)(lVar1 + 0xb8) == '\x02') {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x220) != 0) {
        local_28[0] = FUN_18018cbb0();
        if (local_28[0] != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201bc0("failed to wake I/O driver",0x19,local_28,&PTR_FUN_180262428,
                        &PTR_s_C__Users_burne__cargo_registry_s_180262610);
        }
        return;
      }
      goto LAB_18016c2c7;
    }
    FUN_1801d8880(lVar1 + 0x70,FUN_18016d130);
    *(undefined1 *)(lVar1 + 0xb8) = 1;
  }
  if (*(char *)(lVar1 + 0xb6) != '\x02') {
    FUN_180164d10(lVar1 + 0x98,param_1);
    return;
  }
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x220) != 0) {
    local_28[0] = FUN_18018cbb0();
    if (local_28[0] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("failed to wake I/O driver",0x19,local_28,&PTR_FUN_180262428,
                    &PTR_s_C__Users_burne__cargo_registry_s_180262610);
    }
    return;
  }
LAB_18016c2c7:
  FUN_1801691b0(*(longlong *)(lVar1 + 0x228) + 0x10);
  return;
}


