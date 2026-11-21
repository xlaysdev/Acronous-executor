/* FUN_180180620 @ 180180620 */

void FUN_180180620(longlong param_1)

{
  longlong lVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  byte local_24;
  
  LOCK();
  bVar4 = *(char *)(param_1 + 0x18) == '\0';
  if (bVar4) {
    *(char *)(param_1 + 0x18) = '\x01';
  }
  UNLOCK();
  if (!bVar4) {
    FUN_180200390(param_1 + 0x18);
  }
  puVar2 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_24 = 0;
  }
  else {
    local_24 = FUN_180200a50();
    local_24 = local_24 ^ 1;
  }
  lVar1 = *(longlong *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(param_1 + 0x38));
  }
  lVar1 = *(longlong *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(param_1 + 0x48));
  }
  if (((local_24 == 0) && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
     (cVar3 = FUN_180200a50(), cVar3 == '\0')) {
    *(undefined1 *)(param_1 + 0x19) = 1;
  }
  LOCK();
  cVar3 = *(char *)(param_1 + 0x18);
  *(char *)(param_1 + 0x18) = '\0';
  UNLOCK();
  if (cVar3 == '\x02') {
    WakeByAddressSingle(param_1 + 0x18);
    return;
  }
  return;
}


