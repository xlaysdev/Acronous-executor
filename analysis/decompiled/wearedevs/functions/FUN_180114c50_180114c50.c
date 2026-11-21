/* FUN_180114c50 @ 180114c50 */

void FUN_180114c50(undefined4 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  FUN_180027490();
  puVar1 = (undefined8 *)thunk_FUN_1801d32d0(8,8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,8);
  }
  *puVar1 = param_2;
  FUN_1801d6870(param_1,puVar1,&PTR_FUN_18023f968);
  return;
}


