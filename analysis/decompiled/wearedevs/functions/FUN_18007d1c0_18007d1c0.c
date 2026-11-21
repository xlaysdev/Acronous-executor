/* FUN_18007d1c0 @ 18007d1c0 */

void FUN_18007d1c0(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar3 = *param_1;
  FUN_1801f89b0();
  uVar1 = param_1[2];
  if ((ulonglong)(lVar3 - param_1[3]) < uVar1) {
    uVar4 = lVar3 - uVar1;
    uVar2 = param_1[3] - uVar4;
    if (uVar2 <= (ulonglong)(*param_1 - lVar3) && uVar2 < uVar4) {
      memcpy((void *)(lVar3 * 0x50 + param_1[1]),(void *)param_1[1],uVar2 * 0x50);
      return;
    }
    lVar3 = *param_1 - uVar4;
    memmove((void *)(lVar3 * 0x50 + param_1[1]),(void *)(uVar1 * 0x50 + param_1[1]),uVar4 * 0x50);
    param_1[2] = lVar3;
  }
  return;
}


