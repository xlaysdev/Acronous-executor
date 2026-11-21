/* FUN_18005a110 @ 18005a110 */

ulonglong * FUN_18005a110(ulonglong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong local_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_88;
  ulonglong local_80 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  ulonglong uStack_58;
  ulonglong local_50;
  ulonglong uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  longlong *local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_2[1];
  local_60 = 0;
  local_80[0] = 0;
  local_70 = 0;
  local_28 = param_2;
  FUN_180190620(&local_d8,local_80,local_20,param_2[2]);
  if (SBORROW8(0,local_d8)) {
    local_80[0] = local_80[0] & 0xffffffffffff0000;
    uVar3 = FUN_18006adf0(local_80,local_d0);
  }
  else {
    local_70 = local_c8;
    uStack_68 = uStack_c0;
    local_60 = local_b8;
    uStack_58 = uStack_b0;
    local_50 = local_a8;
    uStack_48 = uStack_a0;
    local_40 = local_98;
    uVar2 = local_40;
    uStack_3c = uStack_94;
    uStack_38 = uStack_90;
    uStack_34 = uStack_8c;
    local_30 = local_88;
    local_80[0] = local_d8;
    local_40._0_1_ = (char)local_98;
    if ((char)local_40 != '\0') {
      param_1[10] = local_88;
      param_1[8] = CONCAT44(uStack_94,local_98);
      param_1[9] = CONCAT44(uStack_8c,uStack_90);
      local_70._0_4_ = (undefined4)local_c8;
      local_70._4_4_ = (undefined4)((ulonglong)local_c8 >> 0x20);
      uStack_68._0_4_ = (undefined4)uStack_c0;
      uStack_68._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
      param_1[6] = local_a8;
      param_1[7] = uStack_a0;
      param_1[4] = local_b8;
      param_1[5] = uStack_b0;
      *(undefined4 *)(param_1 + 2) = (undefined4)local_70;
      *(undefined4 *)((longlong)param_1 + 0x14) = local_70._4_4_;
      *(undefined4 *)(param_1 + 3) = (undefined4)uStack_68;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_68._4_4_;
      *param_1 = local_d8;
      param_1[1] = CONCAT71(uStack_cf,local_d0);
      lVar1 = *local_28;
      goto joined_r0x00018005a200;
    }
    local_40 = uVar2;
    uVar3 = FUN_18006aa90(local_80);
  }
  param_1[1] = uVar3;
  *param_1 = 0x8000000000000000;
  lVar1 = *local_28;
joined_r0x00018005a200:
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(local_20,lVar1,1);
  }
  return param_1;
}


