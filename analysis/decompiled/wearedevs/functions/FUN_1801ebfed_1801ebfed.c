/* FUN_1801ebfed @ 1801ebfed */

undefined8 * FUN_1801ebfed(undefined8 *param_1,int *param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined **ppuVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  
  if (*param_2 != 1) {
    uVar19 = 2;
    if (*(char *)((longlong)param_2 + 0x1a) == '\0') {
      bVar4 = *(byte *)(param_2 + 6);
      *(byte *)(param_2 + 6) = bVar4 ^ 1;
      uVar6 = *(ulonglong *)(param_2 + 2);
      lVar10 = *(longlong *)(param_2 + 0x12);
      uVar9 = *(ulonglong *)(param_2 + 0x14);
      if (uVar6 != 0) {
        if (uVar6 < uVar9) {
          if (*(char *)(lVar10 + uVar6) < -0x40) {
LAB_1801ec1cb:
                    /* WARNING: Subroutine does not return */
            FUN_1802018d0(lVar10,uVar9,uVar6,uVar9,&PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_180292a88
                         );
          }
        }
        else if (uVar6 != uVar9) goto LAB_1801ec1cb;
      }
      if (uVar6 == uVar9) {
        if (bVar4 == 0) {
          *(undefined1 *)((longlong)param_2 + 0x1a) = 1;
          goto LAB_1801ec326;
        }
      }
      else {
        bVar5 = *(byte *)(lVar10 + uVar6);
        uVar12 = (uint)bVar5;
        if ((char)bVar5 < '\0') {
          uVar18 = bVar5 & 0x1f;
          uVar12 = *(byte *)(lVar10 + 1 + uVar6) & 0x3f;
          if (bVar5 < 0xe0) {
            uVar12 = uVar18 << 6 | uVar12;
          }
          else {
            uVar12 = *(byte *)(lVar10 + 2 + uVar6) & 0x3f | uVar12 << 6;
            if (bVar5 < 0xf0) {
              uVar12 = uVar12 | uVar18 << 0xc;
            }
            else {
              uVar12 = *(byte *)(lVar10 + 3 + uVar6) & 0x3f | uVar12 << 6 | (bVar5 & 7) << 0x12;
            }
          }
        }
        if (bVar4 == 0) {
          uVar19 = 1;
          lVar10 = 1;
          if ((0x7f < uVar12) && (lVar10 = 2, 0x7ff < uVar12)) {
            lVar10 = 4 - (ulonglong)(uVar12 < 0x10000);
          }
          *(ulonglong *)(param_2 + 2) = lVar10 + uVar6;
          param_1[1] = uVar6;
          param_1[2] = lVar10 + uVar6;
          goto LAB_1801ec326;
        }
      }
      param_1[1] = uVar6;
      param_1[2] = uVar6;
LAB_1801ec2e0:
      uVar19 = 0;
    }
    goto LAB_1801ec326;
  }
  uVar6 = *(ulonglong *)(param_2 + 10);
  uVar9 = *(ulonglong *)(param_2 + 0x14);
  uVar19 = 2;
  if (uVar6 == uVar9) goto LAB_1801ec326;
  lVar10 = *(longlong *)(param_2 + 0x12);
  uVar15 = *(ulonglong *)(param_2 + 0x18);
  uVar14 = (uVar6 + uVar15) - 1;
  uVar17 = uVar9;
  if (uVar14 < uVar9) {
    uVar7 = *(ulonglong *)(param_2 + 0xe);
    uVar8 = *(ulonglong *)(param_2 + 2);
    uVar16 = *(longlong *)(param_2 + 6) + uVar6;
    uVar1 = uVar6 + uVar15;
    uVar17 = uVar6;
    uVar20 = uVar7;
LAB_1801ec08e:
    if (uVar6 == uVar17) {
      if ((*(ulonglong *)(param_2 + 8) >> ((ulonglong)*(byte *)(lVar10 + uVar14) & 0x3f) & 1) != 0)
      {
        uVar14 = uVar8;
        if (uVar8 < uVar20) {
          uVar14 = uVar20;
        }
        if (uVar7 == 0xffffffffffffffff) {
          uVar14 = uVar8;
        }
        uVar11 = uVar14;
        do {
          if (uVar15 <= uVar11) {
            uVar17 = uVar20;
            if (uVar7 == 0xffffffffffffffff) {
              uVar17 = 0;
            }
            uVar14 = uVar8;
            goto LAB_1801ec12b;
          }
          if (uVar9 <= uVar6 + uVar11) {
            uVar11 = uVar14 + uVar6;
            if (uVar14 + uVar6 < uVar9) {
              uVar11 = uVar9;
            }
            ppuVar13 = &PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_1802926f8;
            goto LAB_1801ec36f;
          }
          uVar17 = uVar11 + 1;
          pcVar2 = (char *)(*(longlong *)(param_2 + 0x16) + uVar11);
          pcVar3 = (char *)(lVar10 + uVar6 + uVar11);
          uVar11 = uVar17;
        } while (*pcVar2 == *pcVar3);
        uVar17 = uVar17 + (uVar6 - uVar8);
        *(ulonglong *)(param_2 + 10) = uVar17;
        if (uVar7 == 0xffffffffffffffff) {
          goto LAB_1801ec177;
        }
        uVar14 = 0;
        goto LAB_1801ec170;
      }
      *(ulonglong *)(param_2 + 10) = uVar1;
      uVar17 = uVar1;
      if (uVar7 != 0xffffffffffffffff) {
        uVar14 = 0;
        goto LAB_1801ec170;
      }
      goto LAB_1801ec177;
    }
  }
  goto LAB_1801ec28d;
LAB_1801ec12b:
  do {
    if (uVar14 <= uVar17) {
      *(ulonglong *)(param_2 + 10) = uVar1;
      if (uVar7 != 0xffffffffffffffff) {
        param_2[0xe] = 0;
        param_2[0xf] = 0;
      }
      param_1[1] = uVar6;
      param_1[2] = uVar1;
      goto LAB_1801ec2e0;
    }
    uVar14 = uVar14 - 1;
    if (uVar15 <= uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar14,uVar15,&PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_1802926c8);
    }
    uVar11 = uVar14 + uVar6;
    if (uVar9 <= uVar11) {
      ppuVar13 = &PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_1802926e0;
LAB_1801ec36f:
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar11,uVar9,ppuVar13);
    }
  } while (*(char *)(*(longlong *)(param_2 + 0x16) + uVar14) == *(char *)(lVar10 + uVar11));
  *(ulonglong *)(param_2 + 10) = uVar16;
  uVar14 = uVar15 - *(longlong *)(param_2 + 6);
  uVar17 = uVar16;
  if (uVar7 != 0xffffffffffffffff) {
LAB_1801ec170:
    *(ulonglong *)(param_2 + 0xe) = uVar14;
    uVar20 = uVar14;
  }
LAB_1801ec177:
  uVar14 = (uVar15 - 1) + uVar17;
  if (uVar9 <= uVar14) goto LAB_1801ec28a;
  goto LAB_1801ec08e;
LAB_1801ec28a:
  uVar17 = uVar9;
LAB_1801ec28d:
  if (uVar17 != 0) {
    uVar15 = uVar17;
    do {
      if (uVar15 < uVar9) {
        if (-0x41 < *(char *)(lVar10 + uVar15)) {
          uVar9 = uVar15;
          goto LAB_1801ec2ac;
        }
      }
      else if (uVar15 == uVar9) goto LAB_1801ec2ac;
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0);
  }
  uVar9 = 0;
LAB_1801ec2ac:
  if (uVar17 <= uVar9) {
    uVar17 = uVar9;
  }
  *(ulonglong *)(param_2 + 10) = uVar17;
  param_1[1] = uVar6;
  param_1[2] = uVar9;
  uVar19 = 1;
LAB_1801ec326:
  *param_1 = uVar19;
  return param_1;
}


