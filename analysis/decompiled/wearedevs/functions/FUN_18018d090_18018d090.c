/* FUN_18018d090 @ 18018d090 */

void FUN_18018d090(longlong param_1,char *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char *pcVar7;
  ulonglong uVar8;
  bool bVar9;
  char *local_60;
  undefined1 local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  uint local_38;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  pcVar7 = (char *)(param_1 + 0x30);
  LOCK();
  bVar9 = *(char *)(param_1 + 0x30) == '\0';
  if (bVar9) {
    *(char *)(param_1 + 0x30) = '\x01';
  }
  UNLOCK();
  local_50 = param_2;
  if (!bVar9) {
    local_31 = 1;
    FUN_180200390(pcVar7);
  }
  puVar1 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    cVar3 = *(char *)(param_1 + 0x31);
    uVar2 = local_38;
    local_38 = 0;
  }
  else {
    local_31 = 1;
    uVar4 = FUN_180200a50();
    cVar3 = *(char *)(param_1 + 0x31);
    uVar2 = local_38;
    local_38 = uVar4 ^ 1;
  }
  if (cVar3 != '\0') {
    local_58 = (undefined1)local_38;
    local_60 = pcVar7;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_60,&PTR_FUN_180266740,
                  &DAT_1802665d0);
  }
  uVar5 = *(ulonglong *)(param_1 + 0x38);
  uVar8 = *(ulonglong *)(param_1 + 0x50);
  local_60 = param_2;
  uVar4 = local_38;
  if (uVar8 == uVar5) {
    local_48 = pcVar7;
    local_40 = param_2;
    FUN_1801fb9c0(param_1 + 0x38);
    uVar5 = *(ulonglong *)(param_1 + 0x38);
    uVar8 = *(ulonglong *)(param_1 + 0x50);
    pcVar7 = local_48;
    param_2 = local_40;
    uVar2 = local_38;
    uVar4 = local_38;
  }
  local_38 = uVar2;
  *(ulonglong *)(param_1 + 0x50) = uVar8 + 1;
  uVar8 = uVar8 + *(longlong *)(param_1 + 0x48);
  uVar6 = 0;
  if (uVar5 <= uVar8) {
    uVar6 = uVar5;
  }
  *(char **)(*(longlong *)(param_1 + 0x40) + (uVar8 - uVar6) * 8) = param_2;
  if (((char)uVar4 == '\0') && ((*(ulonglong *)puVar1 & 0x7fffffffffffffff) != 0)) {
    local_31 = 0;
    cVar3 = FUN_180200a50();
    if (cVar3 == '\0') {
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
  }
  LOCK();
  cVar3 = *pcVar7;
  *pcVar7 = '\0';
  UNLOCK();
  if (cVar3 == '\x02') {
    local_31 = 0;
    WakeByAddressSingle(pcVar7);
  }
  return;
}


