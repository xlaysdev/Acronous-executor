/* FUN_1801621f0 @ 1801621f0 */

void FUN_1801621f0(longlong *param_1)

{
  longlong lVar1;
  
  *(undefined1 *)(param_1 + 2) = 0;
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018016220a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1[1]);
  return;
}


