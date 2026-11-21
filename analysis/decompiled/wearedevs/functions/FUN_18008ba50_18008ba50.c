/* FUN_18008ba50 @ 18008ba50 */

bool FUN_18008ba50(char *param_1)

{
  longlong lVar1;
  undefined *puVar2;
  char cVar3;
  char *local_30;
  byte local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  LOCK();
  cVar3 = *param_1;
  if (cVar3 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar3 != '\0') {
    FUN_180200390();
  }
  puVar2 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_28 = 0;
    cVar3 = param_1[1];
  }
  else {
    local_28 = FUN_180200a50();
    local_28 = local_28 ^ 1;
    cVar3 = param_1[1];
  }
  if (cVar3 != '\0') {
    local_30 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_30,&PTR_FUN_18020e730,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dca8);
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (((local_28 == 0) && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
     (cVar3 = FUN_180200a50(), cVar3 == '\0')) {
    param_1[1] = '\x01';
  }
  LOCK();
  cVar3 = *param_1;
  *param_1 = '\0';
  UNLOCK();
  if (cVar3 == '\x02') {
    WakeByAddressSingle();
  }
  return lVar1 == 0;
}


