/* FUN_180102970 @ 180102970 */

void FUN_180102970(int *param_1)

{
  if (*param_1 == 1) {
    FUN_1801027f0(param_1 + 2);
    return;
  }
  if (*param_1 == 0) {
    if (*(longlong *)(param_1 + 4) != 0 && *(longlong *)(param_1 + 2) != 0) {
      thunk_FUN_1801d3330(*(longlong *)(param_1 + 2),*(longlong *)(param_1 + 4),1);
      return;
    }
  }
  return;
}


