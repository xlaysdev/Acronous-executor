/* FUN_180095890 @ 180095890 */

undefined8 * FUN_180095890(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
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
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
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
  undefined4 local_38;
  undefined3 uStack_34;
  ulonglong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if ((int)*param_2 == 9) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_18020f270);
  }
  FUN_18009d050(&local_138);
  if ((char)local_c8 == '\x03') {
    *(undefined1 *)(param_1 + 0xe) = 3;
  }
  else {
    local_48 = local_c8;
    local_58 = local_d8;
    uStack_50 = uStack_d0;
    local_68 = local_e8;
    uStack_60 = uStack_e0;
    local_78 = local_f8;
    uStack_70 = uStack_f0;
    local_88 = local_108;
    uStack_84 = uStack_104;
    uStack_80 = uStack_100;
    uStack_7c = uStack_fc;
    local_98 = local_118;
    uStack_94 = uStack_114;
    uStack_90 = uStack_110;
    uStack_8c = uStack_10c;
    local_a8 = local_128;
    uStack_a4 = uStack_124;
    uStack_a0 = uStack_120;
    uStack_9c = uStack_11c;
    local_b8 = local_138;
    uStack_b4 = uStack_134;
    uStack_b0 = uStack_130;
    uStack_ac = uStack_12c;
    uVar1 = *param_2;
    if (uVar1 == 9) {
      local_30 = (ulonglong *)uVar1;
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-util-0.3.34\\src\\future\\future\\map.rs"
                    ,0x28,&DAT_18020f220);
    }
    lVar2 = 1;
    if (5 < uVar1) {
      lVar2 = uVar1 - 6;
    }
    local_30 = param_2;
    if (lVar2 == 1) {
      FUN_180097a00(param_2);
    }
    else if (lVar2 == 0) {
      FUN_180098d50(param_2 + 1);
    }
    *local_30 = 9;
    local_c8 = local_48;
    local_d8 = local_58;
    uStack_d0 = uStack_50;
    local_e8 = local_68;
    uStack_e0 = uStack_60;
    local_f8 = local_78;
    uStack_f0 = uStack_70;
    local_108 = local_88;
    uStack_104 = uStack_84;
    uStack_100 = uStack_80;
    uStack_fc = uStack_7c;
    local_118 = local_98;
    uStack_114 = uStack_94;
    uStack_110 = uStack_90;
    uStack_10c = uStack_8c;
    local_128 = local_a8;
    uStack_124 = uStack_a4;
    uStack_120 = uStack_a0;
    uStack_11c = uStack_9c;
    local_138 = local_b8;
    uStack_134 = uStack_b4;
    uStack_130 = uStack_b0;
    uStack_12c = uStack_ac;
    cVar3 = (char)local_48;
    if (cVar3 == '\x02') {
      local_30 = (ulonglong *)uVar1;
      FUN_1800e4700(&local_138);
    }
    else {
      local_148 = local_58;
      uStack_140 = uStack_50;
      local_158 = local_68;
      uStack_150 = uStack_60;
      local_168 = local_78;
      uStack_160 = uStack_70;
      local_1a8 = CONCAT44(uStack_b4,local_b8);
      uStack_1a0 = CONCAT44(uStack_ac,uStack_b0);
      local_198 = CONCAT44(uStack_a4,local_a8);
      uStack_190 = CONCAT44(uStack_9c,uStack_a0);
      local_188 = CONCAT44(uStack_94,local_98);
      uStack_180 = CONCAT44(uStack_8c,uStack_90);
      local_178 = CONCAT44(uStack_84,local_88);
      uStack_170 = CONCAT44(uStack_7c,uStack_80);
      uStack_34 = (undefined3)((ulonglong)local_48 >> 0x28);
      local_38 = local_48._1_4_;
    }
    param_1[0xc] = local_148;
    param_1[0xd] = uStack_140;
    param_1[10] = local_158;
    param_1[0xb] = uStack_150;
    param_1[8] = local_168;
    param_1[9] = uStack_160;
    param_1[6] = local_178;
    param_1[7] = uStack_170;
    param_1[4] = local_188;
    param_1[5] = uStack_180;
    param_1[2] = local_198;
    param_1[3] = uStack_190;
    *param_1 = local_1a8;
    param_1[1] = uStack_1a0;
    *(char *)(param_1 + 0xe) = cVar3;
    *(undefined4 *)((longlong)param_1 + 0x71) = local_38;
    *(uint *)((longlong)param_1 + 0x74) = CONCAT31(uStack_34,local_38._3_1_);
  }
  return param_1;
}


