/* FUN_18019a640 @ 18019a640 */

/* WARNING: Removing unreachable block (ram,0x00018019abb3) */
/* WARNING: Removing unreachable block (ram,0x00018019abc0) */
/* WARNING: Removing unreachable block (ram,0x00018019abcc) */
/* WARNING: Removing unreachable block (ram,0x00018019adfe) */
/* WARNING: Removing unreachable block (ram,0x00018019abd8) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_18019a640(ulonglong *param_1,ulonglong param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar9 = param_1[2];
  pbVar5 = param_3;
  if (param_3 == param_4) {
    lVar8 = 0;
  }
  else {
    lVar8 = (longlong)param_4 - (longlong)param_3;
    do {
      bVar1 = *pbVar5;
      if ((char)bVar1 < '\0') {
        uVar4 = bVar1 & 0x1f;
        if (bVar1 < 0xe0) {
          uVar10 = uVar4 << 6 | pbVar5[1] & 0x3f;
          pbVar5 = pbVar5 + 2;
        }
        else {
          uVar10 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
          if (bVar1 < 0xf0) {
            uVar10 = uVar10 | uVar4 << 0xc;
            pbVar5 = pbVar5 + 3;
          }
          else {
            uVar10 = pbVar5[3] & 0x3f | uVar10 << 6 | (bVar1 & 7) << 0x12;
            pbVar5 = pbVar5 + 4;
          }
        }
      }
      else {
        pbVar5 = pbVar5 + 1;
        uVar10 = (uint)bVar1;
      }
      if (uVar10 - 9 < 0x37) {
                    /* WARNING: Could not recover jumptable at 0x00018019a75e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        pbVar5 = (byte *)(*(code *)(&DAT_180267b28 +
                                   *(int *)(&DAT_180267b28 + (ulonglong)(uVar10 - 9) * 4)))();
        return pbVar5;
      }
      if (uVar10 == 0x110000) break;
      if (param_1[6] != 0) {
        FUN_180191cf0(param_1[6],*(undefined8 *)(param_1[7] + 0x28),uVar10,pbVar5,param_4);
      }
    } while (pbVar5 != param_4);
  }
  FUN_180193e10(param_1,param_3,lVar8,0,(char)param_1[8],2);
  uVar12 = param_1[1];
  uVar11 = param_1[2];
  if ((uVar11 < uVar9) || ((uVar9 < uVar11 && uVar9 != 0 && (*(char *)(uVar12 + uVar9) < -0x40)))) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018d0(uVar12,uVar11,uVar9,uVar11,&PTR_s_C__Users_burne__cargo_registry_s_180266fe0);
  }
  switch(~uVar9 + uVar11) {
  case 0:
    if (*(char *)(uVar12 + uVar9) != '.') {
      return pbVar5;
    }
    goto LAB_18019aa0b;
  case 1:
    if (*(short *)(uVar12 + uVar9) == 0x2e2e) {
LAB_18019aaf0:
      if (uVar9 <= uVar11) {
        if ((uVar9 < uVar11 && uVar9 != 0) && (*(char *)(uVar12 + uVar9) < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0(&DAT_180267494,0x30,&PTR_s_C__Users_burne__cargo_registry_s_180267010);
        }
        param_1[2] = uVar9;
        uVar11 = uVar9;
      }
      if ((uVar11 != 0) && (*(char *)((uVar12 - 1) + uVar11) == '/')) {
        uVar9 = uVar11 - 1;
        if ((uVar9 != 0) && (*(char *)(uVar12 + uVar9) < -0x40)) {
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(uVar12,uVar11,0,uVar9,&PTR_s_C__Users_burne__cargo_registry_s_180267360);
        }
        uVar6 = uVar9;
        while (uVar7 = uVar12, uVar6 = FUN_1801f3060(0x2f,uVar12,uVar6), (uVar6 & 1) != 0) {
          if ((uVar7 < uVar9) && (*(char *)(uVar12 + uVar7) == '/')) {
            if (uVar7 < param_2) break;
            lVar8 = uVar11 - uVar7;
            if (uVar11 < uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_1802018d0(uVar12,uVar11,uVar7,uVar11,
                            &PTR_s_C__Users_burne__cargo_registry_s_180267378);
            }
            if ((lVar8 != 0) && (lVar8 != 1)) {
              bVar1 = *(byte *)(uVar12 + 1 + uVar7);
              if ((char)bVar1 < -0x40) {
                    /* WARNING: Subroutine does not return */
                FUN_1802018d0(uVar12 + uVar7,lVar8,1,lVar8,
                              &PTR_s_C__Users_burne__cargo_registry_s_180266ee0);
              }
              if ((((1 < lVar8 - 1U) && ((byte)((bVar1 & 0xdf) + 0xbf) < 0x1a)) &&
                  ((cVar2 = *(char *)(uVar12 + 2 + uVar7), cVar2 == '|' || (cVar2 == ':')))) &&
                 ((lVar8 - 1U == 2 ||
                  ((uVar4 = *(byte *)(uVar12 + 3 + uVar7) - 0x23, uVar4 < 0x3a &&
                   ((0x200000010001001U >> ((ulonglong)uVar4 & 0x3f) & 1) != 0)))))) break;
            }
            uVar9 = 0xffffffffffffffff;
            if (*(char *)((uVar12 - 1) + uVar11) < '\0') {
              bVar1 = *(byte *)((uVar12 - 2) + uVar11);
              if ((char)bVar1 < -0x40) {
                bVar3 = *(byte *)((uVar12 - 3) + uVar11);
                if ((char)bVar3 < -0x40) {
                  uVar4 = bVar3 & 0x3f | (*(byte *)((uVar12 - 4) + uVar11) & 7) << 6;
                }
                else {
                  uVar4 = bVar3 & 0xf;
                }
                uVar4 = bVar1 & 0x3f | uVar4 << 6;
              }
              else {
                uVar4 = bVar1 & 0x1f;
              }
              if ((1 < uVar4) && (uVar9 = 0xfffffffffffffffe, 0x1f < uVar4)) {
                uVar9 = (ulonglong)(uVar4 < 0x400) | 0xfffffffffffffffc;
              }
            }
            uVar11 = uVar11 + uVar9;
            param_1[2] = uVar11;
            break;
          }
          uVar6 = uVar7;
          if (uVar9 < uVar7) break;
        }
      }
      if (uVar11 == param_2) {
        return pbVar5;
      }
      FUN_180198be0(param_1,2,param_2);
      return pbVar5;
    }
    break;
  case 2:
    if ((*(char *)(uVar12 + 2 + uVar9) != 'e' || *(short *)(uVar12 + uVar9) != 0x3225) &&
       (*(char *)(uVar12 + 2 + uVar9) != 'E' || *(short *)(uVar12 + uVar9) != 0x3225)) {
      return pbVar5;
    }
