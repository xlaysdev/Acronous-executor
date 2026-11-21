/* FUN_180101680 @ 180101680 */

longlong * FUN_180101680(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if (lVar1 == *param_1) {
    FUN_1801f88d0(param_1);
  }
  *(undefined8 *)(param_1[1] + lVar1 * 8) = param_2;
  param_1[2] = lVar1 + 1;
  return param_1;
}


