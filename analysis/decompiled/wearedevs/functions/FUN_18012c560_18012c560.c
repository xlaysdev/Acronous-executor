/* FUN_18012c560 @ 18012c560 */

void FUN_18012c560(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  longlong lVar7;
  byte bVar8;
  short sVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  ulonglong *puVar14;
  ulonglong *puVar15;
  byte *pbVar16;
  longlong lVar17;
  byte *pbVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong *puVar21;
  ulonglong *puVar22;
  ulonglong *local_70;
  
  puVar5 = (ulonglong *)param_3[2];
  *(undefined1 *)(param_1 + 1) = 5;
  *param_1 = 2;
  puVar6 = (ulonglong *)*param_2;
  lVar7 = param_2[1];
  bVar1 = param_4[2];
  cVar2 = param_4[3];
  cVar3 = *param_4;
  cVar4 = param_4[1];
  puVar22 = (ulonglong *)param_3[1];
  lVar20 = 0;
  puVar15 = puVar5;
  local_70 = puVar6;
LAB_18012c5d0:
  if (puVar15 < puVar22) {
LAB_18012c5e9:
    bVar8 = (byte)*puVar15;
    uVar10 = (ulonglong)bVar8;
    puVar11 = (ulonglong *)((longlong)puVar15 + 1);
    param_3[2] = (ulonglong)puVar11;
    if (uVar10 == 10) {
      *param_1 = 0;
      param_1[1] = (longlong)puVar11 - (longlong)puVar5;
      goto LAB_18012cd9d;
    }
    if (bVar8 != 0xd) {
      if ((&DAT_180243310)[uVar10] == '\0') {
        if (((lVar20 == 0 & bVar1) == 0) || ((bVar8 != 0x20 && (bVar8 != 9)))) {
          if ((cVar2 != '\0') && (bVar8 != 0)) {
            while (puVar15 = puVar11, (int)uVar10 != 10) {
              if ((int)uVar10 == 0xd) goto LAB_18012c9b6;
              if (puVar22 <= puVar11) goto LAB_18012cd85;
              uVar12 = *puVar11;
              uVar10 = (ulonglong)(byte)uVar12;
              puVar11 = (ulonglong *)((longlong)puVar11 + 1);
              param_3[2] = (ulonglong)puVar11;
              if ((byte)uVar12 == 0) goto LAB_18012cd8e;
            }
            goto LAB_18012c9d3;
          }
LAB_18012cd8e:
          *(undefined1 *)(param_1 + 1) = 0;
          goto LAB_18012cd92;
        }
        puVar15 = puVar11;
        if (puVar11 < puVar22) {
          do {
            if (((byte)*puVar11 != 0x20) && (puVar15 = puVar11, (byte)*puVar11 != 9)) break;
            puVar11 = (ulonglong *)((longlong)puVar11 + 1);
            param_3[2] = (ulonglong)puVar11;
            puVar15 = puVar11;
          } while (puVar11 != puVar22);
        }
        goto LAB_18012c9d3;
      }
      for (uVar10 = (longlong)puVar22 - (longlong)puVar11; 7 < uVar10; uVar10 = uVar10 - 8) {
        uVar12 = *puVar11;
        if ((&DAT_180243310)[uVar12 & 0xff] != '\x01') {
          lVar17 = 0;
LAB_18012c810:
          puVar21 = (ulonglong *)((longlong)puVar11 + lVar17);
          param_3[2] = (ulonglong)puVar21;
          goto joined_r0x00018012c820;
        }
        if ((&DAT_180243310)[uVar12 >> 8 & 0xff] != '\x01') {
          lVar17 = 1;
          goto LAB_18012c810;
        }
        if ((&DAT_180243310)[uVar12 >> 0x10 & 0xff] != '\x01') {
          lVar17 = 2;
          goto LAB_18012c810;
        }
        if ((&DAT_180243310)[uVar12 >> 0x18 & 0xff] != '\x01') {
          lVar17 = 3;
          goto LAB_18012c810;
        }
        if ((&DAT_180243310)[uVar12 >> 0x20 & 0xff] != '\x01') {
          lVar17 = 4;
          goto LAB_18012c810;
        }
        if ((&DAT_180243310)[uVar12 >> 0x28 & 0xff] != '\x01') {
          lVar17 = 5;
          goto LAB_18012c810;
        }
        if ((&DAT_180243310)[uVar12 >> 0x30 & 0xff] != '\x01') {
          lVar17 = 6;
          goto LAB_18012c810;
        }
        if ((&DAT_180243310)[uVar12 >> 0x38] == '\0') {
          lVar17 = 7;
          goto LAB_18012c810;
        }
        puVar11 = puVar11 + 1;
      }
      uVar12 = 0;
      do {
        uVar19 = uVar12;
        if ((ulonglong *)(uVar19 + (longlong)puVar11) == puVar22) {
          uVar19 = uVar10;
          break;
        }
        uVar12 = uVar19 + 1;
      } while ((&DAT_180243310)[(byte)*(ulonglong *)(uVar19 + (longlong)puVar11)] != '\0');
      puVar21 = (ulonglong *)((longlong)puVar11 + uVar19);
      param_3[2] = (ulonglong)puVar21;
joined_r0x00018012c820:
      if (puVar21 < puVar22) {
        bVar8 = (byte)*puVar21;
        puVar11 = (ulonglong *)((longlong)puVar21 + 1);
        param_3[2] = (ulonglong)puVar11;
        uVar10 = *param_3;
        *param_3 = (ulonglong)puVar11;
        if (bVar8 == 0x3a) {
joined_r0x00018012c94f:
          if (puVar11 < puVar22) {
            puVar14 = puVar11;
            while( true ) {
              bVar8 = (byte)*puVar14;
              uVar12 = (ulonglong)bVar8;
              puVar15 = (ulonglong *)((longlong)puVar14 + 1);
              param_3[2] = (ulonglong)puVar15;
              if ((uVar12 != 9) && (bVar8 != 0x20)) break;
              *param_3 = (ulonglong)puVar15;
              puVar11 = puVar15;
              puVar14 = puVar15;
joined_r0x00018012c901:
              if (puVar22 <= puVar14) goto LAB_18012cd78;
            }
            if ((&DAT_180243210)[uVar12] != '\x01') {
              if (bVar8 != 10) {
                if (bVar8 != 0xd) {
                  if (cVar2 != '\0') goto joined_r0x00018012ca02;
                  goto LAB_18012ce27;
                }
                if (puVar22 <= puVar15) goto LAB_18012cdf6;
                bVar8 = *(byte *)((longlong)puVar14 + 1);
                puVar15 = (ulonglong *)((longlong)puVar14 + 2);
                param_3[2] = (ulonglong)puVar15;
                if (bVar8 != 10) goto LAB_18012ce04;
              }
              if (cVar4 != '\0') {
                if (puVar22 <= puVar15) goto LAB_18012cd78;
                puVar14 = puVar15;
                if (((byte)*puVar15 == 9) || ((byte)*puVar15 == 0x20)) goto joined_r0x00018012c901;
              }
              pbVar18 = (byte *)0x0;
              goto LAB_18012ccd2;
            }
LAB_18012ca60:
            if (DAT_1802fd720 == 0) {
              if (*(longlong *)PTR_DAT_1802fd650 == 0) {
                sVar9 = FUN_180201000();
              }
              else {
                sVar9 = (short)*(longlong *)PTR_DAT_1802fd650;
              }
              bVar8 = 1;
              if (-1 < sVar9) {
                uVar12 = *(ulonglong *)PTR_DAT_1802fd650;
                if (uVar12 == 0) {
                  uVar12 = FUN_180201000();
                }
                bVar8 = (byte)(uVar12 >> 0xb) & 1 ^ 3;
              }
              DAT_1802fd720 = bVar8;
              if (bVar8 == 1) goto LAB_18012cbd2;
LAB_18012ca77:
              if (DAT_1802fd720 != 2) {
                do {
                  while (7 < (ulonglong)((longlong)puVar22 - (longlong)puVar15)) {
                    uVar12 = *puVar15;
                    uVar12 = ((uVar12 ^ 0x7f7f7f7f7f7f7f7f) + 0xfefefefefefefeff |
                             uVar12 + 0xdfdfdfdfdfdfdfe0) & ~uVar12;
                    if ((uVar12 & 0x8080808080808080) != 0) {
                      if ((char)uVar12 < '\0') {
                        lVar17 = 0;
                      }
                      else {
                        lVar17 = 1;
                        if (-1 < (short)uVar12) {
                          lVar17 = 2;
                          if (((((uVar12 & 0x800000) == 0) && (lVar17 = 3, -1 < (int)uVar12)) &&
                              (lVar17 = 4, (uVar12 >> 0x27 & 1) == 0)) &&
                             (lVar17 = 5, (uVar12 >> 0x2f & 1) == 0)) {
                            lVar17 = 7 - (ulonglong)((uVar12 >> 0x37 & 1) != 0);
                          }
                        }
                      }
                      puVar15 = (ulonglong *)((longlong)puVar15 + lVar17);
                      param_3[2] = (ulonglong)puVar15;
                      break;
                    }
                    puVar15 = puVar15 + 1;
                    param_3[2] = (ulonglong)puVar15;
                  }
                  if ((puVar22 <= puVar15) || ((&DAT_180243210)[(byte)*puVar15] != '\x01'))
                  goto LAB_18012cbda;
                  puVar15 = (ulonglong *)((longlong)puVar15 + 1);
                  param_3[2] = (ulonglong)puVar15;
                } while( true );
              }
              FUN_18012d030(param_3);
            }
            else {
              if (DAT_1802fd720 != 1) goto LAB_18012ca77;
LAB_18012cbd2:
              FUN_18012ceb0(param_3);
            }
LAB_18012cbda:
            puVar22 = (ulonglong *)param_3[1];
            puVar11 = (ulonglong *)param_3[2];
            if (puVar22 <= puVar11) goto LAB_18012cd78;
            bVar8 = (byte)*puVar11;
            puVar15 = (ulonglong *)((longlong)puVar11 + 1);
            param_3[2] = (ulonglong)puVar15;
            lVar17 = -1;
            if (bVar8 != 10) {
              if (bVar8 != 0xd) goto LAB_18012cc5d;
              if (puVar22 <= puVar15) goto LAB_18012cdf6;
              bVar8 = *(byte *)((longlong)puVar11 + 1);
              puVar15 = (ulonglong *)((longlong)puVar11 + 2);
              param_3[2] = (ulonglong)puVar15;
              lVar17 = -2;
              if (bVar8 != 10) goto LAB_18012ce04;
            }
            if (cVar4 == '\0') goto LAB_18012cd28;
            if (puVar15 < puVar22) goto code_r0x00018012cc41;
          }
          goto LAB_18012cd78;
        }
        if (cVar3 != '\0') {
          do {
            if ((bVar8 != 9) && (bVar8 != 0x20)) goto LAB_18012c95a;
            if (puVar22 <= puVar11) goto LAB_18012cd78;
            bVar8 = (byte)*puVar11;
            puVar11 = (ulonglong *)((longlong)puVar11 + 1);
            param_3[2] = (ulonglong)puVar11;
          } while (bVar8 != 0x3a);
          *param_3 = (ulonglong)puVar11;
          goto joined_r0x00018012c94f;
        }
LAB_18012c95a:
        if (cVar2 == '\0') goto LAB_18012cd8e;
        while( true ) {
          if (bVar8 == 0) goto LAB_18012cd8e;
          puVar15 = puVar11;
          if (bVar8 == 10) goto LAB_18012c9d3;
          if (bVar8 == 0xd) break;
          if (puVar22 <= puVar11) goto LAB_18012cd85;
          bVar8 = (byte)*puVar11;
          puVar11 = (ulonglong *)((longlong)puVar11 + 1);
          param_3[2] = (ulonglong)puVar11;
        }
LAB_18012c9b6:
        if (puVar22 <= puVar11) goto LAB_18012ce30;
        uVar10 = *puVar11;
        param_3[2] = (longlong)puVar11 + 1U;
        puVar15 = (ulonglong *)((longlong)puVar11 + 1U);
        if ((byte)uVar10 == 10) goto LAB_18012c9d3;
        *(undefined1 *)(param_1 + 1) = 0;
        goto LAB_18012ce41;
      }
LAB_18012cd78:
      *param_1 = 1;
      goto LAB_18012cd9d;
    }
    uVar13 = 1;
    if (puVar11 < puVar22) {
      bVar1 = *(byte *)((longlong)puVar15 + 1);
      param_3[2] = (longlong)puVar15 + 2U;
      if (bVar1 == 10) {
        *param_1 = 0;
        param_1[1] = (longlong)((longlong)puVar15 + 2U) - (longlong)puVar5;
        goto LAB_18012cd9d;
      }
      *(undefined1 *)(param_1 + 1) = 2;
      uVar13 = 2;
    }
    *param_1 = uVar13;
    goto LAB_18012cd9d;
  }
LAB_18012cd85:
  *param_1 = 1;
LAB_18012cd9d:
  param_2[1] = lVar20;
  return;
joined_r0x00018012ca02:
  if (bVar8 == 0) goto LAB_18012ce27;
  if ((int)uVar12 == 10) goto LAB_18012c9d3;
  if ((int)uVar12 == 0xd) goto LAB_18012ccaa;
  if (puVar22 <= puVar15) goto LAB_18012cd85;
  bVar8 = (byte)*puVar15;
  uVar12 = (ulonglong)bVar8;
  puVar15 = (ulonglong *)((longlong)puVar15 + 1);
  param_3[2] = (ulonglong)puVar15;
  goto joined_r0x00018012ca02;
LAB_18012cc5d:
  if (cVar2 == '\0') {
LAB_18012ce27:
    *(undefined1 *)(param_1 + 1) = 1;
LAB_18012cd92:
    *param_1 = 2;
    goto LAB_18012cd9d;
  }
  while( true ) {
    if (bVar8 == 0) goto LAB_18012ce27;
    if (bVar8 == 10) goto LAB_18012c9d3;
    if (bVar8 == 0xd) break;
    if (puVar22 <= puVar15) goto LAB_18012cd85;
    bVar8 = (byte)*puVar15;
    puVar15 = (ulonglong *)((longlong)puVar15 + 1);
    param_3[2] = (ulonglong)puVar15;
  }
LAB_18012ccaa:
  if (puVar22 <= puVar15) {
LAB_18012ce30:
    *param_1 = 1;
    goto LAB_18012cd9d;
  }
  uVar10 = *puVar15;
  param_3[2] = (longlong)puVar15 + 1U;
  puVar15 = (ulonglong *)((longlong)puVar15 + 1U);
  if ((byte)uVar10 != 10) {
    *(undefined1 *)(param_1 + 1) = 1;
LAB_18012ce41:
    *param_1 = 2;
    goto LAB_18012cd9d;
  }
LAB_18012c9d3:
  *param_3 = (ulonglong)puVar15;
  if (puVar22 <= puVar15) goto LAB_18012cd85;
  goto LAB_18012c5e9;
LAB_18012cdf6:
  *param_1 = 1;
  goto LAB_18012cd9d;
LAB_18012ce04:
  *(undefined1 *)(param_1 + 1) = 1;
  *param_1 = 2;
  goto LAB_18012cd9d;
code_r0x00018012cc41:
  if (((byte)*puVar15 == 9) || ((byte)*puVar15 == 0x20)) goto LAB_18012ca60;
LAB_18012cd28:
  puVar11 = (ulonglong *)*param_3;
  pbVar18 = (byte *)((longlong)puVar15 + (lVar17 - (longlong)puVar11));
LAB_18012ccd2:
  *param_3 = (ulonglong)puVar15;
  if (local_70 == puVar6 + lVar7 * 4) goto LAB_18012cd9d;
  if (pbVar18 == (byte *)0x0) {
    pbVar18 = (byte *)0x0;
  }
  else {
    pbVar16 = pbVar18;
    do {
      if ((0x20 < (ulonglong)*(byte *)((longlong)puVar11 + (longlong)(pbVar16 + -1))) ||
         ((0x100002600U >>
           ((ulonglong)*(byte *)((longlong)puVar11 + (longlong)(pbVar16 + -1)) & 0x3f) & 1) == 0)) {
        if (pbVar18 < pbVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,pbVar16,pbVar18,&PTR_s_C__Users_burne__cargo_registry_s_180243568);
        }
        pbVar18 = pbVar16;
        break;
      }
      pbVar16 = pbVar16 + -1;
    } while (pbVar16 != (byte *)0x0);
  }
  *local_70 = uVar10;
  local_70[1] = (longlong)puVar21 - uVar10;
  local_70[2] = (ulonglong)puVar11;
  local_70[3] = (ulonglong)pbVar18;
  lVar20 = lVar20 + 1;
  local_70 = local_70 + 4;
  goto LAB_18012c5d0;
}


