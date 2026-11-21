/* FUN_180075ba0 @ 180075ba0 */

void FUN_180075ba0(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    LOCK();
    *(undefined1 *)(lVar3 + 0xa8) = 1;
    UNLOCK();
    LOCK();
    cVar1 = *(char *)(lVar3 + 0x88);
    *(char *)(lVar3 + 0x88) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      lVar4 = *(longlong *)(lVar3 + 0x78);
      *(undefined8 *)(lVar3 + 0x78) = 0;
      LOCK();
      uVar2 = *(undefined1 *)(lVar3 + 0x88);
      *(undefined1 *)(lVar3 + 0x88) = 0;
      UNLOCK();
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar3 + 0x80),uVar2);
      }
    }
    LOCK();
    cVar1 = *(char *)(lVar3 + 0xa0);
    *(char *)(lVar3 + 0xa0) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      lVar4 = *(longlong *)(lVar3 + 0x90);
      *(undefined8 *)(lVar3 + 0x90) = 0;
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar3 + 0x98));
      }
      LOCK();
      *(undefined1 *)(lVar3 + 0xa0) = 0;
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
      FUN_180113b80();
      return;
    }
  }
  return;
}


