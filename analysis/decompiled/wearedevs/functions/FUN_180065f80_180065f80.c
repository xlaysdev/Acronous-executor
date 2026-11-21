/* FUN_180065f80 @ 180065f80 */

void FUN_180065f80(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 4) {
    if ((int)lVar1 == 3) {
      FUN_1801b2a70(param_1 + 1);
      return;
    }
    if ((int)lVar1 == 1) {
      if (param_1[2] != 0) {
        thunk_FUN_1801d3330(param_1[1],param_1[2],1);
        return;
      }
    }
    else if (lVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000180065fb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1[1] + 0x20))
                (param_1[4],param_1[2],param_1[3],*(code **)(param_1[1] + 0x20));
      return;
    }
  }
  return;
}


