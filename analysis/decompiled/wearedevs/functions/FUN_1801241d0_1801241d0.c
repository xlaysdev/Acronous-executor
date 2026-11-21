/* FUN_1801241d0 @ 1801241d0 */

undefined8 * FUN_1801241d0(undefined8 *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  int local_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  lVar1 = *param_2;
  *param_2 = 0;
  if (lVar1 == 0) {
    *param_1 = 3;
    FUN_1800430f0(param_3);
    return param_1;
  }
  local_18 = *(undefined8 *)(param_3 + 0x14);
  uStack_10 = *(undefined8 *)(param_3 + 0x16);
  local_28 = *(undefined8 *)(param_3 + 0x10);
  uStack_20 = *(undefined8 *)(param_3 + 0x12);
  local_68 = *param_3;
  uStack_64 = param_3[1];
  uStack_60 = param_3[2];
  uStack_5c = param_3[3];
  local_58 = param_3[4];
  uStack_54 = param_3[5];
  uStack_50 = param_3[6];
  uStack_4c = param_3[7];
  local_48 = param_3[8];
  uStack_44 = param_3[9];
  uStack_40 = param_3[10];
  uStack_3c = param_3[0xb];
  local_38 = param_3[0xc];
  uStack_34 = param_3[0xd];
  uStack_30 = param_3[0xe];
  uStack_2c = param_3[0xf];
  FUN_180124f40(&local_c8,lVar1,&local_68);
  if (local_c8 == 3) {
    *param_1 = 4;
    return param_1;
  }
  param_1[10] = local_78;
  param_1[0xb] = uStack_70;
  param_1[8] = local_88;
  param_1[9] = uStack_80;
  param_1[6] = local_98;
  param_1[7] = uStack_90;
  param_1[4] = local_a8;
  param_1[5] = uStack_a0;
  param_1[2] = local_b8;
  param_1[3] = uStack_b0;
  *param_1 = CONCAT44(uStack_c4,local_c8);
  param_1[1] = uStack_c0;
  return param_1;
}


