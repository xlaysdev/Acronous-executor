/* FUN_1801b2540 @ 1801b2540 */

void FUN_1801b2540(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  if (param_2 != 0) {
    uVar1 = param_1[3];
    if ((uVar1 & 1) != 0) {
      uVar4 = uVar1 >> 5;
      if (uVar4 + param_2 >> 0x3b == 0) {
        plVar3 = (longlong *)((ulonglong)((uint)uVar1 & 0x1f) | (uVar4 + param_2) * 0x20);
      }
      else {
        FUN_180027490();
        plVar3 = (longlong *)thunk_FUN_1801d32d0(0x28,8);
        if (plVar3 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201705(8,0x28);
        }
        lVar5 = *param_1;
        lVar2 = param_1[1];
        *plVar3 = uVar4 + param_1[2];
        plVar3[1] = lVar5 - uVar4;
        plVar3[2] = lVar2 + uVar4;
        plVar3[3] = (ulonglong)((uint)uVar1 >> 2 & 7);
        plVar3[4] = 1;
      }
      param_1[3] = (longlong)plVar3;
    }
    *param_1 = *param_1 + param_2;
    lVar5 = 0;
    if (param_2 <= (ulonglong)param_1[1]) {
      lVar5 = param_1[1] - param_2;
    }
    param_1[1] = lVar5;
    param_1[2] = param_1[2] - param_2;
  }
  return;
}


