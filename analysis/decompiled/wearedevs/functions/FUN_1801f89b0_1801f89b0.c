/* FUN_1801f89b0 @ 1801f89b0 */

void FUN_1801f89b0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int local_28 [2];
  ulonglong local_20;
  undefined8 local_18;
  
  uVar1 = *param_1 * 2;
  uVar2 = 4;
  if (4 < uVar1) {
    uVar2 = uVar1;
  }
  FUN_1801f69c0(local_28,*param_1,param_1[1],uVar2,8,0x50);
  if (local_28[0] == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(local_20,local_18);
  }
  param_1[1] = local_20;
  *param_1 = uVar2;
  return;
}


