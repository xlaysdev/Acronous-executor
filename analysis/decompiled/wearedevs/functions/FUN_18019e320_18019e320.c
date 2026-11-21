/* FUN_18019e320 @ 18019e320 */

void FUN_18019e320(longlong param_1,ulonglong param_2,ulonglong *param_3,ulonglong param_4,
                  char param_5,undefined8 param_6)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong uVar12;
  ulonglong *_Dst;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong *puVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  bool bVar20;
  ulonglong local_2b8;
  byte abStack_293 [67];
  ulonglong auStack_250 [66];
  
  if (param_2 < 2) {
    return;
  }
  lVar2 = (0x4000000000000000 / param_2 + 1) - (ulonglong)(0x4000000000000000U % param_2 == 0);
  if (param_2 < 0x1001) {
    uVar8 = param_2 - (param_2 >> 1);
    uVar3 = 0x40;
    if (uVar8 < 0x40) {
      uVar3 = uVar8;
    }
  }
  else {
    uVar3 = FUN_1801f2f40(param_2);
  }
  uVar8 = 1;
  uVar13 = 0;
  uVar19 = 0;
  local_2b8 = param_2;
  if (param_2 == 0) goto LAB_18019e460;
LAB_18019e3e0:
  lVar4 = uVar13 * 0x10;
  puVar9 = (ulonglong *)(param_1 + lVar4);
  if (local_2b8 < uVar3) {
LAB_18019e3fa:
    if (param_5 == '\0') {
      if (uVar3 <= local_2b8) {
        local_2b8 = uVar3;
      }
      local_2b8 = local_2b8 * 2;
    }
    else {
      if (0x1f < local_2b8) {
        local_2b8 = 0x20;
      }
      FUN_1801a32e0(puVar9,local_2b8,param_3,param_4,0,0,param_6);
      local_2b8 = (local_2b8 & 0xffffffff) * 2 + 1;
    }
  }
  else {
    uVar5 = local_2b8;
    if (1 < local_2b8) {
      uVar14 = puVar9[2];
      if (uVar14 < *puVar9) {
        if (local_2b8 != 2) {
          puVar11 = (ulonglong *)(param_1 + 0x20 + lVar4);
          uVar10 = 2;
          uVar5 = uVar14;
          do {
            uVar12 = *puVar11;
            if (uVar5 <= uVar12) goto LAB_18019e55a;
            uVar10 = uVar10 + 1;
            puVar11 = puVar11 + 2;
            uVar5 = uVar12;
          } while (local_2b8 != uVar10);
          goto LAB_18019e557;
        }
        uVar10 = 2;
        uVar14 = 1;
LAB_18019e4ae:
        if (uVar14 == 1) {
          uVar12 = 0;
        }
        else {
          puVar16 = (ulonglong *)(uVar10 * 0x10 + lVar4 + param_1 + -0x10);
          uVar12 = 0;
          puVar11 = puVar9;
          do {
            uVar5 = *puVar11;
            uVar1 = puVar11[1];
            uVar18 = puVar16[1];
            *puVar11 = *puVar16;
            puVar11[1] = uVar18;
            *puVar16 = uVar5;
            *(int *)(puVar16 + 1) = (int)uVar1;
            uVar15 = uVar12 ^ 0xffffffffffffffe;
            uVar5 = puVar11[2];
            uVar1 = puVar11[3];
            uVar18 = (puVar9 + uVar10 * 2 + uVar15 * 2)[1];
            puVar11[2] = puVar9[uVar10 * 2 + uVar15 * 2];
            puVar11[3] = uVar18;
            puVar9[uVar10 * 2 + uVar15 * 2] = uVar5;
            *(int *)(puVar9 + uVar10 * 2 + uVar15 * 2 + 1) = (int)uVar1;
            uVar12 = uVar12 + 2;
            puVar11 = puVar11 + 4;
            puVar16 = puVar16 + -4;
          } while ((uVar14 & 0xfffffffffffffffe) != uVar12);
        }
        uVar5 = uVar10;
        if ((uVar14 & 1) != 0) {
          uVar15 = ~uVar12;
          uVar14 = puVar9[uVar12 * 2];
          uVar1 = puVar9[uVar12 * 2 + 1];
          uVar18 = (puVar9 + uVar10 * 2 + uVar15 * 2)[1];
          puVar9[uVar12 * 2] = puVar9[uVar10 * 2 + uVar15 * 2];
          (puVar9 + uVar12 * 2)[1] = uVar18;
          puVar9[uVar10 * 2 + uVar15 * 2] = uVar14;
          *(int *)(puVar9 + uVar10 * 2 + uVar15 * 2 + 1) = (int)uVar1;
        }
      }
      else {
        uVar5 = 2;
        if (local_2b8 != 2) {
          puVar11 = (ulonglong *)(param_1 + 0x20 + lVar4);
          uVar10 = 2;
          uVar5 = uVar14;
          do {
            uVar12 = *puVar11;
            if (uVar12 < uVar5) goto LAB_18019e55a;
            uVar10 = uVar10 + 1;
            puVar11 = puVar11 + 2;
            uVar5 = uVar12;
          } while (local_2b8 != uVar10);
LAB_18019e557:
          uVar10 = local_2b8;
LAB_18019e55a:
          if (uVar10 < uVar3) goto LAB_18019e3fa;
          if (*puVar9 <= uVar14) {
            local_2b8 = uVar10 * 2 + 1;
            goto LAB_18019e658;
          }
          uVar5 = 1;
          if (1 < uVar10) {
            uVar14 = uVar10 >> 1;
            goto LAB_18019e4ae;
          }
        }
      }
    }
    local_2b8 = uVar5 * 2 + 1;
  }
