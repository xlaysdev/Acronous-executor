/* FUN_18010e660 @ 18010e660 */

void FUN_18010e660(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018010e679. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x28))
            ((*(longlong *)(param_1[1] + 0x10) - 1U & 0xfffffffffffffff0) + *param_1 + 0x10);
  return;
}


