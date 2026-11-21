/* Unwind@180028cc0 @ 180028cc0 */

void Unwind_180028cc0(undefined8 param_1,longlong param_2)

{
  if ((**(ulonglong **)(param_2 + 0x38) & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x38) + 8),
                        **(ulonglong **)(param_2 + 0x38),1);
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x38),0x90,8);
  return;
}


