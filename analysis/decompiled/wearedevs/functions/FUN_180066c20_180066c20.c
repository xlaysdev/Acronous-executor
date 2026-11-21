/* FUN_180066c20 @ 180066c20 */

longlong * FUN_180066c20(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong local_e8 [2];
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong lStack_c0;
  longlong local_b8;
  longlong lStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong local_98;
  ulonglong local_90 [2];
  undefined8 local_80;
  undefined8 local_70;
  longlong local_68;
  undefined1 local_60;
  undefined7 uStack_5f;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  longlong local_18;
  
  local_70 = 0;
  local_90[0] = 0;
  local_80 = 0;
  FUN_180190620(&local_68,local_90,param_2,param_3);
  if (SBORROW8(0,local_68)) {
    local_90[0] = local_90[0] & 0xffffffffffff0000;
    lVar2 = FUN_18006adf0(local_90,local_60);
  }
  else {
    local_d8 = local_58;
    lStack_d0 = lStack_50;
    local_c8 = local_48;
    lStack_c0 = lStack_40;
    local_b8 = local_38;
    lStack_b0 = lStack_30;
    local_a8 = local_28;
    uVar1 = local_a8;
    uStack_a4 = uStack_24;
    uStack_a0 = uStack_20;
    uStack_9c = uStack_1c;
    local_98 = local_18;
    local_e8[0] = local_68;
    local_a8._0_1_ = (char)local_28;
    if ((char)local_a8 != '\0') {
      param_1[10] = local_18;
      param_1[8] = CONCAT44(uStack_24,local_28);
      param_1[9] = CONCAT44(uStack_1c,uStack_20);
      param_1[6] = local_38;
      param_1[7] = lStack_30;
      param_1[4] = local_48;
      param_1[5] = lStack_40;
      param_1[2] = local_58;
      param_1[3] = lStack_50;
      *param_1 = local_68;
      param_1[1] = CONCAT71(uStack_5f,local_60);
      return param_1;
    }
    local_a8 = uVar1;
    lVar2 = FUN_18006aa90(local_e8);
  }
  param_1[1] = lVar2;
  *param_1 = -0x8000000000000000;
  return param_1;
}


