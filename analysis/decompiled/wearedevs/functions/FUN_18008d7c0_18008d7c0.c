/* FUN_18008d7c0 @ 18008d7c0 */

void FUN_18008d7c0(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  char *local_48;
  undefined1 local_40;
  char *local_38;
  uint local_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  pcVar1 = (char *)(lVar2 + 0x10);
  LOCK();
  bVar5 = *(char *)(lVar2 + 0x10) == '\0';
  if (bVar5) {
    *(char *)(lVar2 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar5) {
    FUN_180200390(pcVar1);
  }
  puVar3 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_2c = 0;
    cVar4 = *(char *)(lVar2 + 0x11);
  }
  else {
    local_2c = FUN_180200a50();
    local_2c = local_2c ^ 1;
    cVar4 = *(char *)(lVar2 + 0x11);
  }
  if (cVar4 != '\0') {
    local_40 = (undefined1)local_2c;
    local_48 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_48,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dd98);
  }
  local_38 = pcVar1;
  FUN_180159ba0(lVar2 + 0x88,lVar2 + 0x1d8,lVar2 + 0x18);
  if ((((char)local_2c == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
    *(undefined1 *)(lVar2 + 0x11) = 1;
  }
  LOCK();
  cVar4 = *local_38;
  *local_38 = '\0';
  UNLOCK();
  if (cVar4 == '\x02') {
    WakeByAddressSingle();
    return;
  }
  return;
}


