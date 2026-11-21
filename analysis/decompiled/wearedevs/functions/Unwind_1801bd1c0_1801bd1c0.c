/* Unwind@1801bd1c0 @ 1801bd1c0 */

void Unwind_1801bd1c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 0x830);
  if (*plVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x838) + 0x38),*plVar1 << 5,8);
  }
  plVar1[2] = *(longlong *)(param_2 + 0x7e8);
  lVar2 = *(longlong *)(param_2 + 0x7e0);
  *plVar1 = *(longlong *)(param_2 + 0x7d8);
  plVar1[1] = lVar2;
  return;
}


