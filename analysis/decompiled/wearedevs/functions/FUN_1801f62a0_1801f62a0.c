/* FUN_1801f62a0 @ 1801f62a0 */

undefined1 FUN_1801f62a0(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    DAT_1802fd8c0 = 1;
  }
  FUN_1801f64c0();
  cVar1 = FUN_1801d6d00();
  if (cVar1 != '\0') {
    cVar1 = FUN_1801d6d00();
    if (cVar1 != '\0') {
      return 1;
    }
    FUN_1801d6d00(0);
  }
  return 0;
}


