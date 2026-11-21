/* FUN_18008da40 @ 18008da40 */

ulonglong FUN_18008da40(longlong *param_1,ulonglong param_2)

{
  char *pcVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  char *local_50;
  undefined1 local_48;
  char *local_40;
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
    param_2 = param_2 & 0xffffffff;
    FUN_180200390(pcVar1);
  }
  puVar3 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_34 = 0;
    cVar4 = *(char *)(lVar2 + 0x11);
  }
  else {
    param_2 = param_2 & 0xffffffff;
    local_34 = FUN_180200a50();
    local_34 = local_34 ^ 1;
    cVar4 = *(char *)(lVar2 + 0x11);
  }
  if (cVar4 != '\0') {
    local_48 = (undefined1)local_34;
    local_50 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_50,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020ddc8);
  }
  local_40 = pcVar1;
  uVar5 = FUN_180159dd0(lVar2 + 0x88,param_2);
  if (((char)local_34 == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) {
    uVar5 = uVar5 & 0xffffffff;
    cVar4 = FUN_180200a50();
    if (cVar4 == '\0') {
      *(undefined1 *)(lVar2 + 0x11) = 1;
    }
  }
  LOCK();
  cVar4 = *local_40;
  *local_40 = '\0';
  UNLOCK();
  if (cVar4 == '\x02') {
    uVar5 = uVar5 & 0xffffffff;
    WakeByAddressSingle();
  }
  return uVar5;
}


