/* FUN_180173b50 @ 180173b50 */

longlong FUN_180173b50(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  bool bVar6;
  
  if (*(longlong *)(param_1 + 0xe0) == 0) {
    return 0;
  }
  LOCK();
  bVar6 = *(char *)(param_1 + 0xf8) == '\0';
  if (bVar6) {
    *(char *)(param_1 + 0xf8) = '\x01';
  }
  UNLOCK();
  if (!bVar6) {
    FUN_180200390(param_1 + 0xf8);
  }
  puVar2 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = FUN_180200a50();
    bVar3 = bVar3 ^ 1;
  }
  lVar5 = *(longlong *)(param_1 + 0xe0);
  *(ulonglong *)(param_1 + 0xe0) = lVar5 - (ulonglong)(lVar5 != 0);
  if ((lVar5 == 0) || (lVar5 = *(longlong *)(param_1 + 0x118), lVar5 == 0)) {
    lVar5 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar5 + 8);
    *(longlong *)(param_1 + 0x118) = lVar1;
    if (lVar1 == 0) {
      *(undefined8 *)(param_1 + 0x120) = 0;
    }
    *(undefined8 *)(lVar5 + 8) = 0;
  }
  if (((bVar3 == 0) && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
    *(undefined1 *)(param_1 + 0xf9) = 1;
  }
  LOCK();
  cVar4 = *(char *)(param_1 + 0xf8);
  *(char *)(param_1 + 0xf8) = '\0';
  UNLOCK();
  if (cVar4 == '\x02') {
    WakeByAddressSingle(param_1 + 0xf8);
    return lVar5;
  }
  return lVar5;
}


