/* FUN_1801df650 @ 1801df650 */

longlong FUN_1801df650(ulonglong *param_1,ulonglong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = param_2 + *param_1;
  if (CARRY8(param_2,*param_1)) {
    return lVar1;
  }
  if (999999999 < (uint)(param_3 + (int)param_1[1])) {
    if (lVar1 == -1) {
      return -1;
    }
    lVar1 = lVar1 + 1;
  }
  return lVar1;
}


