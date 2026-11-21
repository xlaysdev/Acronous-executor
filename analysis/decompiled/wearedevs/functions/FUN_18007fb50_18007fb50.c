/* FUN_18007fb50 @ 18007fb50 */

void FUN_18007fb50(ulonglong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  bool bVar6;
  longlong local_38;
  longlong local_30;
  
  uVar1 = param_1[3];
  if (uVar1 == 0) {
    local_30 = 0;
    uVar4 = 0;
    lVar2 = 0;
  }
  else {
    uVar4 = *param_1;
    uVar5 = 0;
    if (uVar4 <= param_1[2]) {
      uVar5 = uVar4;
    }
    lVar2 = param_1[2] - uVar5;
    local_30 = uVar1 - (uVar4 - lVar2);
    if (uVar1 < uVar4 - lVar2 || local_30 == 0) {
      uVar4 = uVar1 + lVar2;
      local_30 = 0;
    }
  }
  local_38 = 0;
  lVar3 = param_1[1] + lVar2 * 0x48;
  while (uVar4 - lVar2 != local_38) {
    local_38 = local_38 + 1;
    FUN_18007a8b0(lVar3);
    lVar3 = lVar3 + 0x48;
  }
  while (bVar6 = local_30 != 0, local_30 = local_30 + -1, bVar6) {
    FUN_18007a8b0();
  }
  return;
}


