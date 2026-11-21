/* FUN_1801b37c0 @ 1801b37c0 */

longlong * FUN_1801b37c0(longlong *param_1,void *param_2,void *param_3,size_t param_4)

{
  if (((ulonglong)param_2 & 1) == 0) {
    FUN_1801b3140(param_1);
  }
  else {
    memmove(param_2,param_3,param_4);
    *param_1 = (longlong)param_3 + (param_4 - (longlong)param_2);
    param_1[1] = (longlong)param_2;
    param_1[2] = param_4;
  }
  return param_1;
}


