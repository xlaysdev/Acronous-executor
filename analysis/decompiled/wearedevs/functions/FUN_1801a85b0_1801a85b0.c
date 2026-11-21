/* FUN_1801a85b0 @ 1801a85b0 */

void FUN_1801a85b0(longlong param_1,ulonglong param_2,uint *param_3,ulonglong param_4,char param_5,
                  undefined8 param_6)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  uint *puVar23;
  byte bVar24;
  uint uVar25;
  ulonglong uVar26;
  undefined4 *puVar27;
  uint *puVar28;
  uint *puVar29;
  ulonglong uVar30;
  uint uVar31;
  longlong lVar32;
  longlong lVar33;
  ulonglong uVar34;
  uint *_Dst;
  ulonglong uVar35;
  uint *puVar36;
  ulonglong uVar37;
  bool bVar38;
  ulonglong local_2d8;
  byte abStack_293 [67];
  ulonglong auStack_250 [66];
  
  if (param_2 < 2) {
    return;
  }
  lVar19 = (0x4000000000000000 / param_2 + 1) - (ulonglong)(0x4000000000000000U % param_2 == 0);
  if (param_2 < 0x1001) {
    uVar26 = param_2 - (param_2 >> 1);
    uVar20 = 0x40;
    if (uVar26 < 0x40) {
      uVar20 = uVar26;
    }
  }
  else {
    uVar20 = FUN_1801f2f40(param_2);
  }
  uVar35 = 0;
  uVar34 = 0;
  uVar26 = 1;
  do {
    puVar1 = (uint *)(param_1 + uVar35 * 4);
    local_2d8 = param_2 - uVar35;
    if (param_2 < uVar35 || local_2d8 == 0) {
      bVar24 = 0;
      local_2d8 = 1;
    }
    else {
      if (local_2d8 < uVar20) {
LAB_1801a868c:
        if (param_5 == '\0') {
          if (uVar20 <= local_2d8) {
            local_2d8 = uVar20;
          }
          local_2d8 = local_2d8 * 2;
        }
        else {
          if (0x1f < local_2d8) {
            local_2d8 = 0x20;
          }
          FUN_1801a8e30(puVar1,local_2d8,param_3,param_4,0,0,param_6);
          uVar21 = local_2d8 & 0xffffffff;
LAB_1801a88f2:
          local_2d8 = uVar21 * 2 + 1;
        }
      }
      else {
        uVar22 = local_2d8;
        if (1 < local_2d8) {
          uVar25 = puVar1[1];
          if (uVar25 >> 0x18 < *puVar1 >> 0x18) {
            if (local_2d8 != 2) {
              uVar21 = 2;
              uVar31 = uVar25;
              do {
                puVar2 = puVar1 + uVar21;
                if (uVar31 >> 0x18 <= *puVar2 >> 0x18) goto LAB_1801a87e2;
                uVar21 = uVar21 + 1;
                uVar31 = *puVar2;
              } while (local_2d8 != uVar21);
              goto LAB_1801a87df;
            }
            uVar21 = 2;
            uVar22 = 1;
LAB_1801a876e:
            uVar30 = 0;
LAB_1801a88a6:
            lVar32 = -uVar30;
            puVar27 = (undefined4 *)(uVar30 * 4 + uVar35 * 4 + param_1);
            lVar33 = uVar35 * 4 + uVar21 * 4 + param_1 + -4;
            do {
              uVar4 = *puVar27;
              *puVar27 = *(undefined4 *)(lVar33 + lVar32 * 4);
              *(undefined4 *)(lVar33 + lVar32 * 4) = uVar4;
              lVar32 = lVar32 + -1;
              puVar27 = puVar27 + 1;
            } while (-lVar32 != uVar22);
            goto LAB_1801a88f2;
          }
          uVar22 = 2;
          if (local_2d8 != 2) {
            uVar21 = 2;
            uVar31 = uVar25;
            do {
              puVar2 = puVar1 + uVar21;
              if (*puVar2 >> 0x18 < uVar31 >> 0x18) goto LAB_1801a87e2;
              uVar21 = uVar21 + 1;
              uVar31 = *puVar2;
            } while (local_2d8 != uVar21);
LAB_1801a87df:
            uVar21 = local_2d8;
LAB_1801a87e2:
            if (uVar21 < uVar20) goto LAB_1801a868c;
            if (uVar25 >> 0x18 < *puVar1 >> 0x18) {
              uVar22 = 1;
              if (1 < uVar21) {
                uVar22 = uVar21 >> 1;
                if (uVar22 < 8) goto LAB_1801a876e;
                uVar30 = uVar22 & 0xfffffffffffffff8;
                puVar27 = (undefined4 *)(param_1 + 0x10 + uVar35 * 4);
                lVar32 = uVar21 * 4 + uVar35 * 4 + param_1 + -0x10;
                lVar33 = 0;
                do {
                  uVar4 = puVar27[-4];
                  uVar5 = puVar27[-3];
                  uVar6 = puVar27[-2];
                  uVar7 = puVar27[-1];
                  uVar8 = *puVar27;
                  uVar9 = puVar27[1];
                  uVar10 = puVar27[2];
                  uVar11 = puVar27[3];
                  puVar3 = (undefined4 *)(lVar32 + -0x10 + lVar33 * 4);
                  uVar12 = *puVar3;
                  uVar13 = puVar3[1];
                  uVar14 = puVar3[2];
                  uVar15 = puVar3[3];
                  puVar3 = (undefined4 *)(lVar32 + lVar33 * 4);
                  uVar16 = *puVar3;
                  uVar17 = puVar3[1];
                  uVar18 = puVar3[2];
                  puVar27[-4] = puVar3[3];
                  puVar27[-3] = uVar18;
                  puVar27[-2] = uVar17;
                  puVar27[-1] = uVar16;
                  *puVar27 = uVar15;
                  puVar27[1] = uVar14;
                  puVar27[2] = uVar13;
                  puVar27[3] = uVar12;
                  puVar3 = (undefined4 *)(lVar32 + lVar33 * 4);
                  *puVar3 = uVar7;
                  puVar3[1] = uVar6;
                  puVar3[2] = uVar5;
                  puVar3[3] = uVar4;
                  puVar3 = (undefined4 *)(lVar32 + -0x10 + lVar33 * 4);
                  *puVar3 = uVar11;
                  puVar3[1] = uVar10;
                  puVar3[2] = uVar9;
                  puVar3[3] = uVar8;
                  lVar33 = lVar33 + -8;
                  puVar27 = puVar27 + 8;
                } while (-lVar33 != uVar30);
                if (uVar22 != uVar30) goto LAB_1801a88a6;
                goto LAB_1801a88f2;
              }
            }
            else {
              uVar22 = uVar21;
            }
          }
        }
        local_2d8 = uVar22 * 2 + 1;
      }
      uVar22 = ((local_2d8 >> 1) + uVar35 * 2) * lVar19 ^ (uVar35 * 2 - (uVar26 >> 1)) * lVar19;
      lVar32 = 0x3f;
      if (uVar22 != 0) {
        for (; uVar22 >> lVar32 == 0; lVar32 = lVar32 + -1) {
        }
      }
      bVar24 = (byte)lVar32 ^ 0x3f;
    }
    if (1 < uVar34) {
      do {
        while( true ) {
          if (abStack_293[uVar34] < bVar24) goto LAB_1801a8be6;
          uVar34 = uVar34 - 1;
          uVar21 = auStack_250[uVar34];
          uVar37 = uVar21 >> 1;
          uVar30 = uVar26 >> 1;
          uVar22 = uVar37 + uVar30;
          if ((param_4 < uVar22) || ((((uint)uVar21 | (uint)uVar26) & 1) != 0)) break;
          uVar26 = uVar22 * 2;
          if (uVar34 < 2) goto LAB_1801a8be0;
        }
        puVar2 = (uint *)(param_1 + (uVar35 - uVar22) * 4);
        if ((uVar21 & 1) == 0) {
          lVar32 = 0x3f;
          if ((uVar37 | 1) != 0) {
            for (; (uVar37 | 1) >> lVar32 == 0; lVar32 = lVar32 + -1) {
            }
          }
          FUN_1801a8e30(puVar2,uVar37,param_3,param_4,((uint)lVar32 ^ 0x3f) * 2 ^ 0x7e,0,param_6);
        }
        if ((uVar26 & 1) == 0) {
          lVar32 = 0x3f;
          if ((uVar30 | 1) != 0) {
            for (; (uVar30 | 1) >> lVar32 == 0; lVar32 = lVar32 + -1) {
            }
          }
          FUN_1801a8e30(puVar2 + uVar37,uVar30,param_3,param_4,((uint)lVar32 ^ 0x3f) * 2 ^ 0x7e,0,
                        param_6);
        }
        if ((1 < uVar26) && (1 < uVar21)) {
          uVar26 = uVar37;
          if (uVar30 < uVar37) {
            uVar26 = uVar30;
          }
          if (uVar26 <= param_4) {
            puVar36 = puVar2 + uVar37;
            puVar29 = puVar2;
            if (uVar30 < uVar37) {
              puVar29 = puVar36;
            }
            memcpy(param_3,puVar29,uVar26 * 4);
            puVar29 = param_3 + uVar26;
            puVar28 = param_3;
            if (uVar30 < uVar37) {
              puVar23 = (uint *)(param_1 + -4 + uVar35 * 4);
              _Dst = puVar36;
              do {
                bVar38 = puVar29[-1] >> 0x18 < _Dst[-1] >> 0x18;
                uVar25 = puVar29[-1];
                if (bVar38) {
                  uVar25 = _Dst[-1];
                }
                *puVar23 = uVar25;
                _Dst = _Dst + ((ulonglong)!bVar38 - 1);
                puVar29 = puVar29 + ((ulonglong)bVar38 - 1);
              } while ((_Dst != puVar2) && (puVar23 = puVar23 + -1, puVar29 != param_3));
            }
            else {
              _Dst = puVar2;
              do {
                bVar38 = *puVar36 >> 0x18 < *puVar28 >> 0x18;
                uVar25 = *puVar28;
                if (bVar38) {
                  uVar25 = *puVar36;
                }
                *_Dst = uVar25;
                puVar28 = puVar28 + !bVar38;
                _Dst = _Dst + 1;
              } while ((puVar28 != puVar29) && (puVar36 = puVar36 + bVar38, puVar36 != puVar1));
            }
            memcpy(_Dst,puVar28,(longlong)puVar29 - (longlong)puVar28);
          }
        }
        uVar26 = uVar22 * 2 + 1;
      } while (1 < uVar34);
LAB_1801a8be0:
      uVar34 = 1;
    }
LAB_1801a8be6:
    auStack_250[uVar34] = uVar26;
    abStack_293[uVar34 + 1] = bVar24;
    if (param_2 <= uVar35) {
      if ((uVar26 & 1) != 0) {
        return;
      }
      lVar19 = 0x3f;
      if ((param_2 | 1) != 0) {
        for (; (param_2 | 1) >> lVar19 == 0; lVar19 = lVar19 + -1) {
        }
      }
      FUN_1801a8e30(param_1,param_2,param_3,param_4,((uint)lVar19 ^ 0x3f) * 2 ^ 0x7e,0,param_6);
      return;
    }
    uVar34 = uVar34 + 1;
    uVar35 = uVar35 + (local_2d8 >> 1);
    uVar26 = local_2d8;
  } while( true );
}


