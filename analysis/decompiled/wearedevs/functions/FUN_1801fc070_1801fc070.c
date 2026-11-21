/* FUN_1801fc070 @ 1801fc070 */

void FUN_1801fc070(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = *(ulonglong *)(param_1 + 0x48);
  if ((uVar3 < 0x12) || (uVar3 = *(ulonglong *)(param_1 + 8), uVar3 != 0xffffffffffffffff)) {
    lVar1 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
      }
    }
    uVar2 = 0xffffffffffffffff >> (~(byte)lVar1 & 0x3f);
    if (uVar3 == 0) {
      uVar2 = 0;
    }
    if (uVar2 != 0xffffffffffffffff) {
      lVar1 = FUN_1801a51b0(param_1,uVar2 + 1);
      if (lVar1 == -0x7fffffffffffffff) {
        return;
      }
      if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("capacity overflow",0x11,&PTR_s_C__Users_burne__cargo_registry_s_180282130);
      }
                    /* WARNING: Subroutine does not return */
      FUN_180201705(lVar1);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_180201b60("capacity overflow",0x11,&PTR_s_C__Users_burne__cargo_registry_s_180282148);
}


