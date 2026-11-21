/* FUN_18007cd90 @ 18007cd90 */

void FUN_18007cd90(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_1800755d0();
  FUN_1800abe30();
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003d970();
    }
  }
  plVar3 = *(longlong **)(param_1 + 0x18);
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_18003e050(param_1 + 0x18);
  }
  lVar4 = *(longlong *)(param_1 + 0x28);
  if (lVar4 != 0) {
    LOCK();
    *(undefined1 *)(lVar4 + 0x50) = 1;
    UNLOCK();
    LOCK();
    cVar1 = *(char *)(lVar4 + 0x30);
    *(char *)(lVar4 + 0x30) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      lVar5 = *(longlong *)(lVar4 + 0x20);
      *(undefined8 *)(lVar4 + 0x20) = 0;
      LOCK();
      uVar2 = *(undefined1 *)(lVar4 + 0x30);
      *(undefined1 *)(lVar4 + 0x30) = 0;
      UNLOCK();
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar4 + 0x28),uVar2);
      }
    }
    LOCK();
    cVar1 = *(char *)(lVar4 + 0x48);
    *(char *)(lVar4 + 0x48) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      lVar5 = *(longlong *)(lVar4 + 0x38);
      *(undefined8 *)(lVar4 + 0x38) = 0;
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar4 + 0x40));
      }
      LOCK();
      *(undefined1 *)(lVar4 + 0x48) = 0;
      UNLOCK();
      plVar3 = *(longlong **)(param_1 + 0x28);
      LOCK();
      *plVar3 = *plVar3 + -1;
      lVar4 = *plVar3;
      UNLOCK();
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x28);
      LOCK();
      *plVar3 = *plVar3 + -1;
      lVar4 = *plVar3;
      UNLOCK();
    }
    if (lVar4 == 0) {
      FUN_18003df30();
      return;
    }
  }
  return;
}


