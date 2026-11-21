/* FUN_18003aaf0 @ 18003aaf0 */

void FUN_18003aaf0(longlong param_1)

{
  if (*(char *)(param_1 + 0x31) != '\x02') {
    FUN_18003c220(param_1 + 0x18);
    FUN_18003a2c0(param_1);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x40) + 0x18))(*(undefined8 *)(param_1 + 0x48));
  }
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018003ab50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x58) + 0x18))(*(undefined8 *)(param_1 + 0x60));
  return;
}


