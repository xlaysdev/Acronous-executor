/* FUN_18010a520 @ 18010a520 */

undefined8 * FUN_18010a520(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_180027490();
  puVar1 = (undefined8 *)thunk_FUN_1801d32d0(0x18,8);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined2 *)(param_1 + 3) = 1;
  *param_1 = 0;
  param_1[2] = puVar1;
  return param_1;
}


