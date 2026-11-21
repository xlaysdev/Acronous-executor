/* FUN_1801d09f0 @ 1801d09f0 */

/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_1801d09f0(char *param_1,uint *param_2,byte *param_3,byte *param_4,longlong param_5,byte *param_6
             )

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  ulonglong uVar6;
  char cVar7;
  byte *pbVar8;
  byte *pbVar9;
  ulonglong uVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  longlong lVar16;
  byte *pbVar17;
  uint uVar18;
  bool bVar19;
  uint local_a4;
  
  if (param_4 < (byte *)0x10) {
    iVar15 = 0;
    if (param_4 < param_6) {
      return 0;
    }
    if (param_6 != (byte *)0x0) {
      iVar15 = 0;
      pbVar9 = param_3;
      do {
        iVar15 = (uint)*pbVar9 + iVar15 * 2;
        pbVar9 = pbVar9 + 1;
      } while (pbVar9 < param_3 + (longlong)param_6);
    }
    iVar3 = *(int *)(param_1 + 0xe0);
    iVar4 = *(int *)(param_1 + 0xe4);
    lVar16 = 0;
    pbVar9 = param_3;
    while ((iVar3 != iVar15 || (cVar7 = FUN_1801ffd20(pbVar9,param_5,param_6), cVar7 == '\0'))) {
      if (param_3 + ((longlong)param_4 - (longlong)param_6) <= pbVar9) {
        return 0;
      }
      iVar15 = (uint)(param_3 + (longlong)param_6)[lVar16] + (iVar15 - (uint)*pbVar9 * iVar4) * 2;
      lVar16 = lVar16 + 1;
      pbVar9 = param_3 + lVar16;
    }
    return 1;
  }
  pbVar9 = *(byte **)(param_1 + 8);
  if (*param_1 == '\0') {
    if (param_6 == (byte *)0x0) {
      return 1;
    }
    if (param_6 <= param_4) {
      uVar18 = *param_2;
      local_a4 = param_2[1];
      uVar6 = *(ulonglong *)(param_1 + 0x10);
      pbVar1 = *(byte **)(param_1 + 0x18);
      pcVar5 = *(code **)(param_1 + 0xc0);
      pbVar17 = (byte *)0x0;
      pbVar12 = (byte *)0x0;
      do {
        pbVar13 = pbVar1;
        if (pbVar1 < pbVar12) {
          pbVar13 = pbVar12;
        }
        if (uVar18 == 0) {
LAB_1801d0c10:
          uVar18 = 0;
        }
        else {
          if ((0x32 < uVar18) && (local_a4 < uVar18 * 8 - 8)) {
            *param_2 = 0;
            goto LAB_1801d0c10;
          }
          if (param_4 < pbVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(pbVar17,param_4,param_4,&PTR_s_C__Users_burne__cargo_registry_s_18028a068)
            ;
          }
          pbVar12 = param_3 + (longlong)pbVar17;
          uVar10 = (*pcVar5)(param_1 + 0x20,pbVar12,param_4 + -(longlong)pbVar17);
          pbVar13 = param_4 + -(longlong)pbVar17;
          if ((uVar10 & 1) != 0) {
            pbVar13 = pbVar12;
          }
          uVar18 = uVar18 + 1;
          uVar11 = 0xffffffff;
          if (uVar18 == 0) {
            uVar18 = 0xffffffff;
          }
          *param_2 = uVar18;
          if (((ulonglong)pbVar13 >> 0x20 == 0) &&
             (uVar11 = local_a4 + (uint)pbVar13, CARRY4(local_a4,(uint)pbVar13))) {
            uVar11 = 0xffffffff;
          }
          param_2[1] = uVar11;
          if ((uVar10 & 1) == 0) {
            return 0;
          }
          pbVar17 = pbVar17 + (longlong)pbVar12;
          pbVar12 = (byte *)0x0;
          pbVar13 = pbVar1;
          local_a4 = uVar11;
          if (param_4 < pbVar17 + (longlong)param_6) {
            return 0;
          }
        }
        pbVar8 = pbVar17 + (longlong)(param_6 + -1);
        if (param_4 <= pbVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(pbVar8,param_4,&PTR_s_C__Users_burne__cargo_registry_s_18028a080);
        }
        if ((uVar6 >> ((ulonglong)param_3[(longlong)pbVar8] & 0x3f) & 1) == 0) {
          pbVar17 = pbVar17 + (longlong)param_6;
          pbVar12 = (byte *)0x0;
        }
        else {
          if (pbVar13 < param_6) {
            pbVar8 = pbVar13;
            do {
              if (param_4 <= pbVar17 + (longlong)pbVar8) {
                pbVar9 = pbVar17 + (longlong)pbVar13;
                if (pbVar17 + (longlong)pbVar13 < param_4) {
                  pbVar9 = param_4;
                }
                    /* WARNING: Subroutine does not return */
                FUN_180201d02(pbVar9,param_4,&PTR_s_C__Users_burne__cargo_registry_s_18028a098);
              }
              if (pbVar8[param_5] != (param_3 + (longlong)pbVar17)[(longlong)pbVar8]) {
                pbVar8 = pbVar8 + (1 - (longlong)pbVar1);
                pbVar13 = (byte *)0x0;
                goto LAB_1801d0d80;
              }
              pbVar8 = pbVar8 + 1;
            } while (param_6 != pbVar8);
          }
          if (pbVar12 < pbVar1) {
            pbVar13 = pbVar1;
            do {
              if (param_6 <= pbVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_180201d02(pbVar13,param_6,&PTR_s_C__Users_burne__cargo_registry_s_18028a0b0);
              }
              if (param_4 <= pbVar17 + (longlong)pbVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_180201d02(pbVar17 + (longlong)pbVar13,param_4,
                              &PTR_s_C__Users_burne__cargo_registry_s_18028a0c8);
              }
              if (pbVar13[param_5] != (param_3 + (longlong)pbVar17)[(longlong)pbVar13]) {
                pbVar17 = pbVar17 + (longlong)pbVar9;
                pbVar12 = param_6 + -(longlong)pbVar9;
                goto LAB_1801d0bd5;
              }
              pbVar13 = pbVar13 + -1;
            } while (pbVar12 < pbVar13);
          }
          if (param_6 <= pbVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(pbVar12,param_6,&PTR_s_C__Users_burne__cargo_registry_s_18028a0e0);
          }
          pbVar14 = pbVar17 + (longlong)pbVar12;
          if (param_4 <= pbVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(pbVar14,param_4,&PTR_s_C__Users_burne__cargo_registry_s_18028a0f8);
          }
          pbVar13 = param_6 + -(longlong)pbVar9;
          pbVar8 = pbVar9;
          if (pbVar12[param_5] == param_3[(longlong)pbVar14]) {
            return 1;
          }
LAB_1801d0d80:
          pbVar17 = pbVar17 + (longlong)pbVar8;
          pbVar12 = pbVar13;
        }
LAB_1801d0bd5:
        if (param_4 < pbVar17 + (longlong)param_6) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    if (param_6 == (byte *)0x0) {
      return 1;
    }
    if (param_6 <= param_4) {
      uVar18 = *param_2;
      local_a4 = param_2[1];
      pcVar5 = *(code **)(param_1 + 0xc0);
      uVar6 = *(ulonglong *)(param_1 + 0x10);
      pbVar12 = *(byte **)(param_1 + 0x18);
      pbVar1 = pbVar12 + 0xffffffffffffffff;
      pbVar17 = (byte *)0x0;
LAB_1801d0daf:
      do {
        if (uVar18 == 0) {
LAB_1801d0dd0:
          uVar18 = 0;
        }
        else {
          if ((0x32 < uVar18) && (local_a4 < uVar18 * 8 - 8)) {
            *param_2 = 0;
            goto LAB_1801d0dd0;
          }
          if (param_4 < pbVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(pbVar17,param_4,param_4,&PTR_s_C__Users_burne__cargo_registry_s_180289ff0)
            ;
          }
          pbVar13 = param_3 + (longlong)pbVar17;
          uVar10 = (*pcVar5)(param_1 + 0x20,pbVar13,param_4 + -(longlong)pbVar17);
          pbVar8 = param_4 + -(longlong)pbVar17;
          if ((uVar10 & 1) != 0) {
            pbVar8 = pbVar13;
          }
          uVar18 = uVar18 + 1;
          uVar11 = 0xffffffff;
          if (uVar18 == 0) {
            uVar18 = 0xffffffff;
          }
          *param_2 = uVar18;
          if (((ulonglong)pbVar8 >> 0x20 == 0) &&
             (uVar11 = local_a4 + (uint)pbVar8, CARRY4(local_a4,(uint)pbVar8))) {
            uVar11 = 0xffffffff;
          }
          param_2[1] = uVar11;
          if ((uVar10 & 1) == 0) {
            return 0;
          }
          pbVar17 = pbVar17 + (longlong)pbVar13;
          local_a4 = uVar11;
          if (param_4 < pbVar17 + (longlong)param_6) {
            return 0;
          }
        }
        pbVar13 = param_6 + -1 + (longlong)pbVar17;
        if (param_4 <= pbVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(pbVar13,param_4,&PTR_s_C__Users_burne__cargo_registry_s_18028a008);
        }
        pbVar8 = param_6;
        if ((uVar6 >> ((ulonglong)param_3[(longlong)pbVar13] & 0x3f) & 1) != 0) {
          if (pbVar12 < param_6) {
            pbVar13 = pbVar12 + (longlong)pbVar17;
            lVar16 = 0;
            do {
              if (param_4 <= pbVar13 + lVar16) {
                if (pbVar13 < param_4) {
                  pbVar13 = param_4;
                }
                    /* WARNING: Subroutine does not return */
                FUN_180201d02(pbVar13,param_4,&PTR_s_C__Users_burne__cargo_registry_s_18028a020);
              }
              if (pbVar12[lVar16 + param_5] !=
                  (param_3 + (longlong)pbVar12 + (longlong)pbVar17)[lVar16]) {
                pbVar17 = pbVar17 + lVar16 + 1;
                if (param_4 < pbVar17 + (longlong)param_6) {
                  return 0;
                }
                goto LAB_1801d0daf;
              }
              lVar16 = lVar16 + 1;
            } while ((longlong)param_6 - (longlong)pbVar12 != lVar16);
          }
          if (param_6 <= pbVar1) {
            if (pbVar12 != (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(pbVar1,param_6,&PTR_s_C__Users_burne__cargo_registry_s_18028a038);
            }
            return 1;
          }
          pbVar13 = pbVar1 + (longlong)pbVar17;
          pbVar14 = pbVar12;
          pbVar8 = pbVar12 + param_5;
          do {
            pbVar8 = pbVar8 + -1;
            bVar19 = pbVar14 == (byte *)0x0;
            pbVar14 = pbVar14 + -1;
            if (bVar19) {
              return 1;
            }
            if (param_4 <= pbVar13) {
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(pbVar13,param_4,&PTR_s_C__Users_burne__cargo_registry_s_18028a050);
            }
            pbVar2 = param_3 + (longlong)pbVar13;
            pbVar13 = pbVar13 + -1;
          } while (*pbVar8 == *pbVar2);
          pbVar8 = pbVar9;
        }
        pbVar17 = pbVar17 + (longlong)pbVar8;
        if (param_4 < pbVar17 + (longlong)param_6) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}


