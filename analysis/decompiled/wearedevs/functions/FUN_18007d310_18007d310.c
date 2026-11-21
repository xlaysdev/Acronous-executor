/* FUN_18007d310 @ 18007d310 */

void FUN_18007d310(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = *param_1;
  FUN_1801f88d0();
  uVar1 = param_1[2];
  if ((ulonglong)(lVar3 - param_1[3]) < uVar1) {
    uVar2 = lVar3 - uVar1;
    uVar4 = param_1[3] - uVar2;
    if (uVar4 <= (ulonglong)(*param_1 - lVar3) && uVar4 < uVar2) {
      memcpy((void *)(param_1[1] + lVar3 * 8),(void *)param_1[1],uVar4 * 8);
      return;
    }
    lVar3 = *param_1 - uVar2;
    memmove((void *)(param_1[1] + lVar3 * 8),(void *)(param_1[1] + uVar1 * 8),uVar2 * 8);
    param_1[2] = lVar3;
  }
  return;
}


