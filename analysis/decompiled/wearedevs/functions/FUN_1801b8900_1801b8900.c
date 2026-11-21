/* FUN_1801b8900 @ 1801b8900 */

void FUN_1801b8900(longlong *param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  lVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar4 = *(ulonglong *)(lVar1 + 0x10);
  uVar6 = param_1[3];
  if (uVar4 == uVar6) {
    lVar5 = uVar4 - uVar3;
    if (uVar4 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,uVar3,uVar4,&PTR_s_C__Users_burne__rustup_toolchain_180286ae8);
    }
    if (uVar3 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(uVar2,uVar3,uVar4,&PTR_s_C__Users_burne__rustup_toolchain_180286ae8);
    }
    *(ulonglong *)(lVar1 + 0x10) = uVar2;
    if (uVar2 != uVar3) {
      if (uVar4 == uVar3) {
        return;
      }
      goto LAB_1801b894a;
    }
    if (uVar4 == uVar3) {
      return;
    }
  }
  else {
    if (uVar2 == uVar3) goto LAB_1801b8966;
    lVar5 = uVar6 - uVar3;
    if (uVar6 < uVar3 || lVar5 == 0) {
      return;
    }
LAB_1801b894a:
    memmove((void *)(*(longlong *)(lVar1 + 8) + uVar2 * 8),
            (void *)(*(longlong *)(lVar1 + 8) + uVar3 * 8),lVar5 * 8);
  }
  uVar6 = lVar5 + uVar2;
LAB_1801b8966:
  *(ulonglong *)(lVar1 + 0x10) = uVar6;
  return;
}


