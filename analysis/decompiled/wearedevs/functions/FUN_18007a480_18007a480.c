/* FUN_18007a480 @ 18007a480 */

void FUN_18007a480(longlong *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  
  lVar3 = *param_1;
  LOCK();
  uVar2 = *(undefined8 *)(lVar3 + 0x10);
  *(undefined8 *)(lVar3 + 0x10) = 3;
  UNLOCK();
  cVar5 = FUN_18012c0f0(uVar2);
  if (cVar5 == '\x02') {
    do {
      LOCK();
      cVar5 = *(char *)(lVar3 + 0x28);
      *(char *)(lVar3 + 0x28) = '\x01';
      UNLOCK();
    } while (cVar5 != '\0');
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
  param_1 = (longlong *)*param_1;
  LOCK();
  *param_1 = *param_1 + -1;
  UNLOCK();
  if (*param_1 == 0) {
    FUN_18003cd00();
    return;
  }
  return;
}


