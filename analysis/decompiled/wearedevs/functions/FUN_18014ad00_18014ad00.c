/* FUN_18014ad00 @ 18014ad00 */

undefined8 * FUN_18014ad00(undefined8 *param_1)

{
  param_1[3] = 1;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[6] = 0x64000;
  param_1[7] = 0x32;
  param_1[8] = 0x14;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 1;
  *param_1 = 1;
  param_1[1] = 0x400;
  param_1[9] = 0x6400;
  return param_1;
}


