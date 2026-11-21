/* FUN_1800e36c0 @ 1800e36c0 */

void FUN_1800e36c0(int *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (*param_1 == 2) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x1c);
  puVar2 = *(undefined8 **)(param_1 + 0x1e);
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] != 0) {
    thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
  }
  if ((char)*param_1 == '\0') {
    plVar3 = *(longlong **)(param_1 + 2);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1801635e0();
    }
  }
  else {
    plVar3 = *(longlong **)(param_1 + 2);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_180162f80();
    }
  }
  FUN_1800c8df0(param_1 + 4);
  return;
}


