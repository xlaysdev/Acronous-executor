/* FUN_1801271c0 @ 1801271c0 */

undefined8 * FUN_1801271c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  ushort uVar9;
  ushort uVar10;
  undefined1 auVar11 [16];
  byte bVar12;
  int iVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  size_t sVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int *piVar25;
  uint uVar26;
  ulonglong unaff_R13;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  ulonglong local_f8;
  size_t local_f0;
  ulonglong *local_e8;
  int *local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  longlong local_88;
  undefined1 local_80 [64];
  
  FUN_1801b16c0(local_d8,param_2,param_3,local_80,&DAT_180242828);
  auVar11 = local_d8;
  bVar12 = local_c8[0];
  if (local_c8[0] == 3) {
    *param_1 = 2;
    return param_1;
  }
  local_e0 = *(int **)(param_4 + 10);
  if (local_e0 == (int *)0x0) {
    uVar21 = 0;
    goto LAB_180127605;
  }
  puVar17 = (ulonglong *)local_d8._0_8_;
  uVar22 = local_d8._8_8_;
  local_e8 = (ulonglong *)local_d8._0_8_;
  local_f0 = local_d8._8_8_;
  if (*param_4 != 2) {
    uVar26 = (local_c8[0] != 2 ^ 0x84222325) * 0xaef4a21;
    if (local_c8[0] == 2) {
      uVar26 = (local_d8._0_4_ & 0xff ^ 0x281a39c5) * 0xaef4a21;
    }
    else if ((local_c8[0] & 1) == 0) {
      if (local_d8._8_8_ != 0) {
        uVar22 = (ulonglong)(byte)local_d8[8] & 3;
        if (uVar22 != 0) {
          do {
            uVar26 = ((byte)(&DAT_180242828)[(byte)*puVar17] ^ uVar26) * 0x1b3;
            puVar17 = (ulonglong *)((longlong)puVar17 + 1);
            uVar22 = uVar22 - 1;
          } while (uVar22 != 0);
        }
        if (3 < (ulonglong)local_d8._8_8_) {
          do {
            uVar26 = ((uint)(byte)(&DAT_180242828)[*(byte *)((longlong)puVar17 + 3)] ^
                     ((uint)(byte)(&DAT_180242828)[*(byte *)((longlong)puVar17 + 2)] ^
                     ((uint)(byte)(&DAT_180242828)[*(byte *)((longlong)puVar17 + 1)] ^
                     ((byte)(&DAT_180242828)[(byte)*puVar17] ^ uVar26) * 0x1b3) * 0x1b3) * 0x1b3) *
                     0x1b3;
            puVar17 = (ulonglong *)((longlong)puVar17 + 4);
          } while (puVar17 != (ulonglong *)(local_d8._0_8_ + local_d8._8_8_));
        }
      }
    }
    else if (local_d8._8_8_ != 0) {
      uVar22 = (ulonglong)(byte)local_d8[8] & 7;
      if (uVar22 != 0) {
        do {
          uVar14 = *puVar17;
          puVar17 = (ulonglong *)((longlong)puVar17 + 1);
          uVar26 = ((byte)uVar14 ^ uVar26) * 0x1b3;
          uVar22 = uVar22 - 1;
        } while (uVar22 != 0);
      }
      if (7 < (ulonglong)local_d8._8_8_) {
        do {
          uVar22 = *puVar17;
          pbVar8 = (byte *)((longlong)puVar17 + 1);
          pbVar1 = (byte *)((longlong)puVar17 + 2);
          pbVar2 = (byte *)((longlong)puVar17 + 3);
          pbVar3 = (byte *)((longlong)puVar17 + 4);
          pbVar4 = (byte *)((longlong)puVar17 + 5);
          pbVar5 = (byte *)((longlong)puVar17 + 6);
          pbVar6 = (byte *)((longlong)puVar17 + 7);
          puVar17 = puVar17 + 1;
          uVar26 = ((uint)*pbVar6 ^
                   ((uint)*pbVar5 ^
                   ((uint)*pbVar4 ^
                   ((uint)*pbVar3 ^
                   ((uint)*pbVar2 ^
                   ((uint)*pbVar1 ^ ((uint)*pbVar8 ^ ((byte)uVar22 ^ uVar26) * 0x1b3) * 0x1b3) *
                   0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3;
        } while (puVar17 != (ulonglong *)(local_d8._0_8_ + local_d8._8_8_));
      }
    }
    goto LAB_18012743e;
  }
  local_b8 = *(undefined1 (*) [16])(param_4 + 2);
  auVar27._0_8_ = local_b8._0_8_;
  auVar27._8_4_ = local_b8._0_4_;
  auVar27._12_4_ = local_b8._4_4_;
  local_d8 = auVar27 ^ (undefined1  [16])s_uespemosarenegyl_180204b70;
  auVar28._0_8_ = local_b8._8_8_;
  auVar28._8_4_ = local_b8._8_4_;
  auVar28._12_4_ = local_b8._12_4_;
  local_a8 = (undefined1  [16])0x0;
  local_98 = 0;
  local_f8 = (ulonglong)(local_c8[0] != 2);
  local_c8 = auVar28 ^ (undefined1  [16])s_modnarodsetybdet_180204b80;
  FUN_1800271e0(local_d8,&local_f8,8);
  if (bVar12 == 2) {
    local_f8 = (ulonglong)(byte)auVar11[0];
    puVar17 = &local_f8;
    uVar22 = 8;
LAB_18012733b:
    FUN_1800271e0(local_d8,puVar17,uVar22);
  }
  else {
    if ((bVar12 & 1) != 0) goto LAB_18012733b;
    if (uVar22 != 0) {
      uVar14 = 0;
      do {
        local_f8 = CONCAT71(local_f8._1_7_,(&DAT_180242828)[*(byte *)((longlong)puVar17 + uVar14)]);
        FUN_1800271e0(local_d8,&local_f8,1);
        uVar14 = uVar14 + 1;
      } while (uVar22 != uVar14);
    }
  }
  uVar24 = local_a8._0_8_ << 0x38 | local_a8._8_8_;
  uVar14 = local_c8._8_8_ ^ uVar24;
  uVar23 = local_d8._0_8_ + local_c8._0_8_;
  uVar22 = (local_c8._0_8_ << 0xd | (ulonglong)local_c8._0_8_ >> 0x33) ^ uVar23;
  uVar15 = (uVar14 << 0x10 | uVar14 >> 0x30) ^ local_d8._8_8_ + uVar14;
  uVar18 = local_d8._8_8_ + uVar14 + uVar22;
  uVar23 = (uVar23 << 0x20 | uVar23 >> 0x20) + uVar15;
  uVar22 = (uVar22 << 0x11 | uVar22 >> 0x2f) ^ uVar18;
  uVar14 = (uVar15 << 0x15 | uVar15 >> 0x2b) ^ uVar23;
  uVar23 = (uVar23 ^ uVar24) + uVar22;
  uVar15 = ((uVar18 << 0x20 | uVar18 >> 0x20) ^ 0xff) + uVar14;
  uVar22 = (uVar22 << 0xd | uVar22 >> 0x33) ^ uVar23;
  uVar14 = (uVar14 << 0x10 | uVar14 >> 0x30) ^ uVar15;
  uVar15 = uVar15 + uVar22;
  uVar18 = (uVar23 << 0x20 | uVar23 >> 0x20) + uVar14;
  uVar22 = (uVar22 << 0x11 | uVar22 >> 0x2f) ^ uVar15;
  uVar14 = (uVar14 << 0x15 | uVar14 >> 0x2b) ^ uVar18;
  uVar18 = uVar18 + uVar22;
  uVar15 = (uVar15 << 0x20 | uVar15 >> 0x20) + uVar14;
  uVar22 = (uVar22 << 0xd | uVar22 >> 0x33) ^ uVar18;
  uVar14 = (uVar14 << 0x10 | uVar14 >> 0x30) ^ uVar15;
  uVar15 = uVar15 + uVar22;
  uVar18 = (uVar18 << 0x20 | uVar18 >> 0x20) + uVar14;
  uVar22 = (uVar22 << 0x11 | uVar22 >> 0x2f) ^ uVar15;
  uVar14 = (uVar14 << 0x15 | uVar14 >> 0x2b) ^ uVar18;
  lVar19 = (uVar15 << 0x20 | uVar15 >> 0x20) + uVar14;
  uVar22 = (uVar22 << 0xd | uVar22 >> 0x33) ^ uVar18 + uVar22;
  lVar20 = lVar19 + uVar22;
  uVar26 = (uint)((ulonglong)lVar20 >> 0x20) ^ (uint)lVar20 ^
           ((uint)(uVar14 >> 0x10) ^ (uint)((ulonglong)lVar19 >> 0x20)) >> 0xb ^
           (uint)(uVar22 >> 0x2f);
LAB_18012743e:
  uVar9 = *(ushort *)(param_4 + 0x16);
  unaff_R13 = (ulonglong)(uVar26 & 0x7fff & (uint)uVar9);
  uVar22 = *(ulonglong *)(param_4 + 0x14);
  local_88 = *(longlong *)(param_4 + 8);
  lVar19 = *(longlong *)(param_4 + 0x12);
  uVar21 = 0;
  uVar14 = 0;
  piVar25 = local_e0;
  do {
    if (uVar22 <= unaff_R13) {
      unaff_R13 = 0;
    }
    if (uVar22 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    param_4 = (int *)(ulonglong)*(ushort *)(lVar19 + unaff_R13 * 4);
    if ((param_4 == (int *)0xffff) ||
       (uVar10 = *(ushort *)(lVar19 + 2 + unaff_R13 * 4),
       ((int)unaff_R13 - (uint)(uVar10 & uVar9) & (uint)uVar9) < uVar14)) goto LAB_180127605;
    if (uVar10 == (ushort)(uVar26 & 0x7fff)) {
      if (piVar25 <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(param_4,piVar25,&PTR_s_C__Users_burne__cargo_registry_s_180242810);
      }
      lVar20 = local_88 + (longlong)param_4 * 0x68;
      if (*(longlong *)(local_88 + 0x40 + (longlong)param_4 * 0x68) == 0) {
        if ((bVar12 == 2) && (*(char *)(lVar20 + 0x48) == (char)local_e8)) break;
      }
      else if (bVar12 != 2) {
        if ((bVar12 & 1) == 0) {
          if (*(size_t *)(lVar20 + 0x50) == local_f0) {
            sVar16 = 0;
            do {
              if (local_f0 == sVar16) goto LAB_1801275fb;
              pcVar7 = (char *)(*(longlong *)(lVar20 + 0x48) + sVar16);
              pbVar8 = (byte *)((longlong)local_e8 + sVar16);
              sVar16 = sVar16 + 1;
            } while (*pcVar7 == (&DAT_180242828)[*pbVar8]);
          }
        }
        else if (*(size_t *)(lVar20 + 0x50) == local_f0) {
          iVar13 = memcmp(*(void **)(lVar20 + 0x48),local_e8,local_f0);
          piVar25 = local_e0;
          if (iVar13 == 0) break;
        }
      }
    }
    uVar14 = uVar14 + 1;
    unaff_R13 = unaff_R13 + 1;
  } while( true );
LAB_1801275fb:
  uVar21 = 1;
LAB_180127605:
  *param_1 = uVar21;
  param_1[1] = unaff_R13;
  param_1[2] = param_4;
                    /* WARNING: Read-only address (ram,0x000180204b70) is written */
                    /* WARNING: Read-only address (ram,0x000180204b80) is written */
  return param_1;
}


