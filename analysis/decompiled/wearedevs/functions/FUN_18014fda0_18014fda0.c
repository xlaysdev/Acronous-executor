/* FUN_18014fda0 @ 18014fda0 */

undefined4 FUN_18014fda0(longlong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *(ulonglong *)(*param_1 + 0x10);
  if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(uVar1,uVar2,&PTR_s_C__Users_burne__cargo_registry_s_1802571b0);
  }
  return *(undefined4 *)(*(longlong *)(*param_1 + 8) + 0xc + uVar1 * 0x10);
}


