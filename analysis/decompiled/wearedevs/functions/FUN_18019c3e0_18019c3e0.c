/* FUN_18019c3e0 @ 18019c3e0 */

ulonglong * FUN_18019c3e0(ulonglong *param_1,longlong *param_2)

{
  char *pcVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte bVar10;
  undefined8 unaff_RBX;
  uint uVar11;
  longlong *plVar12;
  int *piVar13;
  byte bVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  longlong local_170;
  undefined8 *local_168;
  ulonglong local_160;
  longlong local_158;
  char *pcStack_150;
  longlong local_148;
  char local_138;
  undefined1 uStack_137;
  undefined6 uStack_136;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined8 local_118;
  undefined8 local_108;
  undefined1 local_100;
  undefined2 local_f8;
  char *local_f0;
  undefined8 *local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong local_d0;
  int *local_c8;
  longlong local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  uint local_a8;
  undefined1 local_a1;
  undefined8 local_a0;
  
  local_a0 = 0xfffffffffffffffe;
  local_f0 = (char *)param_2[1];
  lVar8 = param_2[2];
  local_b0 = param_2;
  if ((lVar8 != 0) && (*local_f0 == '[')) {
    if (local_f0[lVar8 + -1] == ']') {
      if ((lVar8 == 1) || (local_f0[1] < -0x40)) {
        local_a1 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(local_f0,lVar8,1,lVar8 + -1,&DAT_180267dc8);
      }
      local_a1 = 1;
      FUN_18019b950(&local_138,local_f0 + 1,lVar8 + -2);
      if (local_138 == '\x01') {
        *(undefined1 *)(param_1 + 1) = uStack_137;
        uVar7 = 0x8000000000000003;
      }
      else {
        param_1[1] = CONCAT17(uStack_130,CONCAT61(uStack_136,uStack_137));
        param_1[2] = CONCAT17(uStack_128,uStack_12f);
        uVar7 = 0x8000000000000002;
      }
      *param_1 = uVar7;
    }
    else {
      *(undefined1 *)(param_1 + 1) = 4;
      *param_1 = 0x8000000000000003;
    }
    lVar8 = *local_b0;
    if (SBORROW8(0,lVar8)) {
      return param_1;
    }
    goto LAB_18019c89d;
  }
  local_a1 = 1;
  FUN_1801aa780(&local_158,local_f0,local_f0 + lVar8);
  uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (SBORROW8(0,local_158)) {
    if (SBORROW8(0,*local_b0)) {
      pcStack_150 = local_f0;
      local_158 = -0x8000000000000000;
      local_148 = lVar8;
    }
    else {
      local_148 = local_b0[2];
      local_158 = *local_b0;
      pcStack_150 = (char *)local_b0[1];
      uVar7 = 0;
    }
  }
  local_a1 = (undefined1)uVar7;
  FUN_18019e280(&local_138,&local_158,0xd4008029ffffffff,0x900000007fffffff);
  uVar9 = CONCAT62(uStack_136,CONCAT11(uStack_137,local_138));
  plVar12 = local_b0;
  if (uVar9 == 0x8000000000000001) {
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 0x8000000000000003;
LAB_18019c88d:
    bVar10 = (byte)uVar7;
    lVar8 = *plVar12;
  }
  else {
    local_b8 = CONCAT71(uStack_12f,uStack_130);
    uVar16 = CONCAT71(uStack_127,uStack_128);
    if (uVar16 == 0) {
      uVar5 = 0;
LAB_18019c862:
      *(undefined1 *)(param_1 + 1) = uVar5;
      *param_1 = 0x8000000000000003;
      if ((uVar9 & 0x7fffffffffffffff) != 0) {
        thunk_FUN_1801d3330(local_b8,uVar9,1);
      }
      goto LAB_18019c88d;
    }
    local_a8 = (uint)uVar7;
    local_138 = '\0';
    uStack_137 = 0;
    uStack_136 = 0;
    uStack_128 = uStack_130;
    uStack_127 = uStack_12f;
    local_118 = 0;
    local_108 = 0x2e0000002e;
    local_100 = 1;
    local_f8 = 1;
    local_e0 = uVar9;
    lVar8 = FUN_18019cd40();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&DAT_180267d58);
    }
    if ((uVar9 != 0) || (lVar8 = FUN_18019cd40(&local_138), uVar9 != 0 && lVar8 != 0)) {
      uVar7 = 0;
      do {
        if (uVar9 == uVar7) goto LAB_18019c63c;
        pcVar1 = (char *)(lVar8 + uVar7);
        uVar7 = uVar7 + 1;
      } while ((byte)(*pcVar1 - 0x30U) < 10);
      iVar6 = FUN_18019bdb0(lVar8);
      if (iVar6 != 2) {
LAB_18019c63c:
        local_138 = '\0';
        uStack_137 = 0;
        uStack_136 = 0;
        uStack_128 = (undefined1)local_b8;
        uStack_127 = (undefined7)(local_b8 >> 8);
        local_118 = 0;
        local_108 = 0x2e0000002e;
        local_100 = 1;
        local_f8 = 1;
        FUN_18019d540(&local_170,&local_138);
        plVar12 = local_b0;
        if (local_168 + local_160 * 2 != (undefined8 *)&DAT_00000010 && local_160 != 0) {
          local_160 = local_160 - ((local_168 + local_160 * 2)[-1] == 0);
        }
        uVar7 = (ulonglong)local_a8;
        if (local_160 < 5) {
          local_d0 = 0;
          local_c8 = (int *)&DAT_00000004;
          local_c0 = 0;
          local_d8 = local_170;
          local_e8 = local_168;
          if (local_160 != 0) {
            puVar17 = local_168;
            do {
              iVar6 = (int)puVar17[1];
              uVar7 = FUN_18019bdb0(*puVar17);
              lVar8 = local_c0;
              if ((uVar7 & 1) == 0) {
                uVar7 = (ulonglong)local_a8;
                if (local_d8 != 0) {
                  thunk_FUN_1801d3330(local_e8,local_d8 << 4,8);
                  lVar8 = local_c0;
                }
                goto LAB_18019c838;
              }
              if (local_c0 == local_d0) {
                FUN_1801fba50(&local_d0);
              }
              local_c8[lVar8] = iVar6;
              local_c0 = lVar8 + 1;
              puVar17 = puVar17 + 2;
            } while (puVar17 != local_168 + local_160 * 2);
          }
          if (local_d8 != 0) {
            thunk_FUN_1801d3330(local_e8,local_d8 << 4,8);
          }
          uVar7 = (ulonglong)local_a8;
          bVar10 = (byte)local_a8;
          if (local_c0 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201b60("a non-empty list of numbers",0x1b,&DAT_180267cf8);
          }
          lVar8 = local_c0 + -1;
          uVar11 = local_c8[local_c0 + -1];
          if (uVar11 <= 0xffffffffU >> ((char)lVar8 * '\b' & 0x1fU)) {
            lVar15 = 0;
LAB_18019c800:
            if (lVar8 * 4 != lVar15) goto code_r0x00018019c809;
            if (lVar8 == 0) goto LAB_18019ca39;
            uVar7 = local_c0 + 0x3ffffffffffffffeU & 0x3fffffffffffffff;
            if (uVar7 < 7) {
              piVar13 = local_c8;
              goto LAB_18019ca11;
            }
            uVar7 = uVar7 + 1;
            uVar9 = uVar7 & 0xfffffffffffffff8;
            piVar13 = local_c8 + uVar9;
            iVar21 = 0;
            iVar22 = 0;
            iVar23 = 0;
            iVar24 = 1;
            iVar25 = 2;
            iVar26 = 3;
            iVar6 = 0;
            iVar18 = 0;
            iVar19 = 0;
            iVar20 = 0;
            uVar16 = 0;
            do {
              auVar28 = *(undefined1 (*) [16])(local_c8 + uVar16);
              piVar3 = local_c8 + uVar16 + 4;
              iVar4 = piVar3[1];
              auVar27._4_4_ = (int)(float)((iVar24 * -8 + 0x18U & 0x18) * 0x800000 + 0x3f800000);
              auVar27._0_4_ = 0x1000000;
              auVar27._8_4_ = (uint)(float)((iVar25 * -8 + 0x18U & 0x18) * 0x800000 + 0x3f800000);
              auVar27._12_4_ = (uint)(float)((iVar26 * -8 + 0x18U & 0x18) * 0x800000 + 0x3f800000);
              uVar11 = uVar11 + auVar28._0_4_ * 0x1000000;
              iVar21 = iVar21 + auVar28._4_4_ * auVar27._4_4_;
              iVar22 = iVar22 + (int)((auVar28._8_8_ & 0xffffffff) * (ulonglong)auVar27._8_4_);
              iVar23 = iVar23 + auVar28._12_4_ * auVar27._12_4_;
              auVar28._4_4_ = iVar4;
              auVar28._0_4_ = iVar4;
              auVar28._8_4_ = piVar3[3];
              auVar28._12_4_ = piVar3[3];
              iVar6 = iVar6 + *piVar3 * 0x1000000;
              iVar18 = iVar18 + iVar4 * auVar27._4_4_;
              iVar19 = iVar19 + (int)((auVar27._8_8_ & 0xffffffff) * (ulonglong)(uint)piVar3[2]);
              iVar20 = iVar20 + (int)((auVar28._8_8_ & 0xffffffff) * (ulonglong)auVar27._12_4_);
              uVar16 = uVar16 + 8;
              iVar24 = iVar24 + 8;
              iVar25 = iVar25 + 8;
              iVar26 = iVar26 + 8;
            } while (uVar9 != uVar16);
            uVar11 = iVar20 + iVar23 + iVar18 + iVar21 + iVar19 + iVar22 + iVar6 + uVar11;
            if (uVar7 != uVar9) {
LAB_18019ca11:
              bVar14 = 0x18;
              do {
                iVar6 = *piVar13;
                piVar13 = piVar13 + 1;
                uVar11 = uVar11 + (iVar6 << (bVar14 & 0x18));
                bVar14 = bVar14 - 8;
              } while (piVar13 != local_c8 + lVar8);
            }
LAB_18019ca39:
            local_c0 = lVar8;
            thunk_FUN_1801d3330(local_c8,local_d0 << 2,4);
            *param_1 = 0x8000000000000001;
            *(char *)(param_1 + 1) = (char)(uVar11 >> 0x18);
            *(char *)((longlong)param_1 + 0xb) = (char)uVar11;
            *(ushort *)((longlong)param_1 + 9) =
                 (ushort)(uVar11 >> 0x10) & 0xff | (ushort)uVar11 & 0xff00;
            if ((local_e0 & 0x7fffffffffffffff) != 0) {
              thunk_FUN_1801d3330(local_b8,local_e0,1);
            }
            goto LAB_18019c61a;
          }
LAB_18019c838:
          local_c0 = lVar8;
          if (local_d0 != 0) {
            thunk_FUN_1801d3330(local_c8,local_d0 << 2,4);
          }
          plVar12 = local_b0;
        }
        else if (local_170 != 0) {
          thunk_FUN_1801d3330(local_168,local_170 << 4,8);
        }
        uVar5 = 3;
        uVar9 = local_e0;
        goto LAB_18019c862;
      }
    }
    *param_1 = local_e0;
    param_1[1] = local_b8;
    param_1[2] = uVar16;
    bVar10 = (byte)local_a8;
LAB_18019c61a:
    lVar8 = *local_b0;
  }
  if ((!SBORROW8(0,lVar8) & bVar10) == 0) {
    return param_1;
  }
LAB_18019c89d:
  if (lVar8 != 0) {
    thunk_FUN_1801d3330(local_f0,lVar8,1);
  }
  return param_1;
code_r0x00018019c809:
  puVar2 = (uint *)((longlong)local_c8 + lVar15);
  lVar15 = lVar15 + 4;
  if (0xff < *puVar2) goto LAB_18019c838;
  goto LAB_18019c800;
}


