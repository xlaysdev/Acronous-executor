/* FUN_180189d80 @ 180189d80 */

void FUN_180189d80(longlong param_1,longlong *param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined *puVar6;
  char cVar7;
  bool bVar8;
  char *local_50;
  byte local_48;
  longlong *local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  pcVar1 = (char *)(param_1 + 0x128);
  LOCK();
  bVar8 = *(char *)(param_1 + 0x128) == '\0';
  if (bVar8) {
    *(char *)(param_1 + 0x128) = '\x01';
  }
  UNLOCK();
  local_40 = param_2;
  if (!bVar8) {
    local_31 = 1;
    FUN_180200390(pcVar1);
  }
  puVar6 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_48 = 0;
    cVar7 = *(char *)(param_1 + 0x129);
  }
  else {
    local_31 = 1;
    local_48 = FUN_180200a50();
    local_48 = local_48 ^ 1;
    cVar7 = *(char *)(param_1 + 0x129);
  }
  if (cVar7 != '\0') {
    local_50 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_50,&PTR_FUN_1802660d8,
                  &PTR_s_C__Users_burne__cargo_registry_s_180266048);
  }
  lVar2 = *local_40;
  lVar3 = local_40[1];
  uVar4 = *(ulonglong *)(param_1 + 0x140);
  if (uVar4 < *(ulonglong *)(param_1 + 0x130)) {
    lVar5 = *(longlong *)(param_1 + 0x138);
    *(longlong *)(lVar5 + uVar4 * 0x18) = lVar2;
    *(longlong *)(lVar5 + 8 + uVar4 * 0x18) = lVar3;
    *(undefined8 *)(lVar5 + 0x10 + uVar4 * 0x18) = 0;
    *(ulonglong *)(param_1 + 0x140) = uVar4 + 1;
  }
  else if (lVar2 != 0) {
    thunk_FUN_1801d3330(lVar3,lVar2,1);
  }
  if ((local_48 == 0) && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) {
    local_31 = 0;
    cVar7 = FUN_180200a50();
    if (cVar7 == '\0') {
      *(undefined1 *)(param_1 + 0x129) = 1;
    }
  }
  LOCK();
  cVar7 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar7 == '\x02') {
    local_31 = 0;
    WakeByAddressSingle(pcVar1);
  }
  return;
}


