/* FUN_1801915e0 @ 1801915e0 */

longlong FUN_1801915e0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if (*(int *)(param_1 + 0x18) == 1) {
    puVar4 = (uint *)(param_1 + 0x1c);
  }
  else {
    if (*(char *)(param_1 + 0x20) == '\0') {
      uVar6 = (ulonglong)*(uint *)(param_1 + 0x3c);
      lVar5 = *(longlong *)(param_1 + 8);
      uVar3 = *(ulonglong *)(param_1 + 0x10);
      if (uVar6 != 0) {
        if (uVar6 < uVar3) {
          if (*(char *)(lVar5 + uVar6) < -0x40) {
LAB_18019167b:
                    /* WARNING: Subroutine does not return */
            FUN_1802018d0(lVar5,uVar3,uVar6,uVar3,&PTR_s_C__Users_burne__cargo_registry_s_180266d20)
            ;
          }
        }
        else if (uVar3 != uVar6) goto LAB_18019167b;
      }
      goto LAB_18019166d;
    }
    puVar4 = (uint *)(param_1 + 0x24);
  }
  uVar1 = *puVar4;
  uVar7 = (ulonglong)uVar1;
  uVar2 = *(uint *)(param_1 + 0x3c);
  uVar6 = (ulonglong)uVar2;
  lVar5 = *(longlong *)(param_1 + 8);
  uVar3 = *(ulonglong *)(param_1 + 0x10);
  if (uVar1 < uVar2) goto LAB_180191657;
  if (uVar2 != 0) {
    if (uVar6 < uVar3) {
      if (*(char *)(lVar5 + uVar6) < -0x40) goto LAB_180191657;
    }
    else if (uVar3 != uVar6) goto LAB_180191657;
  }
  if (uVar1 != 0) {
    if (uVar7 < uVar3) {
      if (*(char *)(lVar5 + uVar7) < -0x40) {
LAB_180191657:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(lVar5);
      }
    }
    else if (uVar3 != uVar7) goto LAB_180191657;
  }
LAB_18019166d:
  return lVar5 + uVar6;
}


