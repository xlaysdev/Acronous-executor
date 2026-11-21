/* FUN_18003a4b0 @ 18003a4b0 */

void FUN_18003a4b0(longlong param_1)

{
  FUN_18003c2f0(*(undefined8 *)(param_1 + 0x10));
  if (*(longlong *)(param_1 + 0x20) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x20) + 0x18))(*(undefined8 *)(param_1 + 0x28));
  }
  if (*(longlong *)(param_1 + 0x38) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018003a4fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x38) + 0x18))(*(undefined8 *)(param_1 + 0x40));
  return;
}


