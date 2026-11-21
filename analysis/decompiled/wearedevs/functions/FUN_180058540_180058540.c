/* FUN_180058540 @ 180058540 */

longlong * FUN_180058540(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  byte bVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  ulonglong *local_178;
  longlong *plStack_170;
  longlong local_168;
  longlong lStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  longlong lStack_120;
  longlong local_118;
  longlong lStack_110;
  undefined8 *local_108;
  undefined8 uStack_100;
  ulonglong local_f8;
  ulonglong local_f0;
  ulonglong *local_e8;
  longlong *plStack_e0;
  ulonglong *local_d8;
  undefined1 *puStack_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 *local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined8 *local_60;
  longlong *local_58;
  longlong local_50;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar9 = param_2 + 0xb8;
  local_d8 = (ulonglong *)(param_2 + 0xd8);
  puStack_d0 = (undefined1 *)(param_2 + 0x1c0);
  uStack_c0 = *(undefined4 *)(param_2 + 0x1f1);
  lVar12 = param_2 + 0x1e0;
  local_e8 = *(ulonglong **)(param_2 + 0xb8);
  plStack_e0 = *(longlong **)(param_2 + 0xc0);
  uStack_bc = CONCAT13(*(undefined1 *)(param_2 + 0x1f8),
                       (int3)((uint)*(undefined4 *)(param_2 + 500) >> 8));
  local_b8 = CONCAT31(local_b8._1_3_,*(undefined1 *)(param_2 + 0x1fa));
  local_c8 = lVar12;
  FUN_18006a400(&local_178,param_2,param_3,&local_e8);
  if (local_178 == (ulonglong *)0x3) {
    local_58 = plStack_170;
    cVar2 = *(char *)(param_2 + 0x1fd);
    local_41 = 1;
    FUN_180114360(lVar9);
    plVar11 = (longlong *)(param_2 + 0x90);
    local_f8 = *(ulonglong *)(param_2 + 0x98);
    if (local_f8 == 0) {
      uVar10 = 0;
      cVar3 = (char)local_58[2];
      plVar8 = local_58;
    }
    else {
      uVar10 = 0;
      do {
        if ((*(char *)(*plVar11 + uVar10) != '\r') && (*(char *)(*plVar11 + uVar10) != '\n')) {
          local_f0 = uVar10;
          if (local_f8 < uVar10) {
            local_e8 = &local_f0;
            plStack_e0 = (longlong *)&LAB_1800273d0;
            local_d8 = &local_f8;
            puStack_d0 = &LAB_1800273d0;
            local_41 = 1;
                    /* WARNING: Subroutine does not return */
            FUN_180201ee0(&DAT_18020c397,&local_e8,&PTR_s_C__Users_burne__cargo_registry_s_18020c4c0
                         );
          }
          goto LAB_18005880b;
        }
        uVar10 = uVar10 + 1;
      } while (local_f8 != uVar10);
      uVar10 = local_f8;
LAB_18005880b:
      local_41 = 1;
      FUN_1801b2540(plVar11,uVar10);
      uVar10 = *(ulonglong *)(param_2 + 0x98);
      cVar3 = (char)local_58[2];
      plVar8 = local_58;
    }
    local_58 = plVar8;
    if (((cVar3 != '\0') && (cVar2 == '\0')) && (uVar10 == 0)) {
      local_41 = 1;
      FUN_180114410(lVar9);
      *param_1 = 4;
      local_50 = *local_58;
      plVar11 = local_58;
      if (local_50 != 0) {
        local_60 = (undefined8 *)local_58[1];
        if ((code *)*local_60 != (code *)0x0) {
          (*(code *)*local_60)(local_50);
        }
        plVar11 = local_58;
        if (local_60[1] != 0) {
          thunk_FUN_1801d3330(local_50,local_60[1],local_60[2]);
        }
      }
      thunk_FUN_1801d3330(plVar11,0x18,8);
      return param_1;
    }
    if (0x17 < uVar10 && *(longlong *)(param_2 + 0x1a0) == -0x7ffffffffffffffe) {
      pcVar5 = (char *)*plVar11;
      uVar1 = *(undefined8 *)(pcVar5 + 0x10);
      auVar16[0] = -((char)uVar1 == '\r');
      auVar16[1] = -((char)((ulonglong)uVar1 >> 8) == '\n');
      auVar16[2] = -((char)((ulonglong)uVar1 >> 0x10) == 'S');
      auVar16[3] = -((char)((ulonglong)uVar1 >> 0x18) == 'M');
      auVar16[4] = -((char)((ulonglong)uVar1 >> 0x20) == '\r');
      auVar16[5] = -((char)((ulonglong)uVar1 >> 0x28) == '\n');
      auVar16[6] = -((char)((ulonglong)uVar1 >> 0x30) == '\r');
      auVar16[7] = -((char)((ulonglong)uVar1 >> 0x38) == '\n');
      auVar16[8] = 0xff;
      auVar16[9] = 0xff;
      auVar16[10] = 0xff;
      auVar16[0xb] = 0xff;
      auVar16[0xc] = 0xff;
      auVar16[0xd] = 0xff;
      auVar16[0xe] = 0xff;
      auVar16[0xf] = 0xff;
      auVar15[0] = -(*pcVar5 == 'P');
      auVar15[1] = -(pcVar5[1] == 'R');
      auVar15[2] = -(pcVar5[2] == 'I');
      auVar15[3] = -(pcVar5[3] == ' ');
      auVar15[4] = -(pcVar5[4] == '*');
      auVar15[5] = -(pcVar5[5] == ' ');
      auVar15[6] = -(pcVar5[6] == 'H');
      auVar15[7] = -(pcVar5[7] == 'T');
      auVar15[8] = -(pcVar5[8] == 'T');
      auVar15[9] = -(pcVar5[9] == 'P');
      auVar15[10] = -(pcVar5[10] == '/');
      auVar15[0xb] = -(pcVar5[0xb] == '2');
      auVar15[0xc] = -(pcVar5[0xc] == '.');
      auVar15[0xd] = -(pcVar5[0xd] == '0');
      auVar15[0xe] = -(pcVar5[0xe] == '\r');
      auVar15[0xf] = -(pcVar5[0xf] == '\n');
      auVar15 = auVar15 & auVar16;
      if ((ushort)((ushort)(SUB161(auVar15 >> 7,0) & 1) |
                   (ushort)(SUB161(auVar15 >> 0xf,0) & 1) << 1 |
                   (ushort)(SUB161(auVar15 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar15 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar15 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar15 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar15 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar15 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar15 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar15 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar15 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar15 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar15 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar15 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar15 >> 0x77,0) & 1) << 0xe |
                  (ushort)(byte)(auVar15[0xf] >> 7) << 0xf) == 0xffff) {
        plVar8 = (longlong *)FUN_1801157a0();
        local_50 = *local_58;
        plVar11 = local_58;
        if (local_50 != 0) {
          local_60 = (undefined8 *)local_58[1];
          if ((code *)*local_60 != (code *)0x0) {
            (*(code *)*local_60)(local_50);
          }
          plVar11 = local_58;
          if (local_60[1] != 0) {
            thunk_FUN_1801d3330(local_50,local_60[1],local_60[2]);
          }
        }
        thunk_FUN_1801d3330(plVar11,0x18,8);
      }
    }
    *param_1 = 3;
    param_1[1] = (longlong)plVar8;
    return param_1;
  }
  if ((int)local_178 == 4) {
    *param_1 = 5;
    return param_1;
  }
  local_78 = local_108;
  uStack_70 = uStack_100;
  local_88 = local_118;
  uStack_80 = lStack_110;
  local_98 = local_128;
  lStack_90 = lStack_120;
  local_a8 = local_138;
  lStack_a0 = lStack_130;
  local_b8 = local_148;
  uStack_b4 = uStack_144;
  uStack_b0 = uStack_140;
  uStack_ac = uStack_13c;
  local_c8 = CONCAT44(uStack_154,local_158);
  uStack_c0 = uStack_150;
  uStack_bc = uStack_14c;
  local_d8 = (ulonglong *)local_168;
  puStack_d0 = (undefined1 *)lStack_160;
  local_e8 = local_178;
  plStack_e0 = plStack_170;
  *(undefined1 *)(param_2 + 0x1fa) = 0;
  plVar11 = *(longlong **)(param_2 + 0x1e0);
  local_58 = (longlong *)lVar12;
  if (plVar11 != (longlong *)0x0) {
    LOCK();
    *plVar11 = *plVar11 + -1;
    UNLOCK();
    if (*plVar11 == 0) {
      FUN_18003cc40(lVar12);
    }
  }
  puVar7 = local_78;
  *(undefined8 *)(param_2 + 0x1e0) = 0;
  if (*(char *)(param_2 + 0x1fd) != '\x02') {
    *(undefined1 *)(param_2 + 0x1fd) = 1;
  }
  if (uStack_70._1_1_ == '\0') {
    *(undefined1 *)(param_2 + 0x1fd) = 2;
  }
  *(byte *)(param_2 + 0x1fe) = uStack_80._2_1_;
  bVar13 = uStack_70._2_1_ * '\x02';
  local_50 = param_2;
  if (local_78 != (undefined8 *)0x0) {
    if (((byte)uStack_70 & 1 < uStack_80._2_1_) == 0) {
      if (local_78 == (undefined8 *)0xfffffffffffffffe) {
        local_58 = *(longlong **)(param_2 + 0xb8);
        local_60 = *(undefined8 **)(param_2 + 0xc0);
        lVar9 = *(longlong *)(param_2 + 0x138);
        puVar6 = local_60;
joined_r0x000180058bbf:
        local_68 = (ulonglong)puVar6 >> 8;
        if (lVar9 == 1) goto LAB_180058bc5;
LAB_180058a29:
        if ((int)lVar9 == 2) {
          uVar4 = *(uint *)(param_2 + 0x140);
          goto joined_r0x000180058bce;
        }
      }
      else {
        if (local_78 != (undefined8 *)0xffffffffffffffff) {
          local_58 = (longlong *)0x2;
          local_60 = (undefined8 *)((ulonglong)local_78 & 0xffffffff);
          lVar9 = *(longlong *)(param_2 + 0x138);
          puVar6 = local_78;
          goto joined_r0x000180058bbf;
        }
        local_58 = (longlong *)0x4;
        local_60 = (undefined8 *)0x0;
        lVar9 = *(longlong *)(param_2 + 0x138);
        if (lVar9 != 1) goto LAB_180058a29;
LAB_180058bc5:
        uVar4 = *(uint *)(param_2 + 0x140);
joined_r0x000180058bce:
        if ((uVar4 < 2) && (*(longlong *)(param_2 + 0x170) != 0)) {
          FUN_1801b2a70(param_2 + 0x170);
        }
      }
      *(undefined8 *)(local_50 + 0x138) = 2;
      *(longlong **)(local_50 + 0x140) = local_58;
      *(char *)(local_50 + 0x148) = (char)local_60;
      *(int *)(local_50 + 0x149) = (int)local_68;
      *(char *)(local_50 + 0x14f) = (char)(local_68 >> 0x30);
      *(short *)(local_50 + 0x14d) = (short)(local_68 >> 0x20);
      *(undefined8 *)(local_50 + 0x150) = 0;
      *(undefined8 *)(local_50 + 400) = 0;
      *(undefined1 *)(local_50 + 0x198) = 0;
    }
    else {
      if (local_78 == (undefined8 *)0xfffffffffffffffe) {
        local_58 = *(longlong **)(param_2 + 0xb8);
        local_60 = *(undefined8 **)(param_2 + 0xc0);
        lVar9 = *(longlong *)(param_2 + 0x138);
        puVar6 = local_60;
joined_r0x000180058add:
        local_68 = (ulonglong)puVar6 >> 8;
        if (lVar9 == 1) goto LAB_180058ae3;
LAB_1800587e6:
        if ((int)lVar9 == 2) {
          uVar4 = *(uint *)(param_2 + 0x140);
          goto joined_r0x000180058aec;
        }
      }
      else {
        if (local_78 != (undefined8 *)0xffffffffffffffff) {
          local_58 = (longlong *)0x2;
          local_60 = (undefined8 *)((ulonglong)local_78 & 0xffffffff);
          lVar9 = *(longlong *)(param_2 + 0x138);
          puVar6 = local_78;
          goto joined_r0x000180058add;
        }
        local_58 = (longlong *)0x4;
        local_60 = (undefined8 *)0x0;
        lVar9 = *(longlong *)(param_2 + 0x138);
        if (lVar9 != 1) goto LAB_1800587e6;
LAB_180058ae3:
        uVar4 = *(uint *)(param_2 + 0x140);
joined_r0x000180058aec:
        if ((uVar4 < 2) && (*(longlong *)(param_2 + 0x170) != 0)) {
          FUN_1801b2a70(param_2 + 0x170);
        }
      }
      *(undefined8 *)(local_50 + 0x138) = 1;
      *(longlong **)(local_50 + 0x140) = local_58;
      *(char *)(local_50 + 0x148) = (char)local_60;
      *(int *)(local_50 + 0x149) = (int)local_68;
      *(char *)(local_50 + 0x14f) = (char)(local_68 >> 0x30);
      *(short *)(local_50 + 0x14d) = (short)(local_68 >> 0x20);
      *(undefined8 *)(local_50 + 0x150) = 0;
      *(undefined8 *)(local_50 + 400) = 0;
      *(undefined1 *)(local_50 + 0x198) = 0;
      bVar13 = bVar13 | 1;
    }
    *(undefined8 *)(local_50 + 0x160) = 0;
    *(undefined8 *)(local_50 + 0x168) = 0;
    *(undefined8 *)(local_50 + 0x170) = 0;
    lVar12 = local_50;
    goto LAB_180058c78;
  }
  if (*(longlong *)(param_2 + 0x138) == 1) {
    uVar4 = *(uint *)(param_2 + 0x140);
joined_r0x000180058a54:
    if ((uVar4 < 2) && (*(longlong *)(param_2 + 0x170) != 0)) {
      FUN_1801b2a70(param_2 + 0x170);
    }
  }
  else if ((int)*(longlong *)(param_2 + 0x138) == 2) {
    uVar4 = *(uint *)(param_2 + 0x140);
    goto joined_r0x000180058a54;
  }
  lVar12 = local_50;
  *(undefined8 *)(local_50 + 0x138) = 3;
  FUN_180059dc0(lVar9);
  FUN_1800564c0(lVar12,param_3);
LAB_180058c78:
  lVar9 = FUN_180054a00(&local_e8,&DAT_1802093f0);
  if ((lVar9 == 0) || (*(longlong *)(lVar9 + 0x10) != 8)) {
    bVar14 = false;
  }
  else {
    bVar14 = **(longlong **)(lVar9 + 8) == 0x7372656c69617274;
  }
  *(bool *)(lVar12 + 0x1fc) = bVar14;
  param_1[0xc] = local_88;
  param_1[0xd] = uStack_80;
  param_1[10] = local_98;
  param_1[0xb] = lStack_90;
  param_1[8] = local_a8;
  param_1[9] = lStack_a0;
  param_1[6] = CONCAT44(uStack_b4,local_b8);
  param_1[7] = CONCAT44(uStack_ac,uStack_b0);
  param_1[4] = local_c8;
  param_1[5] = CONCAT44(uStack_bc,uStack_c0);
  param_1[2] = (longlong)local_d8;
  param_1[3] = (longlong)puStack_d0;
  *param_1 = (longlong)local_e8;
  param_1[1] = (longlong)plStack_e0;
  param_1[0xe] = (longlong)puVar7;
  *(byte *)(param_1 + 0xf) = bVar13;
  return param_1;
}


