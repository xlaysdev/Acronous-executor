/* FUN_1801ed580 @ 1801ed580 */

void FUN_1801ed580(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0x18);
  uVar2 = *(ulonglong *)(param_1 + 0x20);
  if (uVar1 <= uVar2) {
    lVar3 = *(longlong *)(param_1 + 0x10);
    uVar4 = *(ulonglong *)(lVar3 + 0x10);
    if (uVar2 <= uVar4) {
      *(ulonglong *)(lVar3 + 0x10) = uVar1;
      if (uVar2 == uVar1) {
        if (uVar4 == uVar2) {
          return;
        }
      }
      else {
        if (uVar4 == uVar2) {
          return;
        }
        memmove((void *)(*(longlong *)(lVar3 + 8) + uVar1),
                (void *)(uVar2 + *(longlong *)(lVar3 + 8)),uVar4 - uVar2);
      }
      *(ulonglong *)(lVar3 + 0x10) = (uVar4 - uVar2) + uVar1;
    }
  }
  return;
}


