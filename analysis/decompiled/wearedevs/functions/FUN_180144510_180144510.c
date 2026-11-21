/* FUN_180144510 @ 180144510 */

void FUN_180144510(char *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 8);
  if (*(ulonglong *)(param_1 + 8) < param_2) {
    uVar1 = param_2;
  }
  if (*param_1 == '\0') {
    uVar1 = param_2;
  }
  param_1[0] = '\x01';
  param_1[1] = '\0';
  param_1[2] = '\0';
  param_1[3] = '\0';
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  *(ulonglong *)(param_1 + 8) = uVar1;
  return;
}


