/* FUN_180200c30 @ 180200c30 */

void FUN_180200c30(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_30 [2];
  ulonglong local_28;
  undefined8 local_20;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_180200d80(local_30,*param_1,param_1[1],uVar2,8,0x38);
  if (local_30[0] == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(local_28,local_20);
  }
  param_1[1] = local_28;
  *param_1 = uVar2;
  return;
}


