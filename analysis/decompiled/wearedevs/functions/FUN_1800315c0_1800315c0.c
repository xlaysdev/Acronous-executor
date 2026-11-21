/* FUN_1800315c0 @ 1800315c0 */

void FUN_1800315c0(longlong param_1)

{
  FUN_1801674f0();
  if (*(longlong *)(param_1 + 0x20) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001800315f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x20) + 0x18))(*(undefined8 *)(param_1 + 0x28));
  return;
}


