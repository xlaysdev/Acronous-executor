/* FUN_1801e6fcb @ 1801e6fcb */

longlong * FUN_1801e6fcb(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  
  uVar12 = param_2[1];
  uVar10 = param_2[2];
  if ((uVar10 < uVar12) && (*(char *)(*param_2 + uVar10) == 'u')) {
    uVar10 = uVar10 + 1;
    param_2[2] = uVar10;
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if (uVar12 <= uVar10) goto LAB_1801e7073;
  lVar9 = *param_2;
  bVar5 = *(char *)(lVar9 + uVar10) - 0x30;
  if (9 < bVar5) goto LAB_1801e7073;
  uVar10 = uVar10 + 1;
  param_2[2] = uVar10;
  if (bVar5 != 0) {
    uVar7 = (ulonglong)bVar5;
    do {
      if ((uVar12 <= uVar10) || (bVar5 = *(char *)(lVar9 + uVar10) - 0x30, 9 < bVar5))
      goto LAB_1801e704f;
      uVar10 = uVar10 + 1;
      param_2[2] = uVar10;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar7;
      uVar6 = SUB168(auVar3 * ZEXT816(10),0);
    } while ((SUB168(auVar3 * ZEXT816(10),8) == 0) &&
            (uVar7 = uVar6 + bVar5, !CARRY8(uVar6,(ulonglong)bVar5)));
    goto LAB_1801e7073;
  }
  uVar7 = 0;
LAB_1801e704f:
  if ((uVar10 < uVar12) && (*(char *)(lVar9 + uVar10) == '_')) {
    uVar10 = uVar10 + 1;
    param_2[2] = uVar10;
  }
  uVar6 = uVar10 + uVar7;
  if ((CARRY8(uVar10,uVar7)) || (param_2[2] = uVar6, uVar12 < uVar6)) goto LAB_1801e7073;
  if (((uVar10 < uVar12) && (*(char *)(lVar9 + uVar10) < -0x40)) ||
     ((uVar6 < uVar12 && uVar6 != 0 && (*(char *)(lVar9 + uVar6) < -0x40)))) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018d0(lVar9,uVar12,uVar10,uVar6,&PTR_s__rust_deps_rustc_demangle_0_1_26_1802922f8);
  }
  lVar9 = lVar9 + uVar10;
  if (!bVar4) {
    *param_1 = lVar9;
    param_1[1] = uVar7;
    param_1[2] = 1;
    param_1[3] = 0;
    return param_1;
  }
  lVar8 = lVar9 + uVar7;
  uVar12 = 0;
  lVar11 = 0;
  do {
    if (uVar7 + lVar11 == 0) {
      lVar8 = 1;
      goto LAB_1801e7171;
    }
    lVar1 = lVar11 + -1;
    pcVar2 = (char *)(lVar8 + -1 + lVar11);
    lVar11 = lVar1;
  } while (*pcVar2 != '_');
  uVar10 = uVar7 + lVar1 + 1;
  uVar12 = uVar7 + lVar1;
  if (uVar12 == 0) {
LAB_1801e712d:
    if (uVar10 < uVar7) {
      if (*(char *)(lVar8 + 1 + lVar1) < -0x40) {
LAB_1801e7148:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(lVar9,uVar7,uVar10,uVar7,&PTR_s__rust_deps_rustc_demangle_0_1_26_180292328);
      }
      uVar6 = uVar10;
    }
    else {
      uVar6 = uVar7;
      if (lVar1 != -1) goto LAB_1801e7148;
    }
  }
  else {
    if (uVar12 < uVar7) {
      if (*(char *)(lVar8 + lVar1) < -0x40) goto LAB_1801e71a5;
      goto LAB_1801e712d;
    }
    if (lVar1 != 0) {
LAB_1801e71a5:
                    /* WARNING: Subroutine does not return */
      FUN_1802018d0(lVar9,uVar7,0,uVar12,&PTR_s__rust_deps_rustc_demangle_0_1_26_180292310);
    }
    if (uVar10 != 0) goto LAB_1801e712d;
    uVar6 = 0;
  }
  uVar7 = uVar7 - uVar6;
  lVar8 = lVar9;
  lVar9 = uVar6 + lVar9;
LAB_1801e7171:
  if (uVar7 != 0) {
    *param_1 = lVar8;
    param_1[1] = uVar12;
    param_1[2] = lVar9;
    param_1[3] = uVar7;
    return param_1;
  }
LAB_1801e7073:
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return param_1;
}


