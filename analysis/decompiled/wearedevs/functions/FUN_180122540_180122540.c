/* FUN_180122540 @ 180122540 */

void FUN_180122540(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 8) != 1000000000) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2 = *(undefined8 **)(param_1 + 0x38);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
    }
    plVar3 = *(longlong **)(param_1 + 0x40);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_18003cc40(param_1 + 0x40);
        return;
      }
    }
  }
  return;
}


