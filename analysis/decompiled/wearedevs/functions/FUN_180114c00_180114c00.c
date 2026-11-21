/* FUN_180114c00 @ 180114c00 */

void FUN_180114c00(undefined4 param_1,undefined1 param_2)

{
  undefined1 *puVar1;
  
  FUN_180027490();
  puVar1 = (undefined1 *)thunk_FUN_1801d32d0(1,1);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(1,1);
  }
  *puVar1 = param_2;
  FUN_1801d6870(param_1,puVar1,&DAT_18023f878);
  return;
}


