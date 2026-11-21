/* FUN_180032690 @ 180032690 */

void FUN_180032690(undefined8 param_1,undefined1 param_2,undefined8 *param_3,undefined8 param_4)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  int local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  int local_158 [2];
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined1 local_138 [8];
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  int local_118;
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
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8 [2];
  undefined8 local_a8;
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
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong *local_58;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_4a = param_2;
  FUN_180028ab0(local_158,&PTR_FUN_180206220,&local_4a,param_1);
  if (local_158[0] == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0("Cannot start a runtime from within a runtime. This happens because a function (like `block_on`) attempted to block the current thread while the thread is being used to drive asynchronous tasks."
                  ,0x183,param_4);
  }
  local_128 = local_148;
  uStack_124 = uStack_144;
  uStack_120 = uStack_140;
  uStack_11c = uStack_13c;
  uStack_130 = uStack_150;
  local_c8 = *(undefined4 *)param_3;
  uStack_c4 = *(undefined4 *)((longlong)param_3 + 4);
  uStack_c0 = *(undefined4 *)(param_3 + 1);
  uStack_bc = *(undefined4 *)((longlong)param_3 + 0xc);
  local_b8[0] = param_3[2];
  plVar3 = (longlong *)FUN_180179870(*param_3);
  do {
    FUN_18016a6c0(&local_1a0,CONCAT44(uStack_bc,uStack_c0),plVar3);
    if (local_1a0 != 2) {
      local_d8 = local_160;
      local_e8 = local_170;
      uStack_e4 = uStack_16c;
      uStack_e0 = uStack_168;
      uStack_dc = uStack_164;
      local_f8 = local_180;
      uStack_f4 = uStack_17c;
      uStack_f0 = uStack_178;
      uStack_ec = uStack_174;
      local_108 = local_190;
      uStack_104 = uStack_18c;
      uStack_100 = uStack_188;
      uStack_fc = uStack_184;
      local_118 = local_1a0;
      uStack_114 = uStack_19c;
      uStack_110 = uStack_198;
      uStack_10c = uStack_194;
      lVar1 = *plVar3;
      local_49 = 1;
      local_a8 = (longlong *)FUN_1801e04b0();
      local_58 = local_a8;
      FUN_180167340(lVar1 + 0x80,local_a8[2]);
      LOCK();
      *local_58 = *local_58 + -1;
      UNLOCK();
      if (*local_58 == 0) {
        local_49 = 1;
        FUN_1801e3970(&local_a8);
      }
      local_68 = local_d8;
      local_78 = local_e8;
      uStack_74 = uStack_e4;
      uStack_70 = uStack_e0;
      uStack_6c = uStack_dc;
      local_88 = local_f8;
      uStack_84 = uStack_f4;
      uStack_80 = uStack_f0;
      uStack_7c = uStack_ec;
      local_98 = local_108;
      uStack_94 = uStack_104;
      uStack_90 = uStack_100;
      uStack_8c = uStack_fc;
      local_a8 = (longlong *)CONCAT44(uStack_114,local_118);
      uStack_a0 = uStack_110;
      uStack_9c = uStack_10c;
      local_49 = 0;
      FUN_1800356e0(&local_a8,local_b8[0],&PTR_s_C__Users_burne__cargo_registry_s_180206418);
LAB_1800328d1:
      FUN_180031b90(local_138);
      return;
    }
    FUN_180167090(&local_118,CONCAT44(uStack_bc,uStack_c0));
    local_78 = local_e8;
    uStack_74 = uStack_e4;
    uStack_70 = uStack_e0;
    uStack_6c = uStack_dc;
    local_88 = local_f8;
    uStack_84 = uStack_f4;
    uStack_80 = uStack_f0;
    uStack_7c = uStack_ec;
    local_98 = local_108;
    uStack_94 = uStack_104;
    uStack_90 = uStack_100;
    uStack_8c = uStack_fc;
    local_a8 = (longlong *)CONCAT44(uStack_114,local_118);
    uStack_a0 = uStack_110;
    uStack_9c = uStack_10c;
    local_d0 = &local_a8;
    bVar2 = FUN_18000d3a0(&local_4b,&local_d0,local_b8);
    if (bVar2 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("Failed to `Enter::block_on`",0x1b,&local_4b,&DAT_180206200,
                    &PTR_s_C__Users_burne__cargo_registry_s_180206450);
    }
    if ((bVar2 & 1) != 0) {
      FUN_1801674f0(&local_a8);
      if (CONCAT44(uStack_84,local_88) != 0) {
        (**(code **)(CONCAT44(uStack_84,local_88) + 0x18))(CONCAT44(uStack_7c,uStack_80));
      }
      goto LAB_1800328d1;
    }
    FUN_1801674f0(&local_a8);
    if (CONCAT44(uStack_84,local_88) != 0) {
      (**(code **)(CONCAT44(uStack_84,local_88) + 0x18))(CONCAT44(uStack_7c,uStack_80));
    }
  } while( true );
}


