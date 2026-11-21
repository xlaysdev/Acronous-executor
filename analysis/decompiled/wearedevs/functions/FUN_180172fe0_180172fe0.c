/* FUN_180172fe0 @ 180172fe0 */

void FUN_180172fe0(longlong param_1)

{
  undefined *puVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  
  LOCK();
  bVar5 = *(char *)(param_1 + 0xf8) == '\0';
  if (bVar5) {
    *(char *)(param_1 + 0xf8) = '\x01';
  }
  UNLOCK();
  if (!bVar5) {
    FUN_180200390(param_1 + 0xf8);
  }
  puVar1 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    if (*(char *)(param_1 + 0x128) == '\0') {
      *(undefined1 *)(param_1 + 0x128) = 1;
LAB_18017306c:
      if (((*(ulonglong *)puVar1 & 0x7fffffffffffffff) != 0) &&
         (cVar2 = FUN_180200a50(), cVar2 == '\0')) {
        *(undefined1 *)(param_1 + 0xf9) = 1;
      }
LAB_180173078:
      LOCK();
      cVar2 = *(char *)(param_1 + 0xf8);
      *(char *)(param_1 + 0xf8) = '\0';
      UNLOCK();
      if (cVar2 == '\x02') {
        WakeByAddressSingle(param_1 + 0xf8);
        lVar3 = *(longlong *)(param_1 + 0x90);
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x90);
      }
      if (lVar3 == 0) {
        return;
      }
      lVar3 = lVar3 << 4;
      lVar4 = *(longlong *)(param_1 + 0x88) + 8;
      do {
        FUN_18017ca80(lVar4,param_1 + 0x150);
        lVar4 = lVar4 + 0x10;
        lVar3 = lVar3 + -0x10;
      } while (lVar3 != 0);
      return;
    }
  }
  else {
    cVar2 = FUN_180200a50();
    if (*(char *)(param_1 + 0x128) == '\0') {
      *(undefined1 *)(param_1 + 0x128) = 1;
      if (cVar2 == '\0') goto LAB_180173078;
      goto LAB_18017306c;
    }
    if (cVar2 == '\0') goto LAB_180173041;
  }
  if (((*(ulonglong *)puVar1 & 0x7fffffffffffffff) != 0) && (cVar2 = FUN_180200a50(), cVar2 == '\0')
     ) {
    *(undefined1 *)(param_1 + 0xf9) = 1;
  }
LAB_180173041:
  LOCK();
  cVar2 = *(char *)(param_1 + 0xf8);
  *(char *)(param_1 + 0xf8) = '\0';
  UNLOCK();
  if (cVar2 == '\x02') {
    WakeByAddressSingle(param_1 + 0xf8);
    return;
  }
  return;
}


