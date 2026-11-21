/* FUN_18016caa0 @ 18016caa0 */

void FUN_18016caa0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong local_40;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  *param_1 = 8;
  param_1[1] = 8;
  lVar1 = param_1[2];
  uVar3 = lVar5 - lVar4;
  if (uVar3 == 0) {
    lVar4 = param_1[4];
    if (lVar4 == 0) {
      return;
    }
    lVar5 = *(longlong *)(lVar1 + 0x10);
    lVar2 = param_1[3];
    if (lVar2 == lVar5) goto LAB_18016cb57;
  }
  else {
    local_40 = 0;
    while (uVar3 >> 3 != local_40) {
      lVar5 = local_40 * 8;
      local_40 = local_40 + 1;
      FUN_18016bc40(*(undefined8 *)(lVar4 + lVar5));
    }
    lVar4 = param_1[4];
    if (lVar4 == 0) {
      return;
    }
    lVar5 = *(longlong *)(lVar1 + 0x10);
    lVar2 = param_1[3];
    if (lVar2 == lVar5) goto LAB_18016cb57;
  }
  memmove((void *)(*(longlong *)(lVar1 + 8) + lVar5 * 8),
          (void *)(*(longlong *)(lVar1 + 8) + lVar2 * 8),lVar4 * 8);
LAB_18016cb57:
  *(longlong *)(lVar1 + 0x10) = lVar5 + lVar4;
  return;
}


