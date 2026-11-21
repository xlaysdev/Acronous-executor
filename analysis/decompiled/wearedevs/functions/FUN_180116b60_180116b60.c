/* FUN_180116b60 @ 180116b60 */

undefined8 FUN_180116b60(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_1 + 0x58) != '\x02') {
    lVar2 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(lVar2 + 0x38) < 0) {
      LOCK();
      *(ulonglong *)(lVar2 + 0x38) = *(ulonglong *)(lVar2 + 0x38) & 0x7fffffffffffffff;
      UNLOCK();
    }
    FUN_18017a7e0(lVar2 + 0x48);
  }
  lVar2 = *(longlong *)(param_1 + 0x40);
  *(undefined1 *)(lVar2 + 0x28) = 1;
  FUN_180162080(lVar2 + 0x10);
  lVar2 = *(longlong *)(param_1 + 0x38);
  if (*(char *)(lVar2 + 0x50) == '\0') {
    puVar4 = *(undefined8 **)*param_2;
    lVar3 = (*(code *)*puVar4)(((undefined8 *)*param_2)[1]);
    LOCK();
    cVar1 = *(char *)(lVar2 + 0x30);
    *(char *)(lVar2 + 0x30) = '\x01';
    UNLOCK();
    if (cVar1 == '\0') {
      if (*(longlong *)(lVar2 + 0x20) != 0) {
        (**(code **)(*(longlong *)(lVar2 + 0x20) + 0x18))(*(undefined8 *)(lVar2 + 0x28));
      }
      *(longlong *)(lVar2 + 0x20) = lVar3;
      *(undefined8 **)(lVar2 + 0x28) = puVar4;
      LOCK();
      *(undefined1 *)(lVar2 + 0x30) = 0;
      UNLOCK();
      if (*(char *)(lVar2 + 0x50) == '\0') {
        return 1;
      }
    }
    else {
      (**(code **)(lVar3 + 0x18))(puVar4);
    }
  }
  LOCK();
  cVar1 = *(char *)(lVar2 + 0x18);
  *(char *)(lVar2 + 0x18) = '\x01';
  UNLOCK();
  if (cVar1 == '\0') {
    lVar3 = *(longlong *)(lVar2 + 0x10);
    *(undefined8 *)(lVar2 + 0x10) = 0;
    LOCK();
    *(undefined1 *)(lVar2 + 0x18) = 0;
    UNLOCK();
    if (lVar3 != 0) {
      FUN_180114c50(0x28);
    }
  }
  return 0;
}


