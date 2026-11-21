/* FUN_1800bbef0 @ 1800bbef0 */

longlong FUN_1800bbef0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (*(char *)(param_1 + 0x124) == '\0') {
    uVar1 = *(ulonglong *)(param_1 + 0x90);
    uVar3 = *(ulonglong *)(param_1 + 0x98);
    if (uVar3 != uVar1) {
      do {
        if (uVar1 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(uVar3,uVar1,uVar1,&PTR_s_C__Users_burne__cargo_registry_s_180212ad0);
        }
        lVar2 = *(longlong *)(param_1 + 0x38);
        if (lVar2 == 0) goto LAB_1800bbf8b;
        uVar1 = thunk_FUN_18016e2f0(param_1 + 0x10,lVar2,*(longlong *)(param_1 + 0x88) + uVar3,
                                    uVar1 - uVar3);
        if ((uVar1 == 2) || ((uVar1 & 1) != 0)) {
          if (uVar1 == 2) {
            return 0xd00000003;
          }
          return lVar2;
        }
        uVar3 = uVar3 + lVar2;
        *(ulonglong *)(param_1 + 0x98) = uVar3;
        uVar1 = *(ulonglong *)(param_1 + 0x90);
      } while (uVar3 != uVar1);
    }
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    return 0;
  }
LAB_1800bbf8b:
                    /* WARNING: Subroutine does not return */
  FUN_180201ec0("assertion failed: !self.context.is_null()",0x29,
                &PTR_s_C__Users_burne__cargo_registry_s_180216370);
}


