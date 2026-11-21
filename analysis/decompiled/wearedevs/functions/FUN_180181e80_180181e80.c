/* FUN_180181e80 @ 180181e80 */

void FUN_180181e80(longlong *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar1;
  
  if (*param_1 == 0) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1[1] + 0x28);
  uVar1 = *(longlong *)(param_1[1] + 0x10) - 1U & 0xfffffffffffffff0;
                    /* WARNING: Could not recover jumptable at 0x000180181ea3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(*param_1 + uVar1 + 0x10,param_2,uVar1,UNRECOVERED_JUMPTABLE);
  return;
}


