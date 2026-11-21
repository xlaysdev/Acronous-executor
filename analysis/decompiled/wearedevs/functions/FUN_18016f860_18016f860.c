/* FUN_18016f860 @ 18016f860 */

void FUN_18016f860(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = *param_1;
  FUN_1801fb300();
  uVar1 = param_1[2];
  if ((ulonglong)(lVar3 - param_1[3]) < uVar1) {
    uVar2 = lVar3 - uVar1;
    uVar4 = param_1[3] - uVar2;
    if (uVar4 <= (ulonglong)(*param_1 - lVar3) && uVar4 < uVar2) {
      memcpy((void *)(lVar3 * 0x10 + param_1[1]),(void *)param_1[1],uVar4 * 0x10);
      return;
    }
    lVar3 = *param_1 - uVar2;
    memmove((void *)(lVar3 * 0x10 + param_1[1]),(void *)(uVar1 * 0x10 + param_1[1]),uVar2 * 0x10);
    param_1[2] = lVar3;
  }
  return;
}


