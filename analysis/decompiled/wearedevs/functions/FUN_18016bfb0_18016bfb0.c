/* FUN_18016bfb0 @ 18016bfb0 */

void FUN_18016bfb0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(char *)(lVar1 + 0xb8) != '\x01') {
    if (*(char *)(lVar1 + 0xb8) == '\x02') {
      lVar1 = *param_1;
      local_29 = 1;
      FUN_180176d70(lVar1 + 0x1a8);
      if (*(longlong *)(lVar1 + 0x220) == 0) {
        local_29 = 1;
        FUN_1801691b0(*(longlong *)(lVar1 + 0x228) + 0x10);
        return;
      }
      local_29 = 1;
      local_38 = FUN_18018cbb0();
      if (local_38 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("failed to wake I/O driver",0x19,&local_38,&PTR_FUN_180262428,
                      &PTR_s_C__Users_burne__cargo_registry_s_180262610);
      }
      return;
    }
    local_29 = 0;
    FUN_1801d8880(lVar1 + 0x70,FUN_18016d130);
    *(undefined1 *)(lVar1 + 0xb8) = 1;
  }
  if (*(char *)(lVar1 + 0xb6) == '\x02') {
    lVar1 = *param_1;
    local_29 = 1;
    FUN_180176d70(lVar1 + 0x1a8);
    if (*(longlong *)(lVar1 + 0x220) == 0) {
      local_29 = 1;
      FUN_1801691b0(*(longlong *)(lVar1 + 0x228) + 0x10);
    }
    else {
      local_29 = 1;
      local_38 = FUN_18018cbb0();
      if (local_38 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("failed to wake I/O driver",0x19,&local_38,&PTR_FUN_180262428,
                      &PTR_s_C__Users_burne__cargo_registry_s_180262610);
      }
    }
  }
  else {
    local_29 = 1;
    FUN_180164e30(lVar1 + 0x98,param_1,param_2);
  }
  return;
}


