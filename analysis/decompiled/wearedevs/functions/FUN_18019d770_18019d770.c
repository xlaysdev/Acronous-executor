/* FUN_18019d770 @ 18019d770 */

longlong FUN_18019d770(ulonglong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong _Size;
  longlong lVar11;
  ulonglong uVar12;
  
  if (*(char *)((longlong)param_1 + 0x41) != '\0') {
    return 0;
  }
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  uVar4 = param_1[5];
  uVar12 = param_1[4];
  if (uVar12 <= uVar4 && uVar4 <= uVar3) {
    _Size = (ulonglong)(byte)param_1[7];
    cVar1 = *(char *)((longlong)param_1 + _Size + 0x2f);
    if (_Size < 5) {
      do {
        uVar10 = uVar2 + uVar12;
        if (uVar4 - uVar12 < 0x10) {
          uVar8 = 0;
          if (uVar4 == uVar12) goto LAB_18019d8f1;
          while (*(char *)(uVar10 + uVar8) != cVar1) {
            uVar8 = uVar8 + 1;
            if (uVar4 - uVar12 == uVar8) goto LAB_18019d8f1;
          }
        }
        else {
          uVar6 = FUN_1801f2f70(cVar1);
          uVar8 = uVar10;
          if ((uVar6 & 1) == 0) goto LAB_18019d8f1;
        }
        uVar12 = uVar12 + uVar8 + 1;
        param_1[4] = uVar12;
        if ((uVar12 <= uVar3 && _Size <= uVar12) &&
           (iVar5 = memcmp((void *)(uVar2 + (uVar12 - _Size)),param_1 + 6,_Size), iVar5 == 0)) {
          uVar3 = *param_1;
          *param_1 = uVar12;
          return uVar2 + uVar3;
        }
      } while (uVar12 <= uVar4);
    }
    else {
      do {
        uVar8 = uVar4 - uVar12;
        uVar10 = uVar2 + uVar12;
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
                goto LAB_18019d8ed;
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
LAB_18019d8ed:
        if ((uVar6 & 1) == 0) goto LAB_18019d8f1;
        uVar12 = uVar12 + uVar10 + 1;
        param_1[4] = uVar12;
        if (uVar12 <= uVar3 && _Size <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,_Size,4,&PTR_s_C__Users_burne__rustup_toolchain_180268168);
        }
      } while (uVar12 <= uVar4);
    }
  }
LAB_18019d8f5:
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  lVar11 = uVar2 + *param_1;
  lVar7 = 0;
  if (param_1[1] != *param_1) {
    lVar7 = lVar11;
  }
  if ((char)param_1[8] != '\0') {
    lVar7 = lVar11;
  }
  return lVar7;
LAB_18019d8f1:
  param_1[4] = uVar4;
  goto LAB_18019d8f5;
}


