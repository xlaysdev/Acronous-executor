/* FUN_180124640 @ 180124640 */

undefined8 * FUN_180124640(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined2 local_50;
  undefined1 uStack_4e;
  undefined5 uStack_4d;
  undefined8 local_40;
  longlong local_38;
  undefined4 *local_30;
  undefined1 local_22;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_21 = 1;
  local_22 = 1;
  local_30 = param_2;
  FUN_1801adfb0(&local_b8);
  local_50 = *(undefined2 *)(local_30 + 0x1a);
  FUN_1800430f0(&local_b8);
  local_68 = *(undefined8 *)(local_30 + 0x14);
  uStack_60 = *(undefined8 *)(local_30 + 0x16);
  local_78 = *(undefined8 *)(local_30 + 0x10);
  uStack_70 = *(undefined8 *)(local_30 + 0x12);
  local_b8 = *local_30;
  uStack_b4 = local_30[1];
  uStack_b0 = local_30[2];
  uStack_ac = local_30[3];
  local_a8 = local_30[4];
  uStack_a4 = local_30[5];
  uStack_a0 = local_30[6];
  uStack_9c = local_30[7];
  local_98 = local_30[8];
  uStack_94 = local_30[9];
  uStack_90 = local_30[10];
  uStack_8c = local_30[0xb];
  local_88 = local_30[0xc];
  uStack_84 = local_30[0xd];
  uStack_80 = local_30[0xe];
  uStack_7c = local_30[0xf];
  uStack_4e = *(undefined1 *)((longlong)local_30 + 0x6a);
  local_40 = *(undefined8 *)(local_30 + 0x18);
  if (local_58 != 0) {
    local_38 = local_58;
    FUN_18002a190();
    thunk_FUN_1801d3330(local_38,0x20,8);
  }
  param_1[10] = local_68;
  param_1[0xb] = uStack_60;
  param_1[8] = local_78;
  param_1[9] = uStack_70;
  param_1[6] = CONCAT44(uStack_84,local_88);
  param_1[7] = CONCAT44(uStack_7c,uStack_80);
  param_1[4] = CONCAT44(uStack_94,local_98);
  param_1[5] = CONCAT44(uStack_8c,uStack_90);
  param_1[2] = CONCAT44(uStack_a4,local_a8);
  param_1[3] = CONCAT44(uStack_9c,uStack_a0);
  *param_1 = CONCAT44(uStack_b4,local_b8);
  param_1[1] = CONCAT44(uStack_ac,uStack_b0);
  param_1[0xc] = local_40;
  param_1[0xd] = CONCAT53(uStack_4d,CONCAT12(uStack_4e,local_50));
  return param_1;
}


