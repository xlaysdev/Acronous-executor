/* FUN_1800858e0 @ 1800858e0 */

void FUN_1800858e0(longlong *param_1,undefined4 param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  undefined *puVar5;
  char cVar6;
  bool bVar7;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined4 *local_70;
  longlong local_68;
  undefined4 local_5c;
  char *local_58;
  char *local_50;
  uint local_44;
  uint local_40;
  char local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  lVar3 = *param_1;
  pcVar1 = (char *)(lVar3 + 0x10);
  LOCK();
  bVar7 = *(char *)(lVar3 + 0x10) == '\0';
  if (bVar7) {
    *(char *)(lVar3 + 0x10) = '\x01';
  }
  UNLOCK();
  if (!bVar7) {
    FUN_180200390(pcVar1);
  }
  puVar5 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_44 = 0;
    cVar6 = *(char *)(lVar3 + 0x11);
  }
  else {
    local_44 = FUN_180200a50();
    local_44 = local_44 ^ 1;
    cVar6 = *(char *)(lVar3 + 0x11);
  }
  if (cVar6 != '\0') {
    local_88._1_7_ = (undefined7)((ulonglong)local_88 >> 8);
    local_88 = CONCAT71(local_88._1_7_,(char)local_44);
    local_90 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_90,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020da58);
  }
  local_c8 = lVar3 + 0x1d8;
  local_c0 = param_1[1];
  lVar4 = param_1[2];
  pcVar2 = (char *)(lVar4 + 0x10);
  LOCK();
  bVar7 = *(char *)(lVar4 + 0x10) == '\0';
  if (bVar7) {
    *(char *)(lVar4 + 0x10) = '\x01';
  }
  UNLOCK();
  local_58 = pcVar1;
  if (!bVar7) {
    FUN_180200390(pcVar2);
  }
  if ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) == 0) {
    local_40 = 0;
    cVar6 = *(char *)(lVar4 + 0x11);
  }
  else {
    local_40 = FUN_180200a50();
    local_40 = local_40 ^ 1;
    cVar6 = *(char *)(lVar4 + 0x11);
  }
  if (cVar6 != '\0') {
    local_88._1_7_ = (undefined7)((ulonglong)local_88 >> 8);
    local_88 = CONCAT71(local_88._1_7_,(char)local_40);
    local_90 = pcVar2;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_90,&PTR_FUN_18020e730,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020da70);
  }
  local_68 = lVar4 + 0x18;
  local_39 = '\0';
  local_88 = lVar3 + 0x88;
  local_80 = lVar3 + 0x128;
  local_78 = lVar3 + 0x1c8;
  local_90 = &local_39;
  local_70 = &local_5c;
  local_5c = param_2;
  local_50 = pcVar2;
  FUN_1800854a0(&local_b8,lVar3 + 0x18,&local_c8,&local_90);
  pcVar1 = local_50;
  if (local_b8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_18020da88,0xb1,&PTR_s_C__Users_burne__cargo_registry_s_18020dae0);
  }
  if ((((char)local_40 == '\0') && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
     (cVar6 = FUN_180200a50(), cVar6 == '\0')) {
    *(undefined1 *)(lVar4 + 0x11) = 1;
  }
  LOCK();
  cVar6 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar6 == '\x02') {
    WakeByAddressSingle(pcVar1);
  }
  pcVar1 = local_58;
  if ((((char)local_44 == '\0') && ((*(ulonglong *)puVar5 & 0x7fffffffffffffff) != 0)) &&
     (cVar6 = FUN_180200a50(), cVar6 == '\0')) {
    *(undefined1 *)(lVar3 + 0x11) = 1;
  }
  LOCK();
  cVar6 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar6 == '\x02') {
    WakeByAddressSingle(pcVar1);
  }
  if (local_b8 != 0) {
    (**(code **)(local_b8 + 0x20))(local_a0,local_b0,local_a8);
  }
  return;
}


