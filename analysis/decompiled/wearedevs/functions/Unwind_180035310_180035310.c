/* Unwind@180035310 @ 180035310 */

void Unwind_180035310(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  *(undefined2 *)(lVar1 + 0x59) = 0;
  if (*(longlong *)(lVar1 + 0x2a8) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x2b0),*(longlong *)(lVar1 + 0x2a8),1);
  }
  FUN_18000b2a0(lVar1 + 0x288);
  return;
}


