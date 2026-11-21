/* FUN_1801489a0 @ 1801489a0 */

void FUN_1801489a0(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  
  if (param_1[0x12] < param_2) {
    param_2 = param_1[0x12];
  }
  if (*param_1 == 2) {
    if (param_2 == param_1[0xd]) {
      return;
    }
  }
  else {
    uVar1 = param_2;
    if ((*param_1 & 1) == 0) {
      if (param_2 <= param_1[1]) goto LAB_1801489d8;
      uVar1 = param_1[0xd];
    }
    if (param_1[1] <= uVar1) {
      *param_1 = 1;
      param_1[2] = param_2;
      return;
    }
  }
LAB_1801489d8:
  *param_1 = 0;
  param_1[1] = param_2;
  return;
}


