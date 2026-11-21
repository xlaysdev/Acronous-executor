/* FUN_180200f70 @ 180200f70 */

void FUN_180200f70(ulonglong *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_30 [2];
  ulonglong local_28;
  undefined8 local_20;
  
  if (CARRY8(param_2,param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(0);
  }
  uVar2 = *param_1 * 2;
  if (uVar2 < param_2 + param_3) {
    uVar2 = param_2 + param_3;
  }
  uVar1 = (ulonglong)(param_5 == 1) * 4 + 4;
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  FUN_180200d80(local_30,*param_1,param_1[1],uVar2,param_4,param_5);
  if (local_30[0] == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(local_28,local_20);
  }
  param_1[1] = local_28;
  *param_1 = uVar2;
  return;
}


