/* FUN_1800c8eb0 @ 1800c8eb0 */

void FUN_1800c8eb0(ulonglong *param_1)

{
  longlong lVar1;
  
  lVar1 = 2;
  if (2 < *param_1) {
    lVar1 = *param_1 - 3;
  }
  if (lVar1 == 0) {
    return;
  }
  if (lVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001800c8ee6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1[1] + 0x20))(param_1[4],param_1[2],param_1[3],*(code **)(param_1[1] + 0x20))
    ;
    return;
  }
  FUN_18000b470();
  return;
}


