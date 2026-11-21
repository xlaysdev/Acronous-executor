/* Unwind@1801b8c40 @ 1801b8c40 */

void Unwind_1801b8c40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x30);
  if (*plVar1 != 0) {
    thunk_FUN_1801d3330(plVar1[1],*plVar1 * 0x158,8);
  }
  thunk_FUN_1801d3330(plVar1,0x28,8);
  return;
}


