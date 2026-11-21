/* FUN_1801395d0 @ 1801395d0 */

undefined8 FUN_1801395d0(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  char *local_58;
  longlong local_50;
  uint local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar2 = *param_2;
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
  puVar4 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_44 = 0;
    cVar5 = *(char *)(lVar2 + 0x11);
  }
  else {
    local_44 = FUN_180200a50();
    local_44 = local_44 ^ 1;
    cVar5 = *(char *)(lVar2 + 0x11);
  }
  if (cVar5 != '\0') {
    uVar3 = (ulonglong)local_50 >> 8;
    local_50 = CONCAT71((int7)uVar3,(char)local_44);
    local_58 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_58,&PTR_FUN_18024fab8,
                  &PTR_s_C__Users_burne__cargo_registry_s_18024e3b0);
  }
  local_58 = (char *)(lVar2 + 0x1d8);
  local_50 = param_2[1];
  FUN_180156df0(param_1,lVar2 + 0x88,param_3,&local_58);
  if ((((char)local_44 == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
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
  return param_1;
}


