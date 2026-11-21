/* FUN_180089890 @ 180089890 */

undefined4 FUN_180089890(undefined8 *param_1)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined *puVar3;
  char cVar4;
  char *local_30;
  byte local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  pcVar2 = (char *)*param_1;
  LOCK();
  cVar4 = *pcVar2;
  if (cVar4 == '\0') {
    *pcVar2 = '\x01';
  }
  UNLOCK();
  if (cVar4 != '\0') {
    FUN_180200390();
  }
  puVar3 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_28 = 0;
    cVar4 = pcVar2[1];
  }
  else {
    local_28 = FUN_180200a50();
    local_28 = local_28 ^ 1;
    cVar4 = pcVar2[1];
  }
  if (cVar4 != '\0') {
    local_30 = pcVar2;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_30,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dc48);
  }
  uVar1 = *(undefined4 *)(pcVar2 + 0x10c);
  if (((local_28 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
    pcVar2[1] = '\x01';
  }
  LOCK();
  cVar4 = *pcVar2;
  *pcVar2 = '\0';
  UNLOCK();
  if (cVar4 == '\x02') {
    WakeByAddressSingle(pcVar2);
  }
  return uVar1;
}


