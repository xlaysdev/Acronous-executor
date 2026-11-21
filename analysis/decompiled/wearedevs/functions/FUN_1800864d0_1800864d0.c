/* FUN_1800864d0 @ 1800864d0 */

undefined1 FUN_1800864d0(longlong *param_1)

{
  char *pcVar1;
  undefined1 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined *puVar5;
  char cVar6;
  longlong lVar7;
  bool bVar8;
  char *local_48;
  longlong local_40;
  uint local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar3 = *param_1;
  pcVar1 = (char *)(lVar3 + 0x10);
  LOCK();
  bVar8 = *(char *)(lVar3 + 0x10) == '\0';
  if (bVar8) {
    *(char *)(lVar3 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar8) {
    FUN_180200390(pcVar1);
  }
  puVar5 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_34 = 0;
    cVar6 = *(char *)(lVar3 + 0x11);
  }
  else {
    local_34 = FUN_180200a50();
    local_34 = local_34 ^ 1;
    cVar6 = *(char *)(lVar3 + 0x11);
  }
  if (cVar6 != '\0') {
    uVar4 = (ulonglong)local_40 >> 8;
    local_40 = CONCAT71((int7)uVar4,(char)local_34);
    local_48 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_48,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020db40);
  }
  local_48 = (char *)(lVar3 + 0x1d8);
  local_40 = param_1[1];
  lVar7 = FUN_180152e90(&local_48);
  uVar2 = *(undefined1 *)(lVar7 + 0x13c);
  if ((((char)local_34 == '\0') && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
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
  return uVar2;
}


