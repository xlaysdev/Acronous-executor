/* FUN_1800663c0 @ 1800663c0 */

void FUN_1800663c0(byte *param_1)

{
  if (((*param_1 != 0xc) && (10 < *param_1)) && (*(longlong *)(param_1 + 0x10) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 0x10),1);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x18) + 0x20))
              (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28));
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x38) + 0x20))
              (*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x40),
               *(undefined8 *)(param_1 + 0x48));
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    (**(code **)(*(longlong *)(param_1 + 0x58) + 0x20))
              (*(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x60),
               *(undefined8 *)(param_1 + 0x68));
  }
  if (*(longlong *)(param_1 + 0x78) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180066488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x78) + 0x20))
            (*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x80),
             *(undefined8 *)(param_1 + 0x88));
  return;
}


