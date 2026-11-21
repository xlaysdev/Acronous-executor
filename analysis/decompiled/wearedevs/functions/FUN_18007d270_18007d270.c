/* FUN_18007d270 @ 18007d270 */

void FUN_18007d270(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = *param_1;
  FUN_1801f8b70();
  uVar1 = param_1[2];
  if ((ulonglong)(lVar3 - param_1[3]) < uVar1) {
    uVar2 = lVar3 - uVar1;
    uVar4 = param_1[3] - uVar2;
    if (uVar4 <= (ulonglong)(*param_1 - lVar3) && uVar4 < uVar2) {
      memcpy((void *)(lVar3 * 0x20 + param_1[1]),(void *)param_1[1],uVar4 * 0x20);
      return;
    }
    lVar3 = *param_1 - uVar2;
    memmove((void *)(lVar3 * 0x20 + param_1[1]),(void *)(uVar1 * 0x20 + param_1[1]),uVar2 * 0x20);
    param_1[2] = lVar3;
  }
  return;
}


