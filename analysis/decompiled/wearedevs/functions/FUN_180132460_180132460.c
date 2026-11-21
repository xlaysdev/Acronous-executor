/* FUN_180132460 @ 180132460 */

undefined8 * FUN_180132460(undefined8 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  ulonglong uVar1;
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  local_30 = 0;
  uVar1 = FUN_180131b80(&local_30,param_4);
  if ((uVar1 & 1) != 0) {
    local_34 = 3;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("invalid initial receive window",0x1e,&local_34,&DAT_180249948,
                  &PTR_s_C__Users_burne__cargo_registry_s_180249708);
  }
  if (!SCARRY4(param_4,local_30._4_4_)) {
    local_30 = CONCAT44(param_4 + local_30._4_4_,(undefined4)local_30);
  }
  uVar1 = FUN_180131b80(&local_28,param_3);
  if ((uVar1 & 1) != 0) {
    local_34 = 3;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0(&DAT_180249720,0x20,&local_34,&DAT_180249948,
                  &PTR_s_C__Users_burne__cargo_registry_s_180249740);
  }
  *(undefined4 *)((longlong)param_1 + 300) = param_2;
  *(undefined4 *)(param_1 + 8) = 4;
  *(undefined2 *)(param_1 + 0x27) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x11] = local_28;
  *(undefined4 *)(param_1 + 0x26) = 0;
  *param_1 = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xf4) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0x13a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13e) = 0;
  param_1[0x15] = local_30;
  *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined2 *)((longlong)param_1 + 0x13f) = 0x100;
  *(undefined4 *)(param_1 + 0xf) = 1000000000;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  param_1[3] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[6] = 0;
  return param_1;
}


