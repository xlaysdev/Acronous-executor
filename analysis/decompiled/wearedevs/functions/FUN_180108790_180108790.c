/* FUN_180108790 @ 180108790 */

void FUN_180108790(undefined8 *param_1,ulonglong *param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 *unaff_RBX;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 local_e8;
  undefined1 uStack_e7;
  undefined6 uStack_e6;
  undefined8 *puStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined2 local_98;
  undefined6 uStack_96;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 *local_40;
  uint local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_34 = (uint)(byte)param_2[6];
  if ((byte)param_2[6] != 0) {
    if (local_34 == 1) {
      unaff_RBX = (undefined8 *)(ulonglong)*(byte *)((longlong)param_2 + 0x31);
    }
    else {
      puVar1 = (undefined8 *)param_2[7];
      FUN_180027490();
      local_40 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
      if (local_40 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x20);
      }
      unaff_RBX = puVar1 + 3;
      (**(code **)*puVar1)(&local_e8,unaff_RBX,puVar1[1],puVar1[2]);
      *(undefined4 *)(local_40 + 2) = (undefined4)local_d8;
      *(undefined4 *)((longlong)local_40 + 0x14) = local_d8._4_4_;
      *(undefined4 *)(local_40 + 3) = (undefined4)uStack_d0;
      *(undefined4 *)((longlong)local_40 + 0x1c) = uStack_d0._4_4_;
      *local_40 = CONCAT62(uStack_e6,CONCAT11(uStack_e7,local_e8));
      local_40[1] = puStack_e0;
    }
  }
  (**(code **)param_2[8])(&local_e8,param_2 + 0xb,param_2[9],param_2[10]);
  local_118 = CONCAT62(uStack_e6,CONCAT11(uStack_e7,local_e8));
  uStack_110 = puStack_e0;
  local_50 = local_d8;
  local_48 = uStack_d0;
  (**(code **)param_2[0xc])(&local_88,param_2 + 0xf,param_2[0xd],param_2[0xe]);
  local_a8 = (undefined4)local_78;
  uStack_a4 = local_78._4_4_;
  uStack_a0 = (undefined4)uStack_70;
  uStack_9c = uStack_70._4_4_;
  local_b8 = local_88;
  uStack_b0 = uStack_80;
  local_98 = (undefined2)param_2[0x10];
  local_e8 = (undefined1)local_34;
  uStack_e7 = SUB81(unaff_RBX,0);
  puStack_e0 = local_40;
  local_d8 = local_118;
  uStack_d0 = uStack_110;
  local_c8 = local_50;
  uStack_c0 = local_48;
  local_88 = 0x8000000000000000;
  uVar2 = 2;
  if ((longlong)*param_2 < 0) {
    uVar2 = *param_2 ^ 0x8000000000000000;
  }
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      (**(code **)param_2[1])(&uStack_80,param_2 + 4,param_2[2],param_2[3]);
      local_60 = CONCAT71(local_60._1_7_,(char)param_2[5]);
      local_88 = 0x8000000000000001;
    }
    else {
      FUN_1801ed500(&local_100,param_2);
      FUN_1801ed500(&local_130,param_2 + 3);
      local_78 = local_f0;
      local_88 = local_100;
      uStack_80 = uStack_f8;
      uStack_70 = local_130;
      local_68 = uStack_128;
      local_60 = local_120;
    }
  }
  param_1[0x10] = CONCAT62(uStack_96,local_98);
  param_1[0xe] = CONCAT44(uStack_a4,local_a8);
  param_1[0xf] = CONCAT44(uStack_9c,uStack_a0);
  param_1[0xc] = local_b8;
  param_1[0xd] = uStack_b0;
  param_1[10] = local_c8;
  param_1[0xb] = uStack_c0;
  param_1[8] = local_d8;
  param_1[9] = uStack_d0;
  param_1[6] = CONCAT62(uStack_e6,CONCAT11(uStack_e7,local_e8));
  param_1[7] = puStack_e0;
  *param_1 = local_88;
  param_1[1] = uStack_80;
  param_1[2] = local_78;
  param_1[3] = uStack_70;
  param_1[4] = local_68;
  param_1[5] = local_60;
  return;
}


