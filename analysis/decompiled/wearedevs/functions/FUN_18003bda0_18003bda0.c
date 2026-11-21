/* FUN_18003bda0 @ 18003bda0 */

void FUN_18003bda0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (*(int *)(param_1 + 0xf8) == 2) {
    uVar1 = *(undefined8 *)(param_1 + 0x100);
    puVar2 = *(undefined8 **)(param_1 + 0x108);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
    }
  }
  else {
    plVar3 = *(longlong **)(param_1 + 0x118);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1800f5960(param_1 + 0x118);
    }
    plVar3 = *(longlong **)(param_1 + 0x120);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cc40(param_1 + 0x120);
    }
    if (*(longlong *)(param_1 + 0xf8) != 0) {
      FUN_180101100(param_1 + 0x100);
    }
    FUN_180101150(param_1 + 0x108);
    plVar3 = *(longlong **)(param_1 + 0x168);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003d670(param_1 + 0x168);
    }
    if (*(char *)(param_1 + 0x160) != '\x02') {
      (**(code **)(*(longlong *)(param_1 + 0x140) + 0x20))
                (*(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x148),
                 *(undefined8 *)(param_1 + 0x150));
    }
    plVar3 = *(longlong **)(param_1 + 0x170);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_18003dca0(param_1 + 0x170);
      }
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x188);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_18003cc40(param_1 + 0x188);
  }
  plVar3 = *(longlong **)(param_1 + 0xd8);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_18003cc40(param_1 + 0xd8);
  }
  plVar3 = *(longlong **)(param_1 + 0xe8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cc40(param_1 + 0xe8);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x198);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cf20(param_1 + 0x198);
      return;
    }
  }
  return;
}


