/* FUN_1801e5880 @ 1801e5880 */

void FUN_1801e5880(undefined8 *param_1,longlong *param_2)

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
  undefined8 local_48;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar6 = param_2[3];
  if (uVar6 <= uVar2 && uVar3 <= uVar6) {
    lVar8 = *param_2;
    lVar5 = lVar8 + uVar3;
    _Buf2 = param_2 + 4;
    _Size = (ulonglong)*(byte *)(param_2 + 5);
    uVar1 = _Size - 1;
    if (_Size < 5) {
      local_48 = 0;
      while( true ) {
        lVar7 = lVar5;
        uVar6 = FUN_1801f3060(*(undefined1 *)((longlong)_Buf2 + uVar1),lVar5,uVar6 - uVar3);
        if ((uVar6 & 1) == 0) goto LAB_1801e59cb;
        uVar6 = lVar7 + uVar3;
        uVar9 = uVar6 - uVar1;
        if (((uVar1 <= uVar6) && (uVar9 + _Size <= uVar2 && !CARRY8(uVar9,_Size))) &&
           (iVar4 = memcmp((void *)(lVar8 + uVar9),_Buf2,_Size), iVar4 == 0)) break;
        param_2[3] = uVar6;
        if ((uVar6 < uVar3) || (uVar2 < uVar6)) goto LAB_1801e59d7;
      }
      param_2[3] = uVar9;
      param_1[1] = uVar9;
      param_1[2] = uVar9 + _Size;
      local_48 = 1;
    }
    else {
      local_48 = 0;
      do {
        lVar8 = lVar5;
        uVar6 = FUN_1801f3060(*(undefined1 *)((longlong)_Buf2 + uVar1),lVar5,uVar6 - uVar3);
        if ((uVar6 & 1) == 0) goto LAB_1801e59cb;
        uVar6 = lVar8 + uVar3;
        if ((uVar1 <= uVar6) && ((uVar6 - uVar1) + _Size <= uVar2 && !CARRY8(uVar6 - uVar1,_Size)))
        {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,_Size,4,&PTR_s__rustc_01f6ddf7588f42ae2d7eb0a2f_1802912f8);
        }
        param_2[3] = uVar6;
      } while ((uVar3 <= uVar6) && (uVar6 <= uVar2));
    }
    goto LAB_1801e59d7;
  }
  goto LAB_1801e59cf;
LAB_1801e59cb:
  param_2[3] = uVar3;
LAB_1801e59cf:
  local_48 = 0;
LAB_1801e59d7:
  *param_1 = local_48;
  return;
}


