/* FUN_180085710 @ 180085710 */

undefined8 FUN_180085710(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined1 param_4)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined *puVar4;
  char cVar5;
  undefined8 uVar6;
  bool bVar7;
  char *local_60;
  longlong local_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar2 = *param_2;
  pcVar1 = (char *)(lVar2 + 0x10);
  LOCK();
  bVar7 = *(char *)(lVar2 + 0x10) == '\0';
  if (bVar7) {
    *(char *)(lVar2 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    FUN_180200390(pcVar1);
  }
  puVar4 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_4c = 0;
    cVar5 = *(char *)(lVar2 + 0x11);
  }
  else {
    local_4c = FUN_180200a50();
    local_4c = local_4c ^ 1;
    cVar5 = *(char *)(lVar2 + 0x11);
  }
  if (cVar5 != '\0') {
    uVar3 = (ulonglong)local_58 >> 8;
    local_58 = CONCAT71((int7)uVar3,(char)local_4c);
    local_60 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_60,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020da40);
  }
  local_60 = (char *)(lVar2 + 0x1d8);
  local_58 = param_2[1];
  uVar6 = FUN_180152f00(&local_60);
  FUN_180137050(param_1,lVar2 + 0x128,param_3,uVar6,param_4);
  if ((((char)local_4c == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
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


