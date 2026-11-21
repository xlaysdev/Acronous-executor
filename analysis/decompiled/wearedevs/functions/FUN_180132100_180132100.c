/* FUN_180132100 @ 180132100 */

void FUN_180132100(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if (lVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180132121. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(*(undefined8 *)(param_1 + 200));
  return;
}


