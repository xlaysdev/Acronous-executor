/* Unwind@18006ca50 @ 18006ca50 */

void Unwind_18006ca50(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x640) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x648),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x640) + 0x10));
  }
  *(undefined1 *)(param_2 + 0x65f) = 0;
  *(undefined1 *)(param_2 + 0x65e) = 0;
  *(undefined1 *)(param_2 + 0x65d) = 0;
  return;
}


