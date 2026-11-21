/* FUN_1801a6ab0 @ 1801a6ab0 */

undefined4 FUN_1801a6ab0(uint *param_1,uint *param_2,ulonglong *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  char cVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint *puVar21;
  
  if (param_1 != param_2) {
    iVar14 = 0;
    uVar9 = 0;
    puVar21 = param_1;
    do {
      if (iVar14 == 1) {
        return 0;
      }
      uVar15 = *puVar21;
      if (uVar15 < 0x80) {
        uVar19 = param_3[2];
        uVar10 = uVar19;
        if (*param_3 == uVar19) {
          FUN_1801f6a80(param_3,uVar19,1,1,1);
          uVar10 = param_3[2];
        }
        *(char *)(param_3[1] + uVar10) = (char)uVar15;
        param_3[2] = uVar19 + 1;
        uVar9 = uVar9 + 1;
      }
      puVar21 = puVar21 + 1;
      iVar14 = iVar14 + -1;
    } while (puVar21 != param_2);
    uVar15 = -iVar14;
    uVar19 = (ulonglong)uVar15;
    if (0xf0e < uVar15) {
      return 0;
    }
    puVar21 = param_2;
    uVar3 = 0;
    if (uVar9 == 0) goto LAB_1801a6b8a;
    uVar10 = param_3[2];
    uVar12 = uVar10;
    if (*param_3 == uVar10) goto LAB_1801a6f79;
    while( true ) {
      uVar15 = (uint)uVar19;
      *(undefined1 *)(param_3[1] + uVar10) = 0x2d;
      param_3[2] = uVar12 + 1;
      puVar21 = param_2;
      uVar3 = uVar9;
LAB_1801a6b8a:
      if (uVar15 <= uVar3) break;
      iVar14 = 0;
      uVar4 = 0x48;
      uVar9 = 0x80;
      uVar5 = uVar3;
LAB_1801a6be8:
      puVar7 = param_1;
      uVar19 = (longlong)puVar21 - (longlong)param_1;
      do {
        puVar18 = puVar7;
        uVar19 = uVar19 - 4;
        if (puVar18 == puVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180282310);
        }
        uVar12 = (ulonglong)*puVar18;
        puVar7 = puVar18 + 1;
      } while (*puVar18 < uVar9);
      if (puVar7 != puVar21) {
        if ((ulonglong)((longlong)puVar21 - (longlong)puVar7) < 0x10) {
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          do {
            uVar11 = puVar7[uVar10];
            uVar13 = (uint)uVar12;
            uVar16 = uVar13;
            if (uVar11 <= uVar13) {
              uVar16 = uVar11;
            }
            uVar17 = puVar18[uVar10 + 2];
            if (uVar11 < uVar9) {
              uVar16 = uVar13;
            }
            uVar11 = uVar16;
            if (uVar17 <= uVar16) {
              uVar11 = uVar17;
            }
            if (uVar17 < uVar9) {
              uVar11 = uVar16;
            }
            uVar16 = puVar18[uVar10 + 3];
            uVar13 = uVar11;
            if (uVar16 <= uVar11) {
              uVar13 = uVar16;
            }
            if (uVar16 < uVar9) {
              uVar13 = uVar11;
            }
            uVar11 = puVar18[uVar10 + 4];
            uVar16 = uVar13;
            if (uVar11 <= uVar13) {
              uVar16 = uVar11;
            }
            if (uVar11 < uVar9) {
              uVar16 = uVar13;
            }
            uVar12 = (ulonglong)uVar16;
            uVar10 = uVar10 + 4;
          } while ((uVar19 >> 2 & 0xfffffffffffffffc) != uVar10);
        }
        if (((ulonglong)((longlong)puVar21 - (longlong)puVar7) >> 2 & 3) != 0) {
          uVar20 = 0;
          do {
            uVar11 = puVar7[uVar10 + uVar20];
            uVar16 = uVar11;
            if ((uint)uVar12 < uVar11) {
              uVar16 = (uint)uVar12;
            }
            if (uVar9 <= uVar11) {
              uVar12 = (ulonglong)uVar16;
            }
            uVar20 = uVar20 + 1;
          } while (((uint)(uVar19 >> 2) & 3) != uVar20);
        }
      }
      uVar11 = (uint)uVar12;
      uVar9 = (uVar5 + 1) * (uVar11 - uVar9) + iVar14;
      puVar7 = param_1;
LAB_1801a6cc1:
      uVar16 = uVar9 + (*puVar7 < uVar11);
      uVar9 = uVar16;
      if (*puVar7 != uVar11) {
LAB_1801a6cb4:
        puVar7 = puVar7 + 1;
        if (puVar7 == puVar21) goto LAB_1801a6bd0;
        goto LAB_1801a6cc1;
      }
      uVar13 = -(uVar4 - 0x24);
      if (uVar4 + 0x1a < 0x25) {
        uVar13 = 0x1a;
      }
      if (0x23 < uVar4) {
        uVar13 = 1;
      }
      uVar17 = uVar16;
      if (uVar16 < uVar13) {
LAB_1801a6cff:
        cVar8 = 'a';
        if ((0x19 < uVar17) && (cVar8 = '\x16', 0x23 < uVar17)) {
LAB_1801a6f55:
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("explicit panic",0xe,&PTR_s_C__Users_burne__cargo_registry_s_180282350);
        }
        uVar19 = param_3[2];
        uVar10 = uVar19;
        if (*param_3 == uVar19) {
          FUN_1801f6a80(param_3,uVar19,1,1,1);
          uVar10 = param_3[2];
        }
        *(char *)(param_3[1] + uVar10) = cVar8 + (char)uVar17;
        param_3[2] = uVar19 + 1;
        uVar13 = uVar5 + 1;
        if (uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201c20(&PTR_s_C__Users_burne__cargo_registry_s_180282368);
        }
        uVar4 = 2;
        if (uVar5 == uVar3) {
          uVar4 = 700;
        }
        uVar9 = 0;
        uVar4 = (int)(((ulonglong)uVar16 / (ulonglong)uVar4) / (ulonglong)uVar13) +
                (int)((ulonglong)uVar16 / (ulonglong)uVar4);
        iVar14 = 0;
        uVar5 = uVar4;
        if (0x1c7 < uVar4) {
          do {
            uVar4 = uVar5 / 0x23;
            iVar14 = iVar14 + 0x24;
            bVar1 = 0x3e57 < uVar5;
            uVar5 = uVar4;
          } while (bVar1);
        }
        uVar4 = (uVar4 * 0x24 & 0xffff) / (uVar4 + 0x26 & 0xffff) + iVar14;
        uVar5 = uVar13;
        goto LAB_1801a6cb4;
      }
      uVar9 = -uVar4;
      param_2 = (uint *)0x48;
      uVar10 = (ulonglong)uVar16;
      while( true ) {
        uVar17 = uVar13 - 0x24;
        uVar19 = (ulonglong)uVar17;
        if (uVar17 == 0) break;
        uVar6 = (int)uVar10 - uVar13;
        uVar10 = (ulonglong)uVar6 / (ulonglong)-uVar17;
        uVar6 = uVar6 % -uVar17 + uVar13;
        cVar8 = 'a';
        if ((0x19 < uVar6) && (cVar8 = '\x16', 0x23 < uVar6)) goto LAB_1801a6f55;
        uVar19 = param_3[2];
        uVar17 = (uint)uVar10;
        uVar20 = uVar19;
        if (*param_3 == uVar19) {
          FUN_1801f6a80(param_3,uVar19,1,1,1);
          uVar20 = param_3[2];
        }
        uVar2 = (uint)param_2;
        uVar13 = uVar9 + uVar2;
        if (uVar4 + 0x1a <= uVar2) {
          uVar13 = 0x1a;
        }
        if (uVar2 <= uVar4) {
          uVar13 = 1;
        }
        *(char *)(param_3[1] + uVar20) = cVar8 + (char)uVar6;
        param_3[2] = uVar19 + 1;
        param_2 = (uint *)(ulonglong)(uVar2 + 0x24);
        if (uVar17 < uVar13) goto LAB_1801a6cff;
      }
      FUN_180201c40(&PTR_s_C__Users_burne__cargo_registry_s_180282328);
LAB_1801a6f79:
      FUN_1801f6a80(param_3,uVar12,1,1,1);
      uVar19 = uVar19 & 0xffffffff;
      uVar10 = param_3[2];
    }
  }
  return 2;
LAB_1801a6bd0:
  iVar14 = uVar9 + 1;
  uVar9 = uVar11 + 1;
  if (uVar15 <= uVar5) {
    return 2;
  }
  goto LAB_1801a6be8;
}


