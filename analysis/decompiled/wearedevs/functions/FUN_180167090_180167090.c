/* FUN_180167090 @ 180167090 */

void FUN_180167090(undefined8 *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *param_2;
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[1] = uVar1 >> 2;
  param_1[6] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}


