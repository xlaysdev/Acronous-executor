/* FUN_180172aa0 @ 180172aa0 */

undefined8 FUN_180172aa0(longlong param_1,undefined8 param_2,ulonglong param_3)

{
  char *pcVar1;
  longlong *plVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  bool bVar9;
  longlong *local_68;
  longlong local_60;
  char *local_58;
  longlong *local_50;
  uint local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  pcVar1 = (char *)(param_1 + 0x20);
  LOCK();
  bVar9 = *(char *)(param_1 + 0x20) == '\0';
  if (bVar9) {
    *(char *)(param_1 + 0x20) = '\x01';
  }
  UNLOCK();
  if (!bVar9) {
    FUN_180200390(pcVar1);
  }
  puVar3 = PTR_DAT_1802fd600;
  local_58 = pcVar1;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_44 = 0;
  }
  else {
    local_44 = FUN_180200a50();
    local_44 = local_44 ^ 1;
  }
  plVar8 = (longlong *)(param_1 + 0x28);
  uVar7 = FUN_18017e840();
  pcVar1 = local_58;
  if ((uVar7 & 1) != 0) {
    if ((((char)local_44 == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
       (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
      *(undefined1 *)(param_1 + 0x21) = 1;
    }
    LOCK();
    cVar4 = *pcVar1;
    *pcVar1 = '\0';
    UNLOCK();
    if (cVar4 == '\x02') {
      WakeByAddressSingle(pcVar1);
      return 1;
    }
    return 1;
  }
  local_50 = plVar8;
  if ((((char)local_44 == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  LOCK();
  cVar4 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar4 == '\x02') {
    WakeByAddressSingle(pcVar1);
  }
  if ((param_3 & 1) == 0) {
    uVar6 = 2;
    uVar5 = 1;
    if ((param_3 & 2) != 0) {
LAB_180172b96:
      uVar5 = uVar6;
      if ((param_3 & 0x20) != 0) goto LAB_180172b9f;
    }
  }
  else {
    uVar6 = 1;
    if ((param_3 & 2) == 0) goto LAB_180172b96;
    uVar6 = 3;
    uVar5 = 3;
    if ((param_3 & 0x20) == 0) goto LAB_180172ba4;
LAB_180172b9f:
    uVar5 = uVar6 | 1;
  }
LAB_180172ba4:
  local_60 = FUN_18018c390(param_2,param_1,local_50 + 0x10,uVar5);
  if (local_60 == 0) {
    return 0;
  }
  LOCK();
  cVar4 = *pcVar1;
  if (cVar4 == '\0') {
    *pcVar1 = '\x01';
  }
  UNLOCK();
  if (cVar4 != '\0') {
    FUN_180200390(pcVar1);
  }
  if ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) == 0) {
    local_44 = 0;
  }
  else {
    local_44 = FUN_180200a50();
    local_44 = local_44 ^ 1;
  }
  plVar8 = local_50 + 0x10;
  if (local_50[0x10] == 0) {
    if (*(longlong **)(param_1 + 0x40) != plVar8) goto LAB_180172c69;
    plVar2 = (longlong *)local_50[0x11];
    *(longlong **)(param_1 + 0x40) = plVar2;
  }
  else {
    plVar2 = (longlong *)local_50[0x11];
    *(longlong **)(local_50[0x10] + 8) = plVar2;
  }
  if (plVar2 == (longlong *)0x0) {
    if (*(longlong **)(param_1 + 0x48) != plVar8) goto LAB_180172c69;
    *(longlong *)(param_1 + 0x48) = *plVar8;
  }
  else {
    *plVar2 = *plVar8;
  }
  *plVar8 = 0;
  local_50[0x11] = 0;
  local_68 = local_50;
  LOCK();
  *local_50 = *local_50 + -1;
  UNLOCK();
  if (*local_50 == 0) {
    FUN_180162e30(&local_68);
  }
LAB_180172c69:
  pcVar1 = local_58;
  if ((((char)local_44 == '\0') && ((*(ulonglong *)puVar3 & 0x7fffffffffffffff) != 0)) &&
     (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
    *(undefined1 *)(param_1 + 0x21) = 1;
  }
  LOCK();
  cVar4 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar4 == '\x02') {
    WakeByAddressSingle(pcVar1);
  }
  LOCK();
  *local_50 = *local_50 + -1;
  UNLOCK();
  if (*local_50 == 0) {
    FUN_180162e30(&local_50);
    return 1;
  }
  return 1;
}


