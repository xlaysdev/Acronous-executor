/* FUN_180090be0 @ 180090be0 */

void FUN_180090be0(longlong *param_1)

{
  longlong lVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar1 = *param_1;
  LOCK();
  bVar6 = *(char *)(lVar1 + 0x10) == '\0';
  if (bVar6) {
    *(char *)(lVar1 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar6) {
    FUN_180200390(lVar1 + 0x10);
  }
  puVar2 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    bVar3 = 0;
    cVar4 = *(char *)(lVar1 + 0x11);
  }
  else {
    bVar3 = FUN_180200a50();
    bVar3 = bVar3 ^ 1;
    cVar4 = *(char *)(lVar1 + 0x11);
  }
  if (cVar4 == '\0') {
    lVar5 = *(longlong *)(lVar1 + 0x248) + -1;
    *(longlong *)(lVar1 + 0x248) = lVar5;
    if (lVar5 == 1) {
      lVar5 = *(longlong *)(lVar1 + 0x1c8);
      *(undefined8 *)(lVar1 + 0x1c8) = 0;
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar1 + 0x1d0));
      }
    }
    if (((bVar3 == 0) && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
       (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
      *(undefined1 *)(lVar1 + 0x11) = 1;
    }
    LOCK();
    cVar4 = *(char *)(lVar1 + 0x10);
    *(char *)(lVar1 + 0x10) = '\0';
    UNLOCK();
  }
  else {
    if (((bVar3 == 0) && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
       (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
      *(undefined1 *)(lVar1 + 0x11) = 1;
    }
    LOCK();
    cVar4 = *(char *)(lVar1 + 0x10);
    *(char *)(lVar1 + 0x10) = '\0';
    UNLOCK();
  }
  if (cVar4 == '\x02') {
    WakeByAddressSingle(lVar1 + 0x10);
    return;
  }
  return;
}


