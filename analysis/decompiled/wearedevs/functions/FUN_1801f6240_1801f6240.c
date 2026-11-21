/* FUN_1801f6240 @ 1801f6240 */

void FUN_1801f6240(void)

{
  int iVar1;
  
  iVar1 = FUN_1801f6780();
  if (iVar1 != 0) {
    _execute_onexit_table(&DAT_1802fd8c8);
    return;
  }
  iVar1 = FUN_1801f6810();
  if (iVar1 == 0) {
    _cexit();
    return;
  }
  return;
}


