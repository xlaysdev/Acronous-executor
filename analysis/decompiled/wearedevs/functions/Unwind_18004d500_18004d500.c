/* Unwind@18004d500 @ 18004d500 */

void Unwind_18004d500(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x1430) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x1428),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x1430) + 0x10));
  }
  *(undefined1 *)(param_2 + 0x144f) = 0;
  *(undefined1 *)(param_2 + 0x144e) = 0;
  *(undefined1 *)(param_2 + 0x144d) = 1;
  return;
}


