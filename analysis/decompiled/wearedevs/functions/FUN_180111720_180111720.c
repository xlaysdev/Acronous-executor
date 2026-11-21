/* FUN_180111720 @ 180111720 */

void FUN_180111720(ulonglong *param_1,int param_2,undefined8 param_3,ulonglong *param_4,
                  longlong param_5)

{
  if (param_2 == 1) {
    if (param_5 == 8) {
      *param_1 = *param_4;
      *(undefined4 *)(param_1 + 1) = 0;
      return;
    }
  }
  else if ((param_2 == 0) && (param_5 == 4)) {
    *param_1 = (ulonglong)(uint)*param_4;
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0x8007000d;
  return;
}


