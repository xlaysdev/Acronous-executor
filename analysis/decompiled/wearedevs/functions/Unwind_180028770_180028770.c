/* Unwind@180028770 @ 180028770 */

void Unwind_180028770(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x198) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x1a0),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x198) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x168),0x18,8);
  return;
}


