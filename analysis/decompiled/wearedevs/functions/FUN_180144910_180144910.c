/* FUN_180144910 @ 180144910 */

undefined8 * FUN_180144910(undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  FUN_180027490();
  lVar1 = thunk_FUN_1801d32d0(0x1000,1);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(1,0x1000);
  }
  *param_1 = 0;
  param_1[0xc] = param_2;
  param_1[2] = 0;
  param_1[3] = 8;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  param_1[8] = lVar1;
  param_1[9] = 0;
  param_1[10] = 0x1000;
  param_1[0xb] = 0xd;
  return param_1;
}


