/* FUN_180075930 @ 180075930 */

void FUN_180075930(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    LOCK();
    *(undefined1 *)(lVar3 + 0x50) = 1;
    UNLOCK();
    LOCK();
    cVar1 = *(char *)(lVar3 + 0x30);
    *(char *)(lVar3 + 0x30) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      lVar4 = *(longlong *)(lVar3 + 0x20);
      *(undefined8 *)(lVar3 + 0x20) = 0;
      LOCK();
      uVar2 = *(undefined1 *)(lVar3 + 0x30);
      *(undefined1 *)(lVar3 + 0x30) = 0;
      UNLOCK();
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar3 + 0x28),uVar2);
      }
    }
    LOCK();
    cVar1 = *(char *)(lVar3 + 0x48);
    *(char *)(lVar3 + 0x48) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      lVar4 = *(longlong *)(lVar3 + 0x38);
      *(undefined8 *)(lVar3 + 0x38) = 0;
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar3 + 0x40));
      }
      LOCK();
      *(undefined1 *)(lVar3 + 0x48) = 0;
      UNLOCK();
      param_1 = (longlong *)*param_1;
      LOCK();
      *param_1 = *param_1 + -1;
      lVar3 = *param_1;
      UNLOCK();
    }
    else {
      param_1 = (longlong *)*param_1;
      LOCK();
      *param_1 = *param_1 + -1;
      lVar3 = *param_1;
      UNLOCK();
    }
    if (lVar3 == 0) {
      FUN_18003df30();
      return;
    }
  }
  return;
}


