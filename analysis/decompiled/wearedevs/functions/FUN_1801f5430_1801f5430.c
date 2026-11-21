/* FUN_1801f5430 @ 1801f5430 */

void FUN_1801f5430(ulonglong param_1,undefined8 *param_2)

{
  char cVar1;
  ulonglong local_60;
  undefined1 local_58 [24];
  ulonglong *local_40;
  undefined1 *local_38;
  ulonglong *local_30;
  code *local_28;
  ulonglong local_20;
  undefined1 local_13;
  undefined2 local_12;
  
  if ((*(byte *)((longlong)param_2 + 0x13) & 0x18) == 0) {
    local_20 = CONCAT62(local_20._2_6_,*(undefined2 *)(param_1 + 4));
    local_40 = &local_60;
    local_38 = &LAB_1801ede70;
    local_30 = &local_20;
    local_28 = FUN_1801ee5a0;
    local_60 = param_1;
    FUN_1801ef150(*param_2,param_2[1],&DAT_1802948b0,&local_40);
    return;
  }
  local_60 = 0;
  local_12 = *(undefined2 *)(param_1 + 4);
  local_40 = &local_20;
  local_38 = &LAB_1801ede70;
  local_30 = (ulonglong *)&local_12;
  local_28 = FUN_1801ee5a0;
  local_20 = param_1;
  cVar1 = FUN_1801ef150(&local_60,&DAT_180294850,&DAT_1802948b0,&local_40);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` va",0x2b,&local_13,&DAT_180293c88,
                  &PTR_s_library_core_src_net_socket_addr_1802948e0);
  }
  if (0x15 < local_60) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(0,local_60,0x15,&PTR_s_library_core_src_net_display_buf_180294700);
  }
  FUN_1801f0810(param_2,local_58);
  return;
}


