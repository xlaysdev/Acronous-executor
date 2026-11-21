/* FUN_18007b640 @ 18007b640 */

void FUN_18007b640(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  LOCK();
  *(undefined1 *)(lVar3 + 0x42) = 1;
  UNLOCK();
  LOCK();
  cVar1 = *(char *)(lVar3 + 0x20);
  *(char *)(lVar3 + 0x20) = '\x01';
  UNLOCK();
  if (cVar1 == '\0') {
    lVar4 = *(longlong *)(lVar3 + 0x10);
    *(undefined8 *)(lVar3 + 0x10) = 0;
    LOCK();
    *(undefined1 *)(lVar3 + 0x20) = 0;
    UNLOCK();
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar3 + 0x18));
    }
  }
  LOCK();
  cVar1 = *(char *)(lVar3 + 0x38);
  *(char *)(lVar3 + 0x38) = '\x01';
  UNLOCK();
  if (cVar1 == '\0') {
    lVar4 = *(longlong *)(lVar3 + 0x28);
    *(undefined8 *)(lVar3 + 0x28) = 0;
    LOCK();
    uVar2 = *(undefined1 *)(lVar3 + 0x38);
    *(undefined1 *)(lVar3 + 0x38) = 0;
    UNLOCK();
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar3 + 0x30),uVar2);
    }
  }
  param_1 = (longlong *)*param_1;
  LOCK();
  *param_1 = *param_1 + -1;
  UNLOCK();
  if (*param_1 == 0) {
    FUN_18003cda0();
    return;
  }
  return;
}


