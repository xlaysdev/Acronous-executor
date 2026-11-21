/* FUN_1801085d0 @ 1801085d0 */

void FUN_1801085d0(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong _Size;
  ulonglong uVar11;
  
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  uVar11 = param_2[2];
  if (uVar3 < uVar11 || uVar2 < uVar3) {
    uVar7 = 0;
  }
  else {
    lVar4 = *param_2;
    _Size = (ulonglong)*(byte *)(param_2 + 5);
    cVar1 = *(char *)((longlong)param_2 + _Size + 0x1f);
    if (_Size < 5) {
      do {
        uVar10 = lVar4 + uVar11;
        if (uVar3 - uVar11 < 0x10) {
          uVar8 = 0;
          if (uVar3 == uVar11) goto LAB_180108754;
          while (*(char *)(uVar10 + uVar8) != cVar1) {
            uVar8 = uVar8 + 1;
            if (uVar3 - uVar11 == uVar8) goto LAB_180108754;
          }
        }
        else {
          uVar6 = FUN_1801f2f70(cVar1);
          uVar8 = uVar10;
          if ((uVar6 & 1) == 0) goto LAB_180108754;
        }
        uVar11 = uVar11 + uVar8 + 1;
        param_2[2] = uVar11;
        if ((uVar11 <= uVar2 && _Size <= uVar11) &&
           (iVar5 = memcmp((void *)(lVar4 + (uVar11 - _Size)),param_2 + 4,_Size), iVar5 == 0)) {
          param_1[1] = uVar11 - _Size;
          param_1[2] = uVar11;
          uVar7 = 1;
          goto LAB_18010875f;
        }
      } while (uVar11 <= uVar3);
      uVar7 = 0;
    }
    else {
      do {
        uVar8 = uVar3 - uVar11;
        uVar10 = lVar4 + uVar11;
        if (uVar8 < 0x10) {
          uVar9 = 0;
          if (uVar8 == 0) {
            uVar6 = 0;
            uVar10 = uVar9;
          }
          else {
            do {
              if (*(char *)(uVar10 + uVar9) == cVar1) {
                uVar6 = 1;
                uVar10 = uVar9;
                goto LAB_180108750;
              }
              uVar9 = uVar9 + 1;
            } while (uVar8 != uVar9);
            uVar6 = 0;
            uVar10 = uVar8;
          }
        }
        else {
          uVar6 = FUN_1801f2f70(cVar1);
        }
LAB_180108750:
        if ((uVar6 & 1) == 0) goto LAB_180108754;
        uVar11 = uVar11 + uVar10 + 1;
        param_2[2] = uVar11;
        if (uVar11 <= uVar2 && _Size <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,_Size,4,&PTR_s_C__Users_burne__rustup_toolchain_18023b800);
        }
        uVar7 = 0;
      } while (uVar11 <= uVar3);
    }
  }
LAB_18010875f:
  *param_1 = uVar7;
  return;
LAB_180108754:
  param_2[2] = uVar3;
  uVar7 = 0;
  goto LAB_18010875f;
}


