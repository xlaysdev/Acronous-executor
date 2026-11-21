/* FUN_180188ad0 @ 180188ad0 */

void FUN_180188ad0(ulonglong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined *puVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  char *pcVar10;
  bool bVar11;
  char *local_68;
  undefined1 local_60;
  char *local_58;
  longlong *local_50;
  uint local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar1 = param_1[1];
  local_50 = (longlong *)(uVar1 - 0x88);
  pcVar10 = (char *)(uVar1 + 0x38);
  LOCK();
  bVar11 = *(char *)(uVar1 + 0x38) == '\0';
  if (bVar11) {
    *(char *)(uVar1 + 0x38) = '\x01';
  }
  UNLOCK();
  if (!bVar11) {
    FUN_180200390(pcVar10);
  }
  puVar6 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    cVar8 = *(char *)(uVar1 + 0x39);
    uVar7 = local_44;
    local_44 = 0;
  }
  else {
    uVar9 = FUN_180200a50();
    cVar8 = *(char *)(uVar1 + 0x39);
    uVar7 = local_44;
    local_44 = uVar9 ^ 1;
  }
  if (cVar8 != '\0') {
    local_60 = (undefined1)local_44;
    local_68 = pcVar10;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_68,&PTR_FUN_180266128,
                  &PTR_s_C__Users_burne__cargo_registry_s_180265ee8);
  }
  uVar9 = local_44;
  if ((param_2 != (longlong *)0x0) && (*(longlong *)(uVar1 + 0x40) != 0)) {
    uVar5 = param_1[3];
    uVar2 = *param_1;
    lVar3 = param_2[2];
    local_58 = pcVar10;
    if (lVar3 == *param_2) {
      FUN_1801f8fa0(param_2);
    }
    lVar4 = param_2[1];
    *(ulonglong *)(lVar4 + lVar3 * 0x10) = uVar2 >> 1;
    *(int *)(lVar4 + 8 + lVar3 * 0x10) = (int)uVar5;
    param_2[2] = lVar3 + 1;
    pcVar10 = local_58;
    uVar7 = local_44;
    uVar9 = local_44;
  }
  local_44 = uVar7;
  if ((((char)uVar9 == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
     (cVar8 = FUN_180200a50(), cVar8 == '\0')) {
    *(undefined1 *)(uVar1 + 0x39) = 1;
  }
  LOCK();
  cVar8 = *pcVar10;
  *pcVar10 = '\0';
  UNLOCK();
  if (cVar8 == '\x02') {
    WakeByAddressSingle(pcVar10);
  }
  LOCK();
  *local_50 = *local_50 + -1;
  UNLOCK();
  if (*local_50 == 0) {
    FUN_1801876c0(&local_50);
  }
  return;
}


