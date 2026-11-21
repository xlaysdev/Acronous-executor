/* Unwind@180029050 @ 180029050 */

void Unwind_180029050(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x88) == 0) {
    FUN_18000b2a0(*(undefined8 *)(param_2 + 0x90));
    if (**(longlong **)(param_2 + 0x98) != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x98) + 8),
                          **(longlong **)(param_2 + 0x98),1);
    }
  }
  return;
}


