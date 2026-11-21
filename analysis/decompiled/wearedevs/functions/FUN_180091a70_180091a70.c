/* FUN_180091a70 @ 180091a70 */

void FUN_180091a70(longlong param_1)

{
  switch(*(undefined1 *)(param_1 + 0x10)) {
  case 0:
    if (*(longlong *)(param_1 + 0x18) == 1) {
      if (*(longlong *)(param_1 + 0x28) == 0) {
        return;
      }
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x20),*(longlong *)(param_1 + 0x28),1);
      return;
    }
    if (*(longlong *)(param_1 + 0x18) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000180091acf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 0x20) + 0x20))
                (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x28),
                 *(undefined8 *)(param_1 + 0x30));
      return;
    }
    return;
  case 1:
    FUN_1800430f0(param_1 + 0x18);
    break;
  default:
    return;
  case 3:
    FUN_1800430f0(param_1 + 0x18);
    break;
  case 6:
                    /* WARNING: Could not recover jumptable at 0x000180091b19. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 0x18) + 0x20))
              (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  FUN_1800663c0(param_1 + 0x78);
  return;
}


