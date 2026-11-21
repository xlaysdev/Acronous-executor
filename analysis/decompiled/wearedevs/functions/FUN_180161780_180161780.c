/* FUN_180161780 @ 180161780 */

void FUN_180161780(int *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 2);
  if (*param_1 == 1) {
    lVar1 = lVar1 + (*(longlong *)(*(longlong *)(param_1 + 4) + 0x10) - 1U & 0xfffffffffffffff0) +
            0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x0001801617a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 4) + 0x60))(lVar1);
  return;
}


