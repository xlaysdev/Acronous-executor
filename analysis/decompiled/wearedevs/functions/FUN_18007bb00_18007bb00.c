/* FUN_18007bb00 @ 18007bb00 */

void FUN_18007bb00(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  
  FUN_180116cb0();
  FUN_180075f40(param_1 + 2);
  lVar3 = *param_1;
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
    *(undefined1 *)(lVar3 + 0x30) = 0;
    UNLOCK();
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar3 + 0x28));
    }
  }
  LOCK();
  cVar1 = *(char *)(lVar3 + 0x48);
  *(char *)(lVar3 + 0x48) = '\x01';
  UNLOCK();
  if (cVar1 == '\0') {
    lVar4 = *(longlong *)(lVar3 + 0x38);
    *(undefined8 *)(lVar3 + 0x38) = 0;
    LOCK();
    uVar2 = *(undefined1 *)(lVar3 + 0x48);
    *(undefined1 *)(lVar3 + 0x48) = 0;
    UNLOCK();
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar3 + 0x40),uVar2);
    }
  }
  plVar5 = (longlong *)*param_1;
  LOCK();
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (*plVar5 == 0) {
    FUN_18003df30(param_1);
  }
  plVar5 = (longlong *)param_1[1];
  LOCK();
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (*plVar5 == 0) {
    FUN_18003e050(param_1 + 1);
    return;
  }
  return;
}


