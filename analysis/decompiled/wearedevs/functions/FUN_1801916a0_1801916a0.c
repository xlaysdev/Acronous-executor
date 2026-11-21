/* FUN_1801916a0 @ 1801916a0 */

longlong FUN_1801916a0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x34);
  uVar5 = (ulonglong)uVar1;
  uVar2 = *(uint *)(param_1 + 0x38);
  uVar6 = (ulonglong)uVar2;
  lVar3 = *(longlong *)(param_1 + 8);
  uVar4 = *(ulonglong *)(param_1 + 0x10);
  if (uVar2 < uVar1) goto LAB_1801916ef;
  if (uVar1 != 0) {
    if (uVar5 < uVar4) {
      if (*(char *)(lVar3 + uVar5) < -0x40) goto LAB_1801916ef;
    }
    else if (uVar4 != uVar5) goto LAB_1801916ef;
  }
  if (uVar2 != 0) {
    if (uVar6 < uVar4) {
      if (*(char *)(lVar3 + uVar6) < -0x40) {
LAB_1801916ef:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(lVar3);
      }
    }
    else if (uVar4 != uVar6) goto LAB_1801916ef;
  }
  return lVar3 + uVar5;
}


