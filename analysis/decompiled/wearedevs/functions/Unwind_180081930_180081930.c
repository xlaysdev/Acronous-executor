/* Unwind@180081930 @ 180081930 */

void Unwind_180081930(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x140) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x148),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x140) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x138),0x18,8);
  return;
}


