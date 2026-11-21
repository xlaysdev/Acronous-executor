/* Unwind@1800ba7a0 @ 1800ba7a0 */

void Unwind_1800ba7a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(lVar1 + 0x140) == 0) {
    lVar2 = *(longlong *)(lVar1 + 0x160);
  }
  else {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x148),*(longlong *)(lVar1 + 0x140),1);
    lVar2 = *(longlong *)(lVar1 + 0x160);
  }
  if (lVar2 == 0) {
    lVar2 = *(longlong *)(lVar1 + 0x180);
  }
  else {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x168),lVar2,1);
    lVar2 = *(longlong *)(lVar1 + 0x180);
  }
  if (lVar2 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x188),lVar2,1);
  }
  FUN_1800baa20(lVar1 + 0x1b8);
  return;
}


