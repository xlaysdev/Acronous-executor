/* FUN_18012db90 @ 18012db90 */

void FUN_18012db90(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x18) + 0x18))(*(undefined8 *)(param_1 + 0x20));
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018012dbd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x30) + 0x18))(*(undefined8 *)(param_1 + 0x38));
  return;
}