LAB_18019aa0b:
    if (uVar9 <= uVar11) {
      if ((uVar9 < uVar11 && uVar9 != 0) && (*(char *)(uVar12 + uVar9) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0(&DAT_180267494,0x30,&PTR_s_C__Users_burne__cargo_registry_s_180267028);
      }
      param_1[2] = uVar9;
      uVar11 = uVar9;
    }
    if ((uVar11 == 0) || (*(char *)((uVar12 - 1) + uVar11) != '/')) {
      uVar9 = uVar11;
      if (*param_1 == uVar11) {
        FUN_1801f6a80(param_1,uVar11,1,1,1);
        uVar12 = param_1[1];
        uVar9 = param_1[2];
      }
      *(undefined1 *)(uVar12 + uVar9) = 0x2f;
      param_1[2] = uVar11 + 1;
      return pbVar5;
    }
    break;
  case 3:
    if (((*(int *)(uVar12 + uVar9) == 0x2e653225) || (*(int *)(uVar12 + uVar9) == 0x2e453225)) ||
       ((*(int *)(uVar12 + uVar9) == 0x6532252e || (*(int *)(uVar12 + uVar9) == 0x4532252e))))
    goto LAB_18019aaf0;
    break;
  case 5:
    if ((((*(short *)(uVar12 + 4 + uVar9) == 0x6532 && *(int *)(uVar12 + uVar9) == 0x25653225) ||
         (*(short *)(uVar12 + 4 + uVar9) == 0x4532 && *(int *)(uVar12 + uVar9) == 0x25653225)) ||
        (*(short *)(uVar12 + 4 + uVar9) == 0x6532 && *(int *)(uVar12 + uVar9) == 0x25453225)) ||
       (*(short *)(uVar12 + 4 + uVar9) == 0x4532 && *(int *)(uVar12 + uVar9) == 0x25453225))
    goto LAB_18019aaf0;
  }
  return pbVar5;
}


