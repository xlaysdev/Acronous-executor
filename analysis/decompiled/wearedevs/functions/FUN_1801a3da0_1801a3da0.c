/* FUN_1801a3da0 @ 1801a3da0 */

void FUN_1801a3da0(longlong param_1,undefined4 *param_2)

{
  ulonglong *puVar1;
  longlong lVar2;
  undefined4 uVar3;
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
  undefined4 uVar19;
  bool bVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined4 local_88 [4];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  
  uVar22 = *(ulonglong *)(param_1 + 0x48);
  uVar23 = uVar22;
  uVar26 = 0x11;
  if (0x11 < uVar22) {
    uVar23 = *(ulonglong *)(param_1 + 8);
    uVar26 = uVar22;
  }
  uVar3 = *param_2;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  uVar8 = param_2[5];
  uVar9 = param_2[6];
  uVar10 = param_2[7];
  uVar11 = param_2[8];
  uVar12 = param_2[9];
  uVar13 = param_2[10];
  uVar14 = param_2[0xb];
  uVar15 = param_2[0xc];
  uVar16 = param_2[0xd];
  uVar17 = param_2[0xe];
  uVar18 = param_2[0xf];
  uVar19 = param_2[0x10];
  puVar1 = (ulonglong *)(param_1 + 0x48);
  if (uVar26 - uVar23 < 0x11) {
    if (0xffffffffffffffee < uVar23) {
LAB_1801a401b:
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("capacity overflow",0x11,&PTR_s_C__Users_burne__cargo_registry_s_180282130);
    }
    uVar22 = 0x3f;
    if (uVar23 + 0x10 != 0) {
      for (; uVar23 + 0x10 >> uVar22 == 0; uVar22 = uVar22 - 1) {
      }
    }
    if ((uVar22 ^ 0x3f) == 0) goto LAB_1801a401b;
    lVar21 = FUN_1801a51b0(param_1,(0xffffffffffffffffU >> ((byte)(uVar22 ^ 0x3f) & 0x3f)) + 1);
    if (lVar21 != -0x7fffffffffffffff) {
      if (lVar21 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(lVar21);
      }
      goto LAB_1801a401b;
    }
    uVar22 = *puVar1;
  }
  if (uVar22 < 0x12) {
    lVar21 = param_1 + 4;
    uVar22 = 0x11;
    uVar23 = *puVar1;
    puVar24 = puVar1;
    if (uVar23 < 0x11) goto LAB_1801a3ef8;
  }
  else {
    puVar24 = (ulonglong *)(param_1 + 8);
    lVar21 = *(longlong *)(param_1 + 0x10);
    uVar23 = *puVar24;
    if (uVar23 < uVar22) {
LAB_1801a3ef8:
      *(undefined4 *)(lVar21 + uVar23 * 4) = uVar3;
      if (uVar23 + 1 == uVar22) {
        lVar21 = 1;
      }
      else {
        *(undefined4 *)(lVar21 + 4 + uVar23 * 4) = uVar4;
        if (uVar23 + 2 == uVar22) {
          lVar21 = 2;
        }
        else {
          *(undefined4 *)(lVar21 + 8 + uVar23 * 4) = uVar5;
          if (uVar23 + 3 == uVar22) {
            lVar21 = 3;
          }
          else {
            *(undefined4 *)(lVar21 + 0xc + uVar23 * 4) = uVar6;
            if (uVar23 + 4 == uVar22) {
              lVar21 = 4;
            }
            else {
              *(undefined4 *)(lVar21 + 0x10 + uVar23 * 4) = uVar7;
              if (uVar23 + 5 == uVar22) {
                lVar21 = 5;
              }
              else {
                *(undefined4 *)(lVar21 + 0x14 + uVar23 * 4) = uVar8;
                if (uVar23 + 6 == uVar22) {
                  lVar21 = 6;
                }
                else {
                  *(undefined4 *)(lVar21 + 0x18 + uVar23 * 4) = uVar9;
                  if (uVar23 + 7 == uVar22) {
                    lVar21 = 7;
                  }
                  else {
                    *(undefined4 *)(lVar21 + 0x1c + uVar23 * 4) = uVar10;
                    if (uVar23 + 8 == uVar22) {
                      lVar21 = 8;
                    }
                    else {
                      *(undefined4 *)(lVar21 + 0x20 + uVar23 * 4) = uVar11;
                      if (uVar23 + 9 == uVar22) {
                        lVar21 = 9;
                      }
                      else {
                        *(undefined4 *)(lVar21 + 0x24 + uVar23 * 4) = uVar12;
                        if (uVar23 + 10 == uVar22) {
                          lVar21 = 10;
                        }
                        else {
                          *(undefined4 *)(lVar21 + 0x28 + uVar23 * 4) = uVar13;
                          if (uVar23 + 0xb == uVar22) {
                            lVar21 = 0xb;
                          }
                          else {
                            *(undefined4 *)(lVar21 + 0x2c + uVar23 * 4) = uVar14;
                            if (uVar23 + 0xc == uVar22) {
                              lVar21 = 0xc;
                            }
                            else {
                              *(undefined4 *)(lVar21 + 0x30 + uVar23 * 4) = uVar15;
                              if (uVar23 + 0xd == uVar22) {
                                lVar21 = 0xd;
                              }
                              else {
                                *(undefined4 *)(lVar21 + 0x34 + uVar23 * 4) = uVar16;
                                if (uVar23 + 0xe == uVar22) {
                                  lVar21 = 0xe;
                                }
                                else {
                                  *(undefined4 *)(lVar21 + 0x38 + uVar23 * 4) = uVar17;
                                  if (uVar23 + 0xf == uVar22) {
                                    lVar21 = 0xf;
                                  }
                                  else {
                                    *(undefined4 *)(lVar21 + 0x3c + uVar23 * 4) = uVar18;
                                    if (uVar23 + 0x10 != uVar22) {
                                      *(undefined4 *)(lVar21 + 0x40 + uVar23 * 4) = uVar19;
                                      if (uVar23 + 0x11 != uVar22) {
                                        *puVar24 = uVar23 + 0x11;
                                        return;
                                      }
                                      lVar21 = 0x11;
                                      bVar20 = true;
                                      goto LAB_1801a40bd;
                                    }
                                    lVar21 = 0x10;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      bVar20 = false;
      goto LAB_1801a40bd;
    }
  }
  uVar22 = uVar23;
  bVar20 = false;
  lVar21 = 0;
LAB_1801a40bd:
  *puVar24 = uVar22;
  local_88[0] = uVar3;
  local_88[1] = uVar4;
  local_88[2] = uVar5;
  local_88[3] = uVar6;
  local_78 = uVar7;
  local_74 = uVar8;
  local_70 = uVar9;
  local_6c = uVar10;
  local_68 = uVar11;
  local_64 = uVar12;
  local_60 = uVar13;
  local_5c = uVar14;
  local_58 = uVar15;
  local_54 = uVar16;
  local_50 = uVar17;
  local_4c = uVar18;
  local_48 = uVar19;
  if (!bVar20) {
    do {
      lVar2 = lVar21 + 1;
      uVar22 = *puVar1;
      if (uVar22 < 0x12) {
        uVar26 = 0x11;
        uVar23 = uVar22;
        lVar25 = param_1 + 4;
        puVar24 = puVar1;
      }
      else {
        uVar23 = *(ulonglong *)(param_1 + 8);
        lVar25 = *(longlong *)(param_1 + 0x10);
        puVar24 = (ulonglong *)(param_1 + 8);
        uVar26 = uVar22;
      }
      uVar3 = local_88[lVar21];
      if (uVar23 == uVar26) {
        FUN_1801fc070(param_1);
        uVar23 = *(ulonglong *)(param_1 + 8);
        lVar25 = *(longlong *)(param_1 + 0x10);
        puVar24 = (ulonglong *)(param_1 + 8);
      }
      *(undefined4 *)(lVar25 + uVar23 * 4) = uVar3;
      *puVar24 = *puVar24 + 1;
      lVar21 = lVar2;
    } while (lVar2 != 0x11);
  }
  return;
}


