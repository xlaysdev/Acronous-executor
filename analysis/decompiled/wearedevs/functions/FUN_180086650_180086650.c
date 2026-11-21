/* FUN_180086650 @ 180086650 */

void FUN_180086650(longlong *param_1,ulonglong param_2)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  char *local_50;
  longlong local_48;
  uint local_3c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  pcVar1 = (char *)(lVar2 + 0x10);
  LOCK();
  bVar6 = *(char *)(lVar2 + 0x10) == '\0';
  if (bVar6) {
    *(char *)(lVar2 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar6) {
    param_2 = param_2 & 0xffffffff;
    FUN_180200390(pcVar1);
  }
  puVar4 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_3c = 0;
    cVar5 = *(char *)(lVar2 + 0x11);
  }
  else {
    local_3c = FUN_180200a50(param_1,param_2);
    local_3c = local_3c ^ 1;
    cVar5 = *(char *)(lVar2 + 0x11);
    param_2 = param_2 & 0xffffffff;
  }
  if (cVar5 != '\0') {
    uVar3 = (ulonglong)local_48 >> 8;
    local_48 = CONCAT71((int7)uVar3,(char)local_3c);
    local_50 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_50,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020db58);
  }
  local_50 = (char *)(lVar2 + 0x1d8);
  local_48 = param_1[1];
  FUN_180137810(lVar2 + 0x128,param_2,&local_50,lVar2 + 0x18);
  if ((((char)local_3c == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = FUN_180200a50(), cVar5 == '\0')) {
    *(undefined1 *)(lVar2 + 0x11) = 1;
  }
  LOCK();
  cVar5 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar5 == '\x02') {
    WakeByAddressSingle();
  }
  return;
}


