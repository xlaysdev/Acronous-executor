/* FUN_18002ccb0 @ 18002ccb0 */

void FUN_18002ccb0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  uVar2 = 6;
  if ((longlong)uVar1 < 0) {
    uVar2 = uVar1 ^ 0x8000000000000000;
  }
  if (3 < uVar2) {
    if (uVar2 == 4) {
      lVar4 = 8;
    }
    else {
      if (uVar2 == 5) {
        uVar1 = param_1[1];
        lVar3 = 0x10;
        lVar4 = 0x20;
      }
      else {
        if (uVar1 != 0) {
          thunk_FUN_1801d3330(param_1[1],uVar1,1);
        }
        uVar1 = param_1[3];
        lVar3 = 0x20;
        lVar4 = 0x30;
      }
      if (uVar1 != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)((longlong)param_1 + lVar3),uVar1,1);
      }
    }
    if (*(longlong *)((longlong)param_1 + lVar4) != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)((longlong)param_1 + lVar4 + 8),
                          *(longlong *)((longlong)param_1 + lVar4),1);
      return;
    }
  }
  return;
}


