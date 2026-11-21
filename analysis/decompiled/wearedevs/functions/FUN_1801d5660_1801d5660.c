/* FUN_1801d5660 @ 1801d5660 */

undefined4 * FUN_1801d5660(undefined4 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar1 = *(undefined8 *)(*param_2 + 0x18);
  uVar2 = *(undefined8 *)(*param_2 + 0x20);
  FUN_1801d99b0(&local_78);
  local_38 = local_70;
  FUN_1801ec9d0(&local_58,uVar1,uVar2);
  FUN_1801de7d0(&local_58,local_38,local_68);
  param_1[4] = local_48;
  param_1[5] = uStack_44;
  param_1[6] = uStack_40;
  param_1[7] = uStack_3c;
  *param_1 = local_58;
  param_1[1] = uStack_54;
  param_1[2] = uStack_50;
  param_1[3] = uStack_4c;
  if (local_78 != 0) {
    thunk_FUN_1801d3330(local_38,local_78,1);
  }
  return param_1;
}


