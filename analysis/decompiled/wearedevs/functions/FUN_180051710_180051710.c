/* FUN_180051710 @ 180051710 */

void FUN_180051710(longlong *param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((10 < *(byte *)(param_1 + 0x1c)) && (param_1[0x1e] != 0)) {
    thunk_FUN_1801d3330(param_1[0x1d],param_1[0x1e],1);
  }
  if (param_1[0x11] != 0) {
    thunk_FUN_1801d3330(param_1[0x12],param_1[0x11],1);
  }
  FUN_1800430f0(param_1 + 5);
  if (*param_1 != 0) {
    if (param_1[1] == 0) {
      lVar3 = param_1[2];
      puVar1 = (undefined8 *)param_1[3];
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)(lVar3);
      }
      if (puVar1[1] != 0) {
        thunk_FUN_1801d3330(lVar3,puVar1[1],puVar1[2]);
      }
    }
    else {
      (**(code **)(param_1[1] + 0x20))(param_1[4],param_1[2],param_1[3]);
    }
  }
  plVar2 = (longlong *)param_1[0x1f];
  if (plVar2 == (longlong *)0x0) {
    return;
  }
  lVar3 = plVar2[1];
  if (lVar3 != 0) {
    FUN_1800a2ea0();
    lVar4 = lVar3 * 0x21 + 0x31;
    if (lVar4 != 0) {
      thunk_FUN_1801d3330(*plVar2 + lVar3 * -0x20 + -0x20,lVar4,0x10);
    }
  }
  thunk_FUN_1801d3330(plVar2,0x20,8);
  return;
}


