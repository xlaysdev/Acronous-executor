/* FUN_1801adfb0 @ 1801adfb0 */

undefined8 * FUN_1801adfb0(undefined8 *param_1)

{
  *(undefined2 *)(param_1 + 0xb) = 0;
  param_1[9] = 2;
  param_1[10] = 0;
  param_1[3] = 0;
  param_1[4] = 8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 8;
  param_1[8] = 0;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0xd) = 200;
  *(undefined1 *)((longlong)param_1 + 0x6a) = 2;
  param_1[0xc] = 0;
  return param_1;
}


