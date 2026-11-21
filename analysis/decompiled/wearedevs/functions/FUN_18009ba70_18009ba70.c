/* FUN_18009ba70 @ 18009ba70 */

undefined8 * FUN_18009ba70(undefined8 *param_1,void *param_2)

{
  undefined1 local_330 [616];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined8 local_98;
  int local_90 [6];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  memcpy(local_330,param_2,0x268);
  FUN_1800a7a30(&local_c8,local_330);
  local_58 = local_c8;
  uStack_50 = uStack_c0;
  local_48 = local_b0;
  uStack_44 = uStack_ac;
  uStack_40 = uStack_a8;
  uStack_3c = uStack_a4;
  local_30 = local_a0;
  local_28 = local_98;
  if (local_90[0] != 2) {
    FUN_1800991d0(local_90);
  }
  FUN_1800777b0(local_78);
  param_1[4] = local_58;
  param_1[5] = uStack_50;
  param_1[6] = local_b8;
  *param_1 = CONCAT44(uStack_44,local_48);
  param_1[1] = CONCAT44(uStack_3c,uStack_40);
  param_1[2] = local_30;
  param_1[3] = local_28;
  return param_1;
}


