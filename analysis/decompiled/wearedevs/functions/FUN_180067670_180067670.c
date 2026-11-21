/* FUN_180067670 @ 180067670 */

/* WARNING: Removing unreachable block (ram,0x0001800676b0) */

ulonglong FUN_180067670(longlong *param_1)

{
  ulonglong uVar1;
  
  if (*param_1 == 0) {
    uVar1 = param_1[3];
    if ((ulonglong)param_1[5] < (ulonglong)param_1[3]) {
      uVar1 = param_1[5];
    }
    return uVar1;
  }
  if ((int)*param_1 != 1) {
    return 0;
  }
  uVar1 = 0;
  if ((ulonglong)param_1[3] <= (ulonglong)param_1[2]) {
    uVar1 = param_1[2] - param_1[3];
  }
  if ((ulonglong)param_1[5] < uVar1) {
    uVar1 = param_1[5];
  }
  return uVar1;
}


