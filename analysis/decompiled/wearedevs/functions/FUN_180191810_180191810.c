/* FUN_180191810 @ 180191810 */

longlong FUN_180191810(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x2c);
  lVar1 = *(longlong *)(param_1 + 8);
  uVar2 = *(ulonglong *)(param_1 + 0x10);
  if (uVar5 != 0) {
    if (uVar5 < uVar2) {
      if (*(char *)(lVar1 + uVar5) < -0x40) {
LAB_180191834:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0();
      }
    }
    else if (uVar2 != uVar5) goto LAB_180191834;
  }
  if ((uVar2 - uVar5 < 3) ||
     (*(char *)(lVar1 + 2 + uVar5) != '/' || *(short *)(lVar1 + uVar5) != 0x2f3a)) {
    return 1;
  }
  uVar5 = (ulonglong)*(uint *)(param_1 + 0x30);
  uVar4 = *(uint *)(param_1 + 0x2c) + 3;
  if (*(uint *)(param_1 + 0x30) <= uVar4) {
    return 1;
  }
  uVar3 = (ulonglong)uVar4;
  if (uVar4 != 0) {
    if (uVar3 < uVar2) {
      if (*(char *)(lVar1 + uVar3) < -0x40) goto LAB_1801918b2;
    }
    else if (uVar2 != uVar3) goto LAB_1801918b2;
  }
  if (uVar5 < uVar2) {
    if (-0x41 < *(char *)(lVar1 + uVar5)) {
LAB_1801918c8:
      return lVar1 + uVar3;
    }
  }
  else if (uVar2 == uVar5) goto LAB_1801918c8;
LAB_1801918b2:
                    /* WARNING: Subroutine does not return */
  FUN_1802018d0(lVar1,uVar2,uVar3,uVar5,&PTR_s_C__Users_burne__cargo_registry_s_180266cf0);
}


