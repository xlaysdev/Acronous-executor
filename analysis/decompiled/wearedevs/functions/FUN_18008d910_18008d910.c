/* FUN_18008d910 @ 18008d910 */

bool FUN_18008d910(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  bool bVar5;
  char *local_38;
  byte local_30;
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
    FUN_180200390();
  }
  puVar3 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_30 = 0;
    cVar4 = *(char *)(lVar2 + 0x11);
  }
  else {
    local_30 = FUN_180200a50();
    local_30 = local_30 ^ 1;
    cVar4 = *(char *)(lVar2 + 0x11);
  }
  if (cVar4 != '\0') {
    local_38 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_38,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020ddb0);
  }
  bVar5 = true;
  if ((*(longlong *)(lVar2 + 0x30) == 0) && (*(longlong *)(lVar2 + 0x40) == 0)) {
    bVar5 = 1 < *(ulonglong *)(lVar2 + 0x248);
  }
  if (((local_30 == 0) && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
    *(undefined1 *)(lVar2 + 0x11) = 1;
  }
  LOCK();
  cVar4 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar4 == '\x02') {
    WakeByAddressSingle(pcVar1);
  }
  return bVar5;
}


