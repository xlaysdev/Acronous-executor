/* FUN_180124870 @ 180124870 */

longlong * FUN_180124870(longlong *param_1,char *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  char *pcVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  uint local_140;
  uint uStack_13c;
  uint local_138;
  int iStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  char local_e0;
  undefined3 local_df;
  undefined1 uStack_dc;
  undefined3 uStack_db;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  ulonglong local_50;
  undefined8 *local_48;
  longlong local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*param_2 == '\0') {
    *param_1 = 5;
    return param_1;
  }
  plVar1 = (longlong *)(param_2 + 0x10);
  if (*param_2 == '\x01') {
    lVar5 = *(longlong *)(param_2 + 0x18);
    LOCK();
    plVar2 = (longlong *)(lVar5 + 0x10);
    lVar16 = *plVar2;
    *plVar2 = 2;
    UNLOCK();
    if (lVar16 != 2) {
      FUN_180162080(lVar5 + 0x18);
    }
    if (*plVar1 != 0) {
      FUN_180128ef0(&local_b8,plVar1);
      if (local_b8 == 2) goto LAB_1801249c3;
      if ((local_b8 & 1) != 0) {
        if (lStack_b0 != 0) {
          if (*(ulonglong *)(param_2 + 8) < 0xfffffffffffffffe) {
            *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) - lStack_a0;
          }
          *param_1 = 3;
          param_1[1] = lStack_b0;
          param_1[2] = local_a8;
          param_1[3] = lStack_a0;
          param_1[4] = local_98;
          return param_1;
        }
        goto LAB_180124d42;
      }
    }
    lVar16 = *(longlong *)(param_2 + 0x20);
    local_40 = lVar16;
    if (*(char *)(lVar16 + 0xa8) == '\0') {
      puVar17 = *(undefined8 **)*param_3;
      local_50 = (*(code *)*puVar17)(((undefined8 *)*param_3)[1]);
      LOCK();
      cVar4 = *(char *)(lVar16 + 0x88);
      *(char *)(lVar16 + 0x88) = '\x01';
      UNLOCK();
      if (cVar4 == '\0') {
        local_48 = puVar17;
        if (*(longlong *)(lVar16 + 0x78) != 0) {
          (**(code **)(*(longlong *)(lVar16 + 0x78) + 0x18))(*(undefined8 *)(lVar16 + 0x80));
        }
        *(ulonglong *)(local_40 + 0x78) = local_50;
        *(undefined8 **)(local_40 + 0x80) = local_48;
        LOCK();
        *(undefined1 *)(local_40 + 0x88) = 0;
        UNLOCK();
        if (*(char *)(local_40 + 0xa8) == '\0') goto LAB_1801249c3;
      }
      else {
        (**(code **)(local_50 + 0x18))(puVar17);
      }
    }
    LOCK();
    cVar4 = *(char *)(local_40 + 0x70);
    *(char *)(local_40 + 0x70) = '\x01';
    UNLOCK();
    lVar16 = 5;
    if (cVar4 == '\0') {
      lVar16 = *(longlong *)(local_40 + 0x10);
      *(undefined8 *)(local_40 + 0x10) = 3;
      if (lVar16 == 3) {
        LOCK();
        *(undefined1 *)(local_40 + 0x70) = 0;
        UNLOCK();
        *param_1 = 5;
        return param_1;
      }
      lVar5 = *(longlong *)(local_40 + 0x58);
      lVar6 = *(longlong *)(local_40 + 0x60);
      lVar7 = *(longlong *)(local_40 + 0x18);
      lVar8 = *(longlong *)(local_40 + 0x20);
      lVar9 = *(longlong *)(local_40 + 0x28);
      lVar10 = *(longlong *)(local_40 + 0x30);
      lVar11 = *(longlong *)(local_40 + 0x38);
      lVar12 = *(longlong *)(local_40 + 0x40);
      lVar13 = *(longlong *)(local_40 + 0x48);
      lVar14 = *(longlong *)(local_40 + 0x50);
      LOCK();
      *(undefined1 *)(local_40 + 0x70) = 0;
      UNLOCK();
      if (lVar16 == 4) goto LAB_1801249c3;
      param_1[0xb] = *(longlong *)(local_40 + 0x68);
      param_1[9] = lVar5;
      param_1[10] = lVar6;
      param_1[7] = lVar13;
      param_1[8] = lVar14;
      param_1[5] = lVar11;
      param_1[6] = lVar12;
      param_1[3] = lVar9;
      param_1[4] = lVar10;
      param_1[1] = lVar7;
      param_1[2] = lVar8;
    }
    *param_1 = lVar16;
    return param_1;
  }
  pcVar3 = param_2 + 0x18;
  if (param_2[1] != '\0') {
LAB_180124968:
    FUN_18013a2c0(&local_140,pcVar3,param_3);
    local_40 = CONCAT44(uStack_13c,local_140);
    if (local_40 == 5) {
LAB_1801249c3:
      *param_1 = 6;
      return param_1;
    }
    if (local_140 != 4) {
      lStack_b0 = CONCAT44(iStack_134,local_138);
      local_a8 = CONCAT44(uStack_12c,iStack_130);
      lStack_a0 = local_128;
      local_98 = lStack_120;
      lStack_90 = local_118;
      local_88 = CONCAT44(uStack_10c,local_110);
      uStack_80 = CONCAT44(uStack_104,uStack_108);
      local_78 = CONCAT44(uStack_fc,local_100);
      uStack_70 = CONCAT44(uStack_f4,uStack_f8);
      local_68 = CONCAT44(uStack_ec,local_f0);
      uStack_60 = uStack_e8;
      uStack_5c = uStack_e4;
      FUN_1801233e0(plVar1);
      lVar16 = 5;
      if ((int)local_40 != 3) {
        local_148 = CONCAT44(uStack_5c,uStack_60);
        local_158 = uStack_70;
        lStack_150 = local_68;
        local_168 = uStack_80;
        lStack_160 = local_78;
        local_178 = lStack_90;
        lStack_170 = local_88;
        local_188 = lStack_a0;
        lStack_180 = local_98;
        local_198 = lStack_b0;
        lStack_190 = local_a8;
        lVar16 = local_40;
      }
      *param_1 = lVar16;
      param_1[1] = local_198;
      param_1[2] = lStack_190;
      param_1[3] = local_188;
      param_1[4] = lStack_180;
      param_1[5] = local_178;
      param_1[6] = lStack_170;
      param_1[7] = local_168;
      param_1[8] = lStack_160;
      param_1[9] = local_158;
      param_1[10] = lStack_150;
      param_1[0xb] = local_148;
      return param_1;
    }
    if ((((local_138 & 0xff) - 1 < 2) || (iStack_134 = iStack_130, (char)local_138 == '\0')) &&
       (iStack_134 == 0)) {
      *param_1 = 5;
      FUN_180116070();
      return param_1;
    }
    local_a8 = FUN_180115be0();
    goto LAB_180124d42;
  }
  FUN_18013a600(&local_140,pcVar3);
  if ((local_140 & 0xff) == 7) goto LAB_1801249c3;
  local_50 = CONCAT44(iStack_134,local_138);
  local_58 = CONCAT44(uStack_12c,iStack_130);
  if ((local_140 & 0xff) == 5) {
    local_48 = (undefined8 *)lStack_120;
    local_40 = local_128;
    FUN_18013a9d0(&local_b8,pcVar3);
    if ((char)local_b8 != '\x05') {
      FUN_180116070(&local_b8);
    }
    if (*(ulonglong *)(param_2 + 8) < 0xfffffffffffffffe) {
      *(ulonglong *)(param_2 + 8) = *(ulonglong *)(param_2 + 8) - local_40;
    }
    FUN_180123180(plVar1);
    *param_1 = 3;
    param_1[1] = local_50;
    param_1[2] = local_58;
    param_1[3] = local_40;
    param_1[4] = (longlong)local_48;
    return param_1;
  }
  uVar15 = local_140 & 0xff;
  if (uVar15 == 6) {
    param_2[1] = '\x01';
    goto LAB_180124968;
  }
  local_e0 = (char)local_140;
  local_df = (undefined3)(local_140 >> 8);
  uStack_dc = (undefined1)uStack_13c;
  uStack_db = (undefined3)(uStack_13c >> 8);
  local_c8 = local_128;
  local_c0 = lStack_120;
  if (uVar15 == 0) {
LAB_180124bdc:
    if ((int)local_50 == 0) {
      *param_1 = 5;
      FUN_180116070(&local_e0);
      return param_1;
    }
  }
  else if ((uVar15 == 1) || ((char)local_140 == '\x02')) {
    local_50 = (ulonglong)uStack_13c;
    goto LAB_180124bdc;
  }
  local_a8 = FUN_180115e00(&local_e0);
LAB_180124d42:
  *param_1 = 4;
  param_1[1] = local_a8;
  return param_1;
}


