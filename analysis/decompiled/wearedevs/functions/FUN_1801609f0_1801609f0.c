/* FUN_1801609f0 @ 1801609f0 */

void FUN_1801609f0(int *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 2);
  if (*param_1 == 1) {
    lVar1 = lVar1 + (*(longlong *)(*(longlong *)(param_1 + 4) + 0x10) - 1U & 0xfffffffffffffff0) +
            0x10;
  }
                    /* WARNING: Could not recover jumptable at 0x000180160a1d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 4) + 0x48))(lVar1,param_1 + 6,param_2);
  return;
}


