/* FUN_180162210 @ 180162210 */

void FUN_180162210(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180162254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(*(undefined8 *)(param_1 + 0x30));
  return;
}


