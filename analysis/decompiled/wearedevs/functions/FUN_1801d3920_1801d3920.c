/* FUN_1801d3920 @ 1801d3920 */

ulonglong FUN_1801d3920(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong local_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  ulonglong local_30;
  longlong local_28;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = *param_1;
  uVar2 = param_1[1];
  local_40 = param_1[2];
  local_30 = uVar2;
  if (local_40 < 0x10) {
    if (local_40 != 0) {
      local_38 = 0;
      do {
        if (*(char *)(uVar2 + local_38) == '\0') goto LAB_1801d399f;
        local_38 = local_38 + 1;
      } while (local_40 != local_38);
    }
  }
  else {
    local_19 = 0;
    uVar1 = FUN_1801f2f70(0,uVar2,local_40);
    local_38 = uVar2;
    if ((uVar1 & 1) != 0) {
LAB_1801d399f:
      if (SBORROW8(0,local_28)) {
        return local_30;
      }
      local_50 = local_28;
      local_48 = local_30;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("thread name may not contain interior null bytes",0x2f,&local_50,
                    &PTR_LAB_180290b18,&PTR_s_library_std_src_thread_thread_rs_18028e9c8);
    }
  }
  local_19 = 1;
  local_50 = local_28;
  local_48 = local_30;
  uVar2 = FUN_1801ec600(&local_50);
  return uVar2;
}


