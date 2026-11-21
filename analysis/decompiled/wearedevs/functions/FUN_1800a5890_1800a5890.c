/* FUN_1800a5890 @ 1800a5890 */

void FUN_1800a5890(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  if (*param_1 != 3) {
    FUN_1800a77a0();
    return;
  }
  plVar1 = *(longlong **)(param_1 + 2);
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
  return;
}


