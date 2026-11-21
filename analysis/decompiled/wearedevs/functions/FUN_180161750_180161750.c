/* FUN_180161750 @ 180161750 */

void FUN_180161750(int *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 2);
  if (*param_1 == 1) {
    lVar1 = lVar1 + (*(longlong *)(*(longlong *)(param_1 + 4) + 0x10) - 1U & 0xfffffffffffffff0) +
            0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x000180161776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 4) + 0x68))(lVar1);
  return;
}


