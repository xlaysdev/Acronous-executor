/* Unwind@18009dd00 @ 18009dd00 */

void Unwind_18009dd00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0xf0) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0xe8),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0xf0) + 0x10));
  }
  return;
}


