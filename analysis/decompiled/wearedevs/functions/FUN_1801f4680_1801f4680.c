/* FUN_1801f4680 @ 1801f4680 */

void FUN_1801f4680(undefined4 *param_1,undefined8 *param_2)

{
  char cVar1;
  ulonglong local_70;
  undefined1 local_68 [16];
  undefined4 *local_58;
  code *local_50;
  longlong local_48;
  code *local_40;
  longlong local_38;
  code *local_30;
  longlong local_28;
  code *local_20;
  undefined1 local_15;
  undefined4 local_14;
  
  local_14 = *param_1;
  if ((*(byte *)((longlong)param_2 + 0x13) & 0x18) == 0) {
    local_48 = (longlong)&local_14 + 1;
    local_38 = (longlong)&local_14 + 2;
    local_28 = (longlong)&local_14 + 3;
    local_58 = &local_14;
    local_50 = FUN_1801ee480;
    local_40 = FUN_1801ee480;
    local_30 = FUN_1801ee480;
    local_20 = FUN_1801ee480;
    FUN_1801ef150(*param_2,param_2[1],&DAT_180294662,&local_58);
    return;
  }
  local_70 = 0;
  local_48 = (longlong)&local_14 + 1;
  local_38 = (longlong)&local_14 + 2;
  local_28 = (longlong)&local_14 + 3;
  local_58 = &local_14;
  local_50 = FUN_1801ee480;
  local_40 = FUN_1801ee480;
  local_30 = FUN_1801ee480;
  local_20 = FUN_1801ee480;
  cVar1 = FUN_1801ef150(&local_70,&DAT_180294670,&DAT_180294662,&local_58);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` va",0x2b,&local_15,&DAT_180293c88,
                  &PTR_s_library_core_src_net_ip_addr_rs_1802946c0);
  }
  if (0xf < local_70) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(0,local_70,0xf,&PTR_s_library_core_src_net_display_buf_180294700);
  }
  FUN_1801f0810(param_2,local_68);
  return;
}


