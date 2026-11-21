/* FUN_1801f5550 @ 1801f5550 */

void FUN_1801f5550(undefined8 **param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 ***local_a0;
  undefined1 *local_98;
  longlong **local_90;
  code *local_88;
  int *local_80;
  code *local_78;
  longlong **local_58;
  undefined1 *local_50;
  int *local_48;
  code *local_40;
  undefined2 *local_38;
  code *local_30;
  undefined2 local_22;
  undefined8 **local_20;
  int local_14;
  
  if ((*(byte *)((longlong)param_2 + 0x13) & 0x18) == 0) {
    if (*(int *)((longlong)param_1 + 0x14) == 0) {
      local_20 = (undefined8 **)CONCAT62(local_20._2_6_,*(undefined2 *)(param_1 + 3));
      local_88 = FUN_1801ee5a0;
      uVar2 = *param_2;
      uVar3 = param_2[1];
      puVar4 = &DAT_1802948f8;
    }
    else {
      local_20 = (undefined8 **)CONCAT44(local_20._4_4_,*(int *)((longlong)param_1 + 0x14));
      local_14 = CONCAT22(local_14._2_2_,*(undefined2 *)(param_1 + 3));
      local_88 = FUN_1801ee6c0;
      local_80 = &local_14;
      local_78 = FUN_1801ee5a0;
      uVar2 = *param_2;
      uVar3 = param_2[1];
      puVar4 = &DAT_180294900;
    }
    local_90 = (longlong **)&local_20;
    local_98 = &LAB_1801edde0;
    local_a0 = &local_58;
    local_58 = param_1;
    FUN_1801ef150(uVar2,uVar3,puVar4,&local_a0);
    return;
  }
  local_a0 = (undefined8 ***)0x0;
  if (*(int *)((longlong)param_1 + 0x14) == 0) {
    local_14 = CONCAT22(local_14._2_2_,*(undefined2 *)(param_1 + 3));
    local_40 = FUN_1801ee5a0;
    puVar4 = &DAT_1802948f8;
  }
  else {
    local_22 = *(undefined2 *)(param_1 + 3);
    local_40 = FUN_1801ee6c0;
    local_38 = &local_22;
    local_30 = FUN_1801ee5a0;
    puVar4 = &DAT_180294900;
    local_14 = *(int *)((longlong)param_1 + 0x14);
  }
  local_48 = &local_14;
  local_50 = &LAB_1801edde0;
  local_58 = (longlong **)&local_20;
  local_20 = param_1;
  cVar1 = FUN_1801ef150(&local_a0,&DAT_180294880,puVar4,&local_58);
  if (cVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` va",0x2b,&local_58,&DAT_180293c88,
                  &PTR_s_library_core_src_net_socket_addr_180294910);
  }
  if ((longlong **)0x3a < local_a0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(0,local_a0,0x3a,&PTR_s_library_core_src_net_display_buf_180294700);
  }
  FUN_1801f0810(param_2,&local_98);
  return;
}


