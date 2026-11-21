/* FUN_1801ac510 @ 1801ac510 */

undefined8 * FUN_1801ac510(undefined8 *param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *param_1 = 0;
    return param_1;
  }
  FUN_1801acde0(param_1,param_2 + 0x10);
  return param_1;
}


