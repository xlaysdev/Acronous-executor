/* FUN_1801254c0 @ 1801254c0 */

void FUN_1801254c0(longlong param_1)

{
  if (*(int *)(param_1 + 0x10) != 3) {
    FUN_1800430f0(param_1 + 0x10);
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x78) + 0x18))(*(undefined8 *)(param_1 + 0x80));
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180125520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x90) + 0x18))(*(undefined8 *)(param_1 + 0x98));
  return;
}


