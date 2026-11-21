/* FUN_18010c940 @ 18010c940 */

undefined8 FUN_18010c940(ulonglong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong _Size;
  ulonglong uVar11;
  longlong lVar12;
  
  if (*(char *)((longlong)param_1 + 0x41) != '\0') {
    return 0;
  }
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar3 = param_1[5];
  uVar11 = param_1[4];
  if (uVar11 <= uVar3 && uVar3 <= uVar6) {
    _Size = (ulonglong)(byte)param_1[7];
    cVar1 = *(char *)((longlong)param_1 + _Size + 0x2f);
    if (_Size < 5) {
      do {
        uVar10 = uVar2 + uVar11;
        if (uVar3 - uVar11 < 0x10) {
          uVar8 = 0;
          if (uVar3 == uVar11) goto LAB_18010caac;
          while (*(char *)(uVar10 + uVar8) != cVar1) {
            uVar8 = uVar8 + 1;
            if (uVar3 - uVar11 == uVar8) goto LAB_18010caac;
          }
        }
        else {
          uVar5 = FUN_1801f2f70(cVar1);
          uVar8 = uVar10;
          if ((uVar5 & 1) == 0) goto LAB_18010caac;
        }
        uVar11 = uVar11 + uVar8 + 1;
        param_1[4] = uVar11;
        if ((uVar11 <= uVar6 && _Size <= uVar11) &&
           (iVar4 = memcmp((void *)(uVar2 + (uVar11 - _Size)),param_1 + 6,_Size), iVar4 == 0)) {
          uVar6 = *param_1;
          lVar12 = (uVar11 - _Size) - uVar6;
          *param_1 = uVar11;
          goto LAB_18010cac9;
        }
      } while (uVar11 <= uVar3);
    }
    else {
      do {
        uVar8 = uVar3 - uVar11;
        uVar10 = uVar2 + uVar11;
        if (uVar8 < 0x10) {
          uVar9 = 0;
          if (uVar8 == 0) {
            uVar5 = 0;
            uVar10 = uVar9;
          }
          else {
            do {
              if (*(char *)(uVar10 + uVar9) == cVar1) {
                uVar5 = 1;
                uVar10 = uVar9;
                goto LAB_18010caa8;
              }
              uVar9 = uVar9 + 1;
            } while (uVar8 != uVar9);
            uVar5 = 0;
            uVar10 = uVar8;
          }
        }
        else {
          uVar5 = FUN_1801f2f70(cVar1);
        }
LAB_18010caa8:
        if ((uVar5 & 1) == 0) goto LAB_18010caac;
        uVar11 = uVar11 + uVar10 + 1;
        param_1[4] = uVar11;
        if (uVar11 <= uVar6 && _Size <= uVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,_Size,4,&PTR_s_C__Users_burne__rustup_toolchain_18023cff0);
        }
      } while (uVar11 <= uVar3);
    }
  }
LAB_18010cab0:
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  uVar6 = *param_1;
  lVar12 = param_1[1] - uVar6;
  if ((byte)(lVar12 != 0 | (byte)param_1[8]) != 1) {
    return 0;
  }
LAB_18010cac9:
  uVar7 = FUN_180110f50(uVar2 + uVar6,lVar12);
  return uVar7;
LAB_18010caac:
  param_1[4] = uVar3;
  goto LAB_18010cab0;
}


