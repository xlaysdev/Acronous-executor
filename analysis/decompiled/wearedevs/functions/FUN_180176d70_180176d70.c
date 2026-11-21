/* FUN_180176d70 @ 180176d70 */

void FUN_180176d70(char *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  byte local_30;
  
  LOCK();
  cVar4 = *param_1;
  if (cVar4 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar4 != '\0') {
    FUN_180200390(param_1);
  }
  puVar3 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_30 = 0;
    cVar4 = param_1[0x18];
  }
  else {
    local_30 = FUN_180200a50();
    local_30 = local_30 ^ 1;
    cVar4 = param_1[0x18];
  }
  if (cVar4 == '\0') {
    lVar2 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      *(ulonglong **)(param_1 + 8) = param_2;
    }
    else {
      *(ulonglong **)(*(longlong *)(param_1 + 0x10) + 8) = param_2;
    }
    *(ulonglong **)(param_1 + 0x10) = param_2;
    *(longlong *)(param_1 + 0x20) = lVar2 + 1;
  }
  else {
    LOCK();
    uVar1 = *param_2;
    *param_2 = *param_2 - 0x40;
    UNLOCK();
    if (uVar1 < 0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                    &PTR_s_C__Users_burne__cargo_registry_s_180263618);
    }
    if ((uVar1 & 0xffffffffffffffc0) == 0x40) {
      (**(code **)(param_2[2] + 0x10))(param_2);
    }
  }
  if (((local_30 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
    param_1[1] = '\x01';
  }
  LOCK();
  cVar4 = *param_1;
  *param_1 = '\0';
  UNLOCK();
  if (cVar4 == '\x02') {
    WakeByAddressSingle(param_1);
  }
  return;
}


