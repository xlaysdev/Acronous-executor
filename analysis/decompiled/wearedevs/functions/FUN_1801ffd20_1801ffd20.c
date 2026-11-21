/* FUN_1801ffd20 @ 1801ffd20 */

bool FUN_1801ffd20(int *param_1,int *param_2,ulonglong param_3)

{
  for (; 3 < param_3; param_3 = param_3 - 4) {
    if (*param_1 != *param_2) {
      return false;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  if (1 < param_3) {
    if ((short)*param_1 != (short)*param_2) {
      return false;
    }
    param_1 = (int *)((longlong)param_1 + 2);
    param_2 = (int *)((longlong)param_2 + 2);
    param_3 = param_3 - 2;
  }
  if (param_3 == 0) {
    return true;
  }
  return (char)*param_1 == (char)*param_2;
}


