/* FUN_18010e630 @ 18010e630 */

void FUN_18010e630(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00018010e64e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[1] + 0x20))
            (*param_1 + (*(longlong *)(param_1[1] + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
  return;
}


