/* FUN_1800867f0 @ 1800867f0 */

ulonglong FUN_1800867f0(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  char *local_48;
  longlong local_40;
  uint local_34;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  pcVar1 = (char *)(lVar2 + 0x10);
  LOCK();
  bVar6 = *(char *)(lVar2 + 0x10) == '\0';
  if (bVar6) {
    *(char *)(lVar2 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar6) {
    FUN_180200390(pcVar1);
  }
  puVar3 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_34 = 0;
    cVar4 = *(char *)(lVar2 + 0x11);
  }
  else {
    local_34 = FUN_180200a50();
    local_34 = local_34 ^ 1;
    cVar4 = *(char *)(lVar2 + 0x11);
  }
  if (cVar4 != '\0') {
    uVar5 = (ulonglong)local_40 >> 8;
    local_40 = CONCAT71((int7)uVar5,(char)local_34);
    local_48 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_48,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020db70);
  }
  local_48 = (char *)(lVar2 + 0x1d8);
  local_40 = param_1[1];
  uVar5 = FUN_180137950(lVar2 + 0x128);
  if (((char)local_34 == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) {
    uVar5 = uVar5 & 0xffffffff;
    cVar4 = FUN_180200a50();
    if (cVar4 == '\0') {
      *(undefined1 *)(lVar2 + 0x11) = 1;
    }
  }
  LOCK();
  cVar4 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar4 == '\x02') {
    uVar5 = uVar5 & 0xffffffff;
    WakeByAddressSingle();
  }
  return uVar5;
}


