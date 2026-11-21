/* FUN_1801fe5c0 @ 1801fe5c0 */

void FUN_1801fe5c0(longlong *param_1,ulonglong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  code *local_80;
  ulonglong local_78;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar4 = *(ulonglong *)(*param_1 + 0x108);
  uVar17 = *(ulonglong *)(*param_1 + 0x100);
  uVar18 = param_2 * 0x10;
  bVar6 = param_2 >> 0x3c != 0;
  uVar16 = CONCAT71(0x7fffffffffffff,0x7ffffffffffffff8 < uVar18 || bVar6);
  if (0x7ffffffffffffff8 < uVar18 || bVar6) {
    uVar16 = 0;
LAB_1801fe618:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar16,uVar18);
  }
  lVar5 = param_1[1];
  lVar13 = param_1[2];
  local_58 = param_2;
  if (uVar18 == 0) {
    lVar11 = 8;
  }
  else {
    FUN_180027490();
    lVar11 = thunk_FUN_1801d32d0(uVar18,8);
    uVar16 = 8;
    if (lVar11 == 0) goto LAB_1801fe618;
  }
  if (uVar4 != uVar17) {
    uVar19 = lVar13 - 1;
    uVar12 = local_58 - 1;
    uVar16 = uVar17 + 1;
    uVar18 = uVar16;
    if (((int)uVar4 - (int)uVar17 & 1U) != 0) {
      puVar1 = (undefined4 *)(lVar5 + (uVar17 & uVar19) * 0x10);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(lVar11 + (uVar17 & uVar12) * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      uVar17 = uVar16;
    }
    while (uVar4 != uVar18) {
      puVar15 = (undefined8 *)(lVar5 + (uVar17 & uVar19) * 0x10);
      uVar10 = puVar15[1];
      puVar3 = (undefined8 *)(lVar11 + (uVar17 & uVar12) * 0x10);
      *puVar3 = *puVar15;
      puVar3[1] = uVar10;
      uVar16 = (uVar17 + 1 & uVar12) * 0x10;
      puVar1 = (undefined4 *)(lVar5 + (uVar17 + 1 & uVar19) * 0x10);
      uVar7 = puVar1[1];
      uVar8 = puVar1[2];
      uVar9 = puVar1[3];
      puVar2 = (undefined4 *)(lVar11 + uVar16);
      *puVar2 = *puVar1;
      puVar2[1] = uVar7;
      puVar2[2] = uVar8;
      puVar2[3] = uVar9;
      uVar17 = uVar17 + 2;
      uVar18 = uVar17;
    }
  }
  lVar13 = FUN_1801c7400(uVar16);
  uVar16 = local_58;
  param_1[1] = lVar11;
  param_1[2] = local_58;
  lVar5 = *param_1;
  local_60 = lVar13;
  FUN_180027490();
  plVar14 = (longlong *)thunk_FUN_1801d32d0(0x10,8);
  local_50 = lVar13;
  if (plVar14 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x10);
  }
  *plVar14 = lVar11;
  plVar14[1] = uVar16;
  LOCK();
  uVar4 = *(ulonglong *)(lVar5 + 0x80);
  *(ulonglong *)(lVar5 + 0x80) = (ulonglong)plVar14;
  UNLOCK();
  if (lVar13 == 0) {
    puVar15 = (undefined8 *)(uVar4 & 0xfffffffffffffff8);
    if (puVar15[1] != 0) {
      thunk_FUN_1801d3330(*puVar15,puVar15[1] << 4,8);
    }
    thunk_FUN_1801d3330(puVar15,0x10,8);
  }
  else {
    local_80 = FUN_1801bb670;
    local_78 = uVar4;
    FUN_1801c87f0(lVar13,&local_80,&local_60);
  }
  if (0x3f < uVar16) {
    FUN_1801c9490(&local_60);
  }
  if (((local_50 != 0) &&
      (lVar5 = *(longlong *)(local_50 + 0x818), *(longlong *)(local_50 + 0x818) = lVar5 + -1,
      lVar5 == 1)) && (*(undefined8 *)(local_50 + 0x880) = 0, *(longlong *)(local_50 + 0x820) == 0))
  {
    FUN_1801fe8b0();
  }
  return;
}


