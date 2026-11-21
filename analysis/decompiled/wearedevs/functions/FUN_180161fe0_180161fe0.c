/* FUN_180161fe0 @ 180161fe0 */

longlong * FUN_180161fe0(longlong *param_1)

{
  longlong lVar1;
  
  FUN_180027490();
  lVar1 = thunk_FUN_1801d32d0(0x2000,1);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(1,0x2000);
  }
  *(undefined2 *)(param_1 + 4) = 0;
  *param_1 = lVar1;
  param_1[1] = 0;
  param_1[2] = 0x2000;
  param_1[3] = 0x11;
  *(undefined1 *)((longlong)param_1 + 0x22) = 0;
  return param_1;
}


