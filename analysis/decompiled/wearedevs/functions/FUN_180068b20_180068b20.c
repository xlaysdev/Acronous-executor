/* FUN_180068b20 @ 180068b20 */

bool FUN_180068b20(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  if (*(char *)(param_1 + 0x48) == '\x01') {
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    if (0xf < uVar1) {
      return false;
    }
    lVar5 = *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18);
    if (uVar1 == 0) {
      lVar2 = 0;
      uVar3 = 0;
      lVar6 = 0;
    }
    else {
      uVar3 = *(ulonglong *)(param_1 + 0x20);
      uVar4 = 0;
      if (uVar3 <= *(ulonglong *)(param_1 + 0x30)) {
        uVar4 = uVar3;
      }
      lVar2 = *(ulonglong *)(param_1 + 0x30) - uVar4;
      lVar6 = uVar1 - (uVar3 - lVar2);
      if (uVar1 < uVar3 - lVar2 || lVar6 == 0) {
        uVar3 = uVar1 + lVar2;
        lVar6 = 0;
      }
    }
    local_20 = *(longlong *)(param_1 + 0x28);
    local_30 = lVar2 * 0x50 + local_20;
    local_28 = uVar3 * 0x50 + local_20;
    local_18 = lVar6 * 0x50 + local_20;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x10) - *(longlong *)(param_1 + 0x18);
    uVar1 = *(ulonglong *)(param_1 + 0x38);
    if (uVar1 == 0) {
      lVar2 = 0;
      uVar3 = 0;
      lVar6 = 0;
    }
    else {
      uVar3 = *(ulonglong *)(param_1 + 0x20);
      uVar4 = 0;
      if (uVar3 <= *(ulonglong *)(param_1 + 0x30)) {
        uVar4 = uVar3;
      }
      lVar2 = *(ulonglong *)(param_1 + 0x30) - uVar4;
      lVar6 = uVar1 - (uVar3 - lVar2);
      if (uVar1 < uVar3 - lVar2 || lVar6 == 0) {
        uVar3 = uVar1 + lVar2;
        lVar6 = 0;
      }
    }
    local_20 = *(longlong *)(param_1 + 0x28);
    local_30 = lVar2 * 0x50 + local_20;
    local_28 = uVar3 * 0x50 + local_20;
    local_18 = lVar6 * 0x50 + local_20;
  }
  lVar2 = FUN_1800c3760(&local_30,0);
  return (ulonglong)(lVar5 + lVar2) < *(ulonglong *)(param_1 + 0x40);
}


