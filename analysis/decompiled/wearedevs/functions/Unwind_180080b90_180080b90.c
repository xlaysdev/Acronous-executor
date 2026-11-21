/* Unwind@180080b90 @ 180080b90 */

void Unwind_180080b90(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  lVar3 = *(longlong *)(param_2 + 0xb0);
  for (lVar7 = *(longlong *)(param_2 + 0xb8); lVar7 != lVar3; lVar7 = lVar7 + 1) {
    lVar4 = *(longlong *)(*(longlong *)(param_2 + 0xc0) + lVar7 * 8);
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
      uVar2 = *(undefined1 *)(lVar4 + 0x60);
      *(undefined1 *)(lVar4 + 0x60) = 0;
      UNLOCK();
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar4 + 0x58),uVar2);
      }
    }
    LOCK();
    cVar1 = *(char *)(lVar4 + 0x78);
    *(char *)(lVar4 + 0x78) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      lVar5 = *(longlong *)(lVar4 + 0x68);
      *(undefined8 *)(lVar4 + 0x68) = 0;
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar4 + 0x70));
      }
      LOCK();
      *(undefined1 *)(lVar4 + 0x78) = 0;
      UNLOCK();
    }
    plVar6 = *(longlong **)(*(longlong *)(param_2 + 0xc0) + lVar7 * 8);
    LOCK();
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      FUN_18003ce90();
    }
  }
  return;
}


