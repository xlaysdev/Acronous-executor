/* FUN_1800afdb0 @ 1800afdb0 */

void FUN_1800afdb0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  if (*(char *)(param_1 + 0x29c) == '\0') {
    uVar2 = *(undefined8 *)(param_1 + 0x280);
    puVar3 = *(undefined8 **)(param_1 + 0x288);
    if ((code *)*puVar3 != (code *)0x0) {
      (*(code *)*puVar3)(uVar2);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_1801d3330(uVar2,puVar3[1],puVar3[2]);
    }
    FUN_1800777b0(param_1 + 0x250);
    plVar1 = *(longlong **)(param_1 + 0x260);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0x260);
    }
    plVar1 = *(longlong **)(param_1 + 0x180);
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_18003cc40(param_1 + 0x180);
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0x29c) == '\x03') {
    FUN_1800b0440();
    plVar1 = *(longlong **)(param_1 + 0x1b0);
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_18003cc40(param_1 + 0x1b0);
      }
    }
    *(undefined1 *)(param_1 + 0x298) = 0;
    plVar1 = *(longlong **)(param_1 + 0x1a0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0x1a0);
    }
    *(undefined1 *)(param_1 + 0x299) = 0;
    FUN_1800777b0(param_1 + 400);
    *(undefined2 *)(param_1 + 0x29a) = 0;
  }
  return;
}


