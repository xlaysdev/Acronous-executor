/* Unwind@1801e2910 @ 1801e2910 */

void Unwind_1801e2910(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x48),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x10));
  }
  *(undefined8 *)(*(longlong *)(param_2 + 0x40) + 8) = 0;
  return;
}


