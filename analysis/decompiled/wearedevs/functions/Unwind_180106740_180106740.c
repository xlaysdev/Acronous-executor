/* Unwind@180106740 @ 180106740 */

void Unwind_180106740(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x610) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x618),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x610) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x5d8),0x18,8);
  return;
}


