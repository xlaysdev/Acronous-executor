/* FUN_1800777b0 @ 1800777b0 */

void FUN_1800777b0(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  
  lVar3 = param_1[1];
  LOCK();
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)(lVar3 + 0x10) = 3;
  UNLOCK();
  cVar6 = FUN_18012c0f0(uVar2);
  if (cVar6 == '\x02') {
    do {
      LOCK();
      cVar6 = *(char *)(lVar3 + 0x28);
      *(char *)(lVar3 + 0x28) = '\x01';
      UNLOCK();
    } while (cVar6 != '\0');
    lVar4 = *(longlong *)(lVar3 + 0x18);
    *(undefined8 *)(lVar3 + 0x18) = 0;
    LOCK();
    *(undefined1 *)(lVar3 + 0x28) = 0;
    UNLOCK();
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar3 + 0x20));
    }
  }
  FUN_1800ac180(param_1);
  plVar5 = (longlong *)*param_1;
  LOCK();
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (*plVar5 == 0) {
    FUN_18003e0f0();
  }
  lVar3 = param_1[1];
  LOCK();
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)(lVar3 + 0x10) = 3;
  UNLOCK();
  cVar6 = FUN_18012c0f0(uVar2);
  if (cVar6 == '\x02') {
    do {
      LOCK();
      cVar6 = *(char *)(lVar3 + 0x28);
      *(char *)(lVar3 + 0x28) = '\x01';
      UNLOCK();
    } while (cVar6 != '\0');
    lVar4 = *(longlong *)(lVar3 + 0x18);
    *(undefined8 *)(lVar3 + 0x18) = 0;
    LOCK();
    uVar1 = *(undefined1 *)(lVar3 + 0x28);
    *(undefined1 *)(lVar3 + 0x28) = 0;
    UNLOCK();
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 8))(*(undefined8 *)(lVar3 + 0x20),uVar1);
    }
  }
  plVar5 = (longlong *)param_1[1];
  LOCK();
  *plVar5 = *plVar5 + -1;
  UNLOCK();
  if (*plVar5 == 0) {
    FUN_18003cd00();
    return;
  }
  return;
}


