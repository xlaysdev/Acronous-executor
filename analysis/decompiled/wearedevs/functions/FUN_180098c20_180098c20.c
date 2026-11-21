/* FUN_180098c20 @ 180098c20 */

void FUN_180098c20(int *param_1)

{
  if (*param_1 == 2) {
    return;
  }
  switch((char)param_1[4]) {
  case '\0':
    if (*(longlong *)(param_1 + 6) == 1) {
      if (*(longlong *)(param_1 + 10) == 0) {
        return;
      }
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 10),1);
      return;
    }
    if (*(longlong *)(param_1 + 6) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000180098c82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)(param_1 + 8) + 0x20))
                (*(undefined8 *)(param_1 + 0xe),*(undefined8 *)(param_1 + 10),
                 *(undefined8 *)(param_1 + 0xc));
      return;
    }
    return;
  case '\x01':
    FUN_18009a670(param_1 + 6);
    break;
  default:
    return;
  case '\x03':
    FUN_18009a670(param_1 + 6);
    break;
  case '\x06':
                    /* WARNING: Could not recover jumptable at 0x000180098ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)(param_1 + 6) + 0x20))
              (*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_1 + 8),
               *(undefined8 *)(param_1 + 10));
    return;
  }
  FUN_1800663c0(param_1 + 0x1e);
  return;
}


