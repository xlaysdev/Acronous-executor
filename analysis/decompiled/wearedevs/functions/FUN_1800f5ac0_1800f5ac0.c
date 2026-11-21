/* FUN_1800f5ac0 @ 1800f5ac0 */

longlong FUN_1800f5ac0(ulonglong param_1,ulonglong param_2,longlong param_3,ulonglong param_4)

{
  if (param_2 < param_1) {
    return 0;
  }
  if (param_1 != 0) {
    if (param_1 < param_4) {
      if (*(char *)(param_3 + param_1) < -0x40) {
        return 0;
      }
    }
    else if (param_1 != param_4) {
      return 0;
    }
  }
  if (param_2 != 0) {
    if (param_2 < param_4) {
      if (*(char *)(param_3 + param_2) < -0x40) {
        return 0;
      }
    }
    else if (param_2 != param_4) {
      return 0;
    }
  }
  return param_3 + param_1;
}


