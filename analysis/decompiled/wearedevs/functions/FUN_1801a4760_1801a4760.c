/* FUN_1801a4760 @ 1801a4760 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801a4760(longlong param_1,ushort *param_2,ushort *param_3)

{
  ulonglong *puVar1;
  undefined1 auVar2 [14];
  undefined1 auVar3 [14];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [14];
  undefined1 auVar7 [14];
  undefined1 auVar8 [14];
  undefined1 auVar9 [14];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  longlong lVar13;
  ulonglong uVar14;
  ulonglong *puVar15;
  ulonglong uVar16;
  ushort *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  
  uVar23 = (ulonglong)((longlong)param_3 - (longlong)param_2) >> 1;
  uVar16 = *(ulonglong *)(param_1 + 0x48);
  uVar18 = 0x11;
  uVar14 = uVar16;
  if (0x11 < uVar16) {
    uVar14 = *(ulonglong *)(param_1 + 8);
    uVar18 = uVar16;
  }
  puVar1 = (ulonglong *)(param_1 + 0x48);
  if (uVar18 - uVar14 < uVar23) {
    if (CARRY8(uVar14,uVar23)) {
LAB_1801a4aa2:
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("capacity overflow",0x11,&PTR_s_C__Users_burne__cargo_registry_s_180282130);
    }
    uVar16 = (uVar14 + uVar23) - 1;
    lVar13 = 0x3f;
    if (uVar16 != 0) {
      for (; uVar16 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar16 = 0;
    if (1 < uVar14 + uVar23) {
      uVar16 = 0xffffffffffffffff >> (~(byte)lVar13 & 0x3f);
    }
    if (uVar16 == 0xffffffffffffffff) goto LAB_1801a4aa2;
    lVar13 = FUN_1801a51b0(param_1,uVar16 + 1);
    if (lVar13 != -0x7fffffffffffffff) {
      if (lVar13 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(lVar13);
      }
      goto LAB_1801a4aa2;
    }
    uVar16 = *puVar1;
  }
  auVar12 = _DAT_180282000;
  auVar11 = _DAT_180281ff0;
  auVar10 = _DAT_180281fd0;
  if (uVar16 < 0x12) {
    lVar13 = param_1 + 4;
    uVar14 = 0x11;
    puVar15 = puVar1;
    if (uVar16 < 0x11) goto LAB_1801a4852;
  }
  else {
    uVar18 = *(ulonglong *)(param_1 + 8);
    lVar13 = *(longlong *)(param_1 + 0x10);
    bVar25 = uVar18 < uVar16;
    uVar14 = uVar16;
    puVar15 = (ulonglong *)(param_1 + 8);
    uVar16 = uVar18;
    if (bVar25) {
LAB_1801a4852:
      uVar20 = ~uVar16 + uVar14;
      uVar18 = uVar20;
      if (uVar23 < uVar20) {
        uVar18 = uVar23;
      }
      puVar17 = param_2;
      if ((0x13 < uVar18 & ((byte)((longlong)param_3 - (longlong)param_2) ^ 1)) != 0) {
        if (uVar23 < uVar20) {
          uVar20 = uVar23;
        }
        if ((param_2 + uVar20 + 1 <= (ushort *)(lVar13 + uVar16 * 4)) ||
           ((ushort *)(lVar13 + (uVar20 + uVar16) * 4 + 4) <= param_2)) {
          uVar18 = uVar18 + 1;
          lVar21 = uVar16 * 4;
          uVar23 = 8;
          if ((uVar18 & 7) != 0) {
            uVar23 = (ulonglong)((uint)uVar18 & 7);
          }
          lVar19 = uVar18 - uVar23;
          puVar17 = param_2 + lVar19;
          uVar16 = uVar16 + lVar19;
          lVar21 = lVar21 + lVar13;
          lVar24 = 0;
          do {
            uVar18 = *(ulonglong *)(param_2 + lVar24);
            uVar23 = *(ulonglong *)(param_2 + lVar24 + 4);
            auVar2._8_4_ = 0;
            auVar2._0_8_ = uVar18;
            auVar2._12_2_ = (short)(uVar18 >> 0x30);
            auVar4._8_2_ = (short)(uVar18 >> 0x20);
            auVar4._0_8_ = uVar18;
            auVar4._10_4_ = auVar2._10_4_;
            auVar8._6_8_ = 0;
            auVar8._0_6_ = auVar4._8_6_;
            auVar6._4_2_ = (short)(uVar18 >> 0x10);
            auVar6._0_4_ = (uint)uVar18;
            auVar6._6_8_ = SUB148(auVar8 << 0x40,6);
            auVar26._0_4_ = (uint)uVar18 & 0xffff;
            auVar26._4_10_ = auVar6._4_10_;
            auVar26._14_2_ = 0;
            auVar3._8_4_ = 0;
            auVar3._0_8_ = uVar23;
            auVar3._12_2_ = (short)(uVar23 >> 0x30);
            auVar5._8_2_ = (short)(uVar23 >> 0x20);
            auVar5._0_8_ = uVar23;
            auVar5._10_4_ = auVar3._10_4_;
            auVar9._6_8_ = 0;
            auVar9._0_6_ = auVar5._8_6_;
            auVar7._4_2_ = (short)(uVar23 >> 0x10);
            auVar7._0_4_ = (uint)uVar23;
            auVar7._6_8_ = SUB148(auVar9 << 0x40,6);
            auVar27._0_4_ = (uint)uVar23 & 0xffff;
            auVar27._4_10_ = auVar7._4_10_;
            auVar27._14_2_ = 0;
            auVar28 = auVar26 ^ auVar10;
            auVar29 = auVar27 ^ auVar10;
            auVar30._0_4_ = -(uint)(auVar28._0_4_ < -0x10f800);
            auVar30._4_4_ = -(uint)(auVar28._4_4_ < -0x10f800);
            auVar30._8_4_ = -(uint)(auVar28._8_4_ < -0x10f800);
            auVar30._12_4_ = -(uint)(auVar28._12_4_ < -0x10f800);
            auVar28._0_4_ = -(uint)(auVar29._0_4_ < -0x10f800);
            auVar28._4_4_ = -(uint)(auVar29._4_4_ < -0x10f800);
            auVar28._8_4_ = -(uint)(auVar29._8_4_ < -0x10f800);
            auVar28._12_4_ = -(uint)(auVar29._12_4_ < -0x10f800);
            *(undefined1 (*) [16])(lVar21 + lVar24 * 4) =
                 auVar30 & auVar12 | ~auVar30 & (auVar26 | auVar11);
            *(undefined1 (*) [16])(lVar21 + 0x10 + lVar24 * 4) =
                 auVar28 & auVar12 | ~auVar28 & (auVar27 | auVar11);
            lVar24 = lVar24 + 8;
          } while (lVar19 != lVar24);
        }
      }
      do {
        if (puVar17 == param_3) {
          *puVar15 = uVar16;
          return;
        }
        param_2 = puVar17 + 1;
        uVar22 = *puVar17 | 0xff000000;
        if ((*puVar17 ^ 0xffefd800) < 0xffef0800) {
          uVar22 = 0xff00fffd;
        }
        *(uint *)(lVar13 + uVar16 * 4) = uVar22;
        uVar16 = uVar16 + 1;
        puVar17 = param_2;
      } while (uVar14 != uVar16);
      *puVar15 = uVar14;
      goto joined_r0x0001801a4833;
    }
  }
  *puVar15 = uVar16;
joined_r0x0001801a4833:
  if (param_2 != param_3) {
    do {
      uVar22 = *param_2 | 0xff000000;
      if ((*param_2 ^ 0xffefd800) < 0xffef0800) {
        uVar22 = 0xff00fffd;
      }
      uVar16 = *puVar1;
      if (uVar16 < 0x12) {
        uVar18 = 0x11;
        uVar14 = uVar16;
        lVar13 = param_1 + 4;
        puVar15 = puVar1;
      }
      else {
        uVar14 = *(ulonglong *)(param_1 + 8);
        lVar13 = *(longlong *)(param_1 + 0x10);
        puVar15 = (ulonglong *)(param_1 + 8);
        uVar18 = uVar16;
      }
      if (uVar14 == uVar18) {
        FUN_1801fc070(param_1);
        uVar14 = *(ulonglong *)(param_1 + 8);
        lVar13 = *(longlong *)(param_1 + 0x10);
        puVar15 = (ulonglong *)(param_1 + 8);
      }
      param_2 = param_2 + 1;
      *(uint *)(lVar13 + uVar14 * 4) = uVar22;
      *puVar15 = *puVar15 + 1;
    } while (param_2 != param_3);
  }
                    /* WARNING: Read-only address (ram,0x000180281fd0) is written */
                    /* WARNING: Read-only address (ram,0x000180281ff0) is written */
                    /* WARNING: Read-only address (ram,0x000180282000) is written */
  return;
}


