/* FUN_180166ec0 @ 180166ec0 */

void FUN_180166ec0(ulonglong *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined *puVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  bool bVar8;
  byte local_38;
  
  uVar5 = *param_1;
  while ((uVar5 & 1) == 0) {
    LOCK();
    uVar2 = *param_1;
    bVar8 = uVar5 == uVar2;
    if (bVar8) {
      *param_1 = uVar5 & 0xfffffffffffffffc | 2;
    }
    else {
      uVar5 = uVar2;
    }
    UNLOCK();
    if (bVar8) {
      return;
    }
  }
  puVar1 = param_1 + 1;
  LOCK();
  bVar8 = (char)param_1[1] == '\0';
  if (bVar8) {
    *(char *)(param_1 + 1) = '\x01';
  }
  UNLOCK();
  if (!bVar8) {
    FUN_180200390(puVar1);
  }
  puVar3 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_38 = 0;
  }
  else {
    local_38 = FUN_180200a50();
    local_38 = local_38 ^ 1;
  }
  puVar7 = param_1;
  lVar6 = FUN_180165f30(param_1 + 2,param_1,*param_1,param_2);
  if (lVar6 != 0) {
    if (((local_38 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
      *(undefined1 *)((longlong)param_1 + 9) = 1;
    }
    LOCK();
    uVar5 = *puVar1;
    *(char *)puVar1 = '\0';
    UNLOCK();
    if ((char)uVar5 == '\x02') {
      WakeByAddressSingle(puVar1);
    }
    (**(code **)(lVar6 + 8))(puVar7);
    return;
  }
  if (((local_38 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
    *(undefined1 *)((longlong)param_1 + 9) = 1;
  }
  LOCK();
  uVar5 = *puVar1;
  *(char *)puVar1 = '\0';
  UNLOCK();
  if ((char)uVar5 == '\x02') {
    WakeByAddressSingle(puVar1);
    return;
  }
  return;
}


