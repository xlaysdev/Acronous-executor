/* FUN_180102f20 @ 180102f20 */

void FUN_180102f20(undefined8 *param_1,undefined4 *param_2)

{
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  char local_148;
  undefined1 uStack_147;
  undefined2 uStack_146;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 *local_30;
  longlong *local_28;
  undefined1 local_1a;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_158 = param_1[10];
  local_168 = param_1[8];
  uStack_160 = param_1[9];
  local_1a8 = *param_1;
  uStack_1a0 = param_1[1];
  local_198 = *(undefined4 *)(param_1 + 2);
  uStack_194 = *(undefined4 *)((longlong)param_1 + 0x14);
  uStack_190 = *(undefined4 *)(param_1 + 3);
  uStack_18c = *(undefined4 *)((longlong)param_1 + 0x1c);
  local_188 = *(undefined4 *)(param_1 + 4);
  uStack_184 = *(undefined4 *)((longlong)param_1 + 0x24);
  uStack_180 = *(undefined4 *)(param_1 + 5);
  uStack_17c = *(undefined4 *)((longlong)param_1 + 0x2c);
  local_178 = *(undefined4 *)(param_1 + 6);
  uStack_174 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_170 = *(undefined4 *)(param_1 + 7);
  uStack_16c = *(undefined4 *)((longlong)param_1 + 0x3c);
  *(undefined1 *)param_1 = 0;
  param_1[2] = &PTR_LAB_1802399e8;
  param_1[3] = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = &PTR_LAB_1802399e8;
  param_1[7] = "/";
  param_1[8] = 1;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0xffff;
  local_1a = 1;
  local_30 = param_2;
  FUN_1801ac790(&local_e8,&local_1a8);
  if ((char)local_e8 == '\x02') {
    local_28 = (longlong *)CONCAT44(uStack_dc,uStack_e0);
    (**(code **)(*local_28 + 0x20))(local_28[3],local_28[1],local_28[2]);
    thunk_FUN_1801d3330(local_28,0x20,8);
  }
  local_e8 = *local_30;
  uStack_e4 = local_30[1];
  uStack_e0 = local_30[2];
  uStack_dc = local_30[3];
  local_19 = 1;
  FUN_1801b3ac0(&local_148,"/",1);
  local_19 = 1;
  FUN_1801aadd0(&local_88,&local_148);
  if (CONCAT44(uStack_84,local_88) == 0) {
    local_148 = (char)uStack_80;
    local_19 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("slash is a valid path",0x15,&local_148,&DAT_18023b1f8,
                  &PTR_s_C__Users_burne__cargo_registry_s_180239a98);
  }
  local_128 = local_68;
  uStack_124 = uStack_64;
  local_138 = local_78;
  uStack_134 = uStack_74;
  uStack_130 = uStack_70;
  uStack_12c = uStack_6c;
  local_148 = (char)local_88;
  uStack_147 = (undefined1)((uint)local_88 >> 8);
  uStack_146 = (undefined2)((uint)local_88 >> 0x10);
  uStack_144 = uStack_84;
  uStack_140 = uStack_80;
  uStack_13c = uStack_7c;
  if (local_b8 != 0) {
    (**(code **)(local_b8 + 0x20))(uStack_a0,uStack_b0,local_a8);
  }
  local_58 = CONCAT22(uStack_146,CONCAT11(uStack_147,local_148));
  local_b8 = CONCAT44(uStack_144,local_58);
  uStack_b0 = CONCAT44(uStack_13c,uStack_140);
  local_a8 = CONCAT44(uStack_134,local_138);
  uStack_a0 = CONCAT44(uStack_12c,uStack_130);
  uStack_54 = uStack_144;
  uStack_50 = uStack_140;
  uStack_4c = uStack_13c;
  local_68 = local_c8;
  uStack_64 = uStack_c4;
  uStack_60 = uStack_c0;
  uStack_5c = uStack_bc;
  local_78 = local_d8;
  uStack_74 = uStack_d4;
  uStack_70 = uStack_d0;
  uStack_6c = uStack_cc;
  local_88 = local_e8;
  uStack_84 = uStack_e4;
  uStack_80 = uStack_e0;
  uStack_7c = uStack_dc;
  local_19 = 0;
  local_48 = local_a8;
  uStack_40 = uStack_a0;
  FUN_1801ab8a0(&local_148,&local_88);
  if (local_148 == '\x03') {
    local_88 = CONCAT31(local_88._1_3_,uStack_147);
    local_19 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("scheme is valid",0xf,&local_88,&DAT_18023b1b8,
                  &PTR_s_C__Users_burne__cargo_registry_s_180239ac0);
  }
  local_38 = local_f8;
  local_48 = local_108;
  uStack_40 = uStack_100;
  local_88 = CONCAT22(uStack_146,CONCAT11(uStack_147,local_148));
  local_58 = local_118;
  uStack_54 = uStack_114;
  uStack_50 = uStack_110;
  uStack_4c = uStack_10c;
  local_68 = local_128;
  uStack_64 = uStack_124;
  uStack_60 = uStack_120;
  uStack_5c = uStack_11c;
  local_78 = local_138;
  uStack_74 = uStack_134;
  uStack_70 = uStack_130;
  uStack_6c = uStack_12c;
  uStack_84 = uStack_144;
  uStack_80 = uStack_140;
  uStack_7c = uStack_13c;
  local_28 = param_1;
  FUN_18000adf0(param_1);
  local_28[10] = local_38;
  local_28[8] = local_48;
  local_28[9] = uStack_40;
  local_28[6] = CONCAT44(uStack_54,local_58);
  local_28[7] = CONCAT44(uStack_4c,uStack_50);
  local_28[4] = CONCAT44(uStack_64,local_68);
  local_28[5] = CONCAT44(uStack_5c,uStack_60);
  local_28[2] = CONCAT44(uStack_74,local_78);
  local_28[3] = CONCAT44(uStack_6c,uStack_70);
  *local_28 = CONCAT44(uStack_84,local_88);
  local_28[1] = CONCAT44(uStack_7c,uStack_80);
  return;
}


