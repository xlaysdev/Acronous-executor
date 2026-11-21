/* FUN_1801f6090 @ 1801f6090 */

undefined8 FUN_1801f6090(void)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  
  iVar1 = FUN_1801f6780();
  if (iVar1 != 0) {
    pvVar2 = (void *)0x0;
    LOCK();
    bVar3 = DAT_1802fd8b8 == (void *)0x0;
    if (bVar3) {
      DAT_1802fd8b8 = StackBase;
    }
    else {
      pvVar2 = DAT_1802fd8b8;
    }
    UNLOCK();
    while (!bVar3) {
      if (StackBase == pvVar2) {
        return 1;
      }
      pvVar2 = (void *)0x0;
      LOCK();
      bVar3 = DAT_1802fd8b8 == (void *)0x0;
      if (bVar3) {
        DAT_1802fd8b8 = StackBase;
      }
      else {
        pvVar2 = DAT_1802fd8b8;
      }
      UNLOCK();
    }
  }
  return 0;
}


