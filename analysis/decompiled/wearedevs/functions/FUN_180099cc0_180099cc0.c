/* FUN_180099cc0 @ 180099cc0 */

void FUN_180099cc0(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar3 = *(longlong **)(param_1 + 0xd0);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_180114260(param_1 + 0xd0);
    }
  }
  FUN_18007c6c0(param_1 + 0x70);
  lVar4 = *(longlong *)(param_1 + 0x88);
  LOCK();
  *(undefined1 *)(lVar4 + 0x40) = 1;
  UNLOCK();
  LOCK();
  cVar1 = *(char *)(lVar4 + 0x20);
  *(char *)(lVar4 + 0x20) = '\x01';
  UNLOCK();
  if (cVar1 == '\0') {
    lVar5 = *(longlong *)(lVar4 + 0x10);
    *(undefined8 *)(lVar4 + 0x10) = 0;
    LOCK();
    *(undefined1 *)(lVar4 + 0x20) = 0;
    UNLOCK();
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar4 + 0x18));
    }
  }
  LOCK();
  cVar1 = *(char *)(lVar4 + 0x38);
  *(char *)(lVar4 + 0x38) = '\x01';
  UNLOCK();
  if (cVar1 == '\0') {
    lVar5 = *(longlong *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = 0;
    LOCK();
    uVar2 = *(undefined1 *)(lVar4 + 0x38);
    *(undefined1 *)(lVar4 + 0x38) = 0;
    UNLOCK();
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar4 + 0x30),uVar2);
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x88);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_18003cda0();
  }
  plVar3 = *(longlong **)(param_1 + 0x90);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_18003cc40(param_1 + 0x90);
  }
  FUN_180097190(param_1 + 0xa0);
  FUN_1800777b0(param_1 + 0xc0);
  FUN_1800976f0(param_1);
  return;
}


