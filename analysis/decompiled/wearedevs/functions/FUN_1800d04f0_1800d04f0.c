/* FUN_1800d04f0 @ 1800d04f0 */

undefined8 *
FUN_1800d04f0(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4,
             longlong *param_5,byte *param_6,undefined1 param_7,undefined1 param_8)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  ulonglong local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong *local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong local_60;
  undefined8 *local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_31 = 1;
  local_68 = param_4;
  local_58 = param_2;
  local_40 = param_3;
  FUN_180100ea0(&local_88,param_3);
  local_c8 = CONCAT44(uStack_84,local_88);
  uStack_c0 = uStack_80;
  uStack_bc = uStack_7c;
  if (local_c8 == 2) {
    local_108 = local_108 & 0xffffffffffff0000;
    local_31 = 1;
    uVar3 = FUN_18006abe0(&local_108);
    param_1[1] = uVar3;
    *param_1 = 2;
    if ((char)param_5[4] != '\x02') {
      local_33 = 1;
      (**(code **)(*param_5 + 0x20))(param_5[3],param_5[1],param_5[2]);
    }
    LOCK();
    *local_68 = *local_68 + -1;
    UNLOCK();
    if (*local_68 == 0) {
      local_34 = 1;
      FUN_18003d670(&local_68);
    }
    if (*local_40 != 0) {
      FUN_180101100(local_40 + 1);
    }
    local_60 = local_40[3];
    local_50 = local_40[4];
    local_48 = (longlong *)0x0;
    lVar4 = local_60;
    while ((longlong *)local_50 != local_48) {
      local_48 = (longlong *)((longlong)local_48 + 1);
      FUN_180101100(lVar4);
      lVar4 = lVar4 + 8;
    }
    if (local_40[2] != 0) {
      thunk_FUN_1801d3330(local_40[3],local_40[2] << 3,8);
    }
    plVar2 = (longlong *)*local_58;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1800f5960(local_58);
    }
    plVar2 = (longlong *)local_58[1];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(local_58 + 1);
      return param_1;
    }
    return param_1;
  }
  local_b8 = local_78;
  uStack_b0 = uStack_70;
  local_78 = local_58[2];
  local_88 = *(undefined4 *)local_58;
  uStack_84 = *(undefined4 *)((longlong)local_58 + 4);
  uStack_80 = *(undefined4 *)(local_58 + 1);
  uStack_7c = *(undefined4 *)((longlong)local_58 + 0xc);
  local_90 = *param_5;
  local_a0 = param_5[1];
  local_60 = param_5[2];
  local_98 = param_5[3];
  local_50 = CONCAT71(local_50._1_7_,(char)param_5[4]);
  uVar1 = *(undefined4 *)(param_6 + 1);
  local_48 = local_68;
  local_a8 = local_68;
  if (*param_6 == 2) {
    uVar5 = 0;
  }
  else {
    if ((*param_6 & 1) != 0) {
      uStack_100 = *(undefined4 *)(param_6 + 0xd);
      local_108 = *(ulonglong *)(param_6 + 5);
      uVar6 = 1;
      uVar5 = 0;
      goto LAB_1800d06dd;
    }
    uVar5 = 1;
  }
  uVar6 = 0;
LAB_1800d06dd:
  lVar4 = FUN_1800c9dc0(&local_88);
  *(undefined1 *)(lVar4 + 0x69) = uVar5;
  *(undefined4 *)(lVar4 + 0x6a) = uVar1;
  *(undefined1 *)(lVar4 + 0x6e) = uVar6;
  *(undefined4 *)(lVar4 + 0x6f) = uVar1;
  *(ulonglong *)(lVar4 + 0x73) = local_108;
  *(undefined4 *)(lVar4 + 0x7b) = uStack_100;
  lVar4 = FUN_1800c9dc0(&local_88);
  *(undefined1 *)(lVar4 + 0x7f) = param_7;
  lVar4 = FUN_1800c9dc0(&local_88);
  *(undefined1 *)(lVar4 + 0x68) = 0;
  local_d8 = local_78;
  local_e8 = local_88;
  uStack_e4 = uStack_84;
  uStack_e0 = uStack_80;
  uStack_dc = uStack_7c;
  local_f8 = (undefined4)local_b8;
  uStack_f4 = local_b8._4_4_;
  uStack_f0 = (undefined4)uStack_b0;
  uStack_ec = uStack_b0._4_4_;
  uStack_100 = uStack_c0;
  uStack_fc = uStack_bc;
  *(undefined4 *)(param_1 + 2) = (undefined4)local_b8;
  *(undefined4 *)((longlong)param_1 + 0x14) = local_b8._4_4_;
  *(undefined4 *)(param_1 + 3) = (undefined4)uStack_b0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_b0._4_4_;
  *(undefined4 *)param_1 = (undefined4)local_c8;
  *(undefined4 *)((longlong)param_1 + 4) = local_c8._4_4_;
  *(undefined4 *)(param_1 + 1) = uStack_c0;
  *(undefined4 *)((longlong)param_1 + 0xc) = uStack_bc;
  param_1[6] = local_78;
  *(undefined4 *)(param_1 + 4) = local_88;
  *(undefined4 *)((longlong)param_1 + 0x24) = uStack_84;
  *(undefined4 *)(param_1 + 5) = uStack_80;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_7c;
  uVar1 = *(undefined4 *)((longlong)param_5 + 0x21);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_5 + 0x24);
  *(undefined4 *)((longlong)param_1 + 0x69) = uVar1;
  *(undefined4 *)(param_1 + 8) = 1000000000;
  param_1[9] = local_90;
  param_1[10] = local_a0;
  param_1[0xb] = local_60;
  param_1[0xc] = local_98;
  *(undefined1 *)(param_1 + 0xd) = (undefined1)local_50;
  param_1[0xe] = local_48;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)((longlong)param_1 + 0x89) = param_7;
  *(undefined1 *)((longlong)param_1 + 0x8a) = param_8;
  if (*local_40 != 0) {
    FUN_180101100(local_40 + 1);
  }
  local_60 = local_40[3];
  local_50 = local_40[4];
  local_48 = (longlong *)0x0;
  lVar4 = local_60;
  while ((longlong *)local_50 != local_48) {
    local_48 = (longlong *)((longlong)local_48 + 1);
    FUN_180101100(lVar4);
    lVar4 = lVar4 + 8;
  }
  if (local_40[2] != 0) {
    thunk_FUN_1801d3330(local_40[3],local_40[2] << 3,8);
  }
  return param_1;
}


