/* FUN_1800442c0 @ 1800442c0 */

void FUN_1800442c0(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_18000adf0(param_1 + 6);
  uVar1 = *param_1;
  uVar2 = 2;
  if ((longlong)uVar1 < 0) {
    uVar2 = uVar1 ^ 0x8000000000000000;
  }
  if (uVar2 != 0) {
    if (uVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000180044325. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[1] + 0x20))(param_1[4],param_1[2],param_1[3]);
      return;
    }
    if (uVar1 != 0) {
      thunk_FUN_1801d3330(param_1[1],uVar1,1);
    }
    if (param_1[3] != 0) {
      thunk_FUN_1801d3330(param_1[4],param_1[3],1);
      return;
    }
  }
  return;
}


