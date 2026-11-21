/* Unwind@18010c370 @ 18010c370 */

void Unwind_18010c370(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x150) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x158),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x150) + 0x10));
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x148),0x18,8);
  *(undefined1 *)(param_2 + 0x167) = 1;
  return;
}


