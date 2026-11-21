/* FUN_180173480 @ 180173480 */

void FUN_180173480(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined *puVar4;
  byte bVar5;
  char cVar6;
  ulonglong *puVar7;
  bool bVar8;
  undefined8 *local_80;
  undefined8 *local_78;
  longlong local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  uint local_40;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  pcVar1 = (char *)(param_1 + 0x130);
  LOCK();
  bVar8 = *(char *)(param_1 + 0x130) == '\0';
  if (bVar8) {
    *(char *)(param_1 + 0x130) = '\x01';
  }
  UNLOCK();
  local_50 = param_2;
  if (!bVar8) {
    local_39 = 1;
    FUN_180200390(pcVar1);
  }
  puVar4 = PTR_DAT_1802fd600;
  local_48 = pcVar1;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_40 = 0;
  }
  else {
    local_39 = 1;
    local_40 = FUN_180200a50();
    local_40 = local_40 ^ 1;
  }
  lVar2 = *(longlong *)(param_1 + 0x148);
  if (lVar2 == *(longlong *)(param_1 + 0x138)) {
    FUN_1801fb290(param_1 + 0x138);
  }
  pcVar1 = local_48;
  *(undefined8 *)(*(longlong *)(param_1 + 0x140) + lVar2 * 8) = local_50;
  local_68 = lVar2 + 1;
  *(longlong *)(param_1 + 0x148) = local_68;
  if (local_68 == *(longlong *)(param_1 + 0x90)) {
    *(undefined8 *)(param_1 + 0x148) = 0;
    local_80 = *(undefined8 **)(param_1 + 0x140);
    local_78 = local_80 + local_68;
    local_60 = 0;
    local_70 = param_1 + 0x138;
    while (local_80 != local_78) {
      local_58 = *local_80;
      local_80 = local_80 + 1;
      FUN_180182200(local_58,param_1);
      FUN_180171940(local_58);
    }
    FUN_18016caa0(&local_80);
    pcVar1 = (char *)(param_1 + 0xf8);
    while (*(longlong *)(param_1 + 0xe0) != 0) {
      LOCK();
      cVar6 = *pcVar1;
      if (cVar6 == '\0') {
        *pcVar1 = '\x01';
      }
      UNLOCK();
      if (cVar6 != '\0') {
        FUN_180200390(pcVar1);
      }
      if ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) == 0) {
        bVar5 = 0;
      }
      else {
        bVar5 = FUN_180200a50();
        bVar5 = bVar5 ^ 1;
      }
      lVar2 = *(longlong *)(param_1 + 0xe0);
      *(ulonglong *)(param_1 + 0xe0) = lVar2 - (ulonglong)(lVar2 != 0);
      if ((lVar2 == 0) || (puVar7 = *(ulonglong **)(param_1 + 0x118), puVar7 == (ulonglong *)0x0)) {
        puVar7 = (ulonglong *)0x0;
      }
      else {
        uVar3 = puVar7[1];
        *(ulonglong *)(param_1 + 0x118) = uVar3;
        if (uVar3 == 0) {
          *(undefined8 *)(param_1 + 0x120) = 0;
          puVar7[1] = 0;
        }
        else {
          puVar7[1] = 0;
        }
      }
      if (((bVar5 == 0) && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
         (cVar6 = FUN_180200a50(), cVar6 == '\0')) {
        *(undefined1 *)(param_1 + 0xf9) = 1;
      }
      LOCK();
      cVar6 = *pcVar1;
      *pcVar1 = '\0';
      UNLOCK();
      if (cVar6 == '\x02') {
        WakeByAddressSingle(pcVar1);
      }
      if (puVar7 == (ulonglong *)0x0) break;
      LOCK();
      uVar3 = *puVar7;
      *puVar7 = *puVar7 - 0x40;
      UNLOCK();
      if (uVar3 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                      &PTR_s_C__Users_burne__cargo_registry_s_180263618);
      }
      if ((uVar3 & 0xffffffffffffffc0) == 0x40) {
        (**(code **)(puVar7[2] + 0x10))(puVar7);
      }
    }
    pcVar1 = local_48;
    if (((char)local_40 == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) {
      local_39 = 0;
      cVar6 = FUN_180200a50();
      if (cVar6 == '\0') {
        *(undefined1 *)(param_1 + 0x131) = 1;
      }
    }
    LOCK();
    cVar6 = *pcVar1;
    *pcVar1 = '\0';
    UNLOCK();
    if (cVar6 == '\x02') {
      local_39 = 0;
      WakeByAddressSingle(pcVar1);
    }
  }
  else {
    if (((char)local_40 == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) {
      local_39 = 0;
      cVar6 = FUN_180200a50();
      if (cVar6 == '\0') {
        *(undefined1 *)(param_1 + 0x131) = 1;
      }
    }
    LOCK();
    cVar6 = *pcVar1;
    *pcVar1 = '\0';
    UNLOCK();
    if (cVar6 == '\x02') {
      local_39 = 0;
      WakeByAddressSingle(pcVar1);
    }
  }
  return;
}


