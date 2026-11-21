/* FUN_1801540d0 @ 1801540d0 */

undefined8 * FUN_1801540d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  longlong lVar8;
  ushort uVar9;
  ushort uVar10;
  undefined1 auVar11 [16];
  undefined8 _Size;
  byte bVar12;
  int iVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong *puVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong unaff_R13;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  ulonglong local_e0;
  ulonglong *local_d8;
  int *local_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined1 local_80 [64];
  
  FUN_1801b16c0(local_c8,param_2,param_3,local_80,&DAT_1802589c8);
  auVar11 = local_c8;
  bVar12 = local_b8[0];
  if (local_b8[0] == 3) {
    *param_1 = 2;
    return param_1;
  }
  local_d0 = *(int **)(param_4 + 10);
  if (local_d0 == (int *)0x0) {
    uVar15 = 0;
    goto LAB_1801544a9;
  }
  puVar18 = (ulonglong *)local_c8._0_8_;
  _Size = local_c8._8_8_;
  local_d8 = (ulonglong *)local_c8._0_8_;
  if (*param_4 != 2) {
    uVar24 = (local_b8[0] != 2 ^ 0x84222325) * 0xaef4a21;
    if (local_b8[0] == 2) {
      uVar24 = (local_c8._0_4_ & 0xff ^ 0x281a39c5) * 0xaef4a21;
    }
    else if ((local_b8[0] & 1) == 0) {
      if (local_c8._8_8_ != 0) {
        uVar14 = (ulonglong)(byte)local_c8[8] & 3;
        if (uVar14 != 0) {
          do {
            uVar24 = ((byte)(&DAT_1802589c8)[(byte)*puVar18] ^ uVar24) * 0x1b3;
            puVar18 = (ulonglong *)((longlong)puVar18 + 1);
            uVar14 = uVar14 - 1;
          } while (uVar14 != 0);
        }
        if (3 < (ulonglong)local_c8._8_8_) {
          do {
            uVar24 = ((uint)(byte)(&DAT_1802589c8)[*(byte *)((longlong)puVar18 + 3)] ^
                     ((uint)(byte)(&DAT_1802589c8)[*(byte *)((longlong)puVar18 + 2)] ^
                     ((uint)(byte)(&DAT_1802589c8)[*(byte *)((longlong)puVar18 + 1)] ^
                     ((byte)(&DAT_1802589c8)[(byte)*puVar18] ^ uVar24) * 0x1b3) * 0x1b3) * 0x1b3) *
                     0x1b3;
            puVar18 = (ulonglong *)((longlong)puVar18 + 4);
          } while (puVar18 != (ulonglong *)(local_c8._0_8_ + local_c8._8_8_));
        }
      }
    }
    else if (local_c8._8_8_ != 0) {
      uVar14 = (ulonglong)(byte)local_c8[8] & 7;
      if (uVar14 != 0) {
        do {
          uVar16 = *puVar18;
          puVar18 = (ulonglong *)((longlong)puVar18 + 1);
          uVar24 = ((byte)uVar16 ^ uVar24) * 0x1b3;
          uVar14 = uVar14 - 1;
        } while (uVar14 != 0);
      }
      if (7 < (ulonglong)local_c8._8_8_) {
        do {
          uVar14 = *puVar18;
          pbVar1 = (byte *)((longlong)puVar18 + 1);
          pbVar2 = (byte *)((longlong)puVar18 + 2);
          pbVar3 = (byte *)((longlong)puVar18 + 3);
          pbVar4 = (byte *)((longlong)puVar18 + 4);
          pbVar5 = (byte *)((longlong)puVar18 + 5);
          pbVar6 = (byte *)((longlong)puVar18 + 6);
          pbVar7 = (byte *)((longlong)puVar18 + 7);
          puVar18 = puVar18 + 1;
          uVar24 = ((uint)*pbVar7 ^
                   ((uint)*pbVar6 ^
                   ((uint)*pbVar5 ^
                   ((uint)*pbVar4 ^
                   ((uint)*pbVar3 ^
                   ((uint)*pbVar2 ^ ((uint)*pbVar1 ^ ((byte)uVar14 ^ uVar24) * 0x1b3) * 0x1b3) *
                   0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3;
        } while (puVar18 != (ulonglong *)(local_c8._0_8_ + local_c8._8_8_));
      }
    }
    goto LAB_18015434e;
  }
  local_a8 = *(undefined1 (*) [16])(param_4 + 2);
  auVar25._0_8_ = local_a8._0_8_;
  auVar25._8_4_ = local_a8._0_4_;
  auVar25._12_4_ = local_a8._4_4_;
  local_c8 = auVar25 ^ (undefined1  [16])s_uespemosarenegyl_180204b70;
  auVar26._0_8_ = local_a8._8_8_;
  auVar26._8_4_ = local_a8._8_4_;
  auVar26._12_4_ = local_a8._12_4_;
  local_98 = (undefined1  [16])0x0;
  local_88 = 0;
  local_e0 = (ulonglong)(local_b8[0] != 2);
  local_b8 = auVar26 ^ (undefined1  [16])s_modnarodsetybdet_180204b80;
  FUN_1800271e0(local_c8,&local_e0,8);
  if (bVar12 == 2) {
    local_e0 = (ulonglong)(byte)auVar11[0];
    puVar18 = &local_e0;
    uVar14 = 8;
LAB_18015424b:
    FUN_1800271e0(local_c8,puVar18,uVar14);
  }
  else {
    if ((bVar12 & 1) != 0) {
      uVar14 = _Size;
      goto LAB_18015424b;
    }
    if (_Size != 0) {
      uVar14 = 0;
      do {
        local_e0 = CONCAT71(local_e0._1_7_,(&DAT_1802589c8)[*(byte *)((longlong)puVar18 + uVar14)]);
        FUN_1800271e0(local_c8,&local_e0,1);
        uVar14 = uVar14 + 1;
      } while (_Size != uVar14);
    }
  }
  uVar23 = local_98._0_8_ << 0x38 | local_98._8_8_;
  uVar16 = local_b8._8_8_ ^ uVar23;
  uVar22 = local_c8._0_8_ + local_b8._0_8_;
  uVar14 = (local_b8._0_8_ << 0xd | (ulonglong)local_b8._0_8_ >> 0x33) ^ uVar22;
  uVar17 = (uVar16 << 0x10 | uVar16 >> 0x30) ^ local_c8._8_8_ + uVar16;
  uVar19 = local_c8._8_8_ + uVar16 + uVar14;
  uVar22 = (uVar22 << 0x20 | uVar22 >> 0x20) + uVar17;
  uVar14 = (uVar14 << 0x11 | uVar14 >> 0x2f) ^ uVar19;
  uVar16 = (uVar17 << 0x15 | uVar17 >> 0x2b) ^ uVar22;
  uVar22 = (uVar22 ^ uVar23) + uVar14;
  uVar17 = ((uVar19 << 0x20 | uVar19 >> 0x20) ^ 0xff) + uVar16;
  uVar14 = (uVar14 << 0xd | uVar14 >> 0x33) ^ uVar22;
  uVar16 = (uVar16 << 0x10 | uVar16 >> 0x30) ^ uVar17;
  uVar17 = uVar17 + uVar14;
  uVar19 = (uVar22 << 0x20 | uVar22 >> 0x20) + uVar16;
  uVar14 = (uVar14 << 0x11 | uVar14 >> 0x2f) ^ uVar17;
  uVar16 = (uVar16 << 0x15 | uVar16 >> 0x2b) ^ uVar19;
  uVar19 = uVar19 + uVar14;
  uVar17 = (uVar17 << 0x20 | uVar17 >> 0x20) + uVar16;
  uVar14 = (uVar14 << 0xd | uVar14 >> 0x33) ^ uVar19;
  uVar16 = (uVar16 << 0x10 | uVar16 >> 0x30) ^ uVar17;
  uVar17 = uVar17 + uVar14;
  uVar19 = (uVar19 << 0x20 | uVar19 >> 0x20) + uVar16;
  uVar14 = (uVar14 << 0x11 | uVar14 >> 0x2f) ^ uVar17;
  uVar16 = (uVar16 << 0x15 | uVar16 >> 0x2b) ^ uVar19;
  lVar20 = (uVar17 << 0x20 | uVar17 >> 0x20) + uVar16;
  uVar14 = (uVar14 << 0xd | uVar14 >> 0x33) ^ uVar19 + uVar14;
  lVar21 = lVar20 + uVar14;
  uVar24 = (uint)((ulonglong)lVar21 >> 0x20) ^ (uint)lVar21 ^
           ((uint)(uVar16 >> 0x10) ^ (uint)((ulonglong)lVar20 >> 0x20)) >> 0xb ^
           (uint)(uVar14 >> 0x2f);
LAB_18015434e:
  uVar9 = *(ushort *)(param_4 + 0x16);
  unaff_R13 = (ulonglong)(uVar24 & 0x7fff & (uint)uVar9);
  uVar14 = *(ulonglong *)(param_4 + 0x14);
  lVar20 = *(longlong *)(param_4 + 8);
  lVar21 = *(longlong *)(param_4 + 0x12);
  uVar16 = 0;
  do {
    if (uVar14 <= unaff_R13) {
      unaff_R13 = 0;
    }
    if (uVar14 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    param_4 = (int *)(ulonglong)*(ushort *)(lVar21 + unaff_R13 * 4);
    if ((param_4 == (int *)0xffff) ||
       (uVar10 = *(ushort *)(lVar21 + 2 + unaff_R13 * 4),
       ((int)unaff_R13 - (uint)(uVar10 & uVar9) & (uint)uVar9) < uVar16)) {
      uVar15 = 0;
      goto LAB_1801544a9;
    }
    if (uVar10 == (ushort)(uVar24 & 0x7fff)) {
      if (local_d0 <= param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(param_4,local_d0,&PTR_s_C__Users_burne__cargo_registry_s_1802589b0);
      }
      lVar8 = lVar20 + (longlong)param_4 * 0x68;
      if (*(longlong *)(lVar20 + 0x40 + (longlong)param_4 * 0x68) == 0) {
        if ((bVar12 == 2) && (*(char *)(lVar8 + 0x48) == (char)local_d8)) break;
      }
      else if (bVar12 != 2) {
        if ((bVar12 & 1) == 0) {
          if (*(ulonglong *)(lVar8 + 0x50) == _Size) {
            uVar15 = 1;
            if (_Size == 0) goto LAB_1801544a9;
            uVar17 = 0;
            while (*(char *)(*(longlong *)(lVar8 + 0x48) + uVar17) ==
                   (&DAT_1802589c8)[*(byte *)((longlong)local_d8 + uVar17)]) {
              uVar17 = uVar17 + 1;
              if (_Size == uVar17) goto LAB_1801544a9;
            }
          }
        }
        else if ((*(ulonglong *)(lVar8 + 0x50) == _Size) &&
                (iVar13 = memcmp(*(void **)(lVar8 + 0x48),local_d8,_Size), iVar13 == 0)) break;
      }
    }
    uVar16 = uVar16 + 1;
    unaff_R13 = unaff_R13 + 1;
  } while( true );
  uVar15 = 1;
LAB_1801544a9:
  *param_1 = uVar15;
  param_1[1] = unaff_R13;
  param_1[2] = param_4;
                    /* WARNING: Read-only address (ram,0x000180204b70) is written */
                    /* WARNING: Read-only address (ram,0x000180204b80) is written */
  return param_1;
}


