/* FUN_1801eac05 @ 1801eac05 */

longlong FUN_1801eac05(ulonglong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong _Size;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined8 unaff_R14;
  
  if (*(char *)((longlong)param_1 + 0x41) == '\0') {
    uVar2 = param_1[2];
    uVar3 = param_1[3];
    uVar4 = param_1[5];
    uVar12 = param_1[4];
    if (uVar12 <= uVar4 && uVar4 <= uVar3) {
      uVar5 = param_1[7];
      _Size = (ulonglong)(byte)uVar5;
      cVar1 = *(char *)((longlong)param_1 + _Size + 0x2f);
      do {
        uVar10 = uVar4 - uVar12;
        uVar9 = uVar2 + uVar12;
        if (uVar10 < 0x10) {
          uVar8 = 0;
          if (uVar10 != 0) {
            do {
              if (*(char *)(uVar9 + uVar8) == cVar1) {
                uVar10 = 1;
                uVar9 = uVar8;
                goto LAB_1801eaca1;
              }
              uVar8 = uVar8 + 1;
            } while (uVar10 != uVar8);
            uVar8 = uVar10;
          }
          uVar10 = 0;
          uVar9 = uVar8;
        }
        else {
          uVar10 = FUN_1801f2f70(CONCAT71((int7)((ulonglong)unaff_R14 >> 8),cVar1) & 0xffffffff);
        }
LAB_1801eaca1:
        if ((uVar10 & 1) == 0) {
          param_1[4] = uVar4;
          break;
        }
        uVar12 = uVar12 + uVar9 + 1;
        param_1[4] = uVar12;
        if ((_Size <= uVar12) && (uVar12 <= uVar3)) {
          if (4 < (byte)uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(0,_Size,4,&PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_180292aa0);
          }
          iVar6 = memcmp((void *)(uVar2 + (uVar12 - _Size)),param_1 + 6,_Size);
          if (iVar6 == 0) {
            uVar3 = *param_1;
            *param_1 = uVar12;
            return uVar2 + uVar3;
          }
        }
      } while (uVar12 <= uVar4);
    }
    *(undefined1 *)((longlong)param_1 + 0x41) = 1;
    lVar11 = uVar2 + *param_1;
    lVar7 = 0;
    if (param_1[1] != *param_1) {
      lVar7 = lVar11;
    }
    if ((char)param_1[8] != '\0') {
      lVar7 = lVar11;
    }
  }
  else {
    lVar7 = 0;
  }
  return lVar7;
}


