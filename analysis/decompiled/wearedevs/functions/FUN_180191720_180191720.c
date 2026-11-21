/* FUN_180191720 @ 180191720 */

longlong FUN_180191720(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  
  uVar4 = (ulonglong)*(uint *)(param_1 + 0x2c);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  if (uVar4 != 0) {
    if (uVar4 < uVar2) {
      if (*(char *)(lVar1 + uVar4) < -0x40) {
LAB_180191741:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(lVar1,uVar2,uVar4,uVar2,&PTR_s_C__Users_burne__cargo_registry_s_180266d20);
      }
    }
    else if (uVar2 != uVar4) goto LAB_180191741;
  }
  if ((uVar2 - uVar4 < 3) ||
     (*(char *)(lVar1 + 2 + uVar4) != '/' || *(short *)(lVar1 + uVar4) != 0x2f3a)) {
    return 0;
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  uVar4 = (ulonglong)uVar3;
  if (uVar3 == (uint)uVar2) {
    return 0;
  }
  if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(uVar4,uVar2,&PTR_s_C__Users_burne__cargo_registry_s_180266b30);
  }
  if (*(char *)(lVar1 + uVar4) != ':') {
    return 0;
  }
  uVar3 = uVar3 + 1;
  uVar4 = (ulonglong)uVar3;
  uVar5 = *(int *)(param_1 + 0x34) - 1;
  uVar6 = (ulonglong)uVar5;
  if (uVar5 < uVar3) goto LAB_1801917d6;
  if (uVar3 != 0) {
    if (uVar4 < uVar2) {
      if (*(char *)(lVar1 + uVar4) < -0x40) goto LAB_1801917d6;
    }
    else if (uVar2 != uVar4) goto LAB_1801917d6;
  }
  if (uVar5 != 0) {
    if (uVar6 < uVar2) {
      if (*(char *)(lVar1 + uVar6) < -0x40) {
LAB_1801917d6:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(lVar1);
      }
    }
    else if (uVar2 != uVar6) goto LAB_1801917d6;
  }
  return lVar1 + uVar4;
}


