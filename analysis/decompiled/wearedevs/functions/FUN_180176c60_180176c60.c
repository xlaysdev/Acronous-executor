/* FUN_180176c60 @ 180176c60 */

longlong FUN_180176c60(char *param_1)

{
  longlong lVar1;
  undefined *puVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return 0;
  }
  LOCK();
  cVar4 = *param_1;
  if (cVar4 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar4 != '\0') {
    FUN_180200390();
  }
  puVar2 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    bVar3 = 0;
  }
  else {
    bVar3 = FUN_180200a50();
    bVar3 = bVar3 ^ 1;
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  *(ulonglong *)(param_1 + 0x20) = lVar5 - (ulonglong)(lVar5 != 0);
  if ((lVar5 == 0) || (lVar5 = *(longlong *)(param_1 + 8), lVar5 == 0)) {
    lVar5 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar5 + 8);
    *(longlong *)(param_1 + 8) = lVar1;
    if (lVar1 == 0) {
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
    }
    *(undefined8 *)(lVar5 + 8) = 0;
  }
  if (((bVar3 == 0) && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
    param_1[1] = '\x01';
  }
  LOCK();
  cVar4 = *param_1;
  *param_1 = '\0';
  UNLOCK();
  if (cVar4 == '\x02') {
    WakeByAddressSingle();
    return lVar5;
  }
  return lVar5;
}


