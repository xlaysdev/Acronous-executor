/* FUN_180177370 @ 180177370 */

void FUN_180177370(int *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (*param_1 == 0) {
    plVar3 = *(longlong **)(param_1 + 2);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_1801639b0(param_1 + 2);
        return;
      }
    }
  }
  else if (((*param_1 == 1) && (*(longlong *)(param_1 + 2) != 0)) &&
          (lVar1 = *(longlong *)(param_1 + 4), lVar1 != 0)) {
    puVar2 = *(undefined8 **)(param_1 + 6);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
      return;
    }
  }
  return;
}


