/* FUN_180201770 @ 180201770 */

void FUN_180201770(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_30 [2];
  ulonglong local_28;
  undefined8 local_20;
  
  uVar1 = *param_1 * 2;
  uVar2 = 8;
  if (8 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_1802017d0(local_30,*param_1,param_1[1],uVar2);
  if (local_30[0] == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(local_28,local_20);
  }
  param_1[1] = local_28;
  *param_1 = uVar2;
  return;
}


