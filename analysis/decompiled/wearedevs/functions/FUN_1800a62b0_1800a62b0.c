/* FUN_1800a62b0 @ 1800a62b0 */

void FUN_1800a62b0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  lVar1 = *param_1;
  if (lVar1 == 4) {
    FUN_1800a77a0(param_1 + 1);
    return;
  }
  plVar2 = (longlong *)param_1[0x20];
  lVar3 = *plVar2;
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)plVar2[1];
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(lVar3);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_1801d3330(lVar3,puVar4[1],puVar4[2]);
    }
  }
  thunk_FUN_1801d3330(plVar2,0x18,8);
  if ((int)lVar1 == 3) {
    return;
  }
  FUN_1800a7560(param_1);
  return;
}


