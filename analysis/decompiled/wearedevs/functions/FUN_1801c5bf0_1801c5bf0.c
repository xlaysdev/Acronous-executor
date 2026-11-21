/* FUN_1801c5bf0 @ 1801c5bf0 */

void FUN_1801c5bf0(longlong param_1)

{
  char *pcVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  char *local_48;
  undefined1 local_40;
  char *local_38;
  uint local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  pcVar1 = (char *)(param_1 + 4);
  LOCK();
  bVar4 = *(char *)(param_1 + 4) == '\0';
  if (bVar4) {
    *(char *)(param_1 + 4) = '\x01';
  }
  UNLOCK();
  if (!bVar4) {
    FUN_180200390(pcVar1);
  }
  puVar2 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_2c = 0;
    cVar3 = *(char *)(param_1 + 5);
  }
  else {
    local_2c = FUN_180200a50();
    local_2c = local_2c ^ 1;
    cVar3 = *(char *)(param_1 + 5);
  }
  if (cVar3 != '\0') {
    local_40 = (undefined1)local_2c;
    local_48 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_48,&PTR_FUN_180288080,
                  &DAT_180288170);
  }
  *(undefined1 *)(param_1 + 6) = 1;
  local_38 = pcVar1;
  FUN_1801df5b0(param_1);
  if ((((char)local_2c == '\0') && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
     (cVar3 = FUN_180200a50(), cVar3 == '\0')) {
    *(undefined1 *)(param_1 + 5) = 1;
  }
  LOCK();
  cVar3 = *local_38;
  *local_38 = '\0';
  UNLOCK();
  if (cVar3 == '\x02') {
    WakeByAddressSingle();
    return;
  }
  return;
}


