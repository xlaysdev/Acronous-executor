/* FUN_1801f6a80 @ 1801f6a80 */

void FUN_1801f6a80(ulonglong *param_1,ulonglong param_2,ulonglong param_3,undefined8 param_4,
                  ulonglong param_5)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  if ((param_5 == 0) || (CARRY8(param_3,param_2))) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(0);
  }
  uVar2 = *param_1 * 2;
  if (uVar2 < param_3 + param_2) {
    uVar2 = param_3 + param_2;
  }
  uVar1 = 8;
  if (param_5 != 1) {
    uVar1 = (ulonglong)(param_5 < 0x401) * 3 + 1;
  }
  if (uVar1 < uVar2) {
    uVar1 = uVar2;
  }
  FUN_1801f69c0(local_28,*param_1,param_1[1],uVar1,param_4,param_5);
  if (local_28[0] == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(local_20,local_18);
  }
  param_1[1] = local_20;
  *param_1 = uVar1;
  return;
}


