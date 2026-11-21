/* FUN_1801d1130 @ 1801d1130 */

longlong FUN_1801d1130(longlong param_1,ulonglong param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  
  if (param_2 < 2) {
    lVar1 = 0;
  }
  else {
    uVar3 = 1;
    if (param_3 == '\0') {
      lVar4 = 1;
      lVar7 = 0;
      lVar2 = 0;
      lVar5 = 1;
      do {
        lVar1 = lVar5;
        uVar6 = lVar7 + lVar2;
        if (param_2 <= uVar6) goto LAB_1801d1266;
        if (*(byte *)(param_1 + uVar3) < *(byte *)(param_1 + uVar6)) {
          lVar5 = lVar1 + 1;
          lVar4 = 1;
          lVar7 = 0;
        }
        else {
          lVar7 = lVar7 + 1;
          if (*(byte *)(param_1 + uVar6) < *(byte *)(param_1 + uVar3)) {
            lVar5 = lVar7 + lVar1;
            lVar4 = lVar5 - lVar2;
            lVar7 = 0;
            lVar1 = lVar2;
          }
          else {
            bVar8 = lVar7 == lVar4;
            if (bVar8) {
              lVar7 = 0;
            }
            lVar5 = 0;
            if (bVar8) {
              lVar5 = lVar4;
            }
            lVar5 = lVar5 + lVar1;
            lVar1 = lVar2;
          }
        }
        uVar3 = lVar5 + lVar7;
        lVar2 = lVar1;
      } while (uVar3 < param_2);
    }
    else {
      lVar4 = 1;
      lVar7 = 0;
      lVar2 = 0;
      lVar5 = 1;
      do {
        lVar1 = lVar5;
        uVar6 = lVar7 + lVar2;
        if (param_2 <= uVar6) {
LAB_1801d1266:
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar6,param_2,&PTR_s_C__Users_burne__cargo_registry_s_18028a390);
        }
        if (*(byte *)(param_1 + uVar6) < *(byte *)(param_1 + uVar3)) {
          lVar5 = lVar1 + 1;
          lVar4 = 1;
          lVar7 = 0;
        }
        else {
          lVar7 = lVar7 + 1;
          if (*(byte *)(param_1 + uVar3) < *(byte *)(param_1 + uVar6)) {
            lVar5 = lVar7 + lVar1;
            lVar4 = lVar5 - lVar2;
            lVar7 = 0;
            lVar1 = lVar2;
          }
          else {
            bVar8 = lVar7 == lVar4;
            if (bVar8) {
              lVar7 = 0;
            }
            lVar5 = 0;
            if (bVar8) {
              lVar5 = lVar4;
            }
            lVar5 = lVar5 + lVar1;
            lVar1 = lVar2;
          }
        }
        uVar3 = lVar5 + lVar7;
        lVar2 = lVar1;
      } while (uVar3 < param_2);
    }
  }
  return lVar1;
}


