/* FUN_18007bd00 @ 18007bd00 */

void FUN_18007bd00(longlong *param_1)

{
  char cVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  if ((*param_1 == 4) || ((int)*param_1 == 3)) {
    return;
  }
  plVar3 = (longlong *)param_1[0x1a];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_180114260(param_1 + 0x1a);
    }
  }
  FUN_18007c6c0(param_1 + 0xe);
  lVar4 = param_1[0x11];
  LOCK();
  *(undefined1 *)(lVar4 + 0x40) = 1;
  UNLOCK();
  LOCK();
  cVar1 = *(char *)(lVar4 + 0x20);
  *(char *)(lVar4 + 0x20) = '\x01';
  UNLOCK();
  if (cVar1 == '\0') {
    lVar5 = *(longlong *)(lVar4 + 0x10);
    *(undefined8 *)(lVar4 + 0x10) = 0;
    LOCK();
    *(undefined1 *)(lVar4 + 0x20) = 0;
    UNLOCK();
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar4 + 0x18));
    }
  }
  LOCK();
  cVar1 = *(char *)(lVar4 + 0x38);
  *(char *)(lVar4 + 0x38) = '\x01';
  UNLOCK();
  if (cVar1 == '\0') {
    lVar5 = *(longlong *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = 0;
    LOCK();
    uVar2 = *(undefined1 *)(lVar4 + 0x38);
    *(undefined1 *)(lVar4 + 0x38) = 0;
    UNLOCK();
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 8))(*(undefined8 *)(lVar4 + 0x30),uVar2);
    }
  }
  plVar3 = (longlong *)param_1[0x11];
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_18003cda0();
  }
  plVar3 = (longlong *)param_1[0x12];
  LOCK();
  *plVar3 = *plVar3 + -1;
  UNLOCK();
  if (*plVar3 == 0) {
    FUN_18003cc40(param_1 + 0x12);
  }
  FUN_180065b90(param_1 + 0x14);
  if (param_1[0x16] != 0) {
    FUN_18013c270();
    plVar3 = (longlong *)param_1[0x16];
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_18013bc70();
    }
  }
  FUN_1800777b0(param_1 + 0x18);
  FUN_180075cd0(param_1);
  return;
}


