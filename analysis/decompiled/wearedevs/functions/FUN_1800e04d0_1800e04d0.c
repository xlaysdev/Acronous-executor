/* FUN_1800e04d0 @ 1800e04d0 */

void FUN_1800e04d0(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    LOCK();
    *(undefined1 *)(lVar3 + 0x80) = 1;
    UNLOCK();
    LOCK();
    cVar1 = *(char *)(lVar3 + 0x60);
    *(char *)(lVar3 + 0x60) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      lVar4 = *(longlong *)(lVar3 + 0x50);
      *(undefined8 *)(lVar3 + 0x50) = 0;
      LOCK();
      *(undefined1 *)(lVar3 + 0x60) = 0;
      UNLOCK();
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar3 + 0x58));
      }
    }
    LOCK();
    cVar1 = *(char *)(lVar3 + 0x78);
    *(char *)(lVar3 + 0x78) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      lVar4 = *(longlong *)(lVar3 + 0x68);
      *(undefined8 *)(lVar3 + 0x68) = 0;
      LOCK();
      uVar2 = *(undefined1 *)(lVar3 + 0x78);
      *(undefined1 *)(lVar3 + 0x78) = 0;
      UNLOCK();
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar3 + 0x70),uVar2);
      }
    }
    param_1 = (longlong *)*param_1;
    LOCK();
    *param_1 = *param_1 + -1;
    UNLOCK();
    if (*param_1 == 0) {
      FUN_18003ce90();
      return;
    }
  }
  return;
}


