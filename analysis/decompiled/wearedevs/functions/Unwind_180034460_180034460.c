/* Unwind@180034460 @ 180034460 */

void Unwind_180034460(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if (*(longlong *)(lVar1 + 0x268) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x270),*(longlong *)(lVar1 + 0x268),1);
  }
  FUN_18000b2a0(lVar1 + 0x248);
  return;
}


