/* FUN_180126550 @ 180126550 */

void FUN_180126550(undefined8 *param_1,undefined8 param_2,ulonglong *param_3)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong _Size;
  ulonglong uVar15;
  undefined8 local_98;
  char local_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  char local_68 [8];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((*(byte *)((longlong)param_3 + 0x41) & 1) == 0) {
    uVar12 = *param_3;
    uVar14 = param_3[1];
    uVar3 = param_3[2];
    uVar4 = param_3[3];
    uVar5 = param_3[5];
    bVar1 = (byte)param_3[8];
    local_98 = param_2;
    if (uVar4 < uVar5) {
      lVar10 = uVar14 - uVar12;
      if ((bVar1 | lVar10 != 0) != 1) {
        *(undefined1 *)((longlong)param_3 + 0x41) = 1;
        uVar8 = 0;
        goto LAB_1801267df;
      }
      *(undefined1 *)((longlong)param_3 + 0x41) = 1;
      uVar8 = FUN_180110f50(uVar3 + uVar12);
      FUN_1801ae6b0(local_68,uVar8,lVar10);
      if (local_68[0] != '\0') {
        uVar8 = 0;
        goto LAB_1801267df;
      }
      local_78 = local_50;
      uStack_70 = uStack_48;
      local_88 = local_60;
      uStack_80 = uStack_58;
    }
    else {
      _Size = (ulonglong)(byte)param_3[7];
      uVar13 = param_3[4];
      if ((byte)param_3[7] < 5) {
        do {
          if (uVar13 <= uVar5) {
            cVar2 = *(char *)((longlong)param_3 + _Size + 0x2f);
            do {
              uVar15 = uVar3 + uVar13;
              if (uVar5 - uVar13 < 0x10) {
                uVar11 = 0;
                if (uVar5 == uVar13) goto LAB_180126700;
                while (*(char *)(uVar15 + uVar11) != cVar2) {
                  uVar11 = uVar11 + 1;
                  if (uVar5 - uVar13 == uVar11) goto LAB_180126700;
                }
              }
              else {
                uVar9 = FUN_1801f2f70(cVar2);
                uVar11 = uVar15;
                if ((uVar9 & 1) == 0) {
LAB_180126700:
                  param_3[4] = uVar5;
                  uVar13 = uVar5;
                  break;
                }
              }
              uVar13 = uVar13 + uVar11 + 1;
              param_3[4] = uVar13;
              uVar15 = uVar13 - _Size;
              if ((uVar13 <= uVar4 && _Size <= uVar13) &&
                 (iVar7 = memcmp((void *)(uVar3 + uVar15),param_3 + 6,_Size), iVar7 == 0)) {
                *param_3 = uVar13;
                bVar6 = false;
                uVar11 = uVar13;
                goto LAB_180126738;
              }
            } while (uVar13 <= uVar5);
          }
          *(undefined1 *)((longlong)param_3 + 0x41) = 1;
          bVar6 = true;
          uVar11 = uVar12;
          uVar15 = uVar14;
          if ((bVar1 == 0) && (uVar14 == uVar12)) break;
LAB_180126738:
          lVar10 = uVar15 - uVar12;
          uVar8 = FUN_180110f50(uVar12 + uVar3,lVar10);
          FUN_1801ae6b0(local_68,uVar8,lVar10);
          if (local_68[0] == '\0') {
            local_78 = local_50;
            uStack_70 = uStack_48;
            local_88 = local_60;
            uStack_80 = uStack_58;
            goto LAB_1801267c8;
          }
          uVar12 = uVar11;
        } while (!bVar6);
        uVar8 = 0;
        goto LAB_1801267df;
      }
      if ((bVar1 | uVar14 - uVar12 != 0) != 1) {
        if (uVar13 <= uVar5) {
          cVar2 = *(char *)((longlong)param_3 + _Size + 0x2f);
          do {
            uVar14 = uVar5 - uVar13;
            uVar12 = uVar3 + uVar13;
            if (uVar14 < 0x10) {
              uVar11 = 0;
              if (uVar14 == 0) {
                uVar15 = 0;
                uVar12 = uVar11;
              }
              else {
                do {
                  if (*(char *)(uVar12 + uVar11) == cVar2) {
                    uVar15 = 1;
                    uVar12 = uVar11;
                    goto LAB_1801268e7;
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar14 != uVar11);
                uVar15 = 0;
                uVar12 = uVar14;
              }
            }
            else {
              uVar15 = FUN_1801f2f70(cVar2);
            }
LAB_1801268e7:
            if ((uVar15 & 1) == 0) {
              param_3[4] = uVar5;
              break;
            }
            uVar13 = uVar13 + uVar12 + 1;
            param_3[4] = uVar13;
            if (uVar13 <= uVar4 && _Size <= uVar13) goto LAB_18012695c;
          } while (uVar13 <= uVar5);
        }
        *(undefined1 *)((longlong)param_3 + 0x41) = 1;
        uVar8 = 0;
        goto LAB_1801267df;
      }
      if (uVar13 <= uVar5) {
        cVar2 = *(char *)((longlong)param_3 + _Size + 0x2f);
        do {
          uVar11 = uVar5 - uVar13;
          uVar15 = uVar3 + uVar13;
          if (uVar11 < 0x10) {
            uVar9 = 0;
            if (uVar11 != 0) {
              do {
                if (*(char *)(uVar15 + uVar9) == cVar2) {
                  uVar11 = 1;
                  uVar15 = uVar9;
                  goto LAB_18012685f;
                }
                uVar9 = uVar9 + 1;
              } while (uVar11 != uVar9);
              uVar9 = uVar11;
            }
            uVar11 = 0;
            uVar15 = uVar9;
          }
          else {
            uVar11 = FUN_1801f2f70(cVar2);
          }
LAB_18012685f:
          if ((uVar11 & 1) == 0) {
            param_3[4] = uVar5;
            break;
          }
          uVar13 = uVar13 + uVar15 + 1;
          param_3[4] = uVar13;
          if (_Size <= uVar13 && uVar13 <= uVar4) {
LAB_18012695c:
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(0,_Size,4,&PTR_s_C__Users_burne__rustup_toolchain_180242708);
          }
        } while (uVar13 <= uVar5);
      }
      *(undefined1 *)((longlong)param_3 + 0x41) = 1;
      FUN_1801150b0(local_90,&local_98,uVar3 + uVar12,uVar14 - uVar12);
      if (local_90[0] == '\0') goto LAB_18012656f;
    }
LAB_1801267c8:
    param_1[3] = local_78;
    param_1[4] = uStack_70;
    param_1[1] = local_88;
    param_1[2] = uStack_80;
    uVar8 = 1;
  }
  else {
LAB_18012656f:
    uVar8 = 0;
  }
LAB_1801267df:
  *param_1 = uVar8;
  return;
}


