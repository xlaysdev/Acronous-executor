/* FUN_180066870 @ 180066870 */

void FUN_180066870(undefined1 *param_1)

{
  switch(*param_1) {
  case 0:
    if (*(longlong *)(param_1 + 8) == 1) {
      if (*(longlong *)(param_1 + 0x18) == 0) {
        return;
      }
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x10),*(longlong *)(param_1 + 0x18),1);
      return;
    }
    if (*(longlong *)(param_1 + 8) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001800668ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x10) + 0x20))
                (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18),
                 *(undefined8 *)(param_1 + 0x20));
      return;
    }
    return;
  case 1:
    FUN_1800430f0(param_1 + 8);
    break;
  default:
    return;
  case 3:
    FUN_1800430f0(param_1 + 8);
    break;
  case 6:
                    /* WARNING: Could not recover jumptable at 0x000180066918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 8) + 0x20))
              (*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x10),
               *(undefined8 *)(param_1 + 0x18));
    return;
  }
  FUN_1800663c0(param_1 + 0x68);
  return;
}


