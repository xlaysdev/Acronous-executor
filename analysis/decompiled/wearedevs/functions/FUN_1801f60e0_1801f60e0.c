/* FUN_1801f60e0 @ 1801f60e0 */

undefined4 FUN_1801f60e0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_1801f6780();
  if (iVar1 != 0) {
    FUN_1801f64c0();
    return 1;
  }
  uVar2 = FUN_1801f6770();
  iVar1 = _configure_narrow_argv(uVar2);
  if (iVar1 == 0) {
    _initialize_narrow_environment();
    return 1;
  }
  return 0;
}


