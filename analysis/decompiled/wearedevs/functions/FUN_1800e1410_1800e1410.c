/* FUN_1800e1410 @ 1800e1410 */

void FUN_1800e1410(byte *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_1800802a0();
  if (1 < *param_1) {
    plVar3 = *(longlong **)(param_1 + 8);
    (**(code **)(*plVar3 + 0x20))(plVar3[3],plVar3[1],plVar3[2]);
    thunk_FUN_1801d3330(plVar3,0x20,8);
  }
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x20))
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18),
             *(undefined8 *)(param_1 + 0x20));
  plVar3 = *(longlong **)(param_1 + 0x30);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003cf20(param_1 + 0x30);
    }
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  if (lVar4 != 0) {
    LOCK();
    *(undefined1 *)(lVar4 + 0x80) = 1;
    UNLOCK();
    LOCK();
    cVar1 = *(char *)(lVar4 + 0x60);
    *(char *)(lVar4 + 0x60) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      lVar5 = *(longlong *)(lVar4 + 0x50);
      *(undefined8 *)(lVar4 + 0x50) = 0;
      LOCK();
      *(undefined1 *)(lVar4 + 0x60) = 0;
      UNLOCK();
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar4 + 0x58));
      }
    }
    LOCK();
    cVar1 = *(char *)(lVar4 + 0x78);
    *(char *)(lVar4 + 0x78) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      lVar5 = *(longlong *)(lVar4 + 0x68);
      *(undefined8 *)(lVar4 + 0x68) = 0;
      LOCK();
      uVar2 = *(undefined1 *)(lVar4 + 0x78);
      *(undefined1 *)(lVar4 + 0x78) = 0;
      UNLOCK();
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar4 + 0x70),uVar2);
      }
    }
    plVar3 = *(longlong **)(param_1 + 0x38);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18003ce90();
      return;
    }
  }
  return;
}


