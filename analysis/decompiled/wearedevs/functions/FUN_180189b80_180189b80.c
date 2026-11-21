/* FUN_180189b80 @ 180189b80 */

void FUN_180189b80(undefined8 *param_1,longlong param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined *puVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  char *local_58;
  char local_50;
  char *local_48;
  uint local_3c;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  pcVar1 = (char *)(param_2 + 0x128);
  LOCK();
  bVar11 = *(char *)(param_2 + 0x128) == '\0';
  if (bVar11) {
    *(char *)(param_2 + 0x128) = '\x01';
  }
  UNLOCK();
  if (!bVar11) {
    FUN_180200390(pcVar1);
  }
  puVar6 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    uVar8 = 0;
    cVar7 = *(char *)(param_2 + 0x129);
  }
  else {
    uVar8 = FUN_180200a50();
    uVar8 = uVar8 ^ 1;
    cVar7 = *(char *)(param_2 + 0x129);
  }
  local_50 = (char)uVar8;
  if (cVar7 != '\0') {
    local_58 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_58,&PTR_FUN_1802660d8,
                  &PTR_s_C__Users_burne__cargo_registry_s_180266030);
  }
  if (*(longlong *)(param_2 + 0x140) == 0) {
    FUN_180027490();
    lVar10 = thunk_FUN_1801d32d0(0x1000,1);
    if (lVar10 == 0) {
      local_48 = pcVar1;
      local_3c = uVar8;
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(1,0x1000);
    }
    *param_1 = 0x1000;
    param_1[1] = lVar10;
    param_1[2] = 0;
  }
  else {
    lVar9 = *(longlong *)(param_2 + 0x140) + -1;
    *(longlong *)(param_2 + 0x140) = lVar9;
    lVar10 = *(longlong *)(param_2 + 0x138);
    param_1[2] = *(undefined8 *)(lVar10 + 0x10 + lVar9 * 0x18);
    puVar2 = (undefined4 *)(lVar10 + lVar9 * 0x18);
    uVar3 = puVar2[1];
    uVar4 = puVar2[2];
    uVar5 = puVar2[3];
    *(undefined4 *)param_1 = *puVar2;
    *(undefined4 *)((longlong)param_1 + 4) = uVar3;
    *(undefined4 *)(param_1 + 1) = uVar4;
    *(undefined4 *)((longlong)param_1 + 0xc) = uVar5;
  }
  if (((local_50 == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
     (cVar7 = FUN_180200a50(), cVar7 == '\0')) {
    *(undefined1 *)(param_2 + 0x129) = 1;
  }
  LOCK();
  cVar7 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar7 == '\x02') {
    WakeByAddressSingle(pcVar1);
    return;
  }
  return;
}


