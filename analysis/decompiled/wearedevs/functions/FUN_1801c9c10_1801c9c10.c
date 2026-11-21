/* FUN_1801c9c10 @ 1801c9c10 */

void FUN_1801c9c10(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*param_1 != 0) {
    thunk_FUN_1801d3330(param_1[1],*param_1,1);
  }
  if (param_1[3] != 0) {
    thunk_FUN_1801d3330(param_1[4],param_1[3],1);
  }
  uVar1 = param_1[6];
  uVar3 = 6;
  if ((longlong)uVar1 < 0) {
    uVar3 = uVar1 ^ 0x8000000000000000;
  }
  if (3 < uVar3) {
    if (uVar3 == 4) {
      lVar5 = 8;
    }
    else {
      if (uVar3 == 5) {
        lVar2 = param_1[7];
        lVar4 = 0x10;
        lVar5 = 0x20;
      }
      else {
        if (uVar1 != 0) {
          thunk_FUN_1801d3330(param_1[7],uVar1,1);
        }
        lVar2 = param_1[9];
        lVar4 = 0x20;
        lVar5 = 0x30;
      }
      if (lVar2 != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)((longlong)param_1 + lVar4 + 0x30),lVar2,1);
      }
    }
    lVar2 = *(longlong *)((longlong)param_1 + lVar5 + 0x30);
    if (lVar2 != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)((longlong)param_1 + lVar5 + 0x38),lVar2,1);
      return;
    }
  }
  return;
}


