/* FUN_18003b350 @ 18003b350 */

void FUN_18003b350(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (*param_1 == 5) {
    return;
  }
  if ((int)*param_1 == 4) {
    FUN_18003c630(param_1 + 1);
    return;
  }
  plVar1 = (longlong *)param_1[0x20];
  lVar2 = *plVar1;
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)plVar1[1];
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(lVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_1801d3330(lVar2,puVar3[1],puVar3[2]);
    }
  }
  thunk_FUN_1801d3330(plVar1,0x18,8);
  FUN_18003a5b0(param_1);
  return;
}