LAB_18019e658:
  uVar5 = ((local_2b8 >> 1) + uVar13 * 2) * lVar2 ^ (uVar13 * 2 - (uVar8 >> 1)) * lVar2;
  lVar4 = 0x3f;
  if (uVar5 != 0) {
    for (; uVar5 >> lVar4 == 0; lVar4 = lVar4 + -1) {
    }
  }
  uVar7 = (uint)lVar4 ^ 0x3f;
  uVar5 = uVar8;
  do {
    uVar8 = local_2b8;
    if (1 < uVar19) {
      do {
        while( true ) {
          if (abStack_293[uVar19] < (byte)uVar7) goto LAB_18019e94b;
          uVar19 = uVar19 - 1;
          uVar10 = auStack_250[uVar19];
          uVar18 = uVar10 >> 1;
          uVar12 = uVar5 >> 1;
          uVar14 = uVar12 + uVar18;
          if ((param_4 < uVar14) || ((((uint)uVar10 | (uint)uVar5) & 1) != 0)) break;
          uVar5 = uVar14 * 2;
          if (uVar19 < 2) goto LAB_18019e940;
        }
        puVar9 = (ulonglong *)((uVar13 - uVar14) * 0x10 + param_1);
        if ((uVar10 & 1) == 0) {
          lVar4 = 0x3f;
          if ((uVar18 | 1) != 0) {
            for (; (uVar18 | 1) >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          FUN_1801a32e0(puVar9,uVar18,param_3,param_4,((uint)lVar4 ^ 0x3f) * 2 ^ 0x7e,0,param_6);
        }
        if ((uVar5 & 1) == 0) {
          lVar4 = 0x3f;
          if ((uVar12 | 1) != 0) {
            for (; (uVar12 | 1) >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          FUN_1801a32e0(puVar9 + uVar18 * 2,uVar12,param_3,param_4,((uint)lVar4 ^ 0x3f) * 2 ^ 0x7e,0
                        ,param_6);
        }
        if ((1 < uVar5) && (1 < uVar10)) {
          uVar5 = uVar18;
          if (uVar12 < uVar18) {
            uVar5 = uVar12;
          }
          if (uVar5 <= param_4) {
            puVar16 = puVar9 + uVar18 * 2;
            puVar11 = puVar9;
            if (uVar12 < uVar18) {
              puVar11 = puVar16;
            }
            memcpy(param_3,puVar11,uVar5 * 0x10);
            puVar17 = param_3 + uVar5 * 2;
            puVar11 = param_3;
            if (uVar12 < uVar18) {
              puVar6 = (ulonglong *)(uVar13 * 0x10 + param_1 + -0x10);
              _Dst = puVar16;
              do {
                bVar20 = puVar17[-2] < _Dst[-2];
                puVar16 = puVar17;
                if (bVar20) {
                  puVar16 = _Dst;
                }
                uVar5 = puVar16[-1];
                *puVar6 = puVar16[-2];
                puVar6[1] = uVar5;
                _Dst = _Dst + (ulonglong)!bVar20 * 2 + -2;
                puVar17 = puVar17 + (ulonglong)bVar20 * 2 + -2;
              } while ((_Dst != puVar9) && (puVar6 = puVar6 + -2, puVar17 != param_3));
            }
            else {
              _Dst = puVar9;
              do {
                bVar20 = *puVar16 < *puVar11;
                puVar9 = puVar11;
                if (bVar20) {
                  puVar9 = puVar16;
                }
                uVar5 = puVar9[1];
                *_Dst = *puVar9;
                _Dst[1] = uVar5;
                puVar11 = puVar11 + (ulonglong)!bVar20 * 2;
                _Dst = _Dst + 2;
              } while ((puVar11 != puVar17) &&
                      (puVar16 = puVar16 + (ulonglong)bVar20 * 2,
                      puVar16 != (ulonglong *)(param_1 + uVar13 * 0x10)));
            }
            memcpy(_Dst,puVar11,(longlong)puVar17 - (longlong)puVar11);
          }
        }
        uVar5 = uVar14 * 2 + 1;
      } while (1 < uVar19);
LAB_18019e940:
      uVar19 = 1;
    }
LAB_18019e94b:
    auStack_250[uVar19] = uVar5;
    abStack_293[uVar19 + 1] = (byte)uVar7;
    if (param_2 <= uVar13) {
      if ((uVar5 & 1) != 0) {
        return;
      }
      lVar2 = 0x3f;
      if ((param_2 | 1) != 0) {
        for (; (param_2 | 1) >> lVar2 == 0; lVar2 = lVar2 + -1) {
        }
      }
      FUN_1801a32e0(param_1,param_2,param_3,param_4,((uint)lVar2 ^ 0x3f) * 2 ^ 0x7e,0,param_6);
      return;
    }
    uVar19 = uVar19 + 1;
    uVar13 = uVar13 + (uVar8 >> 1);
    local_2b8 = param_2 - uVar13;
    if (uVar13 <= param_2 && local_2b8 != 0) goto LAB_18019e3e0;
LAB_18019e460:
    uVar7 = 0;
    local_2b8 = 1;
    uVar5 = uVar8;
  } while( true );
}


