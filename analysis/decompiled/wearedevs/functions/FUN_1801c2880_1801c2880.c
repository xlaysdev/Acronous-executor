/* FUN_1801c2880 @ 1801c2880 */

char FUN_1801c2880(longlong param_1,ulonglong param_2)

{
  char *pcVar1;
  char cVar2;
  undefined *puVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  bool bVar10;
  char *local_58;
  undefined1 local_50;
  char *local_48;
  uint local_3c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  if (*(ulonglong *)(param_1 + 0x10) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(param_2,*(ulonglong *)(param_1 + 0x10),
                  &PTR_s_C__Users_burne__cargo_registry_s_180287c68);
  }
  lVar8 = *(longlong *)(param_1 + 8);
  lVar7 = param_2 * 0x80;
  pcVar9 = (char *)(lVar8 + lVar7 + 4);
  pcVar1 = (char *)(lVar8 + 4 + lVar7);
  LOCK();
  bVar10 = *pcVar1 == '\0';
  if (bVar10) {
    *pcVar1 = '\x01';
  }
  UNLOCK();
  if (!bVar10) {
    FUN_180200390(pcVar9);
  }
  puVar3 = PTR_DAT_1802fd600;
  lVar8 = lVar8 + lVar7;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    cVar2 = *(char *)(lVar8 + 5);
    uVar4 = local_3c;
    local_3c = 0;
  }
  else {
    uVar6 = FUN_180200a50();
    cVar2 = *(char *)(lVar8 + 5);
    uVar4 = local_3c;
    local_3c = uVar6 ^ 1;
  }
  if (cVar2 != '\0') {
    local_50 = (undefined1)local_3c;
    local_58 = pcVar9;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_58,&PTR_FUN_180287e20,
                  &PTR_s_C__Users_burne__cargo_registry_s_180287c80);
  }
  cVar2 = *(char *)(lVar8 + 6);
  uVar6 = local_3c;
  if (cVar2 != '\0') {
    *(undefined1 *)(lVar8 + 6) = 0;
    local_48 = pcVar9;
    FUN_1801df5c0(lVar8);
    LOCK();
    *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + -1;
    UNLOCK();
    pcVar9 = local_48;
    uVar4 = local_3c;
    uVar6 = local_3c;
  }
  local_3c = uVar4;
  if ((((char)uVar6 == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = FUN_180200a50(), cVar5 == '\0')) {
    *(undefined1 *)(lVar8 + 5) = 1;
  }
  LOCK();
  cVar5 = *pcVar9;
  *pcVar9 = '\0';
  UNLOCK();
  if (cVar5 == '\x02') {
    WakeByAddressSingle(pcVar9);
  }
  return cVar2;
}


