/* FUN_1800bbfc0 @ 1800bbfc0 */

longlong FUN_1800bbfc0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong local_38;
  longlong local_30;
  
  if (*(char *)(param_1 + 0x224) == '\0') {
    uVar1 = *(ulonglong *)(param_1 + 400);
    uVar4 = *(ulonglong *)(param_1 + 0x198);
    if (uVar4 != uVar1) {
      do {
        if (uVar1 < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(uVar4,uVar1,uVar1,&PTR_s_C__Users_burne__cargo_registry_s_180212ad0);
        }
        lVar2 = *(longlong *)(param_1 + 0x138);
        if (lVar2 == 0) goto LAB_1800bc0cc;
        if (*(int *)(param_1 + 0x10) == 2) {
          uVar1 = thunk_FUN_18016e2f0(param_1 + 0x18);
        }
        else {
          local_38 = *(longlong *)(param_1 + 0x188) + uVar4;
          local_30 = uVar1 - uVar4;
          uVar1 = FUN_1800eb230((int *)(param_1 + 0x10),lVar2,&local_38);
        }
        if ((uVar1 == 2) || ((uVar1 & 1) != 0)) {
          if (uVar1 == 2) {
            return 0xd00000003;
          }
          return lVar2;
        }
        uVar4 = uVar4 + lVar2;
        *(ulonglong *)(param_1 + 0x198) = uVar4;
        uVar1 = *(ulonglong *)(param_1 + 400);
      } while (uVar4 != uVar1);
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x138);
  if (lVar2 != 0) {
    if (*(int *)(param_1 + 0x10) == 2) {
      lVar3 = 0;
    }
    else {
      uVar1 = FUN_1800eabc0((int *)(param_1 + 0x10));
      lVar3 = 0xd00000003;
      if ((uVar1 & 1) == 0) {
        lVar3 = lVar2;
      }
    }
    return lVar3;
  }
LAB_1800bc0cc:
                    /* WARNING: Subroutine does not return */
  FUN_180201ec0("assertion failed: !self.context.is_null()",0x29,
                &PTR_s_C__Users_burne__cargo_registry_s_180216370);
}


