/* FUN_18003a800 @ 18003a800 */

void FUN_18003a800(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x10) + 0x18))(*(undefined8 *)(param_1 + 0x18));
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018003a844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x28) + 0x18))(*(undefined8 *)(param_1 + 0x30));
  return;
}


