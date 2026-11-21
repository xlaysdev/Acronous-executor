/* FUN_180167340 @ 180167340 */

void FUN_180167340(char *param_1,undefined8 param_2)

{
  undefined *puVar1;
  char cVar2;
  char *local_38;
  byte local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  LOCK();
  cVar2 = *param_1;
  if (cVar2 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar2 != '\0') {
    FUN_180200390();
  }
  puVar1 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_30 = 0;
    cVar2 = param_1[1];
  }
  else {
    local_30 = FUN_180200a50();
    local_30 = local_30 ^ 1;
    cVar2 = param_1[1];
  }
  if (cVar2 != '\0') {
    local_38 = param_1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_38,&PTR_FUN_180260590,
                  &PTR_s_C__Users_burne__cargo_registry_s_180260a40);
  }
  *(undefined8 *)(param_1 + 8) = param_2;
  if (((local_30 == 0) && ((*(ulonglong *)puVar1 & 0x7fffffffffffffff) != 0)) &&
     (cVar2 = FUN_180200a50(), cVar2 == '\0')) {
    param_1[1] = '\x01';
  }
  LOCK();
  cVar2 = *param_1;
  *param_1 = '\0';
  UNLOCK();
  if (cVar2 == '\x02') {
    WakeByAddressSingle();
    return;
  }
  return;
}


