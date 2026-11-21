/* FUN_1800c6e10 @ 1800c6e10 */

void FUN_1800c6e10(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x271) == '\0') {
    FUN_180043680();
    FUN_18000adf0(param_1 + 0x90);
    return;
  }
  if (*(char *)(param_1 + 0x271) == '\x03') {
    uVar1 = *(undefined8 *)(param_1 + 0x260);
    puVar2 = *(undefined8 **)(param_1 + 0x268);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
    }
    FUN_180042b50(param_1 + 0x220);
    *(undefined1 *)(param_1 + 0x273) = 0;
    if (*(longlong *)(param_1 + 0x1e8) != 0) {
      FUN_180101100(param_1 + 0x1f0);
    }
    FUN_180101150(param_1 + 0x1f8);
    plVar3 = *(longlong **)(param_1 + 0x1d0);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1800f5960(param_1 + 0x1d0);
    }
    plVar3 = *(longlong **)(param_1 + 0x1d8);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cc40(param_1 + 0x1d8);
    }
    *(undefined1 *)(param_1 + 0x274) = 0;
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
        return;
      }
    }
  }
  return;
}


