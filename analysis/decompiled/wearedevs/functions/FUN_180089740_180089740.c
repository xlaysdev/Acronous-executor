/* FUN_180089740 @ 180089740 */

void FUN_180089740(undefined8 *param_1,ulonglong param_2)

{
  char *pcVar1;
  undefined *puVar2;
  char cVar3;
  char *local_48;
  undefined1 local_40;
  char *local_38;
  uint local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  pcVar1 = (char *)*param_1;
  LOCK();
  cVar3 = *pcVar1;
  if (cVar3 == '\0') {
    *pcVar1 = '\x01';
  }
  UNLOCK();
  if (cVar3 != '\0') {
    param_2 = param_2 & 0xffffffff;
    FUN_180200390(pcVar1);
  }
  puVar2 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_2c = 0;
    cVar3 = pcVar1[1];
  }
  else {
    param_2 = param_2 & 0xffffffff;
    local_2c = FUN_180200a50();
    local_2c = local_2c ^ 1;
    cVar3 = pcVar1[1];
  }
  if (cVar3 != '\0') {
    local_40 = (undefined1)local_2c;
    local_48 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_48,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dc30);
  }
  local_38 = pcVar1;
  FUN_18015a190(pcVar1 + 0x78,param_2);
  pcVar1 = local_38;
  if ((((char)local_2c == '\0') && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
     (cVar3 = FUN_180200a50(), cVar3 == '\0')) {
    pcVar1[1] = '\x01';
  }
  LOCK();
  cVar3 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar3 == '\x02') {
    WakeByAddressSingle(pcVar1);
    return;
  }
  return;
}


