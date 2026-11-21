/* FUN_1801167b0 @ 1801167b0 */

undefined1 FUN_1801167b0(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  if ((*(char *)(param_1 + 0x58) != '\x02') &&
     (*(longlong *)(*(longlong *)(param_1 + 0x48) + 0x38) < 0)) {
    uVar3 = FUN_180127fe0((longlong *)(param_1 + 0x48));
    return uVar3;
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (*(char *)(lVar2 + 0x50) == '\0') {
    puVar5 = *(undefined8 **)*param_2;
    lVar4 = (*(code *)*puVar5)(((undefined8 *)*param_2)[1]);
    LOCK();
    cVar1 = *(char *)(lVar2 + 0x30);
    *(char *)(lVar2 + 0x30) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      if (*(longlong *)(lVar2 + 0x20) != 0) {
        (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x18))(*(undefined8 *)(lVar2 + 0x28));
      }
      *(longlong *)(lVar2 + 0x20) = lVar4;
      *(undefined8 **)(lVar2 + 0x28) = puVar5;
      LOCK();
      *(undefined1 *)(lVar2 + 0x30) = 0;
      UNLOCK();
      if (*(char *)(lVar2 + 0x50) == '\0') {
        return 1;
      }
    }
    else {
      (**(code **)(lVar4 + 0x18))(puVar5);
    }
  }
  LOCK();
  cVar1 = *(char *)(lVar2 + 0x18);
  *(char *)(lVar2 + 0x18) = '\x01';
  UNLOCK();
  if (cVar1 != '\0') {
    return 0;
  }
  lVar4 = *(longlong *)(lVar2 + 0x10);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  LOCK();
  *(undefined1 *)(lVar2 + 0x18) = 0;
  UNLOCK();
  if (lVar4 == 0) {
    return 0;
  }
  FUN_180114c50(0x28);
  return 0;
}


