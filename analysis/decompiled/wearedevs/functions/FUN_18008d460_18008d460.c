/* FUN_18008d460 @ 18008d460 */

undefined8 FUN_18008d460(undefined8 param_1,longlong *param_2,longlong param_3,char param_4)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  char cVar6;
  bool bVar7;
  char *local_60;
  undefined1 local_58;
  uint local_50;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar3 = *param_2;
  pcVar1 = (char *)(lVar3 + 0x10);
  LOCK();
  bVar7 = *(char *)(lVar3 + 0x10) == '\0';
  if (bVar7) {
    *(char *)(lVar3 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    FUN_180200390(pcVar1);
  }
  puVar5 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_50 = 0;
    cVar6 = *(char *)(lVar3 + 0x11);
  }
  else {
    local_50 = FUN_180200a50();
    local_50 = local_50 ^ 1;
    cVar6 = *(char *)(lVar3 + 0x11);
  }
  if (cVar6 != '\0') {
    local_58 = (undefined1)local_50;
    local_60 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_60,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dd68);
  }
  lVar4 = param_2[1];
  pcVar2 = (char *)(lVar4 + 0x10);
  LOCK();
  bVar7 = *(char *)(lVar4 + 0x10) == '\0';
  if (bVar7) {
    *(char *)(lVar4 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    FUN_180200390(pcVar2);
  }
  if ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) == 0) {
    local_4c = 0;
    cVar6 = *(char *)(lVar4 + 0x11);
  }
  else {
    local_4c = FUN_180200a50();
    local_4c = local_4c ^ 1;
    cVar6 = *(char *)(lVar4 + 0x11);
  }
  if (cVar6 != '\0') {
    local_58 = (undefined1)local_4c;
    local_60 = pcVar2;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_60,&PTR_FUN_18020e730,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dd80);
  }
  if (*(int *)(param_3 + 0x10) == 1) {
    *(ulonglong *)(lVar3 + 0x28) = (ulonglong)*(uint *)(param_3 + 0x14);
  }
  else if (param_4 != '\0') {
    *(undefined8 *)(lVar3 + 0x28) = 0xffffffffffffffff;
  }
  FUN_180096ab0(param_1,lVar3 + 0x128,param_3,lVar4 + 0x18,lVar3 + 0x1d8,lVar3 + 0x18,lVar3 + 0x1c8)
  ;
  if ((((char)local_4c == '\0') && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
     (cVar6 = FUN_180200a50(), cVar6 == '\0')) {
    *(undefined1 *)(lVar4 + 0x11) = 1;
  }
  LOCK();
  cVar6 = *pcVar2;
  *pcVar2 = '\0';
  UNLOCK();
  if (cVar6 == '\x02') {
    WakeByAddressSingle(pcVar2);
  }
  if ((((char)local_50 == '\0') && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
     (cVar6 = FUN_180200a50(), cVar6 == '\0')) {
    *(undefined1 *)(lVar3 + 0x11) = 1;
  }
  LOCK();
  cVar6 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar6 == '\x02') {
    WakeByAddressSingle();
  }
  return param_1;
}


