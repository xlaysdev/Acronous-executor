/* FUN_18008cfd0 @ 18008cfd0 */

undefined8 FUN_18008cfd0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  char *pcVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  char *local_58;
  undefined1 local_50;
  char *local_48;
  uint local_3c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar2 = *param_2;
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
    local_3c = 0;
    cVar4 = *(char *)(lVar2 + 0x11);
  }
  else {
    local_3c = FUN_180200a50();
    local_3c = local_3c ^ 1;
    cVar4 = *(char *)(lVar2 + 0x11);
  }
  if (cVar4 != '\0') {
    local_50 = (undefined1)local_3c;
    local_58 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_58,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dd38);
  }
  local_48 = pcVar1;
  FUN_1801590b0(param_1,lVar2 + 0x88,param_3,lVar2 + 0x1d8);
  if ((((char)local_3c == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
    *(undefined1 *)(lVar2 + 0x11) = 1;
  }
  LOCK();
  cVar4 = *local_48;
  *local_48 = '\0';
  UNLOCK();
  if (cVar4 == '\x02') {
    WakeByAddressSingle();
  }
  return param_1;
}


