/* FUN_1801ed480 @ 1801ed480 */

longlong FUN_1801ed480(longlong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int local_38 [2];
  longlong local_30;
  
  uVar1 = param_1[2];
  lVar2 = -0x7fffffffffffffff;
  if (*param_1 - uVar1 < param_2) {
    if (CARRY8(uVar1,param_2)) {
      lVar2 = 0;
    }
    else {
      FUN_1802017d0(local_38,*param_1,param_1[1],uVar1 + param_2);
      if (local_38[0] == 1) {
        lVar2 = local_30;
      }
      else {
        param_1[1] = local_30;
        *param_1 = uVar1 + param_2;
        lVar2 = -0x7fffffffffffffff;
      }
    }
  }
  return lVar2;
}


