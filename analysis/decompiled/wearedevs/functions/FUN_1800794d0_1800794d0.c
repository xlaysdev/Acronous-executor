/* FUN_1800794d0 @ 1800794d0 */

void FUN_1800794d0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar7 = 0;
  while (lVar7 != param_2) {
    puVar1 = (undefined8 *)(param_1 + lVar7 * 8);
    lVar4 = *(longlong *)(param_1 + lVar7 * 8);
    lVar7 = lVar7 + 1;
    LOCK();
    *(undefined1 *)(lVar4 + 0x80) = 1;
    UNLOCK();
    LOCK();
    cVar2 = *(char *)(lVar4 + 0x60);
    *(char *)(lVar4 + 0x60) = '\x01';
    UNLOCK();
    if (cVar2 == '\0') {
      lVar5 = *(longlong *)(lVar4 + 0x50);
      *(undefined8 *)(lVar4 + 0x50) = 0;
      LOCK();
      uVar3 = *(undefined1 *)(lVar4 + 0x60);
      *(undefined1 *)(lVar4 + 0x60) = 0;
      UNLOCK();
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar4 + 0x58),uVar3);
      }
    }
    LOCK();
    cVar2 = *(char *)(lVar4 + 0x78);
    *(char *)(lVar4 + 0x78) = '\x01';
    UNLOCK();
    if (cVar2 == '\0') {
      lVar5 = *(longlong *)(lVar4 + 0x68);
      *(undefined8 *)(lVar4 + 0x68) = 0;
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar4 + 0x70));
      }
      LOCK();
      *(undefined1 *)(lVar4 + 0x78) = 0;
      UNLOCK();
      plVar6 = (longlong *)*puVar1;
      LOCK();
      *plVar6 = *plVar6 + -1;
      lVar4 = *plVar6;
      UNLOCK();
    }
    else {
      plVar6 = (longlong *)*puVar1;
      LOCK();
      *plVar6 = *plVar6 + -1;
      lVar4 = *plVar6;
      UNLOCK();
    }
    if (lVar4 == 0) {
      FUN_18003ce90();
    }
  }
  return;
}


