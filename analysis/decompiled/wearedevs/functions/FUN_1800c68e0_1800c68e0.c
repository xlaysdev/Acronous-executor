/* FUN_1800c68e0 @ 1800c68e0 */

void FUN_1800c68e0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x1e0) == '\0') {
    FUN_180043680();
    FUN_18000adf0(param_1 + 0x90);
    return;
  }
  if (*(char *)(param_1 + 0x1e0) == '\x03') {
    uVar1 = *(undefined8 *)(param_1 + 0x1d0);
    puVar2 = *(undefined8 **)(param_1 + 0x1d8);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
    }
    plVar3 = *(longlong **)(param_1 + 0x1b8);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003dca0(param_1 + 0x1b8);
    }
    if (*(longlong *)(param_1 + 0x198) != 0) {
      FUN_180101100(param_1 + 0x1a0);
    }
    FUN_180101150(param_1 + 0x1a8);
    if (*(longlong *)(param_1 + 0x178) != 0) {
      FUN_180101100(param_1 + 0x180);
    }
    FUN_180101150(param_1 + 0x188);
    *(undefined2 *)(param_1 + 0x1e2) = 0;
    plVar3 = *(longlong **)(param_1 + 0x108);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1800f5960(param_1 + 0x108);
    }
    plVar3 = *(longlong **)(param_1 + 0x110);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cc40(param_1 + 0x110);
    }
    plVar3 = *(longlong **)(param_1 + 0x158);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003d670(param_1 + 0x158);
    }
    if (*(char *)(param_1 + 0x150) != '\x02') {
      (**(code **)(*(longlong *)(param_1 + 0x130) + 0x20))
                (*(undefined8 *)(param_1 + 0x148),*(undefined8 *)(param_1 + 0x138),
                 *(undefined8 *)(param_1 + 0x140));
    }
    plVar3 = *(longlong **)(param_1 + 0x160);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_18003dca0(param_1 + 0x160);
      }
    }
    *(undefined1 *)(param_1 + 0x1e4) = 0;
  }
  return;
}


