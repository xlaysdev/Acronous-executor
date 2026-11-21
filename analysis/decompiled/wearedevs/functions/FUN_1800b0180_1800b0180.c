/* FUN_1800b0180 @ 1800b0180 */

void FUN_1800b0180(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_1 + 0x388) == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x98);
    puVar4 = *(undefined8 **)(param_1 + 0xa0);
    if ((code *)*puVar4 != (code *)0x0) {
      (*(code *)*puVar4)(uVar3);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_1801d3330(uVar3,puVar4[1],puVar4[2]);
    }
    plVar1 = *(longlong **)(param_1 + 0xb0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_1 + 0xb0);
    }
    plVar1 = *(longlong **)(param_1 + 0xc0);
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_18003cc40(param_1 + 0xc0);
        return;
      }
    }
  }
  else if (*(char *)(param_1 + 0x388) == '\x03') {
    FUN_1800afdb0(param_1 + 0xe8);
    *(undefined1 *)(param_1 + 0x389) = 0;
    plVar1 = *(longlong **)(param_1 + 0xd0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cd00(param_1 + 0xd0);
    }
    lVar2 = *(longlong *)(param_1 + 0xd8);
    LOCK();
    plVar1 = (longlong *)(lVar2 + 0x1c8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18009c5a0(lVar2 + 0x80);
      FUN_18017a7e0(lVar2 + 0x100);
    }
    plVar1 = *(longlong **)(param_1 + 0xd8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003e0f0();
    }
    *(undefined1 *)(param_1 + 0x38a) = 0;
  }
  return;
}


