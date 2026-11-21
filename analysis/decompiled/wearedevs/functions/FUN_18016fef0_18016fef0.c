/* FUN_18016fef0 @ 18016fef0 */

void FUN_18016fef0(char *param_1,longlong param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined *puVar4;
  char cVar5;
  ulonglong uVar6;
  bool bVar7;
  byte local_2c;
  
  LOCK();
  cVar5 = *param_1;
  if (cVar5 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar5 != '\0') {
    FUN_180200390(param_1);
  }
  puVar4 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_2c = 0;
  }
  else {
    local_2c = FUN_180200a50();
    local_2c = local_2c ^ 1;
  }
  if (*(longlong *)(param_2 + 0x18) != -1) {
    FUN_1801644d0(param_1 + 8);
  }
  if (*(longlong *)(param_2 + 0x18) != -1) {
    *(undefined1 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x18) = 0xffffffffffffffff;
    uVar6 = *(ulonglong *)(param_2 + 0x30);
    do {
      LOCK();
      uVar1 = *(ulonglong *)(param_2 + 0x30);
      bVar7 = uVar6 == uVar1;
      if (bVar7) {
        *(ulonglong *)(param_2 + 0x30) = uVar6 | 2;
      }
      else {
        uVar6 = uVar1;
      }
      UNLOCK();
    } while (!bVar7);
    if (uVar6 == 0) {
      lVar3 = *(longlong *)(param_2 + 0x20);
      *(undefined8 *)(param_2 + 0x20) = 0;
      LOCK();
      uVar2 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x30) = 0;
      UNLOCK();
      if (lVar3 != 0) {
        (**(code **)(lVar3 + 0x18))(*(undefined8 *)(param_2 + 0x28),uVar2);
      }
    }
  }
  if (((local_2c == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = FUN_180200a50(), cVar5 == '\0')) {
    param_1[1] = '\x01';
  }
  LOCK();
  cVar5 = *param_1;
  *param_1 = '\0';
  UNLOCK();
  if (cVar5 == '\x02') {
    WakeByAddressSingle(param_1);
    return;
  }
  return;
}


