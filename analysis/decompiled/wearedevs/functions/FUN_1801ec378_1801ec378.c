/* FUN_1801ec378 @ 1801ec378 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1801ec378(longlong param_1,longlong param_2)

{
  undefined2 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  char cVar18;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar19 [16];
  
  uVar9 = param_2 - param_1;
  if (0x1f < uVar9) {
    lVar7 = FUN_1801f1e40();
    return lVar7;
  }
  if (uVar9 == 0) {
    return 0;
  }
  if (3 < uVar9) {
    uVar10 = uVar9 & 0x7ffffffffffffffc;
    lVar7 = 0;
    lVar11 = 0;
    uVar8 = 0;
    lVar12 = 0;
    lVar13 = 0;
    do {
      uVar1 = *(undefined2 *)(param_1 + 2 + uVar8);
      auVar14[0] = -(-0x41 < (char)*(undefined2 *)(param_1 + uVar8));
      cVar18 = -(-0x41 < (char)((ushort)*(undefined2 *)(param_1 + uVar8) >> 8));
      auVar3._9_7_ = 0;
      auVar3._0_9_ = SUB169(ZEXT816(0),7);
      auVar2._10_6_ = 0;
      auVar2._0_10_ = SUB1610(auVar3 << 0x38,6);
      auVar15._11_5_ = 0;
      auVar15._0_11_ = SUB1611(auVar2 << 0x30,5);
      auVar14._4_12_ = SUB1612(auVar15 << 0x28,4);
      auVar14[3] = cVar18;
      auVar14[2] = cVar18;
      auVar14[1] = auVar14[0];
      auVar15 = pshuflw(auVar14,auVar14,0xd4);
      auVar16._12_4_ = auVar15._12_4_;
      auVar16._0_8_ = auVar15._0_8_;
      auVar16._8_4_ = auVar15._4_4_;
      auVar16 = auVar16 & _DAT_18025f330;
      lVar7 = lVar7 + auVar16._0_8_;
      lVar11 = lVar11 + auVar16._8_8_;
      auVar19[0] = -(-0x41 < (char)uVar1);
      cVar18 = -(-0x41 < (char)((ushort)uVar1 >> 8));
      auVar6._9_7_ = 0;
      auVar6._0_9_ = SUB169(ZEXT816(0),7);
      auVar5._10_6_ = 0;
      auVar5._0_10_ = SUB1610(auVar6 << 0x38,6);
      auVar4._11_5_ = 0;
      auVar4._0_11_ = SUB1611(auVar5 << 0x30,5);
      auVar19._4_12_ = SUB1612(auVar4 << 0x28,4);
      auVar19[3] = cVar18;
      auVar19[2] = cVar18;
      auVar19[1] = auVar19[0];
      auVar15 = pshuflw(auVar16,auVar19,0xd4);
      auVar17._12_4_ = auVar15._12_4_;
      auVar17._0_8_ = auVar15._0_8_;
      auVar17._8_4_ = auVar15._4_4_;
      lVar12 = lVar12 + SUB168(auVar17 & _DAT_18025f330,0);
      lVar13 = lVar13 + SUB168(auVar17 & _DAT_18025f330,8);
      uVar8 = uVar8 + 4;
    } while (uVar10 != uVar8);
    lVar7 = lVar13 + lVar11 + lVar12 + lVar7;
    goto LAB_1801f2538;
  }
  uVar10 = 0;
  lVar7 = 0;
  do {
    lVar7 = lVar7 + (ulonglong)(-0x41 < *(char *)(param_1 + uVar10));
    uVar10 = uVar10 + 1;
LAB_1801f2538:
  } while (uVar9 != uVar10);
  return lVar7;
}


