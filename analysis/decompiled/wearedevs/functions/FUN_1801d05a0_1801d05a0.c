/* FUN_1801d05a0 @ 1801d05a0 */

undefined8
FUN_1801d05a0(char *param_1,undefined8 param_2,byte *param_3,ulonglong param_4,longlong param_5,
             ulonglong param_6)

{
  ulonglong uVar1;
  ulonglong uVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  bool bVar15;
  
  if (param_4 < 0x10) {
    iVar7 = 0;
    if (param_6 <= param_4) {
      if (param_6 != 0) {
        iVar7 = 0;
        pbVar9 = param_3;
        do {
          iVar7 = (uint)*pbVar9 + iVar7 * 2;
          pbVar9 = pbVar9 + 1;
        } while (pbVar9 < param_3 + param_6);
      }
      iVar4 = *(int *)(param_1 + 0xe0);
      iVar5 = *(int *)(param_1 + 0xe4);
      lVar10 = 0;
      pbVar9 = param_3;
      while( true ) {
        if ((iVar4 == iVar7) && (cVar6 = FUN_1801ffd20(pbVar9,param_5,param_6), cVar6 != '\0')) {
          return 1;
        }
        if (param_3 + (param_4 - param_6) <= pbVar9) break;
        iVar7 = (uint)(param_3 + param_6)[lVar10] + (iVar7 - (uint)*pbVar9 * iVar5) * 2;
        lVar10 = lVar10 + 1;
        pbVar9 = param_3 + lVar10;
      }
    }
  }
  else {
    uVar12 = *(ulonglong *)(param_1 + 8);
    if (*param_1 == '\0') {
      if (param_6 == 0) {
        return 1;
      }
      if (param_6 <= param_4) {
        uVar1 = *(ulonglong *)(param_1 + 0x18);
        lVar10 = 0;
        uVar8 = 0;
        do {
          uVar11 = lVar10 + (param_6 - 1);
          if (param_4 <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(uVar11,param_4,&PTR_s_C__Users_burne__cargo_registry_s_18028a080);
          }
          if ((*(ulonglong *)(param_1 + 0x10) >> ((ulonglong)param_3[uVar11] & 0x3f) & 1) == 0) {
            lVar10 = lVar10 + param_6;
            uVar8 = 0;
          }
          else {
            uVar11 = uVar1;
            if (uVar1 < uVar8) {
              uVar11 = uVar8;
            }
            if (uVar11 < param_6) {
              uVar14 = uVar11;
              do {
                if (param_4 <= lVar10 + uVar14) {
                  uVar12 = uVar11 + lVar10;
                  if (uVar11 + lVar10 < param_4) {
                    uVar12 = param_4;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_180201d02(uVar12,param_4,&PTR_s_C__Users_burne__cargo_registry_s_18028a098);
                }
                if (*(byte *)(param_5 + uVar14) != param_3[uVar14 + lVar10]) {
                  uVar14 = uVar14 + (1 - uVar1);
                  uVar11 = 0;
                  goto LAB_1801d07fe;
                }
                uVar14 = uVar14 + 1;
              } while (param_6 != uVar14);
            }
            if (uVar8 < uVar1) {
              uVar11 = uVar1;
              do {
                if (param_6 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                  FUN_180201d02(uVar11,param_6,&PTR_s_C__Users_burne__cargo_registry_s_18028a0b0);
                }
                if (param_4 <= lVar10 + uVar11) {
                    /* WARNING: Subroutine does not return */
                  FUN_180201d02(lVar10 + uVar11,param_4,
                                &PTR_s_C__Users_burne__cargo_registry_s_18028a0c8);
                }
                if (*(byte *)(param_5 + uVar11) != param_3[uVar11 + lVar10]) {
                  lVar10 = uVar12 + lVar10;
                  uVar8 = param_6 - uVar12;
                  goto LAB_1801d0736;
                }
                uVar11 = uVar11 - 1;
              } while (uVar8 < uVar11);
            }
            if (param_6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(uVar8,param_6,&PTR_s_C__Users_burne__cargo_registry_s_18028a0e0);
            }
            uVar2 = uVar8 + lVar10;
            if (param_4 <= uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(uVar2,param_4,&PTR_s_C__Users_burne__cargo_registry_s_18028a0f8);
            }
            uVar11 = param_6 - uVar12;
            uVar14 = uVar12;
            if (*(byte *)(param_5 + uVar8) == param_3[uVar2]) {
              return 1;
            }
LAB_1801d07fe:
            lVar10 = uVar14 + lVar10;
            uVar8 = uVar11;
          }
LAB_1801d0736:
          if (param_4 < lVar10 + param_6) {
            return 0;
          }
        } while( true );
      }
    }
    else {
      if (param_6 == 0) {
        return 1;
      }
      if (param_6 <= param_4) {
        uVar8 = *(ulonglong *)(param_1 + 0x18);
        uVar1 = uVar8 - 1;
        lVar10 = 0;
LAB_1801d082b:
        do {
          uVar11 = (param_6 - 1) + lVar10;
          if (param_4 <= uVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(uVar11,param_4,&PTR_s_C__Users_burne__cargo_registry_s_18028a008);
          }
          uVar14 = param_6;
          if ((*(ulonglong *)(param_1 + 0x10) >> ((ulonglong)param_3[uVar11] & 0x3f) & 1) != 0) {
            if (uVar8 < param_6) {
              uVar11 = lVar10 + uVar8;
              lVar13 = 0;
              do {
                if (param_4 <= uVar11 + lVar13) {
                  if (uVar11 < param_4) {
                    uVar11 = param_4;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_180201d02(uVar11,param_4,&PTR_s_C__Users_burne__cargo_registry_s_18028a020);
                }
                if (*(byte *)(param_5 + uVar8 + lVar13) != param_3[lVar13 + lVar10 + uVar8]) {
                  lVar10 = lVar10 + lVar13 + 1;
                  if (param_4 < lVar10 + param_6) {
                    return 0;
                  }
                  goto LAB_1801d082b;
                }
                lVar13 = lVar13 + 1;
              } while (param_6 - uVar8 != lVar13);
            }
            if (param_6 <= uVar1) {
              if (uVar8 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_180201d02(uVar1,param_6,&PTR_s_C__Users_burne__cargo_registry_s_18028a038);
              }
              return 1;
            }
            uVar11 = uVar1 + lVar10;
            uVar14 = uVar8;
            pbVar9 = (byte *)(param_5 + uVar8);
            do {
              pbVar9 = pbVar9 + -1;
              bVar15 = uVar14 == 0;
              uVar14 = uVar14 - 1;
              if (bVar15) {
                return 1;
              }
              if (param_4 <= uVar11) {
                    /* WARNING: Subroutine does not return */
                FUN_180201d02(uVar11,param_4,&PTR_s_C__Users_burne__cargo_registry_s_18028a050);
              }
              pbVar3 = param_3 + uVar11;
              uVar11 = uVar11 - 1;
            } while (*pbVar9 == *pbVar3);
            uVar14 = uVar12;
          }
          lVar10 = lVar10 + uVar14;
          if (param_4 < lVar10 + param_6) {
            return 0;
          }
        } while( true );
      }
    }
  }
  return 0;
}


