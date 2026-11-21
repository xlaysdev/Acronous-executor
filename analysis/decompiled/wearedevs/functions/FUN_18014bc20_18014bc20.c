/* FUN_18014bc20 @ 18014bc20 */

undefined8 *
FUN_18014bc20(undefined8 *param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  short sStack_c0;
  undefined2 uStack_be;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
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
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 *local_40;
  undefined2 local_38;
  undefined2 uStack_36;
  undefined2 local_34;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_31 = 1;
  local_48 = param_2;
  local_40 = param_3;
  FUN_1801adfb0(&local_b8);
  local_c8 = local_58;
  sStack_c0 = (short)uStack_50;
  uStack_be = (undefined2)((ulonglong)uStack_50 >> 0x10);
  uStack_bc = (undefined2)((ulonglong)uStack_50 >> 0x20);
  uStack_ba = (undefined2)((ulonglong)uStack_50 >> 0x30);
  local_d8 = local_68;
  uStack_d0 = uStack_60;
  uStack_e0 = uStack_70;
  local_f8 = local_88;
  uStack_f0 = uStack_80;
  local_108 = local_98;
  uStack_100 = uStack_90;
  local_118 = local_a8;
  uStack_110 = uStack_a0;
  local_128 = (undefined4)local_b8;
  uStack_124 = local_b8._4_4_;
  uStack_120 = (undefined4)uStack_b0;
  uStack_11c = uStack_b0._4_4_;
  local_31 = 1;
  FUN_1801ae010(&local_128,&local_b8,3);
  lVar5 = CONCAT44(uStack_124,local_128);
  if (*(short *)(local_48 + 0x98) != 0) {
    if (lVar5 != 3) {
      sStack_c0 = *(short *)(local_48 + 0x98);
    }
    local_34 = uStack_ba;
    _local_38 = CONCAT22(uStack_bc,uStack_be);
  }
  if (lVar5 == 3) {
    *(undefined2 *)(param_1 + 1) = 0x100;
    *(undefined4 *)((longlong)param_1 + 0xc) = param_4;
    *(undefined4 *)(param_1 + 2) = 1;
    *param_1 = 3;
    FUN_1800430f0(local_40);
  }
  else {
    uStack_50 = CONCAT26(uStack_ba,CONCAT24(uStack_bc,CONCAT22(uStack_be,sStack_c0)));
    uStack_60 = uStack_d0;
    local_58 = local_c8;
    uStack_70 = uStack_e0;
    local_68 = local_d8;
    uStack_80 = uStack_f0;
    uStack_90 = uStack_100;
    local_88 = local_f8;
    uStack_a0 = uStack_110;
    local_98 = local_108;
    uStack_b0 = CONCAT44(uStack_11c,uStack_120);
    local_a8 = local_118;
    local_b8 = lVar5;
    FUN_1800430f0(&local_b8);
    uVar1 = *(undefined4 *)(local_40 + 10);
    uVar2 = *(undefined4 *)((longlong)local_40 + 0x54);
    local_68 = local_40[10];
    uVar3 = *(undefined4 *)(local_40 + 0xb);
    uVar4 = *(undefined4 *)((longlong)local_40 + 0x5c);
    uStack_60 = local_40[0xb];
    local_78 = local_40[8];
    uStack_70 = local_40[9];
    local_b8 = *local_40;
    uStack_b0 = local_40[1];
    local_a8 = local_40[2];
    uStack_a0 = local_40[3];
    local_98 = local_40[4];
    uStack_90 = local_40[5];
    local_88 = local_40[6];
    uStack_80 = local_40[7];
    param_1[0xc] = local_58;
    param_1[0xd] = uStack_50;
    *(undefined4 *)(param_1 + 10) = uVar1;
    *(undefined4 *)((longlong)param_1 + 0x54) = uVar2;
    *(undefined4 *)(param_1 + 0xb) = uVar3;
    *(undefined4 *)((longlong)param_1 + 0x5c) = uVar4;
    param_1[8] = local_78;
    param_1[9] = uStack_70;
    param_1[6] = local_88;
    param_1[7] = uStack_80;
    param_1[4] = local_98;
    param_1[5] = uStack_90;
    param_1[2] = local_a8;
    param_1[3] = uStack_a0;
    *param_1 = local_b8;
    param_1[1] = uStack_b0;
  }
  FUN_1800663c0(local_48);
  return param_1;
}


