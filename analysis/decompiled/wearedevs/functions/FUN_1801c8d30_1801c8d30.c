/* FUN_1801c8d30 @ 1801c8d30 */

void FUN_1801c8d30(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)*param_1;
  *(longlong *)*param_1 = 0;
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&PTR_s_C__Users_burne__rustup_toolchain_1802886e8);
  }
  puVar1 = (undefined8 *)*puVar1;
  uVar2 = FUN_1801c9190();
  *puVar1 = uVar2;
  return;
}


