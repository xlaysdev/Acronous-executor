/* FUN_1800e60a0 @ 1800e60a0 */

void FUN_1800e60a0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
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
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  uVar1 = (**(code **)(param_1[1] + 0x20))(*param_1);
  local_38 = uVar1;
  local_30 = param_2;
  FUN_180178c10(&local_128,param_1[2],*(undefined4 *)(param_1 + 3),
                &PTR_s_C__Users_burne__cargo_registry_s_180215d70);
  local_58 = local_c8;
  uStack_50 = uStack_c0;
  local_68 = local_d8;
  uStack_60 = uStack_d0;
  local_78 = local_e8;
  uStack_70 = uStack_e0;
  local_88 = local_f8;
  uStack_84 = uStack_f4;
  uStack_80 = uStack_f0;
  uStack_7c = uStack_ec;
  local_98 = local_108;
  uStack_94 = uStack_104;
  uStack_90 = uStack_100;
  uStack_8c = uStack_fc;
  local_a8 = local_118;
  uStack_a4 = uStack_114;
  uStack_a0 = uStack_110;
  uStack_9c = uStack_10c;
  local_b8 = local_128;
  uStack_b4 = uStack_124;
  uStack_b0 = uStack_120;
  uStack_ac = uStack_11c;
  local_48 = uVar1;
  uStack_40 = param_2;
  FUN_180027490();
  puVar2 = (undefined8 *)thunk_FUN_1801d32d0(0x80,8);
  if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x80);
  }
  puVar2[0xe] = local_48;
  puVar2[0xf] = uStack_40;
  puVar2[0xc] = local_58;
  puVar2[0xd] = uStack_50;
  puVar2[10] = local_68;
  puVar2[0xb] = uStack_60;
  puVar2[8] = local_78;
  puVar2[9] = uStack_70;
  puVar2[6] = CONCAT44(uStack_84,local_88);
  puVar2[7] = CONCAT44(uStack_7c,uStack_80);
  puVar2[4] = CONCAT44(uStack_94,local_98);
  puVar2[5] = CONCAT44(uStack_8c,uStack_90);
  puVar2[2] = CONCAT44(uStack_a4,local_a8);
  puVar2[3] = CONCAT44(uStack_9c,uStack_a0);
  *puVar2 = CONCAT44(uStack_b4,local_b8);
  puVar2[1] = CONCAT44(uStack_ac,uStack_b0);
  return;
}


