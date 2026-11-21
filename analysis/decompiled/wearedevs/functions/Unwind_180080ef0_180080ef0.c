/* Unwind@180080ef0 @ 180080ef0 */

void Unwind_180080ef0(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  
  lVar3 = *(longlong *)(param_2 + 0xb0);
  lVar4 = *(longlong *)(param_2 + 0x88);
  for (lVar8 = *(longlong *)(param_2 + 0xb8); lVar8 != lVar3; lVar8 = lVar8 + 1) {
    lVar5 = *(longlong *)(lVar4 + lVar8 * 8);
    LOCK();
    *(undefined1 *)(lVar5 + 0x80) = 1;
    UNLOCK();
    LOCK();
    cVar1 = *(char *)(lVar5 + 0x60);
    *(char *)(lVar5 + 0x60) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      lVar6 = *(longlong *)(lVar5 + 0x50);
      *(undefined8 *)(lVar5 + 0x50) = 0;
      LOCK();
      uVar2 = *(undefined1 *)(lVar5 + 0x60);
      *(undefined1 *)(lVar5 + 0x60) = 0;
      UNLOCK();
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 8))(*(undefined8 *)(lVar5 + 0x58),uVar2);
      }
    }
    LOCK();
    cVar1 = *(char *)(lVar5 + 0x78);
    *(char *)(lVar5 + 0x78) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      lVar6 = *(longlong *)(lVar5 + 0x68);
      *(undefined8 *)(lVar5 + 0x68) = 0;
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x18))(*(undefined8 *)(lVar5 + 0x70));
      }
      LOCK();
      *(undefined1 *)(lVar5 + 0x78) = 0;
      UNLOCK();
      plVar7 = *(longlong **)(lVar4 + lVar8 * 8);
      LOCK();
      *plVar7 = *plVar7 + -1;
      lVar5 = *plVar7;
      UNLOCK();
    }
    else {
      plVar7 = *(longlong **)(lVar4 + lVar8 * 8);
      LOCK();
      *plVar7 = *plVar7 + -1;
      lVar5 = *plVar7;
      UNLOCK();
    }
    if (lVar5 == 0) {
      FUN_18003ce90();
    }
  }
  return;
}


