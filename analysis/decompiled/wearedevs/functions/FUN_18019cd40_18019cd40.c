/* FUN_18019cd40 @ 18019cd40 */

longlong FUN_18019cd40(longlong *param_1,longlong param_2)

{
  longlong *_Buf2;
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong _Size;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  
  if (*(char *)((longlong)param_1 + 0x41) != '\0') {
    return 0;
  }
  if ((char)param_1[8] == '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
    lVar7 = FUN_18019cd40(param_1);
    if (param_2 != 0 && lVar7 != 0) {
      return lVar7;
    }
    if (*(char *)((longlong)param_1 + 0x41) == '\x01') {
      return 0;
    }
  }
  lVar7 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_1[4];
  uVar6 = param_1[5];
  if (uVar6 <= uVar2 && uVar3 <= uVar6) {
    lVar5 = lVar7 + uVar3;
    _Buf2 = param_1 + 6;
    _Size = (ulonglong)*(byte *)(param_1 + 7);
    uVar1 = _Size - 1;
    if (_Size < 5) {
      do {
        lVar8 = lVar5;
        uVar6 = FUN_1801f3060(*(undefined1 *)((longlong)_Buf2 + uVar1),lVar5,uVar6 - uVar3);
        if ((uVar6 & 1) == 0) goto LAB_18019cec2;
        uVar6 = lVar8 + uVar3;
        uVar9 = uVar6 - uVar1;
        if (((uVar1 <= uVar6) && (uVar9 + _Size <= uVar2 && !CARRY8(uVar9,_Size))) &&
           (iVar4 = memcmp((void *)(lVar7 + uVar9),_Buf2,_Size), iVar4 == 0)) {
          param_1[5] = uVar9;
          param_1[1] = uVar9;
          return lVar7 + uVar9 + _Size;
        }
        param_1[5] = uVar6;
      } while ((uVar3 <= uVar6) && (uVar6 <= uVar2));
    }
    else {
      do {
        lVar8 = lVar5;
        uVar6 = FUN_1801f3060(*(undefined1 *)((longlong)_Buf2 + uVar1),lVar5,uVar6 - uVar3);
        if ((uVar6 & 1) == 0) goto LAB_18019cec2;
        uVar6 = lVar8 + uVar3;
        if ((uVar1 <= uVar6) && ((uVar6 - uVar1) + _Size <= uVar2 && !CARRY8(uVar6 - uVar1,_Size)))
        {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,_Size,4,&PTR_s_C__Users_burne__rustup_toolchain_180267e58);
        }
        param_1[5] = uVar6;
      } while ((uVar3 <= uVar6) && (uVar6 <= uVar2));
    }
  }
LAB_18019cec6:
  *(undefined1 *)((longlong)param_1 + 0x41) = 1;
  return lVar7 + *param_1;
LAB_18019cec2:
  param_1[5] = uVar3;
  goto LAB_18019cec6;
}


