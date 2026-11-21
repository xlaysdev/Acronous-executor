/* FUN_1800aacb0 @ 1800aacb0 */

undefined8 FUN_1800aacb0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  char cVar8;
  bool bVar9;
  ulonglong local_a0;
  longlong *local_98;
  longlong *local_90;
  char *local_88;
  char local_80;
  longlong local_78;
  ulonglong local_70;
  char *local_68;
  ulonglong local_60;
  ulonglong local_58;
  undefined8 local_50;
  uint local_44;
  longlong local_40;
  undefined1 local_32;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  *(longlong *)(param_2 + 0x18) = param_1[5];
  uVar3 = *(ulonglong *)(param_2 + *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x48));
  pcVar1 = (char *)(*param_1 + (param_1[4] & uVar3) * 0x18);
  pcVar2 = (char *)(*param_1 + (param_1[4] & uVar3) * 0x18);
  LOCK();
  bVar9 = *pcVar2 == '\0';
  if (bVar9) {
    *pcVar2 = '\x01';
  }
  UNLOCK();
  local_50 = param_3;
  local_40 = param_2;
  if (!bVar9) {
    local_31 = 1;
    FUN_180200390(pcVar1);
  }
  puVar6 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_44 = 0;
    cVar8 = (char)param_1[6];
    local_78 = local_40;
  }
  else {
    local_31 = 1;
    local_44 = FUN_180200a50();
    local_44 = local_44 ^ 1;
    cVar8 = (char)param_1[6];
    local_78 = local_40;
  }
  local_80 = (char)local_44;
  local_40 = local_78;
  if (cVar8 == '\0') {
    local_98 = param_1 + 2;
    local_90 = param_1 + 3;
    local_70 = *(ulonglong *)(local_78 + *(longlong *)(*(longlong *)(local_78 + 0x10) + 0x48));
    local_a0 = uVar3;
    local_88 = pcVar1;
    local_68 = pcVar1;
    local_60 = uVar3;
    local_58 = local_70;
    if (local_70 != uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_180201c9f(0,&local_70,&local_a0,0);
    }
    lVar4 = *(longlong *)(pcVar1 + 8);
    if (lVar4 == local_78) {
      FUN_1801f8884(CONCAT71((int7)((ulonglong)local_90 >> 8),1),pcVar1 + 8,&local_78,0);
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    *(longlong *)(local_78 + 8 + *(longlong *)(*(longlong *)(local_78 + 0x10) + 0x38)) = lVar4;
    *(undefined8 *)(local_78 + *(longlong *)(*(longlong *)(local_78 + 0x10) + 0x38)) = 0;
    if (lVar4 != 0) {
      *(longlong *)(lVar4 + *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x38)) = local_78;
    }
    *(longlong *)(pcVar1 + 8) = local_78;
    if (*(longlong *)(pcVar1 + 0x10) == 0) {
      *(longlong *)(pcVar1 + 0x10) = local_78;
      LOCK();
      *local_98 = *local_98 + 1;
      UNLOCK();
      LOCK();
      *local_90 = *local_90 + 1;
      UNLOCK();
    }
    else {
      LOCK();
      *local_98 = *local_98 + 1;
      UNLOCK();
      LOCK();
      *local_90 = *local_90 + 1;
      UNLOCK();
    }
    if ((local_80 == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) {
      local_31 = 0;
      cVar8 = FUN_180200a50();
      if (cVar8 == '\0') {
        pcVar1[1] = '\x01';
      }
    }
    LOCK();
    cVar8 = *pcVar1;
    *pcVar1 = '\0';
    UNLOCK();
    if (cVar8 == '\x02') {
      local_31 = 0;
      WakeByAddressSingle(pcVar1);
    }
  }
  else {
    if ((local_80 == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) {
      local_31 = 1;
      cVar8 = FUN_180200a50();
      if (cVar8 == '\0') {
        pcVar1[1] = '\x01';
      }
    }
    LOCK();
    cVar8 = *pcVar1;
    *pcVar1 = '\0';
    UNLOCK();
    if (cVar8 == '\x02') {
      local_31 = 1;
      WakeByAddressSingle(pcVar1);
    }
    local_31 = 0;
    FUN_1801776c0(local_40);
    uVar7 = local_50;
    local_32 = 0;
    cVar8 = FUN_180177f20(local_50);
    if (cVar8 != '\0') {
      local_32 = 0;
      FUN_1801776b0(uVar7);
    }
    local_50 = 0;
  }
  return local_50;
}


